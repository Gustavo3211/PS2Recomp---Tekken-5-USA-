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

// Function: sub_002B7A60
// Address: 0x2b7a60 - 0x2b7ab8
void sub_002B7A60_0x2b7a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7A60_0x2b7a60");
#endif

    switch (ctx->pc) {
        case 0x2b7a78u: goto label_2b7a78;
        default: break;
    }

    ctx->pc = 0x2b7a60u;

    // 0x2b7a60: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x2b7a60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b7a64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b7a64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7a68: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B7A68u;
    {
        const bool branch_taken_0x2b7a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A68u;
        // 0x2b7a6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7a68) {
            ctx->pc = 0x2B7A94u;
            goto label_2b7a94;
        }
    }
    ctx->pc = 0x2B7A70u;
    // 0x2b7a70: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b7a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7a74: 0x0  nop
    ctx->pc = 0x2b7a74u;
    // NOP
label_2b7a78:
    // 0x2b7a78: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2b7a78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2b7a7c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2b7a7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b7a80: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x2b7a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2b7a84: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2b7a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7a88: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x2b7a88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b7a8c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2B7A8Cu;
    {
        const bool branch_taken_0x2b7a8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B7A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7A8Cu;
        // 0x2b7a90: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7a8c) {
            ctx->pc = 0x2B7A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b7a78;
        }
    }
    ctx->pc = 0x2B7A94u;
label_2b7a94:
    // 0x2b7a94: 0x24c403ff  addiu       $a0, $a2, 0x3FF
    ctx->pc = 0x2b7a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1023));
    // 0x2b7a98: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x2b7a98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2b7a9c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2b7a9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7aa0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2b7aa0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2b7aa4: 0x21283  sra         $v0, $v0, 10
    ctx->pc = 0x2b7aa4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 10));
    // 0x2b7aa8: 0x21280  sll         $v0, $v0, 10
    ctx->pc = 0x2b7aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x2b7aac: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7AACu;
        // 0x2b7ab0: 0xc21023  subu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7AB4u;
    // 0x2b7ab4: 0x0  nop
    ctx->pc = 0x2b7ab4u;
    // NOP
    ctx->pc = 0x2b7ab8u;
}
