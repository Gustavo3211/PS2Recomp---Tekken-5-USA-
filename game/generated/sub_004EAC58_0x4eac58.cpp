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

// Function: sub_004EAC58
// Address: 0x4eac58 - 0x4eace8
void sub_004EAC58_0x4eac58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EAC58_0x4eac58");
#endif

    switch (ctx->pc) {
        case 0x4eacb0u: goto label_4eacb0;
        case 0x4eacc0u: goto label_4eacc0;
        case 0x4eacd0u: goto label_4eacd0;
        default: break;
    }

    ctx->pc = 0x4eac58u;

    // 0x4eac58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4eac58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4eac5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4eac5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4eac60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4eac60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4eac64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4eac64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eac68: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4eac68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4eac6c: 0x96020162  lhu         $v0, 0x162($s0)
    ctx->pc = 0x4eac6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 354)));
    // 0x4eac70: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4eac70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4eac74: 0x22c43  sra         $a1, $v0, 17
    ctx->pc = 0x4eac74u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4eac78: 0x10a3000f  beq         $a1, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x4EAC78u;
    {
        const bool branch_taken_0x4eac78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4EAC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAC78u;
        // 0x4eac7c: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eac78) {
            ctx->pc = 0x4EACB8u;
            goto label_4eacb8;
        }
    }
    ctx->pc = 0x4EAC80u;
    // 0x4eac80: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4EAC80u;
    {
        const bool branch_taken_0x4eac80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eac80) {
            ctx->pc = 0x4EAC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EAC80u;
            // 0x4eac84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EAC98u;
            goto label_4eac98;
        }
    }
    ctx->pc = 0x4EAC88u;
    // 0x4eac88: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4EAC88u;
    {
        const bool branch_taken_0x4eac88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eac88) {
            ctx->pc = 0x4EACA8u;
            goto label_4eaca8;
        }
    }
    ctx->pc = 0x4EAC90u;
    // 0x4eac90: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x4EAC90u;
    {
        const bool branch_taken_0x4eac90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EAC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAC90u;
        // 0x4eac94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eac90) {
            ctx->pc = 0x4EACD4u;
            goto label_4eacd4;
        }
    }
    ctx->pc = 0x4EAC98u;
label_4eac98:
    // 0x4eac98: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4EAC98u;
    {
        const bool branch_taken_0x4eac98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x4eac98) {
            ctx->pc = 0x4EACC8u;
            goto label_4eacc8;
        }
    }
    ctx->pc = 0x4EACA0u;
    // 0x4eaca0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4EACA0u;
    {
        const bool branch_taken_0x4eaca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EACA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EACA0u;
        // 0x4eaca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eaca0) {
            ctx->pc = 0x4EACD4u;
            goto label_4eacd4;
        }
    }
    ctx->pc = 0x4EACA8u;
label_4eaca8:
    // 0x4eaca8: 0xc13bcb8  jal         func_4EF2E0
    ctx->pc = 0x4EACA8u;
    SET_GPR_U32(ctx, 31, 0x4EACB0u);
    ctx->pc = 0x4EF2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EF2E0u, 0x4EACA8u, 0x4EACB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EACB0u;
label_4eacb0:
    // 0x4eacb0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4EACB0u;
    {
        const bool branch_taken_0x4eacb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EACB0u;
        // 0x4eacb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eacb0) {
            ctx->pc = 0x4EACD4u;
            goto label_4eacd4;
        }
    }
    ctx->pc = 0x4EACB8u;
label_4eacb8:
    // 0x4eacb8: 0xc13ab3a  jal         func_4EACE8
    ctx->pc = 0x4EACB8u;
    SET_GPR_U32(ctx, 31, 0x4EACC0u);
    ctx->pc = 0x4EACE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EACE8u, 0x4EACB8u, 0x4EACC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EACC0u;
label_4eacc0:
    // 0x4eacc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4EACC0u;
    {
        const bool branch_taken_0x4eacc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EACC0u;
        // 0x4eacc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eacc0) {
            ctx->pc = 0x4EACD4u;
            goto label_4eacd4;
        }
    }
    ctx->pc = 0x4EACC8u;
label_4eacc8:
    // 0x4eacc8: 0xc13ab52  jal         func_4EAD48
    ctx->pc = 0x4EACC8u;
    SET_GPR_U32(ctx, 31, 0x4EACD0u);
    ctx->pc = 0x4EAD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EAD48u, 0x4EACC8u, 0x4EACD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EACD0u;
label_4eacd0:
    // 0x4eacd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4eacd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4eacd4:
    // 0x4eacd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4eacd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4eacd8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4eacd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4eacdc: 0x813ab6a  j           func_4EADA8
    ctx->pc = 0x4EACDCu;
    ctx->pc = 0x4EACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EACDCu;
    // 0x4eace0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EADA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EADA8u, 0x4EACDCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4EACE4u;
    // 0x4eace4: 0x0  nop
    ctx->pc = 0x4eace4u;
    // NOP
    ctx->pc = 0x4eace8u;
}
