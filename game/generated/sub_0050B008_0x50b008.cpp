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

// Function: sub_0050B008
// Address: 0x50b008 - 0x50b070
void sub_0050B008_0x50b008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050B008_0x50b008");
#endif

    switch (ctx->pc) {
        case 0x50b018u: goto label_50b018;
        case 0x50b020u: goto label_50b020;
        case 0x50b028u: goto label_50b028;
        case 0x50b030u: goto label_50b030;
        case 0x50b038u: goto label_50b038;
        case 0x50b040u: goto label_50b040;
        case 0x50b048u: goto label_50b048;
        case 0x50b050u: goto label_50b050;
        case 0x50b058u: goto label_50b058;
        case 0x50b060u: goto label_50b060;
        default: break;
    }

    ctx->pc = 0x50b008u;

    // 0x50b008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50b008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50b00c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50b00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50b010: 0xc142b0a  jal         func_50AC28
    ctx->pc = 0x50B010u;
    SET_GPR_U32(ctx, 31, 0x50B018u);
    ctx->pc = 0x50AC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50AC28u, 0x50B010u, 0x50B018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50B018u;
label_50b018:
    // 0x50b018: 0xc14360e  jal         func_50D838
    ctx->pc = 0x50B018u;
    SET_GPR_U32(ctx, 31, 0x50B020u);
    ctx->pc = 0x50D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50D838u, 0x50B018u, 0x50B020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50B020u;
label_50b020:
    // 0x50b020: 0xc142f92  jal         func_50BE48
    ctx->pc = 0x50B020u;
    SET_GPR_U32(ctx, 31, 0x50B028u);
    ctx->pc = 0x50BE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50BE48u, 0x50B020u, 0x50B028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50B028u;
label_50b028:
    // 0x50b028: 0xc1436a4  jal         func_50DA90
    ctx->pc = 0x50B028u;
    SET_GPR_U32(ctx, 31, 0x50B030u);
    ctx->pc = 0x50DA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50DA90u, 0x50B028u, 0x50B030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50B030u;
label_50b030:
    // 0x50b030: 0xc14152c  jal         func_5054B0
    ctx->pc = 0x50B030u;
    SET_GPR_U32(ctx, 31, 0x50B038u);
    ctx->pc = 0x5054B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5054B0u, 0x50B030u, 0x50B038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50B038u;
label_50b038:
    // 0x50b038: 0xc141abe  jal         func_506AF8
    ctx->pc = 0x50B038u;
    SET_GPR_U32(ctx, 31, 0x50B040u);
    ctx->pc = 0x506AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x506AF8u, 0x50B038u, 0x50B040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50B040u;
label_50b040:
    // 0x50b040: 0xc141bba  jal         func_506EE8
    ctx->pc = 0x50B040u;
    SET_GPR_U32(ctx, 31, 0x50B048u);
    ctx->pc = 0x506EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x506EE8u, 0x50B040u, 0x50B048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50B048u;
label_50b048:
    // 0x50b048: 0xc14363a  jal         func_50D8E8
    ctx->pc = 0x50B048u;
    SET_GPR_U32(ctx, 31, 0x50B050u);
    ctx->pc = 0x50D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50D8E8u, 0x50B048u, 0x50B050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50B050u;
label_50b050:
    // 0x50b050: 0xc141c20  jal         func_507080
    ctx->pc = 0x50B050u;
    SET_GPR_U32(ctx, 31, 0x50B058u);
    ctx->pc = 0x507080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x507080u, 0x50B050u, 0x50B058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50B058u;
label_50b058:
    // 0x50b058: 0xc142408  jal         func_509020
    ctx->pc = 0x50B058u;
    SET_GPR_U32(ctx, 31, 0x50B060u);
    ctx->pc = 0x509020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x509020u, 0x50B058u, 0x50B060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50B060u;
label_50b060:
    // 0x50b060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50b060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50b064: 0x8142518  j           func_509460
    ctx->pc = 0x50B064u;
    ctx->pc = 0x50B068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50B064u;
    // 0x50b068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x509460u;
    sub_00509460_0x509460(rdram, ctx, runtime); return;
    ctx->pc = 0x50B06Cu;
    // 0x50b06c: 0x0  nop
    ctx->pc = 0x50b06cu;
    // NOP
    ctx->pc = 0x50b070u;
}
