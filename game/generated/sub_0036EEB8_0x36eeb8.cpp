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

// Function: sub_0036EEB8
// Address: 0x36eeb8 - 0x36efb0
void sub_0036EEB8_0x36eeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036EEB8_0x36eeb8");
#endif

    switch (ctx->pc) {
        case 0x36eef4u: goto label_36eef4;
        case 0x36ef58u: goto label_36ef58;
        default: break;
    }

    ctx->pc = 0x36eeb8u;

    // 0x36eeb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36eeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36eebc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36eebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36eec0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36eec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36eec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36eec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36eec8: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x36eec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x36eecc: 0x2442ebf8  addiu       $v0, $v0, -0x1408
    ctx->pc = 0x36eeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962168));
    // 0x36eed0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36eed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36eed4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x36eed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x36eed8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36eed8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x36eedc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x36eedcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x36eee0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36eee4: 0x2442ebc8  addiu       $v0, $v0, -0x1438
    ctx->pc = 0x36eee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962120));
    // 0x36eee8: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x36eee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x36eeec: 0xc0be9a6  jal         func_2FA698
    ctx->pc = 0x36EEECu;
    SET_GPR_U32(ctx, 31, 0x36EEF4u);
    ctx->pc = 0x36EEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EEECu;
    // 0x36eef0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA698u, 0x36EEECu, 0x36EEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EEF4u;
label_36eef4:
    // 0x36eef4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36eef8: 0x2606008c  addiu       $a2, $s0, 0x8C
    ctx->pc = 0x36eef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 140));
    // 0x36eefc: 0x2442ec28  addiu       $v0, $v0, -0x13D8
    ctx->pc = 0x36eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962216));
    // 0x36ef00: 0x26030074  addiu       $v1, $s0, 0x74
    ctx->pc = 0x36ef00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    // 0x36ef04: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x36ef04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x36ef08: 0x2604007c  addiu       $a0, $s0, 0x7C
    ctx->pc = 0x36ef08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
    // 0x36ef0c: 0x26050084  addiu       $a1, $s0, 0x84
    ctx->pc = 0x36ef0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x36ef10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36ef10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36ef14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36ef14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ef18: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36ef18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x36ef1c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x36ef1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x36ef20: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x36ef20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x36ef24: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x36ef24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x36ef28: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x36ef28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x36ef2c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x36ef2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x36ef30: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x36ef30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x36ef34: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x36ef34u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x36ef38: 0x3e00008  jr          $ra
    ctx->pc = 0x36EF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EF38u;
        // 0x36ef3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EF40u;
    // 0x36ef40: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36ef44: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x36ef44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x36ef48: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36ef48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36ef4c: 0x24840498  addiu       $a0, $a0, 0x498
    ctx->pc = 0x36ef4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1176));
    // 0x36ef50: 0xc048b90  jal         func_122E40
    ctx->pc = 0x36EF50u;
    SET_GPR_U32(ctx, 31, 0x36EF58u);
    ctx->pc = 0x36EF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36EF50u;
    // 0x36ef54: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x36EF50u, 0x36EF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36EF58u;
label_36ef58:
    // 0x36ef58: 0x2484008c  addiu       $a0, $a0, 0x8C
    ctx->pc = 0x36ef58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 140));
    // 0x36ef5c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x36ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36ef60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x36EF60u;
    {
        const bool branch_taken_0x36ef60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EF60u;
        // 0x36ef64: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ef60) {
            ctx->pc = 0x36EF78u;
            goto label_36ef78;
        }
    }
    ctx->pc = 0x36EF68u;
    // 0x36ef68: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x36ef68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x36ef6c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x36ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x36ef70: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36EF70u;
    {
        const bool branch_taken_0x36ef70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x36ef70) {
            ctx->pc = 0x36EF84u;
            goto label_36ef84;
        }
    }
    ctx->pc = 0x36EF78u;
label_36ef78:
    // 0x36ef78: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x36ef78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x36ef7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36ef7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ef80: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x36ef80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_36ef84:
    // 0x36ef84: 0x3e00008  jr          $ra
    ctx->pc = 0x36EF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EF84u;
        // 0x36ef88: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EF84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EF8Cu;
    // 0x36ef8c: 0x0  nop
    ctx->pc = 0x36ef8cu;
    // NOP
    // 0x36ef90: 0x3e00008  jr          $ra
    ctx->pc = 0x36EF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EF90u;
        // 0x36ef94: 0xac800094  sw          $zero, 0x94($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EF98u;
    // 0x36ef98: 0x3e00008  jr          $ra
    ctx->pc = 0x36EF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EFA0u;
    // 0x36efa0: 0x8c820094  lw          $v0, 0x94($a0)
    ctx->pc = 0x36efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 148)));
    // 0x36efa4: 0x3e00008  jr          $ra
    ctx->pc = 0x36EFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36EFA4u;
        // 0x36efa8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36EFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36EFACu;
    // 0x36efac: 0x0  nop
    ctx->pc = 0x36efacu;
    // NOP
    ctx->pc = 0x36efb0u;
}
