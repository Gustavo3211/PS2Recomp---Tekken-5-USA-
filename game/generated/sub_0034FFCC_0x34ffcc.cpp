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

// Function: sub_0034FFCC
// Address: 0x34ffcc - 0x350010
void sub_0034FFCC_0x34ffcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034FFCC_0x34ffcc");
#endif

    switch (ctx->pc) {
        case 0x34fff4u: goto label_34fff4;
        default: break;
    }

    ctx->pc = 0x34ffccu;

    // 0x34ffcc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34ffccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34ffd0: 0xffbe0000  sd          $fp, 0x0($sp)
    ctx->pc = 0x34ffd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 30));
    // 0x34ffd4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34ffd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34ffd8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x34ffd8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ffdc: 0x3c04001c  lui         $a0, 0x1C
    ctx->pc = 0x34ffdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28 << 16));
    // 0x34ffe0: 0x2484c248  addiu       $a0, $a0, -0x3DB8
    ctx->pc = 0x34ffe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951496));
    // 0x34ffe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34ffe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ffe8: 0x24060084  addiu       $a2, $zero, 0x84
    ctx->pc = 0x34ffe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    // 0x34ffec: 0xc04a151  jal         func_128544
    ctx->pc = 0x34FFECu;
    SET_GPR_U32(ctx, 31, 0x34FFF4u);
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x34FFECu, 0x34FFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FFF4u;
label_34fff4:
    // 0x34fff4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34fff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fff8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x34fff8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fffc: 0xdfbe0000  ld          $fp, 0x0($sp)
    ctx->pc = 0x34fffcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x350000: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x350000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x350004: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x350004u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x350008: 0x3e00008  jr          $ra
    ctx->pc = 0x350008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350010u;
}
