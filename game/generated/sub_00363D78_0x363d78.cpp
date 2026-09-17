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

// Function: sub_00363D78
// Address: 0x363d78 - 0x363dc0
void sub_00363D78_0x363d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363D78_0x363d78");
#endif

    switch (ctx->pc) {
        case 0x363d98u: goto label_363d98;
        default: break;
    }

    ctx->pc = 0x363d78u;

    // 0x363d78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x363d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x363d7c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x363d7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x363d80: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x363d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x363d84: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x363d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363d88: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x363d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x363d8c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x363d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x363d90: 0xc0d7c20  jal         func_35F080
    ctx->pc = 0x363D90u;
    SET_GPR_U32(ctx, 31, 0x363D98u);
    ctx->pc = 0x363D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363D90u;
    // 0x363d94: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F080u, 0x363D90u, 0x363D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363D98u;
label_363d98:
    // 0x363d98: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x363D98u;
    {
        const bool branch_taken_0x363d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x363d98) {
            ctx->pc = 0x363D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363D98u;
            // 0x363d9c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x363DB0u;
            goto label_363db0;
        }
    }
    ctx->pc = 0x363DA0u;
    // 0x363da0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x363da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363da4: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x363da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x363da8: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x363da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x363dac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x363dacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_363db0:
    // 0x363db0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x363db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x363db4: 0x3e00008  jr          $ra
    ctx->pc = 0x363DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363DB4u;
        // 0x363db8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363DBCu;
    // 0x363dbc: 0x0  nop
    ctx->pc = 0x363dbcu;
    // NOP
    ctx->pc = 0x363dc0u;
}
