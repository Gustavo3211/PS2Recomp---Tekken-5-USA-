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

// Function: sub_00308BC0
// Address: 0x308bc0 - 0x308c10
void sub_00308BC0_0x308bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308BC0_0x308bc0");
#endif

    switch (ctx->pc) {
        case 0x308becu: goto label_308bec;
        case 0x308bfcu: goto label_308bfc;
        case 0x308c04u: goto label_308c04;
        default: break;
    }

    ctx->pc = 0x308bc0u;

    // 0x308bc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x308bc4: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x308bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x308bc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x308bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x308bcc: 0x24a588d0  addiu       $a1, $a1, -0x7730
    ctx->pc = 0x308bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936784));
    // 0x308bd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x308bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308bd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x308bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308bd8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x308bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x308bdc: 0xa04601bb  sb          $a2, 0x1BB($v0)
    ctx->pc = 0x308bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 443), (uint8_t)GPR_U32(ctx, 6));
    // 0x308be0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x308be0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x308be4: 0xc08b89e  jal         func_22E278
    ctx->pc = 0x308BE4u;
    SET_GPR_U32(ctx, 31, 0x308BECu);
    ctx->pc = 0x308BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308BE4u;
    // 0x308be8: 0xa06601bb  sb          $a2, 0x1BB($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 443), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E278u, 0x308BE4u, 0x308BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308BECu;
label_308bec:
    // 0x308bec: 0xaf809744  sw          $zero, -0x68BC($gp)
    ctx->pc = 0x308becu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940484), GPR_U32(ctx, 0));
    // 0x308bf0: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x308bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x308bf4: 0xc0c166a  jal         func_3059A8
    ctx->pc = 0x308BF4u;
    SET_GPR_U32(ctx, 31, 0x308BFCu);
    ctx->pc = 0x308BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308BF4u;
    // 0x308bf8: 0x2484ece0  addiu       $a0, $a0, -0x1320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059A8u, 0x308BF4u, 0x308BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308BFCu;
label_308bfc:
    // 0x308bfc: 0xc0b6ae0  jal         func_2DAB80
    ctx->pc = 0x308BFCu;
    SET_GPR_U32(ctx, 31, 0x308C04u);
    ctx->pc = 0x2DAB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAB80u, 0x308BFCu, 0x308C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308C04u;
label_308c04:
    // 0x308c04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308c08: 0x3e00008  jr          $ra
    ctx->pc = 0x308C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C08u;
        // 0x308c0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308C10u;
}
