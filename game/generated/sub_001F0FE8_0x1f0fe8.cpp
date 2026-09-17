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

// Function: sub_001F0FE8
// Address: 0x1f0fe8 - 0x1f1048
void sub_001F0FE8_0x1f0fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0FE8_0x1f0fe8");
#endif

    switch (ctx->pc) {
        case 0x1f103cu: goto label_1f103c;
        default: break;
    }

    ctx->pc = 0x1f0fe8u;

    // 0x1f0fe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f0fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f0fec: 0x2782a848  addiu       $v0, $gp, -0x57B8
    ctx->pc = 0x1f0fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944840));
    // 0x1f0ff0: 0x2783a850  addiu       $v1, $gp, -0x57B0
    ctx->pc = 0x1f0ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944848));
    // 0x1f0ff4: 0x2784a858  addiu       $a0, $gp, -0x57A8
    ctx->pc = 0x1f0ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944856));
    // 0x1f0ff8: 0x2785a860  addiu       $a1, $gp, -0x57A0
    ctx->pc = 0x1f0ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944864));
    // 0x1f0ffc: 0x2786a868  addiu       $a2, $gp, -0x5798
    ctx->pc = 0x1f0ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944872));
    // 0x1f1000: 0x2787a870  addiu       $a3, $gp, -0x5790
    ctx->pc = 0x1f1000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944880));
    // 0x1f1004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f1004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f1008: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f1008u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1f100c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1f100cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1f1010: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1f1010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1f1014: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1f1014u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x1f1018: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1f1018u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1f101c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x1f101cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x1f1020: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f1020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f1024: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1f1024u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1f1028: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1f1028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1f102c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x1f102cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x1f1030: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1f1030u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x1f1034: 0xc084ec0  jal         func_213B00
    ctx->pc = 0x1F1034u;
    SET_GPR_U32(ctx, 31, 0x1F103Cu);
    ctx->pc = 0x1F1038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1034u;
    // 0x1f1038: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x213B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213B00u, 0x1F1034u, 0x1F103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F103Cu;
label_1f103c:
    // 0x1f103c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f103cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1040: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1040u;
        // 0x1f1044: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1040u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1048u;
}
