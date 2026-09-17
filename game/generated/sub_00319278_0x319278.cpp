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

// Function: sub_00319278
// Address: 0x319278 - 0x3192d4
void sub_00319278_0x319278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319278_0x319278");
#endif

    switch (ctx->pc) {
        case 0x31929cu: goto label_31929c;
        case 0x3192acu: goto label_3192ac;
        case 0x3192b8u: goto label_3192b8;
        default: break;
    }

    ctx->pc = 0x319278u;

    // 0x319278: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x319278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31927c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31927cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x319280: 0xffbe0008  sd          $fp, 0x8($sp)
    ctx->pc = 0x319280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 30));
    // 0x319284: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x319284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x319288: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x319288u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31928c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31928cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319290: 0x8e044188  lw          $a0, 0x4188($s0)
    ctx->pc = 0x319290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16776)));
    // 0x319294: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x319294u;
    SET_GPR_U32(ctx, 31, 0x31929Cu);
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x319294u, 0x31929Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31929Cu;
label_31929c:
    // 0x31929c: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x31929cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x3192a0: 0x8e044188  lw          $a0, 0x4188($s0)
    ctx->pc = 0x3192a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16776)));
    // 0x3192a4: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x3192A4u;
    SET_GPR_U32(ctx, 31, 0x3192ACu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x3192A4u, 0x3192ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3192ACu;
label_3192ac:
    // 0x3192ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3192acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3192b0: 0xc0c6685  jal         func_319A14
    ctx->pc = 0x3192B0u;
    SET_GPR_U32(ctx, 31, 0x3192B8u);
    ctx->pc = 0x319A14u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319A14u, 0x3192B0u, 0x3192B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3192B8u;
label_3192b8:
    // 0x3192b8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3192b8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3192bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3192bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3192c0: 0xdfbe0008  ld          $fp, 0x8($sp)
    ctx->pc = 0x3192c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3192c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3192c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3192c8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3192c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3192cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3192CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3192CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3192D4u;
}
