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

// Function: sub_00127188
// Address: 0x127188 - 0x1271b8
void sub_00127188_0x127188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127188_0x127188");
#endif

    switch (ctx->pc) {
        case 0x1271a8u: goto label_1271a8;
        default: break;
    }

    ctx->pc = 0x127188u;

    // 0x127188: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x127188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12718c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x12718cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x127190: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x127190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127194: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x127194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x127198: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x127198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x12719c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x12719cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x1271a0: 0xc049d1c  jal         func_127470
    ctx->pc = 0x1271A0u;
    SET_GPR_U32(ctx, 31, 0x1271A8u);
    ctx->pc = 0x1271A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1271A0u;
    // 0x1271a4: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127470u, 0x1271A0u, 0x1271A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1271A8u;
label_1271a8:
    // 0x1271a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1271a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1271ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1271ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1271B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1271ACu;
        // 0x1271b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1271ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1271B4u;
    // 0x1271b4: 0x0  nop
    ctx->pc = 0x1271b4u;
    // NOP
    ctx->pc = 0x1271b8u;
}
