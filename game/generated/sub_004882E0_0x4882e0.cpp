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

// Function: sub_004882E0
// Address: 0x4882e0 - 0x488388
void sub_004882E0_0x4882e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004882E0_0x4882e0");
#endif

    switch (ctx->pc) {
        case 0x488300u: goto label_488300;
        case 0x488308u: goto label_488308;
        case 0x488310u: goto label_488310;
        case 0x488318u: goto label_488318;
        case 0x488320u: goto label_488320;
        case 0x488328u: goto label_488328;
        case 0x488330u: goto label_488330;
        case 0x488338u: goto label_488338;
        case 0x488340u: goto label_488340;
        case 0x488348u: goto label_488348;
        case 0x488350u: goto label_488350;
        case 0x488358u: goto label_488358;
        case 0x488360u: goto label_488360;
        case 0x488368u: goto label_488368;
        case 0x488370u: goto label_488370;
        default: break;
    }

    ctx->pc = 0x4882e0u;

    // 0x4882e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4882e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4882e4: 0x24052500  addiu       $a1, $zero, 0x2500
    ctx->pc = 0x4882e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9472));
    // 0x4882e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4882e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4882ec: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4882ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4882f0: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4882f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4882f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4882f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4882f8: 0xc13e4a6  jal         func_4F9298
    ctx->pc = 0x4882F8u;
    SET_GPR_U32(ctx, 31, 0x488300u);
    ctx->pc = 0x4882FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4882F8u;
    // 0x4882fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9298u, 0x4882F8u, 0x488300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488300u;
label_488300:
    // 0x488300: 0xc123c7a  jal         func_48F1E8
    ctx->pc = 0x488300u;
    SET_GPR_U32(ctx, 31, 0x488308u);
    ctx->pc = 0x488304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x488300u;
    // 0x488304: 0xa600009e  sh          $zero, 0x9E($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 158), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48F1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F1E8u, 0x488300u, 0x488308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488308u;
label_488308:
    // 0x488308: 0xc122804  jal         func_48A010
    ctx->pc = 0x488308u;
    SET_GPR_U32(ctx, 31, 0x488310u);
    ctx->pc = 0x48A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48A010u, 0x488308u, 0x488310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488310u;
label_488310:
    // 0x488310: 0xc123dc2  jal         func_48F708
    ctx->pc = 0x488310u;
    SET_GPR_U32(ctx, 31, 0x488318u);
    ctx->pc = 0x48F708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F708u, 0x488310u, 0x488318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488318u;
label_488318:
    // 0x488318: 0xc123de4  jal         func_48F790
    ctx->pc = 0x488318u;
    SET_GPR_U32(ctx, 31, 0x488320u);
    ctx->pc = 0x48F790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F790u, 0x488318u, 0x488320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488320u;
label_488320:
    // 0x488320: 0xc1227fe  jal         func_489FF8
    ctx->pc = 0x488320u;
    SET_GPR_U32(ctx, 31, 0x488328u);
    ctx->pc = 0x489FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489FF8u, 0x488320u, 0x488328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488328u;
label_488328:
    // 0x488328: 0xc123df4  jal         func_48F7D0
    ctx->pc = 0x488328u;
    SET_GPR_U32(ctx, 31, 0x488330u);
    ctx->pc = 0x48F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F7D0u, 0x488328u, 0x488330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488330u;
label_488330:
    // 0x488330: 0xc13e71a  jal         func_4F9C68
    ctx->pc = 0x488330u;
    SET_GPR_U32(ctx, 31, 0x488338u);
    ctx->pc = 0x4F9C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9C68u, 0x488330u, 0x488338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488338u;
label_488338:
    // 0x488338: 0xc123de6  jal         func_48F798
    ctx->pc = 0x488338u;
    SET_GPR_U32(ctx, 31, 0x488340u);
    ctx->pc = 0x48F798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F798u, 0x488338u, 0x488340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488340u;
label_488340:
    // 0x488340: 0xc123dca  jal         func_48F728
    ctx->pc = 0x488340u;
    SET_GPR_U32(ctx, 31, 0x488348u);
    ctx->pc = 0x48F728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F728u, 0x488340u, 0x488348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488348u;
label_488348:
    // 0x488348: 0xc12211a  jal         func_488468
    ctx->pc = 0x488348u;
    SET_GPR_U32(ctx, 31, 0x488350u);
    ctx->pc = 0x488468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488468u, 0x488348u, 0x488350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488350u;
label_488350:
    // 0x488350: 0xc1220e2  jal         func_488388
    ctx->pc = 0x488350u;
    SET_GPR_U32(ctx, 31, 0x488358u);
    ctx->pc = 0x488388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488388u, 0x488350u, 0x488358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488358u;
label_488358:
    // 0x488358: 0xc123436  jal         func_48D0D8
    ctx->pc = 0x488358u;
    SET_GPR_U32(ctx, 31, 0x488360u);
    ctx->pc = 0x48D0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D0D8u, 0x488358u, 0x488360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488360u;
label_488360:
    // 0x488360: 0xc122b7e  jal         func_48ADF8
    ctx->pc = 0x488360u;
    SET_GPR_U32(ctx, 31, 0x488368u);
    ctx->pc = 0x48ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48ADF8u, 0x488360u, 0x488368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488368u;
label_488368:
    // 0x488368: 0xc1232b0  jal         func_48CAC0
    ctx->pc = 0x488368u;
    SET_GPR_U32(ctx, 31, 0x488370u);
    ctx->pc = 0x48CAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CAC0u, 0x488368u, 0x488370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488370u;
label_488370:
    // 0x488370: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x488370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x488374: 0xa6000072  sh          $zero, 0x72($s0)
    ctx->pc = 0x488374u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x488378: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x488378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48837c: 0x3e00008  jr          $ra
    ctx->pc = 0x48837Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x488380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48837Cu;
        // 0x488380: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48837Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488384u;
    // 0x488384: 0x0  nop
    ctx->pc = 0x488384u;
    // NOP
    ctx->pc = 0x488388u;
}
