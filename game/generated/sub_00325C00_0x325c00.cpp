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

// Function: sub_00325C00
// Address: 0x325c00 - 0x325c38
void sub_00325C00_0x325c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325C00_0x325c00");
#endif

    switch (ctx->pc) {
        case 0x325c2cu: goto label_325c2c;
        default: break;
    }

    ctx->pc = 0x325c00u;

    // 0x325c00: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x325c00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325c04: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x325c04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x325c08: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x325c08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325c0c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x325c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325c10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x325c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x325c14: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x325c14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325c18: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x325c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325c1c: 0x2484f100  addiu       $a0, $a0, -0xF00
    ctx->pc = 0x325c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963456));
    // 0x325c20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x325c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x325c24: 0xc0c9a3c  jal         func_3268F0
    ctx->pc = 0x325C24u;
    SET_GPR_U32(ctx, 31, 0x325C2Cu);
    ctx->pc = 0x325C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325C24u;
    // 0x325c28: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3268F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3268F0u, 0x325C24u, 0x325C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325C2Cu;
label_325c2c:
    // 0x325c2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x325c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325c30: 0x3e00008  jr          $ra
    ctx->pc = 0x325C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325C30u;
        // 0x325c34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325C38u;
}
