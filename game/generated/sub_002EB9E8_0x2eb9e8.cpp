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

// Function: sub_002EB9E8
// Address: 0x2eb9e8 - 0x2eba30
void sub_002EB9E8_0x2eb9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB9E8_0x2eb9e8");
#endif

    switch (ctx->pc) {
        case 0x2eba24u: goto label_2eba24;
        default: break;
    }

    ctx->pc = 0x2eb9e8u;

    // 0x2eb9e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eb9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eb9ec: 0x24850110  addiu       $a1, $a0, 0x110
    ctx->pc = 0x2eb9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x2eb9f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eb9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eb9f4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2eb9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eb9f8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB9F8u;
    {
        const bool branch_taken_0x2eb9f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb9f8) {
            ctx->pc = 0x2EB9FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB9F8u;
            // 0x2eb9fc: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EBA14u;
            goto label_2eba14;
        }
    }
    ctx->pc = 0x2EBA00u;
    // 0x2eba00: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eba00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2eba04: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2eba08: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EBA08u;
    {
        const bool branch_taken_0x2eba08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eba08) {
            ctx->pc = 0x2EBA1Cu;
            goto label_2eba1c;
        }
    }
    ctx->pc = 0x2EBA10u;
    // 0x2eba10: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eba10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eba14:
    // 0x2eba14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eba14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eba18: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eba18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2eba1c:
    // 0x2eba1c: 0xc0bb4b0  jal         func_2ED2C0
    ctx->pc = 0x2EBA1Cu;
    SET_GPR_U32(ctx, 31, 0x2EBA24u);
    ctx->pc = 0x2EBA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EBA1Cu;
    // 0x2eba20: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED2C0u, 0x2EBA1Cu, 0x2EBA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EBA24u;
label_2eba24:
    // 0x2eba24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eba24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eba28: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBA28u;
        // 0x2eba2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBA30u;
}
