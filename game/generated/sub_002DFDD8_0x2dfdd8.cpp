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

// Function: sub_002DFDD8
// Address: 0x2dfdd8 - 0x2dfe18
void sub_002DFDD8_0x2dfdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFDD8_0x2dfdd8");
#endif

    switch (ctx->pc) {
        case 0x2dfdf8u: goto label_2dfdf8;
        default: break;
    }

    ctx->pc = 0x2dfdd8u;

    // 0x2dfdd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dfdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dfddc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dfddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dfde0: 0x24900051  addiu       $s0, $a0, 0x51
    ctx->pc = 0x2dfde0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 81));
    // 0x2dfde4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2dfde4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2dfde8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DFDE8u;
    {
        const bool branch_taken_0x2dfde8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFDE8u;
        // 0x2dfdec: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfde8) {
            ctx->pc = 0x2DFDFCu;
            goto label_2dfdfc;
        }
    }
    ctx->pc = 0x2DFDF0u;
    // 0x2dfdf0: 0xc084fe0  jal         func_213F80
    ctx->pc = 0x2DFDF0u;
    SET_GPR_U32(ctx, 31, 0x2DFDF8u);
    ctx->pc = 0x213F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213F80u, 0x2DFDF0u, 0x2DFDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFDF8u;
label_2dfdf8:
    // 0x2dfdf8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2dfdf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2dfdfc:
    // 0x2dfdfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2dfdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dfe00: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2DFE00u;
    {
        const bool branch_taken_0x2dfe00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2dfe00) {
            ctx->pc = 0x2DFE04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DFE00u;
            // 0x2dfe04: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFE08u;
            goto label_2dfe08;
        }
    }
    ctx->pc = 0x2DFE08u;
label_2dfe08:
    // 0x2dfe08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dfe08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dfe0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dfe0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dfe10: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFE10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFE10u;
        // 0x2dfe14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFE10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFE18u;
}
