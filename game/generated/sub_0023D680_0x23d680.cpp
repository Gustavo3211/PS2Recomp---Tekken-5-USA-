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

// Function: sub_0023D680
// Address: 0x23d680 - 0x23d6d0
void sub_0023D680_0x23d680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023D680_0x23d680");
#endif

    switch (ctx->pc) {
        case 0x23d6a8u: goto label_23d6a8;
        default: break;
    }

    ctx->pc = 0x23d680u;

    // 0x23d680: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x23d680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x23d684: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23D684u;
    {
        const bool branch_taken_0x23d684 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d684) {
            ctx->pc = 0x23D6C4u;
            goto label_23d6c4;
        }
    }
    ctx->pc = 0x23D68Cu;
    // 0x23d68c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23d690: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23D690u;
    {
        const bool branch_taken_0x23d690 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d690) {
            ctx->pc = 0x23D6C4u;
            goto label_23d6c4;
        }
    }
    ctx->pc = 0x23D698u;
    // 0x23d698: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x23d698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23d69c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x23d69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x23d6a0: 0x2442f3d0  addiu       $v0, $v0, -0xC30
    ctx->pc = 0x23d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964176));
    // 0x23d6a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23d6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23d6a8:
    // 0x23d6a8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x23d6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x23d6ac: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x23d6acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x23d6b0: 0x0  nop
    ctx->pc = 0x23d6b0u;
    // NOP
    // 0x23d6b4: 0x0  nop
    ctx->pc = 0x23d6b4u;
    // NOP
    // 0x23d6b8: 0x0  nop
    ctx->pc = 0x23d6b8u;
    // NOP
    // 0x23d6bc: 0x1483fffa  bne         $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23D6BCu;
    {
        const bool branch_taken_0x23d6bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x23D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6BCu;
        // 0x23d6c0: 0x24420050  addiu       $v0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d6bc) {
            ctx->pc = 0x23D6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d6a8;
        }
    }
    ctx->pc = 0x23D6C4u;
label_23d6c4:
    // 0x23d6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x23D6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23D6CCu;
    // 0x23d6cc: 0x0  nop
    ctx->pc = 0x23d6ccu;
    // NOP
    ctx->pc = 0x23d6d0u;
}
