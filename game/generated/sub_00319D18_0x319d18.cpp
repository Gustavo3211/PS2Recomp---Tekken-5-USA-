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

// Function: sub_00319D18
// Address: 0x319d18 - 0x319d58
void sub_00319D18_0x319d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319D18_0x319d18");
#endif

    switch (ctx->pc) {
        case 0x319d40u: goto label_319d40;
        default: break;
    }

    ctx->pc = 0x319d18u;

    // 0x319d18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x319d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x319d1c: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x319d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x319d20: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x319d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x319d24: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x319d24u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319d28: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x319d28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x319d2c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x319d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x319d30: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x319d30u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x319d34: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x319d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x319d38: 0xc0c6247  jal         func_31891C
    ctx->pc = 0x319D38u;
    SET_GPR_U32(ctx, 31, 0x319D40u);
    ctx->pc = 0x31891Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31891Cu, 0x319D38u, 0x319D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x319D40u;
label_319d40:
    // 0x319d40: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x319d40u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319d44: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x319d44u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319d48: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x319d48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x319d4c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x319d4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x319d50: 0x3e00008  jr          $ra
    ctx->pc = 0x319D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319D58u;
}
