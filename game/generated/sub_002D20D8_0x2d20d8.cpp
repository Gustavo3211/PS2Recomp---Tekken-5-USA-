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

// Function: sub_002D20D8
// Address: 0x2d20d8 - 0x2d2228
void sub_002D20D8_0x2d20d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D20D8_0x2d20d8");
#endif

    switch (ctx->pc) {
        case 0x2d2114u: goto label_2d2114;
        case 0x2d2120u: goto label_2d2120;
        case 0x2d212cu: goto label_2d212c;
        case 0x2d2140u: goto label_2d2140;
        case 0x2d214cu: goto label_2d214c;
        case 0x2d2150u: goto label_2d2150;
        case 0x2d2168u: goto label_2d2168;
        case 0x2d2188u: goto label_2d2188;
        case 0x2d21a0u: goto label_2d21a0;
        case 0x2d21b4u: goto label_2d21b4;
        case 0x2d21c0u: goto label_2d21c0;
        case 0x2d21d8u: goto label_2d21d8;
        case 0x2d21e0u: goto label_2d21e0;
        case 0x2d21f8u: goto label_2d21f8;
        default: break;
    }

    ctx->pc = 0x2d20d8u;

    // 0x2d20d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d20d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d20dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d20dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d20e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d20e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d20e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d20e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d20e8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d20e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d20ec: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2d20ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d20f0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d20f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2d20f4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2d20f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2d20f8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2d20f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x2d20fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d20fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d2100: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d2100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d2104: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d2104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d2108: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2d2108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2d210c: 0xc0b5080  jal         func_2D4200
    ctx->pc = 0x2D210Cu;
    SET_GPR_U32(ctx, 31, 0x2D2114u);
    ctx->pc = 0x2D2110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D210Cu;
    // 0x2d2110: 0x3c1e003b  lui         $fp, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4200u, 0x2D210Cu, 0x2D2114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2114u;
label_2d2114:
    // 0x2d2114: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2118: 0xc0b5080  jal         func_2D4200
    ctx->pc = 0x2D2118u;
    SET_GPR_U32(ctx, 31, 0x2D2120u);
    ctx->pc = 0x2D211Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2118u;
    // 0x2d211c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4200u, 0x2D2118u, 0x2D2120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2120u;
label_2d2120:
    // 0x2d2120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d2120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2124: 0xc0b5084  jal         func_2D4210
    ctx->pc = 0x2D2124u;
    SET_GPR_U32(ctx, 31, 0x2D212Cu);
    ctx->pc = 0x2D2128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2124u;
    // 0x2d2128: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4210u, 0x2D2124u, 0x2D212Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D212Cu;
label_2d212c:
    // 0x2d212c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2d212cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2d2130: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2d2130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2d2134: 0x3484d000  ori         $a0, $a0, 0xD000
    ctx->pc = 0x2d2134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53248);
    // 0x2d2138: 0xc0936f6  jal         func_24DBD8
    ctx->pc = 0x2D2138u;
    SET_GPR_U32(ctx, 31, 0x2D2140u);
    ctx->pc = 0x2D213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2138u;
    // 0x2d213c: 0x222b021  addu        $s6, $s1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD8u, 0x2D2138u, 0x2D2140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2140u;
label_2d2140:
    // 0x2d2140: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d2140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d2144: 0xc09362a  jal         func_24D8A8
    ctx->pc = 0x2D2144u;
    SET_GPR_U32(ctx, 31, 0x2D214Cu);
    ctx->pc = 0x2D2148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2144u;
    // 0x2d2148: 0x24050780  addiu       $a1, $zero, 0x780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D8A8u, 0x2D2144u, 0x2D214Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D214Cu;
label_2d214c:
    // 0x2d214c: 0x8fd3fb00  lw          $s3, -0x500($fp)
    ctx->pc = 0x2d214cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294966016)));
label_2d2150:
    // 0x2d2150: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2d2150u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2154: 0x26740300  addiu       $s4, $s3, 0x300
    ctx->pc = 0x2d2154u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 768));
    // 0x2d2158: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2d2158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d215c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x2d215cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2160: 0x2b22021  addu        $a0, $s5, $s2
    ctx->pc = 0x2d2160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x2d2164: 0x0  nop
    ctx->pc = 0x2d2164u;
    // NOP
label_2d2168:
    // 0x2d2168: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2d2168u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2d216c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2d216cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2170: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x2d2170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2d2174: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2d2174u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2178: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2d2178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2d217c: 0x24050168  addiu       $a1, $zero, 0x168
    ctx->pc = 0x2d217cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x2d2180: 0xc0b47aa  jal         func_2D1EA8
    ctx->pc = 0x2D2180u;
    SET_GPR_U32(ctx, 31, 0x2D2188u);
    ctx->pc = 0x2D2184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2180u;
    // 0x2d2184: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1EA8u, 0x2D2180u, 0x2D2188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2188u;
label_2d2188:
    // 0x2d2188: 0x2a42000c  slti        $v0, $s2, 0xC
    ctx->pc = 0x2d2188u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2d218c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D218Cu;
    {
        const bool branch_taken_0x2d218c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d218c) {
            ctx->pc = 0x2D2190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D218Cu;
            // 0x2d2190: 0x2b22021  addu        $a0, $s5, $s2 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2168;
        }
    }
    ctx->pc = 0x2D2194u;
    // 0x2d2194: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2d2194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2d2198: 0xc0936f6  jal         func_24DBD8
    ctx->pc = 0x2D2198u;
    SET_GPR_U32(ctx, 31, 0x2D21A0u);
    ctx->pc = 0x2D219Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2198u;
    // 0x2d219c: 0x3484d000  ori         $a0, $a0, 0xD000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53248);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD8u, 0x2D2198u, 0x2D21A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D21A0u;
label_2d21a0:
    // 0x2d21a0: 0x152900  sll         $a1, $s5, 4
    ctx->pc = 0x2d21a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2d21a4: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x2d21a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x2d21a8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2d21a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2d21ac: 0xc093672  jal         func_24D9C8
    ctx->pc = 0x2D21ACu;
    SET_GPR_U32(ctx, 31, 0x2D21B4u);
    ctx->pc = 0x2D21B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D21ACu;
    // 0x2d21b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D9C8u, 0x2D21ACu, 0x2D21B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D21B4u;
label_2d21b4:
    // 0x2d21b4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2d21b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2d21b8: 0xc0936f6  jal         func_24DBD8
    ctx->pc = 0x2D21B8u;
    SET_GPR_U32(ctx, 31, 0x2D21C0u);
    ctx->pc = 0x2D21BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D21B8u;
    // 0x2d21bc: 0x3484d000  ori         $a0, $a0, 0xD000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53248);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD8u, 0x2D21B8u, 0x2D21C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D21C0u;
label_2d21c0:
    // 0x2d21c0: 0x152980  sll         $a1, $s5, 6
    ctx->pc = 0x2d21c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x2d21c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d21c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d21c8: 0x2e52821  addu        $a1, $s7, $a1
    ctx->pc = 0x2d21c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    // 0x2d21cc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x2d21ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2d21d0: 0xc093672  jal         func_24D9C8
    ctx->pc = 0x2D21D0u;
    SET_GPR_U32(ctx, 31, 0x2D21D8u);
    ctx->pc = 0x2D21D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D21D0u;
    // 0x2d21d4: 0x26b5000c  addiu       $s5, $s5, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D9C8u, 0x2D21D0u, 0x2D21D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D21D8u;
label_2d21d8:
    // 0x2d21d8: 0xc09368c  jal         func_24DA30
    ctx->pc = 0x2D21D8u;
    SET_GPR_U32(ctx, 31, 0x2D21E0u);
    ctx->pc = 0x24DA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DA30u, 0x2D21D8u, 0x2D21E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D21E0u;
label_2d21e0:
    // 0x2d21e0: 0x2aa30168  slti        $v1, $s5, 0x168
    ctx->pc = 0x2d21e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)360) ? 1 : 0);
    // 0x2d21e4: 0x5460ffda  bnel        $v1, $zero, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2D21E4u;
    {
        const bool branch_taken_0x2d21e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d21e4) {
            ctx->pc = 0x2D21E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D21E4u;
            // 0x2d21e8: 0x8fd3fb00  lw          $s3, -0x500($fp) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294966016)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2150;
        }
    }
    ctx->pc = 0x2D21ECu;
    // 0x2d21ec: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2d21ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2d21f0: 0xc0936f6  jal         func_24DBD8
    ctx->pc = 0x2D21F0u;
    SET_GPR_U32(ctx, 31, 0x2D21F8u);
    ctx->pc = 0x2D21F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D21F0u;
    // 0x2d21f4: 0x3484d000  ori         $a0, $a0, 0xD000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53248);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DBD8u, 0x2D21F0u, 0x2D21F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D21F8u;
label_2d21f8:
    // 0x2d21f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d21f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d21fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d21fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d2200: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d2200u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2204: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d2204u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d2208: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d2208u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d220c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d220cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d2210: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d2210u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2214: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2d2214u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d2218: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2d2218u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d221c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2d221cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2220: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2220u;
        // 0x2d2224: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2228u;
}
