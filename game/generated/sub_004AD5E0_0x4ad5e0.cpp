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

// Function: sub_004AD5E0
// Address: 0x4ad5e0 - 0x4ad670
void sub_004AD5E0_0x4ad5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD5E0_0x4ad5e0");
#endif

    ctx->pc = 0x4ad5e0u;

    // 0x4ad5e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ad5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ad5e4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ad5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ad5e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ad5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ad5ec: 0x24a50ce8  addiu       $a1, $a1, 0xCE8
    ctx->pc = 0x4ad5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3304));
    // 0x4ad5f0: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4ad5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4ad5f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4ad5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4ad5f8: 0x8464d690  lh          $a0, -0x2970($v1)
    ctx->pc = 0x4ad5f8u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x72D690u));
    // 0x4ad5fc: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4ad5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4ad600: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4ad600u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0CE8u));
    // 0x4ad604: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4ad604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4ad608: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ad608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ad60c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4ad60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4ad610: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4ad610u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4ad614: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4ad614u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ad618: 0x1066000d  beq         $v1, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x4AD618u;
    {
        const bool branch_taken_0x4ad618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x4AD61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD618u;
        // 0x4ad61c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad618) {
            ctx->pc = 0x4AD650u;
            goto label_4ad650;
        }
    }
    ctx->pc = 0x4AD620u;
    // 0x4ad620: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AD620u;
    {
        const bool branch_taken_0x4ad620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ad620) {
            ctx->pc = 0x4AD624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AD620u;
            // 0x4ad624: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD638u;
            goto label_4ad638;
        }
    }
    ctx->pc = 0x4AD628u;
    // 0x4ad628: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AD628u;
    {
        const bool branch_taken_0x4ad628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD628u;
        // 0x4ad62c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad628) {
            ctx->pc = 0x4AD648u;
            goto label_4ad648;
        }
    }
    ctx->pc = 0x4AD630u;
    // 0x4ad630: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4AD630u;
    {
        const bool branch_taken_0x4ad630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ad630) {
            ctx->pc = 0x4AD668u;
            goto label_4ad668;
        }
    }
    ctx->pc = 0x4AD638u;
label_4ad638:
    // 0x4ad638: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AD638u;
    {
        const bool branch_taken_0x4ad638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4AD63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD638u;
        // 0x4ad63c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad638) {
            ctx->pc = 0x4AD660u;
            goto label_4ad660;
        }
    }
    ctx->pc = 0x4AD640u;
    // 0x4ad640: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x4AD640u;
    {
        const bool branch_taken_0x4ad640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ad640) {
            ctx->pc = 0x4AD668u;
            goto label_4ad668;
        }
    }
    ctx->pc = 0x4AD648u;
label_4ad648:
    // 0x4ad648: 0x812b53c  j           func_4AD4F0
    ctx->pc = 0x4AD648u;
    ctx->pc = 0x4AD64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD648u;
    // 0x4ad64c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD4F0u, 0x4AD648u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4AD650u;
label_4ad650:
    // 0x4ad650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ad650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad654: 0x812b550  j           func_4AD540
    ctx->pc = 0x4AD654u;
    ctx->pc = 0x4AD658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD654u;
    // 0x4ad658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD540u, 0x4AD654u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4AD65Cu;
    // 0x4ad65c: 0x0  nop
    ctx->pc = 0x4ad65cu;
    // NOP
label_4ad660:
    // 0x4ad660: 0x812b560  j           func_4AD580
    ctx->pc = 0x4AD660u;
    ctx->pc = 0x4AD664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD660u;
    // 0x4ad664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD580u, 0x4AD660u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4AD668u;
label_4ad668:
    // 0x4ad668: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD668u;
        // 0x4ad66c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD670u;
}
