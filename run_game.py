#!/usr/bin/env python3
"""Launch the native Tekken 5 WIP build with its extracted files and ISO."""
from __future__ import annotations

import argparse
from datetime import datetime
from pathlib import Path
import shlex
import subprocess
import sys

ROOT = Path(__file__).resolve().parent


def positive_seconds(value: str) -> float:
    number = float(value)
    if not 0 < number < float("inf"):
        raise argparse.ArgumentTypeError("must be a finite number greater than zero")
    return number


def stop(process: subprocess.Popen) -> None:
    process.terminate()
    try:
        process.wait(timeout=5)
    except subprocess.TimeoutExpired:
        process.kill()
        process.wait()


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--seconds", type=positive_seconds,
                        help="stop after this many seconds (exit 124 on timeout)")
    parser.add_argument("--runner", type=Path, default=ROOT / "build-wip/ps2xRuntime/ps2EntryRunner")
    parser.add_argument("--elf", type=Path, default=ROOT / "game/disc/SLUS_210.59")
    parser.add_argument("--iso", type=Path, default=ROOT / "Tekken 5 (USA).iso")
    parser.add_argument("--log", type=Path, default=ROOT / "logs/tekken5-run.log")
    args = parser.parse_args()
    runner, elf, iso, log_path = (path.resolve() for path in (args.runner, args.elf, args.iso, args.log))
    for name, path in (("runner", runner), ("ELF", elf), ("ISO", iso)):
        if not path.is_file():
            parser.error(f"{name} not found: {path}")
    log_path.parent.mkdir(parents=True, exist_ok=True)
    command = [str(runner), str(elf), str(iso)]
    print("Starting Tekken 5 with PS2Recomp WIP.", flush=True)
    print(f"Log: {log_path}", flush=True)
    with log_path.open("w", encoding="utf-8") as log:
        log.write(f"Started: {datetime.now().astimezone().isoformat()}\n")
        log.write(f"Command: {shlex.join(command)}\nWorking directory: {elf.parent}\n")
        log.flush()
        try:
            process = subprocess.Popen(command, cwd=elf.parent, stdout=log, stderr=subprocess.STDOUT)
        except OSError as error:
            print(f"Could not start runner: {error}", file=sys.stderr)
            return 1
        try:
            returncode = process.wait(timeout=args.seconds)
        except subprocess.TimeoutExpired:
            stop(process)
            log.write(f"\nStopped after {args.seconds:g} seconds (requested timeout).\n")
            print(f"Stopped after {args.seconds:g} seconds. Log: {log_path}")
            return 124
        except KeyboardInterrupt:
            stop(process)
            log.write("\nStopped by user.\n")
            return 130
        log.write(f"\nRunner exit code: {returncode}\n")
    if returncode:
        print(f"Runner exited with code {returncode}. See {log_path}", file=sys.stderr)
    return returncode if returncode >= 0 else 128 - returncode


if __name__ == "__main__":
    raise SystemExit(main())
