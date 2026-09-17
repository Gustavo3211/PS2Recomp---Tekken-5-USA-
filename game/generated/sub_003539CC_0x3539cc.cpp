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

// Function: sub_003539CC
// Address: 0x3539cc - 0x3539fc
void sub_003539CC_0x3539cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003539CC_0x3539cc");
#endif

    ctx->pc = 0x3539ccu;

    // 0x3539cc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3539ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3539d0: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x3539d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x3539d4: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3539d4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3539d8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3539d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x3539dc: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x3539dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x3539e0: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x3539e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x3539e4: 0x3442fff9  ori         $v0, $v0, 0xFFF9
    ctx->pc = 0x3539e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65529);
    // 0x3539e8: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3539e8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3539ec: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x3539ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3539f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3539f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3539f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3539F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3539F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3539FCu;
}
