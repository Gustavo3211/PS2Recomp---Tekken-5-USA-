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

// Function: sub_00253B90
// Address: 0x253b90 - 0x253be0
void sub_00253B90_0x253b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253B90_0x253b90");
#endif

    switch (ctx->pc) {
        case 0x253bb8u: goto label_253bb8;
        default: break;
    }

    ctx->pc = 0x253b90u;

    // 0x253b90: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x253b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x253b94: 0x14a20010  bne         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x253B94u;
    {
        const bool branch_taken_0x253b94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x253b94) {
            ctx->pc = 0x253BD8u;
            goto label_253bd8;
        }
    }
    ctx->pc = 0x253B9Cu;
    // 0x253b9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253ba0: 0x1482000d  bne         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x253BA0u;
    {
        const bool branch_taken_0x253ba0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x253ba0) {
            ctx->pc = 0x253BD8u;
            goto label_253bd8;
        }
    }
    ctx->pc = 0x253BA8u;
    // 0x253ba8: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x253ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x253bac: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x253bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x253bb0: 0x24427f70  addiu       $v0, $v0, 0x7F70
    ctx->pc = 0x253bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32624));
    // 0x253bb4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x253bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_253bb8:
    // 0x253bb8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x253bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x253bbc: 0xa440000c  sh          $zero, 0xC($v0)
    ctx->pc = 0x253bbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x253bc0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x253bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x253bc4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x253bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x253bc8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x253bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x253bcc: 0xa440000e  sh          $zero, 0xE($v0)
    ctx->pc = 0x253bccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x253bd0: 0x1464fff9  bne         $v1, $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x253BD0u;
    {
        const bool branch_taken_0x253bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x253BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253BD0u;
        // 0x253bd4: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253bd0) {
            ctx->pc = 0x253BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_253bb8;
        }
    }
    ctx->pc = 0x253BD8u;
label_253bd8:
    // 0x253bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x253BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253BE0u;
}
