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

// Function: sub_0029D5F0
// Address: 0x29d5f0 - 0x29d650
void sub_0029D5F0_0x29d5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D5F0_0x29d5f0");
#endif

    ctx->pc = 0x29d5f0u;

    // 0x29d5f0: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x29d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x29d5f4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29D5F4u;
    {
        const bool branch_taken_0x29d5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d5f4) {
            ctx->pc = 0x29D5F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D5F4u;
            // 0x29d5f8: 0x8c830150  lw          $v1, 0x150($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D60Cu;
            goto label_29d60c;
        }
    }
    ctx->pc = 0x29D5FCu;
    // 0x29d5fc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29d600: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29D600u;
    {
        const bool branch_taken_0x29d600 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x29d600) {
            ctx->pc = 0x29D63Cu;
            goto label_29d63c;
        }
    }
    ctx->pc = 0x29D608u;
    // 0x29d608: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x29d608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_29d60c:
    // 0x29d60c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29d610: 0x10c2000a  beq         $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29D610u;
    {
        const bool branch_taken_0x29d610 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x29d610) {
            ctx->pc = 0x29D63Cu;
            goto label_29d63c;
        }
    }
    ctx->pc = 0x29D618u;
    // 0x29d618: 0x18c0000b  blez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x29D618u;
    {
        const bool branch_taken_0x29d618 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x29D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D618u;
        // 0x29d61c: 0x24e40001  addiu       $a0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d618) {
            ctx->pc = 0x29D648u;
            goto label_29d648;
        }
    }
    ctx->pc = 0x29D620u;
    // 0x29d620: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x29d620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x29d624: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x29d624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x29d628: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29d628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29d62c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29d62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29d630: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x29d630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x29d634: 0x10640004  beq         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D634u;
    {
        const bool branch_taken_0x29d634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x29d634) {
            ctx->pc = 0x29D648u;
            goto label_29d648;
        }
    }
    ctx->pc = 0x29D63Cu;
label_29d63c:
    // 0x29d63c: 0x3e00008  jr          $ra
    ctx->pc = 0x29D63Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D63Cu;
        // 0x29d640: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D63Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D644u;
    // 0x29d644: 0x0  nop
    ctx->pc = 0x29d644u;
    // NOP
label_29d648:
    // 0x29d648: 0x3e00008  jr          $ra
    ctx->pc = 0x29D648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D648u;
        // 0x29d64c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D650u;
}
