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

// Function: sub_002FA930
// Address: 0x2fa930 - 0x2fa968
void sub_002FA930_0x2fa930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA930_0x2fa930");
#endif

    switch (ctx->pc) {
        case 0x2fa944u: goto label_2fa944;
        default: break;
    }

    ctx->pc = 0x2fa930u;

    // 0x2fa930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fa930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fa934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fa934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fa938: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2fa938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2fa93c: 0xc0bea5a  jal         func_2FA968
    ctx->pc = 0x2FA93Cu;
    SET_GPR_U32(ctx, 31, 0x2FA944u);
    ctx->pc = 0x2FA940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA93Cu;
    // 0x2fa940: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA968u, 0x2FA93Cu, 0x2FA944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA944u;
label_2fa944:
    // 0x2fa944: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2fa944u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fa948: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2fa948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fa94c: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x2fa94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2fa950: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x2fa950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2fa954: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2fa954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2fa958: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2fa958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2fa95c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fa95cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fa960: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA960u;
        // 0x2fa964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA968u;
}
