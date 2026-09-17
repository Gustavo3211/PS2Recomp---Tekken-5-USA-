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

// Function: sub_0032C618
// Address: 0x32c618 - 0x32c698
void sub_0032C618_0x32c618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C618_0x32c618");
#endif

    switch (ctx->pc) {
        case 0x32c640u: goto label_32c640;
        case 0x32c670u: goto label_32c670;
        default: break;
    }

    ctx->pc = 0x32c618u;

    // 0x32c618: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x32c618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32c61c: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x32C61Cu;
    {
        const bool branch_taken_0x32c61c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c61c) {
            ctx->pc = 0x32C690u;
            goto label_32c690;
        }
    }
    ctx->pc = 0x32C624u;
    // 0x32c624: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32c624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x32c628: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x32c628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c62c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x32c62cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x32c630: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32c630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32c634: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x32C634u;
    {
        const bool branch_taken_0x32c634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C634u;
        // 0x32c638: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c634) {
            ctx->pc = 0x32C660u;
            goto label_32c660;
        }
    }
    ctx->pc = 0x32C63Cu;
    // 0x32c63c: 0x0  nop
    ctx->pc = 0x32c63cu;
    // NOP
label_32c640:
    // 0x32c640: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x32c640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x32c644: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x32c644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x32c648: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x32c648u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x32c64c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x32c650: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32c650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32c654: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x32c654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x32c658: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x32C658u;
    {
        const bool branch_taken_0x32c658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C658u;
        // 0x32c65c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c658) {
            ctx->pc = 0x32C640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32c640;
        }
    }
    ctx->pc = 0x32C660u;
label_32c660:
    // 0x32c660: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x32c660u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x32c664: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32c664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c668: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x32c668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x32c66c: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x32c66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_32c670:
    // 0x32c670: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x32c670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x32c674: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x32c674u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x32c678: 0x2ca20065  sltiu       $v0, $a1, 0x65
    ctx->pc = 0x32c678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)101) ? 1 : 0);
    // 0x32c67c: 0x0  nop
    ctx->pc = 0x32c67cu;
    // NOP
    // 0x32c680: 0x0  nop
    ctx->pc = 0x32c680u;
    // NOP
    // 0x32c684: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32C684u;
    {
        const bool branch_taken_0x32c684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C684u;
        // 0x32c688: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c684) {
            ctx->pc = 0x32C670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32c670;
        }
    }
    ctx->pc = 0x32C68Cu;
    // 0x32c68c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x32c68cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_32c690:
    // 0x32c690: 0x3e00008  jr          $ra
    ctx->pc = 0x32C690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C698u;
}
