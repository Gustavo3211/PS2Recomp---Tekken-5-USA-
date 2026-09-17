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

// Function: sub_00284CD8
// Address: 0x284cd8 - 0x284d40
void sub_00284CD8_0x284cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284CD8_0x284cd8");
#endif

    switch (ctx->pc) {
        case 0x284cf4u: goto label_284cf4;
        case 0x284d1cu: goto label_284d1c;
        default: break;
    }

    ctx->pc = 0x284cd8u;

    // 0x284cd8: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x284cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x284cdc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x284cdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x284ce0: 0x24a53b50  addiu       $a1, $a1, 0x3B50
    ctx->pc = 0x284ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15184));
    // 0x284ce4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x284ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x284ce8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x284ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x284cec: 0xc04a43b  jal         func_1290EC
    ctx->pc = 0x284CECu;
    SET_GPR_U32(ctx, 31, 0x284CF4u);
    ctx->pc = 0x284CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284CECu;
    // 0x284cf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x284CECu, 0x284CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284CF4u;
label_284cf4:
    // 0x284cf4: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x284cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x284cf8: 0x2783b2d8  addiu       $v1, $gp, -0x4D28
    ctx->pc = 0x284cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947544));
    // 0x284cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284d00: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284D00u;
    {
        const bool branch_taken_0x284d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284D00u;
        // 0x284d04: 0x24a53b58  addiu       $a1, $a1, 0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d00) {
            ctx->pc = 0x284D14u;
            goto label_284d14;
        }
    }
    ctx->pc = 0x284D08u;
    // 0x284d08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x284d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x284d0c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x284d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x284d10: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x284d10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_284d14:
    // 0x284d14: 0xc04a43b  jal         func_1290EC
    ctx->pc = 0x284D14u;
    SET_GPR_U32(ctx, 31, 0x284D1Cu);
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x284D14u, 0x284D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284D1Cu;
label_284d1c:
    // 0x284d1c: 0x2783b2dc  addiu       $v1, $gp, -0x4D24
    ctx->pc = 0x284d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947548));
    // 0x284d20: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284D20u;
    {
        const bool branch_taken_0x284d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284D20u;
        // 0x284d24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d20) {
            ctx->pc = 0x284D34u;
            goto label_284d34;
        }
    }
    ctx->pc = 0x284D28u;
    // 0x284d28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x284d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x284d2c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x284d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x284d30: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x284d30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_284d34:
    // 0x284d34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x284d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x284d38: 0x3e00008  jr          $ra
    ctx->pc = 0x284D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284D38u;
        // 0x284d3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284D40u;
}
