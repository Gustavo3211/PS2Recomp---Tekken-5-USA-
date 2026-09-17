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

// Function: sub_00240A00
// Address: 0x240a00 - 0x240b10
void sub_00240A00_0x240a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240A00_0x240a00");
#endif

    switch (ctx->pc) {
        case 0x240a2cu: goto label_240a2c;
        case 0x240a34u: goto label_240a34;
        case 0x240a3cu: goto label_240a3c;
        case 0x240a50u: goto label_240a50;
        default: break;
    }

    ctx->pc = 0x240a00u;

    // 0x240a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x240a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x240a04: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x240a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x240a08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x240a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240a0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x240a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240a10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x240a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x240a14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x240a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x240a18: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x240a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x240a1c: 0x14430037  bne         $v0, $v1, . + 4 + (0x37 << 2)
    ctx->pc = 0x240A1Cu;
    {
        const bool branch_taken_0x240a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x240A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A1Cu;
        // 0x240a20: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240a1c) {
            ctx->pc = 0x240AFCu;
            goto label_240afc;
        }
    }
    ctx->pc = 0x240A24u;
    // 0x240a24: 0xc0926a0  jal         func_249A80
    ctx->pc = 0x240A24u;
    SET_GPR_U32(ctx, 31, 0x240A2Cu);
    ctx->pc = 0x249A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249A80u, 0x240A24u, 0x240A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240A2Cu;
label_240a2c:
    // 0x240a2c: 0xc092486  jal         func_249218
    ctx->pc = 0x240A2Cu;
    SET_GPR_U32(ctx, 31, 0x240A34u);
    ctx->pc = 0x240A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A2Cu;
    // 0x240a30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249218u, 0x240A2Cu, 0x240A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240A34u;
label_240a34:
    // 0x240a34: 0xc092490  jal         func_249240
    ctx->pc = 0x240A34u;
    SET_GPR_U32(ctx, 31, 0x240A3Cu);
    ctx->pc = 0x240A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A34u;
    // 0x240a38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249240u, 0x240A34u, 0x240A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240A3Cu;
label_240a3c:
    // 0x240a3c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x240a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x240a40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x240a40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x240a44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x240a44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x240a48: 0xc0921b2  jal         func_2486C8
    ctx->pc = 0x240A48u;
    SET_GPR_U32(ctx, 31, 0x240A50u);
    ctx->pc = 0x240A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240A48u;
    // 0x240a4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2486C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2486C8u, 0x240A48u, 0x240A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240A50u;
label_240a50:
    // 0x240a50: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x240a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x240a54: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x240a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x240a58: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x240a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x240a5c: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x240a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x240a60: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x240a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x240a64: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x240a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x240a68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x240a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x240a6c: 0x8c83f4dc  lw          $v1, -0xB24($a0)
    ctx->pc = 0x240a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294964444)));
    // 0x240a70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x240a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x240a74: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x240a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
    // 0x240a78: 0x242102c8  addiu       $at, $at, 0x2C8
    ctx->pc = 0x240a78u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 712));
    // 0x240a7c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x240a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x240a80: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x240a80u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x240a84: 0x1485000a  bne         $a0, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x240A84u;
    {
        const bool branch_taken_0x240a84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x240A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240A84u;
        // 0x240a88: 0x24030027  addiu       $v1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240a84) {
            ctx->pc = 0x240AB0u;
            goto label_240ab0;
        }
    }
    ctx->pc = 0x240A8Cu;
    // 0x240a8c: 0x56230009  bnel        $s1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x240A8Cu;
    {
        const bool branch_taken_0x240a8c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x240a8c) {
            ctx->pc = 0x240A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240A8Cu;
            // 0x240a90: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240AB4u;
            goto label_240ab4;
        }
    }
    ctx->pc = 0x240A94u;
    // 0x240a94: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x240a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x240a98: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x240a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x240a9c: 0x244204a8  addiu       $v0, $v0, 0x4A8
    ctx->pc = 0x240a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1192));
    // 0x240aa0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x240aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x240aa4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x240AA4u;
    {
        const bool branch_taken_0x240aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240AA4u;
        // 0x240aa8: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240aa4) {
            ctx->pc = 0x240AB8u;
            goto label_240ab8;
        }
    }
    ctx->pc = 0x240AACu;
    // 0x240aac: 0x0  nop
    ctx->pc = 0x240aacu;
    // NOP
label_240ab0:
    // 0x240ab0: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x240ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_240ab4:
    // 0x240ab4: 0xae110054  sw          $s1, 0x54($s0)
    ctx->pc = 0x240ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 17));
label_240ab8:
    // 0x240ab8: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x240ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x240abc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x240abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x240ac0: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x240ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
    // 0x240ac4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x240ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x240ac8: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x240ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
    // 0x240acc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x240accu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x240ad0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x240ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x240ad4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x240ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x240ad8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x240AD8u;
    {
        const bool branch_taken_0x240ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240AD8u;
        // 0x240adc: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ad8) {
            ctx->pc = 0x240AE4u;
            goto label_240ae4;
        }
    }
    ctx->pc = 0x240AE0u;
    // 0x240ae0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x240ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_240ae4:
    // 0x240ae4: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x240ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x240ae8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x240ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x240aec: 0xae06009c  sw          $a2, 0x9C($s0)
    ctx->pc = 0x240aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 6));
    // 0x240af0: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x240af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x240af4: 0xae060098  sw          $a2, 0x98($s0)
    ctx->pc = 0x240af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 6));
    // 0x240af8: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x240af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_240afc:
    // 0x240afc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x240afcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240b00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x240b00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x240b04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x240b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x240b08: 0x3e00008  jr          $ra
    ctx->pc = 0x240B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B08u;
        // 0x240b0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240B10u;
}
