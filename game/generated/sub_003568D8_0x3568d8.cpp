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

// Function: sub_003568D8
// Address: 0x3568d8 - 0x35692c
void sub_003568D8_0x3568d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003568D8_0x3568d8");
#endif

    switch (ctx->pc) {
        case 0x356904u: goto label_356904;
        case 0x356914u: goto label_356914;
        default: break;
    }

    ctx->pc = 0x3568d8u;

    // 0x3568d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3568d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3568dc: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x3568dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x3568e0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3568e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3568e4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3568e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3568e8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3568e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x3568ec: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3568ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3568f0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3568f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3568f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3568f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3568f8: 0x2785c770  addiu       $a1, $gp, -0x3890
    ctx->pc = 0x3568f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294952816));
    // 0x3568fc: 0xc04a48c  jal         func_129230
    ctx->pc = 0x3568FCu;
    SET_GPR_U32(ctx, 31, 0x356904u);
    ctx->pc = 0x129230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129230u, 0x3568FCu, 0x356904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356904u;
label_356904:
    // 0x356904: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x356904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x356908: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x356908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35690c: 0xc0d5a05  jal         func_356814
    ctx->pc = 0x35690Cu;
    SET_GPR_U32(ctx, 31, 0x356914u);
    ctx->pc = 0x356814u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356814u, 0x35690Cu, 0x356914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356914u;
label_356914:
    // 0x356914: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x356914u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356918: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x356918u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35691c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35691cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x356920: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x356920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x356924: 0x3e00008  jr          $ra
    ctx->pc = 0x356924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35692Cu;
}
