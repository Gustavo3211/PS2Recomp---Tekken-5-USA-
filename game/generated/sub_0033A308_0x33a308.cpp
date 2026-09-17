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

// Function: sub_0033A308
// Address: 0x33a308 - 0x33a390
void sub_0033A308_0x33a308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A308_0x33a308");
#endif

    switch (ctx->pc) {
        case 0x33a340u: goto label_33a340;
        default: break;
    }

    ctx->pc = 0x33a308u;

    // 0x33a308: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x33a308u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x33a30c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x33a30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33a310: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x33a310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x33a314: 0x8ca80004  lw          $t0, 0x4($a1)
    ctx->pc = 0x33a314u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33a318: 0x1100001a  beqz        $t0, . + 4 + (0x1A << 2)
    ctx->pc = 0x33A318u;
    {
        const bool branch_taken_0x33a318 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A318u;
        // 0x33a31c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a318) {
            ctx->pc = 0x33A384u;
            goto label_33a384;
        }
    }
    ctx->pc = 0x33A320u;
    // 0x33a320: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x33a320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33a324: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x33a324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33a328: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33a328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33a32c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x33a32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33a330: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33a330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33a334: 0x5066000c  beql        $v1, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x33A334u;
    {
        const bool branch_taken_0x33a334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x33a334) {
            ctx->pc = 0x33A338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A334u;
            // 0x33a338: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A368u;
            goto label_33a368;
        }
    }
    ctx->pc = 0x33A33Cu;
    // 0x33a33c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x33a33cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_33a340:
    // 0x33a340: 0x1100000e  beqz        $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x33A340u;
    {
        const bool branch_taken_0x33a340 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A340u;
        // 0x33a344: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a340) {
            ctx->pc = 0x33A37Cu;
            goto label_33a37c;
        }
    }
    ctx->pc = 0x33A348u;
    // 0x33a348: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x33a348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33a34c: 0x0  nop
    ctx->pc = 0x33a34cu;
    // NOP
    // 0x33a350: 0x0  nop
    ctx->pc = 0x33a350u;
    // NOP
    // 0x33a354: 0x0  nop
    ctx->pc = 0x33a354u;
    // NOP
    // 0x33a358: 0x0  nop
    ctx->pc = 0x33a358u;
    // NOP
    // 0x33a35c: 0x5446fff8  bnel        $v0, $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x33A35Cu;
    {
        const bool branch_taken_0x33a35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x33a35c) {
            ctx->pc = 0x33A360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A35Cu;
            // 0x33a360: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a340;
        }
    }
    ctx->pc = 0x33A364u;
    // 0x33a364: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x33a364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_33a368:
    // 0x33a368: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x33a368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x33a36c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33a36cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x33a370: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x33a370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x33a374: 0x5467fff2  bnel        $v1, $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x33A374u;
    {
        const bool branch_taken_0x33a374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x33a374) {
            ctx->pc = 0x33A378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A374u;
            // 0x33a378: 0x2508ffff  addiu       $t0, $t0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a340;
        }
    }
    ctx->pc = 0x33A37Cu;
label_33a37c:
    // 0x33a37c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33a37cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a380: 0x88100b  movn        $v0, $a0, $t0
    ctx->pc = 0x33a380u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_33a384:
    // 0x33a384: 0x3e00008  jr          $ra
    ctx->pc = 0x33A384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A38Cu;
    // 0x33a38c: 0x0  nop
    ctx->pc = 0x33a38cu;
    // NOP
    ctx->pc = 0x33a390u;
}
