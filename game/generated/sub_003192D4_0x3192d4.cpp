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

// Function: sub_003192D4
// Address: 0x3192d4 - 0x31932c
void sub_003192D4_0x3192d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003192D4_0x3192d4");
#endif

    switch (ctx->pc) {
        case 0x3192f8u: goto label_3192f8;
        case 0x31930cu: goto label_31930c;
        default: break;
    }

    ctx->pc = 0x3192d4u;

    // 0x3192d4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3192d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3192d8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3192d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3192dc: 0xffbe0018  sd          $fp, 0x18($sp)
    ctx->pc = 0x3192dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 30));
    // 0x3192e0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3192e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3192e4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3192e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3192e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3192e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3192ec: 0x8e044188  lw          $a0, 0x4188($s0)
    ctx->pc = 0x3192ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16776)));
    // 0x3192f0: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x3192F0u;
    SET_GPR_U32(ctx, 31, 0x3192F8u);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x3192F0u, 0x3192F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3192F8u;
label_3192f8:
    // 0x3192f8: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x3192f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x3192fc: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x3192fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x319300: 0x8e044188  lw          $a0, 0x4188($s0)
    ctx->pc = 0x319300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16776)));
    // 0x319304: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x319304u;
    SET_GPR_U32(ctx, 31, 0x31930Cu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x319304u, 0x31930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31930Cu;
label_31930c:
    // 0x31930c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x31930cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319310: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x319310u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319314: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x319314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319318: 0xdfbe0018  ld          $fp, 0x18($sp)
    ctx->pc = 0x319318u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31931c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31931cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x319320: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x319320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x319324: 0x3e00008  jr          $ra
    ctx->pc = 0x319324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31932Cu;
}
