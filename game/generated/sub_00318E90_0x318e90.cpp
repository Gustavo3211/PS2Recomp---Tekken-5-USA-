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

// Function: sub_00318E90
// Address: 0x318e90 - 0x318eec
void sub_00318E90_0x318e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318E90_0x318e90");
#endif

    switch (ctx->pc) {
        case 0x318ed0u: goto label_318ed0;
        default: break;
    }

    ctx->pc = 0x318e90u;

    // 0x318e90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x318e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x318e94: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x318e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x318e98: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x318e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x318e9c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x318e9cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318ea0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x318ea0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318ea4: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x318ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
    // 0x318ea8: 0xafc60004  sw          $a2, 0x4($fp)
    ctx->pc = 0x318ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 6));
    // 0x318eac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x318eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x318eb0: 0xac62419c  sw          $v0, 0x419C($v1)
    ctx->pc = 0x318eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16796), GPR_U32(ctx, 2));
    // 0x318eb4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x318eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x318eb8: 0xac6241a0  sw          $v0, 0x41A0($v1)
    ctx->pc = 0x318eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16800), GPR_U32(ctx, 2));
    // 0x318ebc: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x318ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x318ec0: 0xac6241a4  sw          $v0, 0x41A4($v1)
    ctx->pc = 0x318ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16804), GPR_U32(ctx, 2));
    // 0x318ec4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x318ec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318ec8: 0xc0c5e4c  jal         func_317930
    ctx->pc = 0x318EC8u;
    SET_GPR_U32(ctx, 31, 0x318ED0u);
    ctx->pc = 0x317930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317930u, 0x318EC8u, 0x318ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x318ED0u;
label_318ed0:
    // 0x318ed0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x318ed0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318ed4: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x318ed4u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318ed8: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x318ed8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x318edc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x318edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x318ee0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x318ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x318ee4: 0x3e00008  jr          $ra
    ctx->pc = 0x318EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x318EE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x318EECu;
}
