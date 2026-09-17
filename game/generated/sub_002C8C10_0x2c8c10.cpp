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

// Function: sub_002C8C10
// Address: 0x2c8c10 - 0x2c8c58
void sub_002C8C10_0x2c8c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8C10_0x2c8c10");
#endif

    switch (ctx->pc) {
        case 0x2c8c24u: goto label_2c8c24;
        default: break;
    }

    ctx->pc = 0x2c8c10u;

    // 0x2c8c10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c8c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c8c14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c8c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c8c18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2c8c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2c8c1c: 0xc0b279c  jal         func_2C9E70
    ctx->pc = 0x2C8C1Cu;
    SET_GPR_U32(ctx, 31, 0x2C8C24u);
    ctx->pc = 0x2C8C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C8C1Cu;
    // 0x2c8c20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9E70u, 0x2C8C1Cu, 0x2C8C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C8C24u;
label_2c8c24:
    // 0x2c8c24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C8C24u;
    {
        const bool branch_taken_0x2c8c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C24u;
        // 0x2c8c28: 0x101840  sll         $v1, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c24) {
            ctx->pc = 0x2C8C48u;
            goto label_2c8c48;
        }
    }
    ctx->pc = 0x2C8C2Cu;
    // 0x2c8c2c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2c8c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2c8c30: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2c8c30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2c8c34: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x2c8c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2c8c38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c8c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c8c3c: 0x3c020018  lui         $v0, 0x18
    ctx->pc = 0x2c8c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24 << 16));
    // 0x2c8c40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c8c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c8c44: 0x8c428d38  lw          $v0, -0x72C8($v0)
    ctx->pc = 0x2c8c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937912)));
label_2c8c48:
    // 0x2c8c48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c8c48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c8c4c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c8c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c8c50: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8C50u;
        // 0x2c8c54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8C58u;
}
