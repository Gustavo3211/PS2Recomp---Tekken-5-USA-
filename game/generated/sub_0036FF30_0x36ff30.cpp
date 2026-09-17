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

// Function: sub_0036FF30
// Address: 0x36ff30 - 0x36fff8
void sub_0036FF30_0x36ff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FF30_0x36ff30");
#endif

    switch (ctx->pc) {
        case 0x36ff54u: goto label_36ff54;
        case 0x36ff6cu: goto label_36ff6c;
        case 0x36ffa8u: goto label_36ffa8;
        default: break;
    }

    ctx->pc = 0x36ff30u;

    // 0x36ff30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36ff30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36ff34: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36ff38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36ff38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36ff3c: 0x245073c0  addiu       $s0, $v0, 0x73C0
    ctx->pc = 0x36ff3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29632));
    // 0x36ff40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36ff40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D73C0u));
    // 0x36ff44: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36FF44u;
    {
        const bool branch_taken_0x36ff44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FF44u;
        // 0x36ff48: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ff44) {
            ctx->pc = 0x36FF6Cu;
            goto label_36ff6c;
        }
    }
    ctx->pc = 0x36FF4Cu;
    // 0x36ff4c: 0xc0dc6c2  jal         func_371B08
    ctx->pc = 0x36FF4Cu;
    SET_GPR_U32(ctx, 31, 0x36FF54u);
    ctx->pc = 0x371B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371B08u, 0x36FF4Cu, 0x36FF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FF54u;
label_36ff54:
    // 0x36ff54: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36ff54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36ff58: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36ff58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36ff5c: 0x24a50990  addiu       $a1, $a1, 0x990
    ctx->pc = 0x36ff5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2448));
    // 0x36ff60: 0x24c67540  addiu       $a2, $a2, 0x7540
    ctx->pc = 0x36ff60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30016));
    // 0x36ff64: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36FF64u;
    SET_GPR_U32(ctx, 31, 0x36FF6Cu);
    ctx->pc = 0x36FF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FF64u;
    // 0x36ff68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36FF64u, 0x36FF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FF6Cu;
label_36ff6c:
    // 0x36ff6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36ff6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ff70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36ff70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ff74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36ff74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36ff78: 0x3e00008  jr          $ra
    ctx->pc = 0x36FF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FF78u;
        // 0x36ff7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FF80u;
    // 0x36ff80: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x36ff80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ff84: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x36ff84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x36ff88: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36ff8c: 0x24c30050  addiu       $v1, $a2, 0x50
    ctx->pc = 0x36ff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x36ff90: 0x244202d8  addiu       $v0, $v0, 0x2D8
    ctx->pc = 0x36ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 728));
    // 0x36ff94: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x36ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x36ff98: 0x24c20058  addiu       $v0, $a2, 0x58
    ctx->pc = 0x36ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 88));
    // 0x36ff9c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36ff9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x36ffa0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x36ffa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x36ffa4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x36ffa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_36ffa8:
    // 0x36ffa8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x36ffa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x36ffac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x36ffacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x36ffb0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x36ffb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x36ffb4: 0x0  nop
    ctx->pc = 0x36ffb4u;
    // NOP
    // 0x36ffb8: 0x0  nop
    ctx->pc = 0x36ffb8u;
    // NOP
    // 0x36ffbc: 0x1483fffa  bne         $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36FFBCu;
    {
        const bool branch_taken_0x36ffbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x36FFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FFBCu;
        // 0x36ffc0: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ffbc) {
            ctx->pc = 0x36FFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36ffa8;
        }
    }
    ctx->pc = 0x36FFC4u;
    // 0x36ffc4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x36ffc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x36ffc8: 0x24c20110  addiu       $v0, $a2, 0x110
    ctx->pc = 0x36ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
    // 0x36ffcc: 0x24c300b8  addiu       $v1, $a2, 0xB8
    ctx->pc = 0x36ffccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 184));
    // 0x36ffd0: 0x2484fd60  addiu       $a0, $a0, -0x2A0
    ctx->pc = 0x36ffd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966624));
    // 0x36ffd4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x36ffd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36ffd8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36ffd8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x36ffdc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x36ffdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x36ffe0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x36ffe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x36ffe4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x36ffe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x36ffe8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x36ffe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x36ffec: 0x3e00008  jr          $ra
    ctx->pc = 0x36FFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FFECu;
        // 0x36fff0: 0xacc40008  sw          $a0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FFF4u;
    // 0x36fff4: 0x0  nop
    ctx->pc = 0x36fff4u;
    // NOP
    ctx->pc = 0x36fff8u;
}
