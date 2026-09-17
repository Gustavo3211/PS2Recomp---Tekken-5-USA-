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

// Function: sub_00284D40
// Address: 0x284d40 - 0x284da8
void sub_00284D40_0x284d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284D40_0x284d40");
#endif

    switch (ctx->pc) {
        case 0x284d5cu: goto label_284d5c;
        case 0x284d84u: goto label_284d84;
        default: break;
    }

    ctx->pc = 0x284d40u;

    // 0x284d40: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x284d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x284d44: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x284d44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x284d48: 0x24a53b50  addiu       $a1, $a1, 0x3B50
    ctx->pc = 0x284d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15184));
    // 0x284d4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x284d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x284d50: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x284d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x284d54: 0xc04a43b  jal         func_1290EC
    ctx->pc = 0x284D54u;
    SET_GPR_U32(ctx, 31, 0x284D5Cu);
    ctx->pc = 0x284D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284D54u;
    // 0x284d58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x284D54u, 0x284D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284D5Cu;
label_284d5c:
    // 0x284d5c: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x284d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x284d60: 0x2783b2d8  addiu       $v1, $gp, -0x4D28
    ctx->pc = 0x284d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947544));
    // 0x284d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x284d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284d68: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284D68u;
    {
        const bool branch_taken_0x284d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284D68u;
        // 0x284d6c: 0x24a53b58  addiu       $a1, $a1, 0x3B58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d68) {
            ctx->pc = 0x284D7Cu;
            goto label_284d7c;
        }
    }
    ctx->pc = 0x284D70u;
    // 0x284d70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x284d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x284d74: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x284d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x284d78: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x284d78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_284d7c:
    // 0x284d7c: 0xc04a43b  jal         func_1290EC
    ctx->pc = 0x284D7Cu;
    SET_GPR_U32(ctx, 31, 0x284D84u);
    ctx->pc = 0x1290ECu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1290ECu, 0x284D7Cu, 0x284D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284D84u;
label_284d84:
    // 0x284d84: 0x2783b2dc  addiu       $v1, $gp, -0x4D24
    ctx->pc = 0x284d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947548));
    // 0x284d88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284D88u;
    {
        const bool branch_taken_0x284d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284D88u;
        // 0x284d8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d88) {
            ctx->pc = 0x284D9Cu;
            goto label_284d9c;
        }
    }
    ctx->pc = 0x284D90u;
    // 0x284d90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x284d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x284d94: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x284d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x284d98: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x284d98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_284d9c:
    // 0x284d9c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x284d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x284da0: 0x3e00008  jr          $ra
    ctx->pc = 0x284DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284DA0u;
        // 0x284da4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x284DA8u;
}
