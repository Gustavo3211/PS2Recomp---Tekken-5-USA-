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

// Function: sub_00353934
// Address: 0x353934 - 0x353968
void sub_00353934_0x353934(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353934_0x353934");
#endif

    ctx->pc = 0x353934u;

    // 0x353934: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x353934u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x353938: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x353938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x35393c: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x35393cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353940: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x353940u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x353944: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x353944u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x353948: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x353948u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x35394c: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x35394cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x353950: 0x3442fff9  ori         $v0, $v0, 0xFFF9
    ctx->pc = 0x353950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65529);
    // 0x353954: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x353954u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353958: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x353958u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35395c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x35395cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x353960: 0x3e00008  jr          $ra
    ctx->pc = 0x353960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x353968u;
}
