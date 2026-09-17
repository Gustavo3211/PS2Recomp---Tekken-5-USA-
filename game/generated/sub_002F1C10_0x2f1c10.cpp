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

// Function: sub_002F1C10
// Address: 0x2f1c10 - 0x2f1c50
void sub_002F1C10_0x2f1c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1C10_0x2f1c10");
#endif

    switch (ctx->pc) {
        case 0x2f1c24u: goto label_2f1c24;
        default: break;
    }

    ctx->pc = 0x2f1c10u;

    // 0x2f1c10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f1c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f1c14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f1c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f1c18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f1c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f1c1c: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2F1C1Cu;
    SET_GPR_U32(ctx, 31, 0x2F1C24u);
    ctx->pc = 0x2F1C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1C1Cu;
    // 0x2f1c20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2F1C1Cu, 0x2F1C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1C24u;
label_2f1c24:
    // 0x2f1c24: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2f1c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2f1c28: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2f1c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2f1c2c: 0x24421238  addiu       $v0, $v0, 0x1238
    ctx->pc = 0x2f1c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4664));
    // 0x2f1c30: 0x24630ac0  addiu       $v1, $v1, 0xAC0
    ctx->pc = 0x2f1c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2752));
    // 0x2f1c34: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2f1c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2f1c38: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2f1c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2f1c3c: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x2f1c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x2f1c40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f1c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f1c44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f1c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1c48: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1C48u;
        // 0x2f1c4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1C50u;
}
