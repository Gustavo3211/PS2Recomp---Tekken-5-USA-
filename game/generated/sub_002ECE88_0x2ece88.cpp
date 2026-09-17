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

// Function: sub_002ECE88
// Address: 0x2ece88 - 0x2eced0
void sub_002ECE88_0x2ece88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ECE88_0x2ece88");
#endif

    switch (ctx->pc) {
        case 0x2ecec4u: goto label_2ecec4;
        default: break;
    }

    ctx->pc = 0x2ece88u;

    // 0x2ece88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ece88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ece8c: 0x24850140  addiu       $a1, $a0, 0x140
    ctx->pc = 0x2ece8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 320));
    // 0x2ece90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ece90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ece94: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ece94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ece98: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ECE98u;
    {
        const bool branch_taken_0x2ece98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ece98) {
            ctx->pc = 0x2ECE9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ECE98u;
            // 0x2ece9c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ECEB4u;
            goto label_2eceb4;
        }
    }
    ctx->pc = 0x2ECEA0u;
    // 0x2ecea0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ecea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2ecea4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ecea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ecea8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ECEA8u;
    {
        const bool branch_taken_0x2ecea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ecea8) {
            ctx->pc = 0x2ECEBCu;
            goto label_2ecebc;
        }
    }
    ctx->pc = 0x2ECEB0u;
    // 0x2eceb0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eceb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eceb4:
    // 0x2eceb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eceb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eceb8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eceb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2ecebc:
    // 0x2ecebc: 0xc0bb46c  jal         func_2ED1B0
    ctx->pc = 0x2ECEBCu;
    SET_GPR_U32(ctx, 31, 0x2ECEC4u);
    ctx->pc = 0x2ED1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED1B0u, 0x2ECEBCu, 0x2ECEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ECEC4u;
label_2ecec4:
    // 0x2ecec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ecec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ecec8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ECEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ECEC8u;
        // 0x2ececc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ECEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ECED0u;
}
