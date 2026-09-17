#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A20B8
// Address: 0x2a20b8 - 0x2a2238
void sub_002A20B8_0x2a20b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A20B8_0x2a20b8");
#endif

    switch (ctx->pc) {
        case 0x2a20e8u: goto label_2a20e8;
        case 0x2a2110u: goto label_2a2110;
        case 0x2a2138u: goto label_2a2138;
        case 0x2a2160u: goto label_2a2160;
        case 0x2a2188u: goto label_2a2188;
        case 0x2a2220u: goto label_2a2220;
        default: break;
    }

    ctx->pc = 0x2a20b8u;

    // 0x2a20b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a20b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a20bc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2a20bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2a20c0: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x2a20c0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
    // 0x2a20c4: 0x26a5cfc0  addiu       $a1, $s5, -0x3040
    ctx->pc = 0x2a20c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954944));
    // 0x2a20c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a20c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a20cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a20ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a20d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a20d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a20d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a20d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a20d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2a20d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2a20dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a20dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a20e0: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A20E0u;
    SET_GPR_U32(ctx, 31, 0x2A20E8u);
    ctx->pc = 0x2A20E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A20E0u;
    // 0x2a20e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A20E0u, 0x2A20E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A20E8u;
label_2a20e8:
    // 0x2a20e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a20e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a20ec: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A20ECu;
    {
        const bool branch_taken_0x2a20ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A20F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A20ECu;
        // 0x2a20f0: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a20ec) {
            ctx->pc = 0x2A2100u;
            goto label_2a2100;
        }
    }
    ctx->pc = 0x2A20F4u;
    // 0x2a20f4: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a20f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a20f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a20f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a20fc: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a20fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a2100:
    // 0x2a2100: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x2a2100u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
    // 0x2a2104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2108: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A2108u;
    SET_GPR_U32(ctx, 31, 0x2A2110u);
    ctx->pc = 0x2A210Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2108u;
    // 0x2a210c: 0x2685cfd8  addiu       $a1, $s4, -0x3028 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A2108u, 0x2A2110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2110u;
label_2a2110:
    // 0x2a2110: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2114: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2114u;
    {
        const bool branch_taken_0x2a2114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2114u;
        // 0x2a2118: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2114) {
            ctx->pc = 0x2A2128u;
            goto label_2a2128;
        }
    }
    ctx->pc = 0x2A211Cu;
    // 0x2a211c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a211cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a2120: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a2120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a2124: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a2124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a2128:
    // 0x2a2128: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x2a2128u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    // 0x2a212c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a212cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2130: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A2130u;
    SET_GPR_U32(ctx, 31, 0x2A2138u);
    ctx->pc = 0x2A2134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2130u;
    // 0x2a2134: 0x2665cff0  addiu       $a1, $s3, -0x3010 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A2130u, 0x2A2138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2138u;
label_2a2138:
    // 0x2a2138: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a213c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A213Cu;
    {
        const bool branch_taken_0x2a213c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A213Cu;
        // 0x2a2140: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a213c) {
            ctx->pc = 0x2A2150u;
            goto label_2a2150;
        }
    }
    ctx->pc = 0x2A2144u;
    // 0x2a2144: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a2144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a2148: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a2148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a214c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a214cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a2150:
    // 0x2a2150: 0x3c120048  lui         $s2, 0x48
    ctx->pc = 0x2a2150u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
    // 0x2a2154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2158: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A2158u;
    SET_GPR_U32(ctx, 31, 0x2A2160u);
    ctx->pc = 0x2A215Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2158u;
    // 0x2a215c: 0x2645d000  addiu       $a1, $s2, -0x3000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294955008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A2158u, 0x2A2160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2160u;
label_2a2160:
    // 0x2a2160: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2164: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2164u;
    {
        const bool branch_taken_0x2a2164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2164u;
        // 0x2a2168: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2164) {
            ctx->pc = 0x2A2178u;
            goto label_2a2178;
        }
    }
    ctx->pc = 0x2A216Cu;
    // 0x2a216c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a216cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a2170: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a2170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a2174: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a2174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a2178:
    // 0x2a2178: 0x3c110048  lui         $s1, 0x48
    ctx->pc = 0x2a2178u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    // 0x2a217c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a217cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2180: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A2180u;
    SET_GPR_U32(ctx, 31, 0x2A2188u);
    ctx->pc = 0x2A2184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2180u;
    // 0x2a2184: 0x2625d010  addiu       $a1, $s1, -0x2FF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A2180u, 0x2A2188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2188u;
label_2a2188:
    // 0x2a2188: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a218c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A218Cu;
    {
        const bool branch_taken_0x2a218c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A218Cu;
        // 0x2a2190: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a218c) {
            ctx->pc = 0x2A21A0u;
            goto label_2a21a0;
        }
    }
    ctx->pc = 0x2A2194u;
    // 0x2a2194: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a2194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a2198: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a2198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a219c: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2a219cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2a21a0:
    // 0x2a21a0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a21a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2a21a4: 0x8c4283c0  lw          $v0, -0x7C40($v0)
    ctx->pc = 0x2a21a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x2a21a8: 0x2c430008  sltiu       $v1, $v0, 0x8
    ctx->pc = 0x2a21a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2a21ac: 0x50600023  beql        $v1, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x2A21ACu;
    {
        const bool branch_taken_0x2a21ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a21ac) {
            ctx->pc = 0x2A21B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A21ACu;
            // 0x2a21b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A223Cu;
            return;
        }
    }
    ctx->pc = 0x2A21B4u;
    // 0x2a21b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a21b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a21b8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2a21b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2a21bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a21bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a21c0: 0x8c63d030  lw          $v1, -0x2FD0($v1)
    ctx->pc = 0x2a21c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955056)));
    // 0x2a21c4: 0x600008  jr          $v1
    ctx->pc = 0x2A21C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A21D0u: goto label_2a21d0;
            case 0x2A21E0u: goto label_2a21e0;
            case 0x2A21F0u: goto label_2a21f0;
            case 0x2A2200u: goto label_2a2200;
            case 0x2A2210u: goto label_2a2210;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A21C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A21CCu;
    // 0x2a21cc: 0x0  nop
    ctx->pc = 0x2a21ccu;
    // NOP
label_2a21d0:
    // 0x2a21d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a21d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a21d4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2A21D4u;
    {
        const bool branch_taken_0x2a21d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A21D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A21D4u;
        // 0x2a21d8: 0x26a5cfc0  addiu       $a1, $s5, -0x3040 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294954944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a21d4) {
            ctx->pc = 0x2A2218u;
            goto label_2a2218;
        }
    }
    ctx->pc = 0x2A21DCu;
    // 0x2a21dc: 0x0  nop
    ctx->pc = 0x2a21dcu;
    // NOP
label_2a21e0:
    // 0x2a21e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a21e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a21e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2A21E4u;
    {
        const bool branch_taken_0x2a21e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A21E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A21E4u;
        // 0x2a21e8: 0x2625d010  addiu       $a1, $s1, -0x2FF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294955024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a21e4) {
            ctx->pc = 0x2A2218u;
            goto label_2a2218;
        }
    }
    ctx->pc = 0x2A21ECu;
    // 0x2a21ec: 0x0  nop
    ctx->pc = 0x2a21ecu;
    // NOP
label_2a21f0:
    // 0x2a21f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a21f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a21f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A21F4u;
    {
        const bool branch_taken_0x2a21f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A21F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A21F4u;
        // 0x2a21f8: 0x2685cfd8  addiu       $a1, $s4, -0x3028 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294954968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a21f4) {
            ctx->pc = 0x2A2218u;
            goto label_2a2218;
        }
    }
    ctx->pc = 0x2A21FCu;
    // 0x2a21fc: 0x0  nop
    ctx->pc = 0x2a21fcu;
    // NOP
label_2a2200:
    // 0x2a2200: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2204: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A2204u;
    {
        const bool branch_taken_0x2a2204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2204u;
        // 0x2a2208: 0x2665cff0  addiu       $a1, $s3, -0x3010 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294954992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2204) {
            ctx->pc = 0x2A2218u;
            goto label_2a2218;
        }
    }
    ctx->pc = 0x2A220Cu;
    // 0x2a220c: 0x0  nop
    ctx->pc = 0x2a220cu;
    // NOP
label_2a2210:
    // 0x2a2210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2214: 0x2645d000  addiu       $a1, $s2, -0x3000
    ctx->pc = 0x2a2214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294955008));
label_2a2218:
    // 0x2a2218: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A2218u;
    SET_GPR_U32(ctx, 31, 0x2A2220u);
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A2218u, 0x2A2220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A2220u;
label_2a2220:
    // 0x2a2220: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a2220u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2224: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A2224u;
    {
        const bool branch_taken_0x2a2224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2224u;
        // 0x2a2228: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2224) {
            ctx->pc = 0x2A223Cu;
            return;
        }
    }
    ctx->pc = 0x2A222Cu;
    // 0x2a222c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a222cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a2230: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a2230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a2234: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a2234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    ctx->pc = 0x2a2238u;
}
