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

// Function: sub_00353968
// Address: 0x353968 - 0x353998
void sub_00353968_0x353968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353968_0x353968");
#endif

    ctx->pc = 0x353968u;

    // 0x353968: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x353968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35396c: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x35396cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x353970: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x353970u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353974: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x353974u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x353978: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x353978u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x35397c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x35397cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x353980: 0x3442fff9  ori         $v0, $v0, 0xFFF9
    ctx->pc = 0x353980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65529);
    // 0x353984: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x353984u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353988: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x353988u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35398c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35398cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x353990: 0x3e00008  jr          $ra
    ctx->pc = 0x353990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353990u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353998u;
}
