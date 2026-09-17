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

// Function: sub_002AB428
// Address: 0x2ab428 - 0x2ab460
void sub_002AB428_0x2ab428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB428_0x2ab428");
#endif

    switch (ctx->pc) {
        case 0x2ab44cu: goto label_2ab44c;
        default: break;
    }

    ctx->pc = 0x2ab428u;

    // 0x2ab428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ab428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ab42c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2ab42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2ab430: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ab430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ab434: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ab434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab438: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ab438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ab43c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2ab43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2ab440: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2ab440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ab444: 0xc0a9f0e  jal         func_2A7C38
    ctx->pc = 0x2AB444u;
    SET_GPR_U32(ctx, 31, 0x2AB44Cu);
    ctx->pc = 0x2AB448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB444u;
    // 0x2ab448: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7C38u, 0x2AB444u, 0x2AB44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB44Cu;
label_2ab44c:
    // 0x2ab44c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2ab44cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2ab450: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ab450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab454: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ab454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab458: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB458u;
        // 0x2ab45c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB460u;
}
