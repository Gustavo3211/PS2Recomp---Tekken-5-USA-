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

// Function: sub_00363DC0
// Address: 0x363dc0 - 0x363e18
void sub_00363DC0_0x363dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363DC0_0x363dc0");
#endif

    switch (ctx->pc) {
        case 0x363de0u: goto label_363de0;
        default: break;
    }

    ctx->pc = 0x363dc0u;

    // 0x363dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x363dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x363dc4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x363dc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x363dc8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x363dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x363dcc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x363dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363dd0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x363dd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x363dd4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x363dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x363dd8: 0xc0d7c20  jal         func_35F080
    ctx->pc = 0x363DD8u;
    SET_GPR_U32(ctx, 31, 0x363DE0u);
    ctx->pc = 0x363DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363DD8u;
    // 0x363ddc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F080u, 0x363DD8u, 0x363DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363DE0u;
label_363de0:
    // 0x363de0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x363DE0u;
    {
        const bool branch_taken_0x363de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x363de0) {
            ctx->pc = 0x363DE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363DE0u;
            // 0x363de4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x363E08u;
            goto label_363e08;
        }
    }
    ctx->pc = 0x363DE8u;
    // 0x363de8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x363de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363dec: 0x84a30008  lh          $v1, 0x8($a1)
    ctx->pc = 0x363decu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x363df0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x363df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x363df4: 0x84a4000c  lh          $a0, 0xC($a1)
    ctx->pc = 0x363df4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x363df8: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x363df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x363dfc: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x363dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x363e00: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x363e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x363e04: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x363e04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_363e08:
    // 0x363e08: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x363e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x363e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x363E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363E0Cu;
        // 0x363e10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363E14u;
    // 0x363e14: 0x0  nop
    ctx->pc = 0x363e14u;
    // NOP
    ctx->pc = 0x363e18u;
}
