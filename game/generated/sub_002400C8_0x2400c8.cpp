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

// Function: sub_002400C8
// Address: 0x2400c8 - 0x240188
void sub_002400C8_0x2400c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002400C8_0x2400c8");
#endif

    switch (ctx->pc) {
        case 0x2400e8u: goto label_2400e8;
        case 0x2400f4u: goto label_2400f4;
        case 0x240100u: goto label_240100;
        case 0x240118u: goto label_240118;
        case 0x240130u: goto label_240130;
        case 0x240150u: goto label_240150;
        case 0x240164u: goto label_240164;
        case 0x240170u: goto label_240170;
        default: break;
    }

    ctx->pc = 0x2400c8u;

    // 0x2400c8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2400c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2400cc: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x2400ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x2400d0: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x2400d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x2400d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2400d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2400d8: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x2400d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x2400dc: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x2400dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x2400e0: 0xc09001e  jal         func_240078
    ctx->pc = 0x2400E0u;
    SET_GPR_U32(ctx, 31, 0x2400E8u);
    ctx->pc = 0x2400E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2400E0u;
    // 0x2400e4: 0xafa00104  sw          $zero, 0x104($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240078u, 0x2400E0u, 0x2400E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2400E8u;
label_2400e8:
    // 0x2400e8: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x2400e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    // 0x2400ec: 0xc09001e  jal         func_240078
    ctx->pc = 0x2400ECu;
    SET_GPR_U32(ctx, 31, 0x2400F4u);
    ctx->pc = 0x2400F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2400ECu;
    // 0x2400f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240078u, 0x2400ECu, 0x2400F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2400F4u;
label_2400f4:
    // 0x2400f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2400f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2400f8: 0xc090028  jal         func_2400A0
    ctx->pc = 0x2400F8u;
    SET_GPR_U32(ctx, 31, 0x240100u);
    ctx->pc = 0x2400FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2400F8u;
    // 0x2400fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2400A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2400A0u, 0x2400F8u, 0x240100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240100u;
label_240100:
    // 0x240100: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x240100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240104: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x240104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240108: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x240108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x24010c: 0x27a80104  addiu       $t0, $sp, 0x104
    ctx->pc = 0x24010cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x240110: 0xc08ff42  jal         func_23FD08
    ctx->pc = 0x240110u;
    SET_GPR_U32(ctx, 31, 0x240118u);
    ctx->pc = 0x240114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240110u;
    // 0x240114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FD08u, 0x240110u, 0x240118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240118u;
label_240118:
    // 0x240118: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x240118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24011c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24011cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240120: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x240120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x240124: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x240124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240128: 0xc0d2f8e  jal         func_34BE38
    ctx->pc = 0x240128u;
    SET_GPR_U32(ctx, 31, 0x240130u);
    ctx->pc = 0x24012Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240128u;
    // 0x24012c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34BE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34BE38u, 0x240128u, 0x240130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240130u;
label_240130:
    // 0x240130: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x240130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240134: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x240134u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240138: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x240138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24013c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x24013cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240140: 0x460000c  bltz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x240140u;
    {
        const bool branch_taken_0x240140 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x240144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240140u;
        // 0x240144: 0xae230090  sw          $v1, 0x90($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240140) {
            ctx->pc = 0x240174u;
            goto label_240174;
        }
    }
    ctx->pc = 0x240148u;
    // 0x240148: 0xc0d3031  jal         func_34C0C4
    ctx->pc = 0x240148u;
    SET_GPR_U32(ctx, 31, 0x240150u);
    ctx->pc = 0x24014Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240148u;
    // 0x24014c: 0x8fa50100  lw          $a1, 0x100($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C0C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C0C4u, 0x240148u, 0x240150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240150u;
label_240150:
    // 0x240150: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x240150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x240154: 0x8fa60104  lw          $a2, 0x104($sp)
    ctx->pc = 0x240154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x240158: 0x24840b48  addiu       $a0, $a0, 0xB48
    ctx->pc = 0x240158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2888));
    // 0x24015c: 0xc0c5a2e  jal         func_3168B8
    ctx->pc = 0x24015Cu;
    SET_GPR_U32(ctx, 31, 0x240164u);
    ctx->pc = 0x240160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24015Cu;
    // 0x240160: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3168B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3168B8u, 0x24015Cu, 0x240164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240164u;
label_240164:
    // 0x240164: 0x3c040024  lui         $a0, 0x24
    ctx->pc = 0x240164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)36 << 16));
    // 0x240168: 0xc0c5a4e  jal         func_316938
    ctx->pc = 0x240168u;
    SET_GPR_U32(ctx, 31, 0x240170u);
    ctx->pc = 0x24016Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240168u;
    // 0x24016c: 0x24840ba0  addiu       $a0, $a0, 0xBA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316938u, 0x240168u, 0x240170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240170u;
label_240170:
    // 0x240170: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x240170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240174:
    // 0x240174: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x240174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x240178: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x240178u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x24017c: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x24017cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x240180: 0x3e00008  jr          $ra
    ctx->pc = 0x240180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240180u;
        // 0x240184: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240188u;
}
