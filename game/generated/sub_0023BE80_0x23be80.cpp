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

// Function: sub_0023BE80
// Address: 0x23be80 - 0x23bef8
void sub_0023BE80_0x23be80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023BE80_0x23be80");
#endif

    switch (ctx->pc) {
        case 0x23be98u: goto label_23be98;
        case 0x23bed0u: goto label_23bed0;
        case 0x23bee8u: goto label_23bee8;
        default: break;
    }

    ctx->pc = 0x23be80u;

    // 0x23be80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23be80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23be84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23be84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23be88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23be88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23be8c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23be8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23be90: 0xc089622  jal         func_225888
    ctx->pc = 0x23BE90u;
    SET_GPR_U32(ctx, 31, 0x23BE98u);
    ctx->pc = 0x23BE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23BE90u;
    // 0x23be94: 0x2404005b  addiu       $a0, $zero, 0x5B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225888u, 0x23BE90u, 0x23BE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BE98u;
label_23be98:
    // 0x23be98: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x23BE98u;
    {
        const bool branch_taken_0x23be98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BE98u;
        // 0x23be9c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23be98) {
            ctx->pc = 0x23BEE8u;
            goto label_23bee8;
        }
    }
    ctx->pc = 0x23BEA0u;
    // 0x23bea0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x23bea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x23bea4: 0x8c43885c  lw          $v1, -0x77A4($v0)
    ctx->pc = 0x23bea4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x23bea8: 0x10640003  beq         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23BEA8u;
    {
        const bool branch_taken_0x23bea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x23BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEA8u;
        // 0x23beac: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bea8) {
            ctx->pc = 0x23BEB8u;
            goto label_23beb8;
        }
    }
    ctx->pc = 0x23BEB0u;
    // 0x23beb0: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x23BEB0u;
    {
        const bool branch_taken_0x23beb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23beb0) {
            ctx->pc = 0x23BEB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BEB0u;
            // 0x23beb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BEECu;
            goto label_23beec;
        }
    }
    ctx->pc = 0x23BEB8u;
label_23beb8:
    // 0x23beb8: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x23beb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23bebc: 0x8c43d748  lw          $v1, -0x28B8($v0)
    ctx->pc = 0x23bebcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x15D748u));
    // 0x23bec0: 0x54700005  bnel        $v1, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23BEC0u;
    {
        const bool branch_taken_0x23bec0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x23bec0) {
            ctx->pc = 0x23BEC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23BEC0u;
            // 0x23bec4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23BED8u;
            goto label_23bed8;
        }
    }
    ctx->pc = 0x23BEC8u;
    // 0x23bec8: 0xc08ef56  jal         func_23BD58
    ctx->pc = 0x23BEC8u;
    SET_GPR_U32(ctx, 31, 0x23BED0u);
    ctx->pc = 0x23BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD58u, 0x23BEC8u, 0x23BED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BED0u;
label_23bed0:
    // 0x23bed0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23BED0u;
    {
        const bool branch_taken_0x23bed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BED0u;
        // 0x23bed4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bed0) {
            ctx->pc = 0x23BEECu;
            goto label_23beec;
        }
    }
    ctx->pc = 0x23BED8u;
label_23bed8:
    // 0x23bed8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23BED8u;
    {
        const bool branch_taken_0x23bed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BED8u;
        // 0x23bedc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23bed8) {
            ctx->pc = 0x23BEECu;
            goto label_23beec;
        }
    }
    ctx->pc = 0x23BEE0u;
    // 0x23bee0: 0xc08ebca  jal         func_23AF28
    ctx->pc = 0x23BEE0u;
    SET_GPR_U32(ctx, 31, 0x23BEE8u);
    ctx->pc = 0x23AF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23AF28u, 0x23BEE0u, 0x23BEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23BEE8u;
label_23bee8:
    // 0x23bee8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23bee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23beec:
    // 0x23beec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23beecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23bef0: 0x3e00008  jr          $ra
    ctx->pc = 0x23BEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23BEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23BEF0u;
        // 0x23bef4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23BEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23BEF8u;
}
