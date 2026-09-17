# PS2Recomp - Tekken 5 (USA)

Static recompilation port of **Tekken 5 (SLUS_210.59)** for PC (Linux x86_64 / ARM64) based on [PS2Recomp](https://github.com/ran-j/PS2Recomp) with high-level IOP emulation and software/hardware GS rasterizer backends.

---

## Upstream Project: PS2Recomp

This project builds upon [PS2Recomp](https://github.com/ran-j/PS2Recomp), an experimental PlayStation 2 static recompiler created by ran-j.

PS2Recomp statically recompiles PS2 MIPS R5900 ELF binaries into native C++ code and provides an execution runtime hosting memory, syscalls, and hardware stubs.

### Core Modules

- **ps2xAnalyzer**: Scans the input ELF binary, detects functions and basic blocks, and generates a TOML configuration file (stub definitions, function skips, and instruction patches).
- **ps2xRecomp**: Reads the TOML configuration and ELF binary, decodes MIPS R5900 instructions (including MMI and VU0 macros), and emits single-file or multi-file C++ source code.
- **ps2xRuntime**: Runtime framework hosting the 32MB EE RDRAM, 16KB Scratchpad RAM (SPR), function table dispatch, syscall stubs, COP0/COP1 state, and hardware subsystems (DMAC, GIF, GS, SIF).
- **ps2xIOP**: Portable, instance-owned IOP High-Level Emulation (HLE) subsystem providing core IOP services (CDVD, PAD, SIO, SIF RPC, SPU2/Audio) and game-specific hooks.

### Recompiler Features

- Translates MIPS R5900 instructions directly to native C++ functions.
- PS2-specific Multimedia Instructions (MMI) and VU0 macro support.
- Configurable stubs, skips, and instruction patch points via TOML configuration.
- Syscall dispatch mechanism integrated with runtime kernel stubs.
- Multi-threaded rendering and audio backends (Raylib, OpenGL, miniaudio).

### How It Works

1. **Analysis**: `ps2xAnalyzer` inspects the PS2 ELF executable to map functions, entry points, jump tables, and section headers.
2. **Recompilation**: `ps2xRecomp` translates decoded MIPS assembly into equivalent C++ expressions and runtime helper calls.
3. **Runtime Execution**: The compiled C++ translation links against `ps2xRuntime` and `ps2xIOP`, executing natively at full host speed while emulating PS2 hardware subsystems.

---

## Tekken 5 (USA) Port Architecture

### Game Details
- **Title**: Tekken 5
- **Region / Serial**: NTSC-U (`SLUS_210.59`)
- **Base Architecture**: MIPS R5900 EE Core + Overlays + IOP Sound Driver

### Binary Structure & Dynamic Overlays
Tekken 5 employs dynamic code overlays stored inside `TK5DATA3.BIN`:
- **Main Executable**: `SLUS_210.59` recompiled into `game/generated/` C++ translation units.
- **Dynamic Overlays**: Module 5 (`module_5.bin`) and Module 6 (`module_6.bin`) extracted from `TK5DATA3.BIN` and mapped into the recompiled execution space to support sub-modes and minigames.

### Runtime Fixes & Implementations

1. **Scratchpad RAM (SPR) DMA Routing**:
   - On PS2 hardware, DMAC addresses with bit 31 set (`0x80000000 | offset`) designate Scratchpad RAM transfers.
   - Fixed `toDmaPhys()` in `Support.h` to translate `0x80000000 | offset` to canonical scratchpad address `0x70000000 | offset` instead of lower RDRAM addresses.
   - Restored GIF packet flow and DMA tag decoding across the rendering pipeline.

2. **Audio SIF RPC NuSound Stubs (`0x44012346`)**:
   - Implemented SIF RPC binding and call handling for service ID `0x44012346` (`nuSound`), preventing boot lockups where the game polled for IOP sound driver acknowledgment.

3. **GS Rasterizer Presentation & Framebuffer Handling**:
   - Resolved CRTC display pitch and framebuffer format mismatches in `gs_frontend.cpp` and `gs_cpu_backend.cpp`.
   - Corrected dual-CRT blending behavior to prevent unrendered/transparent areas from sampling uninitialized VRAM buffers.

4. **StarBlade 3D Minigame Status**:
   - The opening StarBlade minigame boots and successfully submits 3D geometry/models to the GS pipeline, but currently renders with noticeable graphical glitches and visual artifacts (such as texture/framebuffer format mismatches and rasterizer pipeline bugs).

---

## Directory Structure

```
.
├── CMakeLists.txt                # Root CMake configuration
├── PS2Recomp-feature-iop-emulator/ # Core PS2Recomp runtime and IOP emulation
│   ├── ps2xAnalyzer/             # ELF analyzer tool
│   ├── ps2xIOP/                  # IOP HLE services and plugins
│   ├── ps2xRecomp/               # Static recompiler engine
│   └── ps2xRuntime/              # Runtime library, EE kernel, DMAC, GS, GIF
├── game/
│   ├── disc/                     # Game binary (SLUS_210.59)
│   ├── generated/                # Recompiled C++ source files
│   └── patches/                  # Game-specific overrides and hook patches
├── run_game.py                   # Game runner and automation script
└── README.md                     # Project documentation
```

---

## Requirements

- **Operating System**: Windows 10/11 (x64 / ARM64) or Linux (x86_64, ARM64)
- **Compiler**:
  - **Windows**: Visual Studio 2022 (MSVC v143+) or Clang with C++20 support
  - **Linux**: GCC 11+ or Clang 14+ with C++20 support
- **Build System**: CMake 3.21+ and Ninja / MSBuild
- **Libraries**: Raylib, GLAD, OpenGL, ALSA / PulseAudio (Linux) / WASAPI / DirectSound (Windows)
- **Game Media**: Original Tekken 5 (USA) PS2 ISO image (`SLUS_210.59`)

---

## Building

### Linux

```bash
cmake -B build -G Ninja -DCMAKE_BUILD_TYPE=RelWithDebInfo
cmake --build build --target ps2EntryRunner
```

### Windows

Using Visual Studio 2022 Developer Command Prompt / PowerShell:

```cmd
cmake -B build -G "Visual Studio 17 2022" -A x64 -DCMAKE_BUILD_TYPE=RelWithDebInfo
cmake --build build --config RelWithDebInfo --target ps2EntryRunner
```

Or using Ninja on Windows:

```cmd
cmake -B build -G Ninja -DCMAKE_BUILD_TYPE=RelWithDebInfo
cmake --build build --target ps2EntryRunner
```

---

## Running

### Linux

```bash
./build/ps2xRuntime/ps2EntryRunner "game/disc/SLUS_210.59" "/path/to/Tekken 5 (USA).iso"
```

### Windows

```cmd
.\build\ps2xRuntime\RelWithDebInfo\ps2EntryRunner.exe "game\disc\SLUS_210.59" "C:\path\to\Tekken 5 (USA).iso"
```

Or using the Python launcher script:

```bash
python3 run_game.py --seconds 60
```

## Legal Notice & Disclaimer

- **No Copyrighted Assets Distributed**: This repository does not host, contain, or distribute any proprietary game binaries, ELFs, disc images (ISOs), original textures, 3D meshes, cinematics, or audio recordings.
- **User-Provided Game Media**: To build and run this software, users must supply their own legally acquired copy of the original game disc image (`SLUS_210.59`).
- **Non-Affiliation**: This project is an unofficial static recompilation research and digital preservation initiative. It is not affiliated with, sponsored by, or endorsed by Sony Interactive Entertainment Inc., Bandai Namco Entertainment Inc., or any of their subsidiaries.
- **Trademarks**: All trademarks, product names, and company names or logos are the property of their respective owners.

---

## Credits & References

- [PS2Recomp](https://github.com/ran-j/PS2Recomp) by ran-j
- Namco for Tekken 5
