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

// Function: sub_00118C60
// Address: 0x118c60 - 0x118cb8
void sub_00118C60_0x118c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118C60_0x118c60");
#endif

    switch (ctx->pc) {
        case 0x118c70u: goto label_118c70;
        case 0x118c78u: goto label_118c78;
        case 0x118c80u: goto label_118c80;
        case 0x118c88u: goto label_118c88;
        case 0x118c90u: goto label_118c90;
        case 0x118c98u: goto label_118c98;
        case 0x118ca0u: goto label_118ca0;
        case 0x118ca8u: goto label_118ca8;
        default: break;
    }

    ctx->pc = 0x118c60u;

    // 0x118c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x118c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x118c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x118c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x118c68: 0xc046284  jal         func_118A10
    ctx->pc = 0x118C68u;
    SET_GPR_U32(ctx, 31, 0x118C70u);
    ctx->pc = 0x118A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A10u, 0x118C68u, 0x118C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C70u;
label_118c70:
    // 0x118c70: 0xc0462d4  jal         func_118B50
    ctx->pc = 0x118C70u;
    SET_GPR_U32(ctx, 31, 0x118C78u);
    ctx->pc = 0x118B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B50u, 0x118C70u, 0x118C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C78u;
label_118c78:
    // 0x118c78: 0xc046450  jal         func_119140
    ctx->pc = 0x118C78u;
    SET_GPR_U32(ctx, 31, 0x118C80u);
    ctx->pc = 0x119140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119140u, 0x118C78u, 0x118C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C80u;
label_118c80:
    // 0x118c80: 0xc0464ae  jal         func_1192B8
    ctx->pc = 0x118C80u;
    SET_GPR_U32(ctx, 31, 0x118C88u);
    ctx->pc = 0x118C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118C80u;
    // 0x118c84: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1192B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1192B8u, 0x118C80u, 0x118C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C88u;
label_118c88:
    // 0x118c88: 0xc04653e  jal         func_1194F8
    ctx->pc = 0x118C88u;
    SET_GPR_U32(ctx, 31, 0x118C90u);
    ctx->pc = 0x1194F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1194F8u, 0x118C88u, 0x118C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C90u;
label_118c90:
    // 0x118c90: 0xc04405e  jal         func_110178
    ctx->pc = 0x118C90u;
    SET_GPR_U32(ctx, 31, 0x118C98u);
    ctx->pc = 0x110178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110178u, 0x118C90u, 0x118C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118C98u;
label_118c98:
    // 0x118c98: 0xc046362  jal         func_118D88
    ctx->pc = 0x118C98u;
    SET_GPR_U32(ctx, 31, 0x118CA0u);
    ctx->pc = 0x118D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D88u, 0x118C98u, 0x118CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118CA0u;
label_118ca0:
    // 0x118ca0: 0xc046bd8  jal         func_11AF60
    ctx->pc = 0x118CA0u;
    SET_GPR_U32(ctx, 31, 0x118CA8u);
    ctx->pc = 0x11AF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AF60u, 0x118CA0u, 0x118CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118CA8u;
label_118ca8:
    // 0x118ca8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x118ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118cac: 0x8046a5e  j           func_11A978
    ctx->pc = 0x118CACu;
    ctx->pc = 0x118CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118CACu;
    // 0x118cb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A978u, 0x118CACu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x118CB4u;
    // 0x118cb4: 0x0  nop
    ctx->pc = 0x118cb4u;
    // NOP
    ctx->pc = 0x118cb8u;
}
