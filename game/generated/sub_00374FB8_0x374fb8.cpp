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

// Function: sub_00374FB8
// Address: 0x374fb8 - 0x374fe0
void sub_00374FB8_0x374fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374FB8_0x374fb8");
#endif

    switch (ctx->pc) {
        case 0x374fccu: goto label_374fcc;
        default: break;
    }

    ctx->pc = 0x374fb8u;

    // 0x374fb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374fbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x374fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x374fc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x374fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x374fc4: 0xc0dd41a  jal         func_375068
    ctx->pc = 0x374FC4u;
    SET_GPR_U32(ctx, 31, 0x374FCCu);
    ctx->pc = 0x374FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374FC4u;
    // 0x374fc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375068u, 0x374FC4u, 0x374FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374FCCu;
label_374fcc:
    // 0x374fcc: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x374fccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x374fd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x374fd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374fd4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x374fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x374fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x374FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374FD8u;
        // 0x374fdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374FE0u;
}
