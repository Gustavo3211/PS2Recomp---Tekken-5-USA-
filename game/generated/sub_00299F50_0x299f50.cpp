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

// Function: sub_00299F50
// Address: 0x299f50 - 0x299fa8
void sub_00299F50_0x299f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299F50_0x299f50");
#endif

    ctx->pc = 0x299f50u;

    // 0x299f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x299f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x299f54: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x299f54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299f58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x299f5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x299f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299f60: 0x8cc30160  lw          $v1, 0x160($a2)
    ctx->pc = 0x299f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 352)));
    // 0x299f64: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x299F64u;
    {
        const bool branch_taken_0x299f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x299F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F64u;
        // 0x299f68: 0x28650002  slti        $a1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x299f64) {
            ctx->pc = 0x299F88u;
            goto label_299f88;
        }
    }
    ctx->pc = 0x299F6Cu;
    // 0x299f6c: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x299F6Cu;
    {
        const bool branch_taken_0x299f6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x299F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299F6Cu;
        // 0x299f70: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299f6c) {
            ctx->pc = 0x299F98u;
            goto label_299f98;
        }
    }
    ctx->pc = 0x299F74u;
    // 0x299f74: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x299F74u;
    {
        const bool branch_taken_0x299f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x299f74) {
            ctx->pc = 0x299F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x299F74u;
            // 0x299f78: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299F9Cu;
            goto label_299f9c;
        }
    }
    ctx->pc = 0x299F7Cu;
    // 0x299f7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299f7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299f80: 0x80a67ea  j           func_299FA8
    ctx->pc = 0x299F80u;
    ctx->pc = 0x299F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299F80u;
    // 0x299f84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299FA8u;
    sub_00299FA8_0x299fa8(rdram, ctx, runtime); return;
    ctx->pc = 0x299F88u;
label_299f88:
    // 0x299f88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299f8c: 0x80a67fe  j           func_299FF8
    ctx->pc = 0x299F8Cu;
    ctx->pc = 0x299F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299F8Cu;
    // 0x299f90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299FF8u, 0x299F8Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x299F94u;
    // 0x299f94: 0x0  nop
    ctx->pc = 0x299f94u;
    // NOP
label_299f98:
    // 0x299f98: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x299f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_299f9c:
    // 0x299f9c: 0x80a6854  j           func_29A150
    ctx->pc = 0x299F9Cu;
    ctx->pc = 0x299FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299F9Cu;
    // 0x299fa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A150u;
    sub_0029A150_0x29a150(rdram, ctx, runtime); return;
    ctx->pc = 0x299FA4u;
    // 0x299fa4: 0x0  nop
    ctx->pc = 0x299fa4u;
    // NOP
    ctx->pc = 0x299fa8u;
}
