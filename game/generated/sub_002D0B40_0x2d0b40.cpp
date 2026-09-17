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

// Function: sub_002D0B40
// Address: 0x2d0b40 - 0x2d0b90
void sub_002D0B40_0x2d0b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0B40_0x2d0b40");
#endif

    switch (ctx->pc) {
        case 0x2d0b60u: goto label_2d0b60;
        case 0x2d0b70u: goto label_2d0b70;
        case 0x2d0b80u: goto label_2d0b80;
        default: break;
    }

    ctx->pc = 0x2d0b40u;

    // 0x2d0b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d0b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d0b44: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x2d0b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x2d0b48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d0b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0b4c: 0x24508e40  addiu       $s0, $v0, -0x71C0
    ctx->pc = 0x2d0b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938176));
    // 0x2d0b50: 0x8e041800  lw          $a0, 0x1800($s0)
    ctx->pc = 0x2d0b50u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x17A640u));
    // 0x2d0b54: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d0b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d0b58: 0xc044138  jal         func_1104E0
    ctx->pc = 0x2D0B58u;
    SET_GPR_U32(ctx, 31, 0x2D0B60u);
    ctx->pc = 0x2D0B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0B58u;
    // 0x2d0b5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1104E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1104E0u, 0x2D0B58u, 0x2D0B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0B60u;
label_2d0b60:
    // 0x2d0b60: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D0B60u;
    {
        const bool branch_taken_0x2d0b60 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2d0b60) {
            ctx->pc = 0x2D0B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0B60u;
            // 0x2d0b64: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0B84u;
            goto label_2d0b84;
        }
    }
    ctx->pc = 0x2D0B68u;
    // 0x2d0b68: 0xc043c6c  jal         func_10F1B0
    ctx->pc = 0x2D0B68u;
    SET_GPR_U32(ctx, 31, 0x2D0B70u);
    ctx->pc = 0x2D0B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0B68u;
    // 0x2d0b6c: 0x8e041800  lw          $a0, 0x1800($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6144)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1B0u, 0x2D0B68u, 0x2D0B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0B70u;
label_2d0b70:
    // 0x2d0b70: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2d0b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2d0b74: 0x8e051800  lw          $a1, 0x1800($s0)
    ctx->pc = 0x2d0b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6144)));
    // 0x2d0b78: 0xc044794  jal         func_111E50
    ctx->pc = 0x2D0B78u;
    SET_GPR_U32(ctx, 31, 0x2D0B80u);
    ctx->pc = 0x2D0B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0B78u;
    // 0x2d0b7c: 0x2484ebb8  addiu       $a0, $a0, -0x1448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111E50u, 0x2D0B78u, 0x2D0B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0B80u;
label_2d0b80:
    // 0x2d0b80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d0b80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0b84:
    // 0x2d0b84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d0b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d0b88: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0B88u;
        // 0x2d0b8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0B90u;
}
