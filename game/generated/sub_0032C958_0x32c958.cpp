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

// Function: sub_0032C958
// Address: 0x32c958 - 0x32c9c0
void sub_0032C958_0x32c958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C958_0x32c958");
#endif

    switch (ctx->pc) {
        case 0x32c970u: goto label_32c970;
        default: break;
    }

    ctx->pc = 0x32c958u;

    // 0x32c958: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x32c958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c95c: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x32c95cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x32c960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32c960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32c964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32c964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32c968: 0xc0cb2d6  jal         func_32CB58
    ctx->pc = 0x32C968u;
    SET_GPR_U32(ctx, 31, 0x32C970u);
    ctx->pc = 0x32C96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C968u;
    // 0x32c96c: 0x24840700  addiu       $a0, $a0, 0x700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CB58u, 0x32C968u, 0x32C970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32C970u;
label_32c970:
    // 0x32c970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32c970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c974: 0x3e00008  jr          $ra
    ctx->pc = 0x32C974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C974u;
        // 0x32c978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C97Cu;
    // 0x32c97c: 0x0  nop
    ctx->pc = 0x32c97cu;
    // NOP
    // 0x32c980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32c980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32c984: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x32c984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x32c988: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32c988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32c98c: 0x24840700  addiu       $a0, $a0, 0x700
    ctx->pc = 0x32c98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1792));
    // 0x32c990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32c990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c994: 0x80cb2e8  j           func_32CBA0
    ctx->pc = 0x32C994u;
    ctx->pc = 0x32C998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C994u;
    // 0x32c998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBA0u, 0x32C994u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32C99Cu;
    // 0x32c99c: 0x0  nop
    ctx->pc = 0x32c99cu;
    // NOP
    // 0x32c9a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32c9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32c9a4: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x32c9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x32c9a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32c9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32c9ac: 0x24840700  addiu       $a0, $a0, 0x700
    ctx->pc = 0x32c9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1792));
    // 0x32c9b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32c9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32c9b4: 0x80cb2f4  j           func_32CBD0
    ctx->pc = 0x32C9B4u;
    ctx->pc = 0x32C9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32C9B4u;
    // 0x32c9b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CBD0u, 0x32C9B4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32C9BCu;
    // 0x32c9bc: 0x0  nop
    ctx->pc = 0x32c9bcu;
    // NOP
    ctx->pc = 0x32c9c0u;
}
