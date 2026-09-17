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

// Function: sub_00105F70
// Address: 0x105f70 - 0x105fc8
void sub_00105F70_0x105f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105F70_0x105f70");
#endif

    switch (ctx->pc) {
        case 0x105fa8u: goto label_105fa8;
        case 0x105fb8u: goto label_105fb8;
        default: break;
    }

    ctx->pc = 0x105f70u;

    // 0x105f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x105f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x105f74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x105f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x105f78: 0x8c830868  lw          $v1, 0x868($a0)
    ctx->pc = 0x105f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2152)));
    // 0x105f7c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x105F7Cu;
    {
        const bool branch_taken_0x105f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x105f7c) {
            ctx->pc = 0x105FB0u;
            goto label_105fb0;
        }
    }
    ctx->pc = 0x105F84u;
    // 0x105f84: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x105F84u;
    {
        const bool branch_taken_0x105f84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x105f84) {
            ctx->pc = 0x105FB0u;
            goto label_105fb0;
        }
    }
    ctx->pc = 0x105F8Cu;
    // 0x105f8c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x105f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x105f90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x105F90u;
    {
        const bool branch_taken_0x105f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105F90u;
        // 0x105f94: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105f90) {
            ctx->pc = 0x105FB0u;
            goto label_105fb0;
        }
    }
    ctx->pc = 0x105F98u;
    // 0x105f98: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x105f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x105f9c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x105f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x105fa0: 0xc041186  jal         func_104618
    ctx->pc = 0x105FA0u;
    SET_GPR_U32(ctx, 31, 0x105FA8u);
    ctx->pc = 0x105FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105FA0u;
    // 0x105fa4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104618u, 0x105FA0u, 0x105FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105FA8u;
label_105fa8:
    // 0x105fa8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x105FA8u;
    {
        const bool branch_taken_0x105fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105FA8u;
        // 0x105fac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105fa8) {
            ctx->pc = 0x105FBCu;
            goto label_105fbc;
        }
    }
    ctx->pc = 0x105FB0u;
label_105fb0:
    // 0x105fb0: 0xc04177e  jal         func_105DF8
    ctx->pc = 0x105FB0u;
    SET_GPR_U32(ctx, 31, 0x105FB8u);
    ctx->pc = 0x105FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105FB0u;
    // 0x105fb4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105DF8u, 0x105FB0u, 0x105FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105FB8u;
label_105fb8:
    // 0x105fb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x105fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_105fbc:
    // 0x105fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x105FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105FBCu;
        // 0x105fc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105FC4u;
    // 0x105fc4: 0x0  nop
    ctx->pc = 0x105fc4u;
    // NOP
    ctx->pc = 0x105fc8u;
}
