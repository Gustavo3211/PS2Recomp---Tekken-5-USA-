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

// Function: sub_00298FB0
// Address: 0x298fb0 - 0x298fe8
void sub_00298FB0_0x298fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298FB0_0x298fb0");
#endif

    switch (ctx->pc) {
        case 0x298fd8u: goto label_298fd8;
        default: break;
    }

    ctx->pc = 0x298fb0u;

    // 0x298fb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x298fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x298fb4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x298fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x298fb8: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x298FB8u;
    {
        const bool branch_taken_0x298fb8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x298FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298FB8u;
        // 0x298fbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298fb8) {
            ctx->pc = 0x298FD8u;
            goto label_298fd8;
        }
    }
    ctx->pc = 0x298FC0u;
    // 0x298fc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x298fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298fc4: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x298FC4u;
    {
        const bool branch_taken_0x298fc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x298FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298FC4u;
        // 0x298fc8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298fc4) {
            ctx->pc = 0x298FDCu;
            goto label_298fdc;
        }
    }
    ctx->pc = 0x298FCCu;
    // 0x298fcc: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x298fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x298fd0: 0xc0a6276  jal         func_2989D8
    ctx->pc = 0x298FD0u;
    SET_GPR_U32(ctx, 31, 0x298FD8u);
    ctx->pc = 0x298FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298FD0u;
    // 0x298fd4: 0x2484c5b0  addiu       $a0, $a0, -0x3A50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2989D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2989D8u, 0x298FD0u, 0x298FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298FD8u;
label_298fd8:
    // 0x298fd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298fd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_298fdc:
    // 0x298fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x298FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298FDCu;
        // 0x298fe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298FE4u;
    // 0x298fe4: 0x0  nop
    ctx->pc = 0x298fe4u;
    // NOP
    ctx->pc = 0x298fe8u;
}
