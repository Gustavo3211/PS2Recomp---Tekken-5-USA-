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

// Function: sub_003699E8
// Address: 0x3699e8 - 0x369b48
void sub_003699E8_0x3699e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003699E8_0x3699e8");
#endif

    switch (ctx->pc) {
        case 0x369a0cu: goto label_369a0c;
        case 0x369a24u: goto label_369a24;
        default: break;
    }

    ctx->pc = 0x3699e8u;

    // 0x3699e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3699e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3699ec: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x3699ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x3699f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3699f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3699f4: 0x24506c28  addiu       $s0, $v0, 0x6C28
    ctx->pc = 0x3699f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27688));
    // 0x3699f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3699f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6C28u));
    // 0x3699fc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3699FCu;
    {
        const bool branch_taken_0x3699fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x369A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3699FCu;
        // 0x369a00: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3699fc) {
            ctx->pc = 0x369A24u;
            goto label_369a24;
        }
    }
    ctx->pc = 0x369A04u;
    // 0x369a04: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x369A04u;
    SET_GPR_U32(ctx, 31, 0x369A0Cu);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x369A04u, 0x369A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369A0Cu;
label_369a0c:
    // 0x369a0c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x369a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x369a10: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x369a10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x369a14: 0x24a55a68  addiu       $a1, $a1, 0x5A68
    ctx->pc = 0x369a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23144));
    // 0x369a18: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x369a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x369a1c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x369A1Cu;
    SET_GPR_U32(ctx, 31, 0x369A24u);
    ctx->pc = 0x369A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369A1Cu;
    // 0x369a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x369A1Cu, 0x369A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369A24u;
label_369a24:
    // 0x369a24: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x369a24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369a28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x369a28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369a2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x369a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x369a30: 0x3e00008  jr          $ra
    ctx->pc = 0x369A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369A30u;
        // 0x369a34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369A38u;
    // 0x369a38: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x369a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x369a3c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x369a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x369a40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x369A40u;
    {
        const bool branch_taken_0x369a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x369A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369A40u;
        // 0x369a44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369a40) {
            ctx->pc = 0x369A58u;
            goto label_369a58;
        }
    }
    ctx->pc = 0x369A48u;
    // 0x369a48: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x369a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x369a4c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x369a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x369a50: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x369A50u;
    {
        const bool branch_taken_0x369a50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x369a50) {
            ctx->pc = 0x369A64u;
            goto label_369a64;
        }
    }
    ctx->pc = 0x369A58u;
label_369a58:
    // 0x369a58: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x369a58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x369a5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x369a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369a60: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x369a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_369a64:
    // 0x369a64: 0x3e00008  jr          $ra
    ctx->pc = 0x369A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369A64u;
        // 0x369a68: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369A6Cu;
    // 0x369a6c: 0x0  nop
    ctx->pc = 0x369a6cu;
    // NOP
    // 0x369a70: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x369a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x369a74: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x369a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x369a78: 0x2442d638  addiu       $v0, $v0, -0x29C8
    ctx->pc = 0x369a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956600));
    // 0x369a7c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x369a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x369a80: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x369a80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x369a84: 0x3e00008  jr          $ra
    ctx->pc = 0x369A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369A84u;
        // 0x369a88: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369A8Cu;
    // 0x369a8c: 0x0  nop
    ctx->pc = 0x369a8cu;
    // NOP
    // 0x369a90: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x369a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x369a94: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x369a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x369a98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x369A98u;
    {
        const bool branch_taken_0x369a98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x369A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369A98u;
        // 0x369a9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369a98) {
            ctx->pc = 0x369AB0u;
            goto label_369ab0;
        }
    }
    ctx->pc = 0x369AA0u;
    // 0x369aa0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x369aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x369aa4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x369aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x369aa8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x369AA8u;
    {
        const bool branch_taken_0x369aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x369aa8) {
            ctx->pc = 0x369AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x369AA8u;
            // 0x369aac: 0x8ca20018  lw          $v0, 0x18($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369AC0u;
            goto label_369ac0;
        }
    }
    ctx->pc = 0x369AB0u;
label_369ab0:
    // 0x369ab0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x369ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x369ab4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x369ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369ab8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x369ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x369abc: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x369abcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x18u));
label_369ac0:
    // 0x369ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x369AC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369AC0u;
        // 0x369ac4: 0xa0400051  sb          $zero, 0x51($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 81), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369AC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369AC8u;
    // 0x369ac8: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x369ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x369acc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x369accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x369ad0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x369AD0u;
    {
        const bool branch_taken_0x369ad0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x369AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369AD0u;
        // 0x369ad4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369ad0) {
            ctx->pc = 0x369AE8u;
            goto label_369ae8;
        }
    }
    ctx->pc = 0x369AD8u;
    // 0x369ad8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x369ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x369adc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x369adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x369ae0: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x369AE0u;
    {
        const bool branch_taken_0x369ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x369ae0) {
            ctx->pc = 0x369AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x369AE0u;
            // 0x369ae4: 0x8ca30018  lw          $v1, 0x18($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369AF8u;
            goto label_369af8;
        }
    }
    ctx->pc = 0x369AE8u;
label_369ae8:
    // 0x369ae8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x369ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x369aec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x369aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369af0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x369af0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x369af4: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x369af4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x18u));
label_369af8:
    // 0x369af8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x369af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x369afc: 0x3e00008  jr          $ra
    ctx->pc = 0x369AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369AFCu;
        // 0x369b00: 0xa0620051  sb          $v0, 0x51($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 81), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369B04u;
    // 0x369b04: 0x0  nop
    ctx->pc = 0x369b04u;
    // NOP
    // 0x369b08: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x369b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x369b0c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x369b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x369b10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x369B10u;
    {
        const bool branch_taken_0x369b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x369B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369B10u;
        // 0x369b14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369b10) {
            ctx->pc = 0x369B28u;
            goto label_369b28;
        }
    }
    ctx->pc = 0x369B18u;
    // 0x369b18: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x369b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x369b1c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x369b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x369b20: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x369B20u;
    {
        const bool branch_taken_0x369b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x369b20) {
            ctx->pc = 0x369B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x369B20u;
            // 0x369b24: 0x8ca30018  lw          $v1, 0x18($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x369B38u;
            goto label_369b38;
        }
    }
    ctx->pc = 0x369B28u;
label_369b28:
    // 0x369b28: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x369b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x369b2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x369b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369b30: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x369b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x369b34: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x369b34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x18u));
label_369b38:
    // 0x369b38: 0x90620051  lbu         $v0, 0x51($v1)
    ctx->pc = 0x369b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 81)));
    // 0x369b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x369B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369B3Cu;
        // 0x369b40: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369B44u;
    // 0x369b44: 0x0  nop
    ctx->pc = 0x369b44u;
    // NOP
    ctx->pc = 0x369b48u;
}
