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

// Function: sub_002F7C20
// Address: 0x2f7c20 - 0x2f7c98
void sub_002F7C20_0x2f7c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7C20_0x2f7c20");
#endif

    switch (ctx->pc) {
        case 0x2f7c30u: goto label_2f7c30;
        default: break;
    }

    ctx->pc = 0x2f7c20u;

    // 0x2f7c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f7c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f7c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f7c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f7c28: 0xc0bdee8  jal         func_2F7BA0
    ctx->pc = 0x2F7C28u;
    SET_GPR_U32(ctx, 31, 0x2F7C30u);
    ctx->pc = 0x2F7BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7BA0u, 0x2F7C28u, 0x2F7C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7C30u;
label_2f7c30:
    // 0x2f7c30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f7c30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7c34: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f7c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f7c38: 0x28640003  slti        $a0, $v1, 0x3
    ctx->pc = 0x2f7c38u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2f7c3c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F7C3Cu;
    {
        const bool branch_taken_0x2f7c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F7C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7C3Cu;
        // 0x2f7c40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7c3c) {
            ctx->pc = 0x2F7C80u;
            goto label_2f7c80;
        }
    }
    ctx->pc = 0x2F7C44u;
    // 0x2f7c44: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7C44u;
    {
        const bool branch_taken_0x2f7c44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7C44u;
        // 0x2f7c48: 0x2862002b  slti        $v0, $v1, 0x2B (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)43) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7c44) {
            ctx->pc = 0x2F7C60u;
            goto label_2f7c60;
        }
    }
    ctx->pc = 0x2F7C4Cu;
    // 0x2f7c4c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2F7C4Cu;
    {
        const bool branch_taken_0x2f7c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7C4Cu;
        // 0x2f7c50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7c4c) {
            ctx->pc = 0x2F7C80u;
            goto label_2f7c80;
        }
    }
    ctx->pc = 0x2F7C54u;
    // 0x2f7c54: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2F7C54u;
    {
        const bool branch_taken_0x2f7c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7C54u;
        // 0x2f7c58: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7c54) {
            ctx->pc = 0x2F7C8Cu;
            goto label_2f7c8c;
        }
    }
    ctx->pc = 0x2F7C5Cu;
    // 0x2f7c5c: 0x0  nop
    ctx->pc = 0x2f7c5cu;
    // NOP
label_2f7c60:
    // 0x2f7c60: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F7C60u;
    {
        const bool branch_taken_0x2f7c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7C60u;
        // 0x2f7c64: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7c60) {
            ctx->pc = 0x2F7C88u;
            goto label_2f7c88;
        }
    }
    ctx->pc = 0x2F7C68u;
    // 0x2f7c68: 0x28620029  slti        $v0, $v1, 0x29
    ctx->pc = 0x2f7c68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x2f7c6c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F7C6Cu;
    {
        const bool branch_taken_0x2f7c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7C6Cu;
        // 0x2f7c70: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7c6c) {
            ctx->pc = 0x2F7C8Cu;
            goto label_2f7c8c;
        }
    }
    ctx->pc = 0x2F7C74u;
    // 0x2f7c74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F7C74u;
    {
        const bool branch_taken_0x2f7c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7C74u;
        // 0x2f7c78: 0x2405076c  addiu       $a1, $zero, 0x76C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1900));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7c74) {
            ctx->pc = 0x2F7C88u;
            goto label_2f7c88;
        }
    }
    ctx->pc = 0x2F7C7Cu;
    // 0x2f7c7c: 0x0  nop
    ctx->pc = 0x2f7c7cu;
    // NOP
label_2f7c80:
    // 0x2f7c80: 0x24051a90  addiu       $a1, $zero, 0x1A90
    ctx->pc = 0x2f7c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6800));
    // 0x2f7c84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f7c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f7c88:
    // 0x2f7c88: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f7c88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2f7c8c:
    // 0x2f7c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7C8Cu;
        // 0x2f7c90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7C94u;
    // 0x2f7c94: 0x0  nop
    ctx->pc = 0x2f7c94u;
    // NOP
    ctx->pc = 0x2f7c98u;
}
