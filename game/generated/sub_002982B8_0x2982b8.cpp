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

// Function: sub_002982B8
// Address: 0x2982b8 - 0x2982f0
void sub_002982B8_0x2982b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002982B8_0x2982b8");
#endif

    switch (ctx->pc) {
        case 0x2982e0u: goto label_2982e0;
        default: break;
    }

    ctx->pc = 0x2982b8u;

    // 0x2982b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2982b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2982bc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2982bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2982c0: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2982C0u;
    {
        const bool branch_taken_0x2982c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2982C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2982C0u;
        // 0x2982c4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2982c0) {
            ctx->pc = 0x2982E0u;
            goto label_2982e0;
        }
    }
    ctx->pc = 0x2982C8u;
    // 0x2982c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2982c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2982cc: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2982CCu;
    {
        const bool branch_taken_0x2982cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2982D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2982CCu;
        // 0x2982d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2982cc) {
            ctx->pc = 0x2982E4u;
            goto label_2982e4;
        }
    }
    ctx->pc = 0x2982D4u;
    // 0x2982d4: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2982d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2982d8: 0xc0a5fd6  jal         func_297F58
    ctx->pc = 0x2982D8u;
    SET_GPR_U32(ctx, 31, 0x2982E0u);
    ctx->pc = 0x2982DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2982D8u;
    // 0x2982dc: 0x2484c500  addiu       $a0, $a0, -0x3B00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297F58u, 0x2982D8u, 0x2982E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2982E0u;
label_2982e0:
    // 0x2982e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2982e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2982e4:
    // 0x2982e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2982E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2982E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2982E4u;
        // 0x2982e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2982E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2982ECu;
    // 0x2982ec: 0x0  nop
    ctx->pc = 0x2982ecu;
    // NOP
    ctx->pc = 0x2982f0u;
}
