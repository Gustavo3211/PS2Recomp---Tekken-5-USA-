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

// Function: sub_002DFE58
// Address: 0x2dfe58 - 0x2dfea8
void sub_002DFE58_0x2dfe58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFE58_0x2dfe58");
#endif

    switch (ctx->pc) {
        case 0x2dfe74u: goto label_2dfe74;
        case 0x2dfe84u: goto label_2dfe84;
        case 0x2dfe94u: goto label_2dfe94;
        case 0x2dfe9cu: goto label_2dfe9c;
        default: break;
    }

    ctx->pc = 0x2dfe58u;

    // 0x2dfe58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dfe58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dfe5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dfe5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dfe60: 0x90820054  lbu         $v0, 0x54($a0)
    ctx->pc = 0x2dfe60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x2dfe64: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2DFE64u;
    {
        const bool branch_taken_0x2dfe64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dfe64) {
            ctx->pc = 0x2DFE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DFE64u;
            // 0x2dfe68: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFEA0u;
            goto label_2dfea0;
        }
    }
    ctx->pc = 0x2DFE6Cu;
    // 0x2dfe6c: 0xc090306  jal         func_240C18
    ctx->pc = 0x2DFE6Cu;
    SET_GPR_U32(ctx, 31, 0x2DFE74u);
    ctx->pc = 0x240C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240C18u, 0x2DFE6Cu, 0x2DFE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFE74u;
label_2dfe74:
    // 0x2dfe74: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2DFE74u;
    {
        const bool branch_taken_0x2dfe74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFE74u;
        // 0x2dfe78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfe74) {
            ctx->pc = 0x2DFEA0u;
            goto label_2dfea0;
        }
    }
    ctx->pc = 0x2DFE7Cu;
    // 0x2dfe7c: 0xc089662  jal         func_225988
    ctx->pc = 0x2DFE7Cu;
    SET_GPR_U32(ctx, 31, 0x2DFE84u);
    ctx->pc = 0x225988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225988u, 0x2DFE7Cu, 0x2DFE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFE84u;
label_2dfe84:
    // 0x2dfe84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DFE84u;
    {
        const bool branch_taken_0x2dfe84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFE84u;
        // 0x2dfe88: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfe84) {
            ctx->pc = 0x2DFEA0u;
            goto label_2dfea0;
        }
    }
    ctx->pc = 0x2DFE8Cu;
    // 0x2dfe8c: 0xc0b42e4  jal         func_2D0B90
    ctx->pc = 0x2DFE8Cu;
    SET_GPR_U32(ctx, 31, 0x2DFE94u);
    ctx->pc = 0x2D0B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0B90u, 0x2DFE8Cu, 0x2DFE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFE94u;
label_2dfe94:
    // 0x2dfe94: 0xc0c6812  jal         func_31A048
    ctx->pc = 0x2DFE94u;
    SET_GPR_U32(ctx, 31, 0x2DFE9Cu);
    ctx->pc = 0x31A048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A048u, 0x2DFE94u, 0x2DFE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFE9Cu;
label_2dfe9c:
    // 0x2dfe9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dfe9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2dfea0:
    // 0x2dfea0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DFEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DFEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFEA0u;
        // 0x2dfea4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DFEA8u;
}
