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

// Function: sub_002CF460
// Address: 0x2cf460 - 0x2cf4e0
void sub_002CF460_0x2cf460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF460_0x2cf460");
#endif

    switch (ctx->pc) {
        case 0x2cf4a8u: goto label_2cf4a8;
        default: break;
    }

    ctx->pc = 0x2cf460u;

    // 0x2cf460: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2CF460u;
    {
        const bool branch_taken_0x2cf460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF460u;
        // 0x2cf464: 0xa0482d  daddu       $t1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf460) {
            ctx->pc = 0x2CF4D8u;
            goto label_2cf4d8;
        }
    }
    ctx->pc = 0x2CF468u;
    // 0x2cf468: 0x8c860898  lw          $a2, 0x898($a0)
    ctx->pc = 0x2cf468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2200)));
    // 0x2cf46c: 0x10c0001a  beqz        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CF46Cu;
    {
        const bool branch_taken_0x2cf46c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF46Cu;
        // 0x2cf470: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf46c) {
            ctx->pc = 0x2CF4D8u;
            goto label_2cf4d8;
        }
    }
    ctx->pc = 0x2CF474u;
    // 0x2cf474: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x2cf474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2cf478: 0x8f83a530  lw          $v1, -0x5AD0($gp)
    ctx->pc = 0x2cf478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x2cf47c: 0x94a4003c  lhu         $a0, 0x3C($a1)
    ctx->pc = 0x2cf47cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x2cf480: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x2cf480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x2cf484: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2cf484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2cf488: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2CF488u;
    {
        const bool branch_taken_0x2cf488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf488) {
            ctx->pc = 0x2CF4D8u;
            goto label_2cf4d8;
        }
    }
    ctx->pc = 0x2CF490u;
    // 0x2cf490: 0x8cc80048  lw          $t0, 0x48($a2)
    ctx->pc = 0x2cf490u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
    // 0x2cf494: 0x11000010  beqz        $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CF494u;
    {
        const bool branch_taken_0x2cf494 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf494) {
            ctx->pc = 0x2CF4D8u;
            goto label_2cf4d8;
        }
    }
    ctx->pc = 0x2CF49Cu;
    // 0x2cf49c: 0x1120000e  beqz        $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x2CF49Cu;
    {
        const bool branch_taken_0x2cf49c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf49c) {
            ctx->pc = 0x2CF4D8u;
            goto label_2cf4d8;
        }
    }
    ctx->pc = 0x2CF4A4u;
    // 0x2cf4a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2cf4a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cf4a8:
    // 0x2cf4a8: 0x72180  sll         $a0, $a3, 6
    ctx->pc = 0x2cf4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x2cf4ac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2cf4acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2cf4b0: 0x1042821  addu        $a1, $t0, $a0
    ctx->pc = 0x2cf4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2cf4b4: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x2cf4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2cf4b8: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2cf4b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cf4bc: 0x28e6000c  slti        $a2, $a3, 0xC
    ctx->pc = 0x2cf4bcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x2cf4c0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2cf4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2cf4c4: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x2cf4c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2cf4c8: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x2cf4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x2cf4cc: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x2cf4ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2cf4d0: 0x14c0fff5  bnez        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x2CF4D0u;
    {
        const bool branch_taken_0x2cf4d0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF4D0u;
        // 0x2cf4d4: 0x7c830020  sq          $v1, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf4d0) {
            ctx->pc = 0x2CF4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf4a8;
        }
    }
    ctx->pc = 0x2CF4D8u;
label_2cf4d8:
    // 0x2cf4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF4E0u;
}
