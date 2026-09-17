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

// Function: sub_0026C6D0
// Address: 0x26c6d0 - 0x26c730
void sub_0026C6D0_0x26c6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C6D0_0x26c6d0");
#endif

    switch (ctx->pc) {
        case 0x26c718u: goto label_26c718;
        default: break;
    }

    ctx->pc = 0x26c6d0u;

    // 0x26c6d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26c6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26c6d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26c6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26c6d8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x26c6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26c6dc: 0x94820044  lhu         $v0, 0x44($a0)
    ctx->pc = 0x26c6dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x26c6e0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26C6E0u;
    {
        const bool branch_taken_0x26c6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6E0u;
        // 0x26c6e4: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c6e0) {
            ctx->pc = 0x26C720u;
            goto label_26c720;
        }
    }
    ctx->pc = 0x26C6E8u;
    // 0x26c6e8: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x26c6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x26c6ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26c6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26c6f0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26C6F0u;
    {
        const bool branch_taken_0x26c6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6F0u;
        // 0x26c6f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c6f0) {
            ctx->pc = 0x26C724u;
            goto label_26c724;
        }
    }
    ctx->pc = 0x26C6F8u;
    // 0x26c6f8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x26c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x26c6fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26c6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26c700: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26C700u;
    {
        const bool branch_taken_0x26c700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C700u;
        // 0x26c704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c700) {
            ctx->pc = 0x26C724u;
            goto label_26c724;
        }
    }
    ctx->pc = 0x26C708u;
    // 0x26c708: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26c708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26c70c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c70cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c710: 0xc09ae62  jal         func_26B988
    ctx->pc = 0x26C710u;
    SET_GPR_U32(ctx, 31, 0x26C718u);
    ctx->pc = 0x26C714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C710u;
    // 0x26c714: 0x8c450018  lw          $a1, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B988u, 0x26C710u, 0x26C718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C718u;
label_26c718:
    // 0x26c718: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x26C718u;
    {
        const bool branch_taken_0x26c718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c718) {
            ctx->pc = 0x26C71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C718u;
            // 0x26c71c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C724u;
            goto label_26c724;
        }
    }
    ctx->pc = 0x26C720u;
label_26c720:
    // 0x26c720: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26c720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26c724:
    // 0x26c724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26c724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c728: 0x3e00008  jr          $ra
    ctx->pc = 0x26C728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C728u;
        // 0x26c72c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C730u;
}
