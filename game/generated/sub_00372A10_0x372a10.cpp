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

// Function: sub_00372A10
// Address: 0x372a10 - 0x372ab8
void sub_00372A10_0x372a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372A10_0x372a10");
#endif

    switch (ctx->pc) {
        case 0x372a40u: goto label_372a40;
        default: break;
    }

    ctx->pc = 0x372a10u;

    // 0x372a10: 0x3e00008  jr          $ra
    ctx->pc = 0x372A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372A18u;
    // 0x372a18: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x372a18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372a1c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x372a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x372a20: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x372a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x372a24: 0x25230050  addiu       $v1, $t1, 0x50
    ctx->pc = 0x372a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
    // 0x372a28: 0x244202d8  addiu       $v0, $v0, 0x2D8
    ctx->pc = 0x372a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
    // 0x372a2c: 0xad220008  sw          $v0, 0x8($t1)
    ctx->pc = 0x372a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 2));
    // 0x372a30: 0x25220058  addiu       $v0, $t1, 0x58
    ctx->pc = 0x372a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 88));
    // 0x372a34: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x372a34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x372a38: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x372a38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x372a3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x372a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_372a40:
    // 0x372a40: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x372a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x372a44: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x372a44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x372a48: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x372a48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x372a4c: 0x0  nop
    ctx->pc = 0x372a4cu;
    // NOP
    // 0x372a50: 0x0  nop
    ctx->pc = 0x372a50u;
    // NOP
    // 0x372a54: 0x1483fffa  bne         $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x372A54u;
    {
        const bool branch_taken_0x372a54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x372A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372A54u;
        // 0x372a58: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372a54) {
            ctx->pc = 0x372A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_372a40;
        }
    }
    ctx->pc = 0x372A5Cu;
    // 0x372a5c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x372a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x372a60: 0x25220110  addiu       $v0, $t1, 0x110
    ctx->pc = 0x372a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 272));
    // 0x372a64: 0x25250158  addiu       $a1, $t1, 0x158
    ctx->pc = 0x372a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 344));
    // 0x372a68: 0x252400b8  addiu       $a0, $t1, 0xB8
    ctx->pc = 0x372a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 184));
    // 0x372a6c: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x372a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x372a70: 0x25260140  addiu       $a2, $t1, 0x140
    ctx->pc = 0x372a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 320));
    // 0x372a74: 0x25270148  addiu       $a3, $t1, 0x148
    ctx->pc = 0x372a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 328));
    // 0x372a78: 0x24630eb0  addiu       $v1, $v1, 0xEB0
    ctx->pc = 0x372a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3760));
    // 0x372a7c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x372a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x372a80: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x372a80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x372a84: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x372a84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x372a88: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x372a88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x372a8c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x372a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x372a90: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x372a90u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x372a94: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x372a94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x372a98: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x372a98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x372a9c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x372a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x372aa0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x372aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x372aa4: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x372aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x372aa8: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x372aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x372aac: 0x3e00008  jr          $ra
    ctx->pc = 0x372AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372AACu;
        // 0x372ab0: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372AB4u;
    // 0x372ab4: 0x0  nop
    ctx->pc = 0x372ab4u;
    // NOP
    ctx->pc = 0x372ab8u;
}
