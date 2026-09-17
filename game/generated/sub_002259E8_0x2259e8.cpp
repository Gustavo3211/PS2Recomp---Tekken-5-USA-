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

// Function: sub_002259E8
// Address: 0x2259e8 - 0x225b28
void sub_002259E8_0x2259e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002259E8_0x2259e8");
#endif

    switch (ctx->pc) {
        case 0x225aa8u: goto label_225aa8;
        case 0x225ac8u: goto label_225ac8;
        case 0x225ae8u: goto label_225ae8;
        case 0x225b00u: goto label_225b00;
        default: break;
    }

    ctx->pc = 0x2259e8u;

    // 0x2259e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2259e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2259ec: 0x3c060015  lui         $a2, 0x15
    ctx->pc = 0x2259ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)21 << 16));
    // 0x2259f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2259f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2259f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2259f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2259f8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2259f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2259fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2259fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x225a00: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x225a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x225a04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x225a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x225a08: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x225a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x225a0c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x225a0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225a10: 0x3c010015  lui         $at, 0x15
    ctx->pc = 0x225a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21 << 16));
    // 0x225a14: 0x242161b0  addiu       $at, $at, 0x61B0
    ctx->pc = 0x225a14u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 25008));
    // 0x225a18: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x225a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x225a1c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x225a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x225a20: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x225A20u;
    {
        const bool branch_taken_0x225a20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x225A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A20u;
        // 0x225a24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a20) {
            ctx->pc = 0x225A44u;
            goto label_225a44;
        }
    }
    ctx->pc = 0x225A28u;
    // 0x225a28: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x225a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x225a2c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x225a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x225a30: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x225A30u;
    {
        const bool branch_taken_0x225a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x225A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A30u;
        // 0x225a34: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a30) {
            ctx->pc = 0x225A40u;
            goto label_225a40;
        }
    }
    ctx->pc = 0x225A38u;
    // 0x225a38: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x225A38u;
    {
        const bool branch_taken_0x225a38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x225a38) {
            ctx->pc = 0x225A44u;
            goto label_225a44;
        }
    }
    ctx->pc = 0x225A40u;
label_225a40:
    // 0x225a40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x225a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225a44:
    // 0x225a44: 0x54a00034  bnel        $a1, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x225A44u;
    {
        const bool branch_taken_0x225a44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x225a44) {
            ctx->pc = 0x225A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225A44u;
            // 0x225a48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225B18u;
            goto label_225b18;
        }
    }
    ctx->pc = 0x225A4Cu;
    // 0x225a4c: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x225a4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x225a50: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x225a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x225a54: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x225A54u;
    {
        const bool branch_taken_0x225a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x225A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A54u;
        // 0x225a58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a54) {
            ctx->pc = 0x225AB0u;
            goto label_225ab0;
        }
    }
    ctx->pc = 0x225A5Cu;
    // 0x225a5c: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x225a5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x225a60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x225A60u;
    {
        const bool branch_taken_0x225a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x225A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A60u;
        // 0x225a64: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a60) {
            ctx->pc = 0x225A80u;
            goto label_225a80;
        }
    }
    ctx->pc = 0x225A68u;
    // 0x225a68: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x225a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x225a6c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x225A6Cu;
    {
        const bool branch_taken_0x225a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x225A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A6Cu;
        // 0x225a70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a6c) {
            ctx->pc = 0x225A90u;
            goto label_225a90;
        }
    }
    ctx->pc = 0x225A74u;
    // 0x225a74: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x225A74u;
    {
        const bool branch_taken_0x225a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225a74) {
            ctx->pc = 0x225AF0u;
            goto label_225af0;
        }
    }
    ctx->pc = 0x225A7Cu;
    // 0x225a7c: 0x0  nop
    ctx->pc = 0x225a7cu;
    // NOP
label_225a80:
    // 0x225a80: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x225A80u;
    {
        const bool branch_taken_0x225a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x225A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225A80u;
        // 0x225a84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225a80) {
            ctx->pc = 0x225AD0u;
            goto label_225ad0;
        }
    }
    ctx->pc = 0x225A88u;
    // 0x225a88: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x225A88u;
    {
        const bool branch_taken_0x225a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x225a88) {
            ctx->pc = 0x225AF0u;
            goto label_225af0;
        }
    }
    ctx->pc = 0x225A90u;
label_225a90:
    // 0x225a90: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x225a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x225a94: 0x24c361b0  addiu       $v1, $a2, 0x61B0
    ctx->pc = 0x225a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 25008));
    // 0x225a98: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x225a98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x225a9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225aa0: 0xc0892d0  jal         func_224B40
    ctx->pc = 0x225AA0u;
    SET_GPR_U32(ctx, 31, 0x225AA8u);
    ctx->pc = 0x225AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225AA0u;
    // 0x225aa4: 0x84440006  lh          $a0, 0x6($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224B40u, 0x225AA0u, 0x225AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225AA8u;
label_225aa8:
    // 0x225aa8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x225AA8u;
    {
        const bool branch_taken_0x225aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AA8u;
        // 0x225aac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225aa8) {
            ctx->pc = 0x225AECu;
            goto label_225aec;
        }
    }
    ctx->pc = 0x225AB0u;
label_225ab0:
    // 0x225ab0: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x225ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x225ab4: 0x24c361b0  addiu       $v1, $a2, 0x61B0
    ctx->pc = 0x225ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 25008));
    // 0x225ab8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x225ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x225abc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225ac0: 0xc0892d8  jal         func_224B60
    ctx->pc = 0x225AC0u;
    SET_GPR_U32(ctx, 31, 0x225AC8u);
    ctx->pc = 0x225AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225AC0u;
    // 0x225ac4: 0x84440006  lh          $a0, 0x6($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224B60u, 0x225AC0u, 0x225AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225AC8u;
label_225ac8:
    // 0x225ac8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x225AC8u;
    {
        const bool branch_taken_0x225ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x225ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225AC8u;
        // 0x225acc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225ac8) {
            ctx->pc = 0x225AECu;
            goto label_225aec;
        }
    }
    ctx->pc = 0x225AD0u;
label_225ad0:
    // 0x225ad0: 0x901021  addu        $v0, $a0, $s0
    ctx->pc = 0x225ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x225ad4: 0x24c361b0  addiu       $v1, $a2, 0x61B0
    ctx->pc = 0x225ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 25008));
    // 0x225ad8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x225ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x225adc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x225adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x225ae0: 0xc0892e0  jal         func_224B80
    ctx->pc = 0x225AE0u;
    SET_GPR_U32(ctx, 31, 0x225AE8u);
    ctx->pc = 0x225AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225AE0u;
    // 0x225ae4: 0x84440006  lh          $a0, 0x6($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224B80u, 0x225AE0u, 0x225AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225AE8u;
label_225ae8:
    // 0x225ae8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x225ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_225aec:
    // 0x225aec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x225aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225af0:
    // 0x225af0: 0x54a20009  bnel        $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x225AF0u;
    {
        const bool branch_taken_0x225af0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x225af0) {
            ctx->pc = 0x225AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225AF0u;
            // 0x225af4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x225B18u;
            goto label_225b18;
        }
    }
    ctx->pc = 0x225AF8u;
    // 0x225af8: 0xc0895f8  jal         func_2257E0
    ctx->pc = 0x225AF8u;
    SET_GPR_U32(ctx, 31, 0x225B00u);
    ctx->pc = 0x225AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225AF8u;
    // 0x225afc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2257E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2257E0u, 0x225AF8u, 0x225B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225B00u;
label_225b00:
    // 0x225b00: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x225b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x225b04: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x225b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x225b08: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x225b08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x225b0c: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x225b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x225b10: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x225b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x225b14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225b14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225b18:
    // 0x225b18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x225b18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225b1c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x225b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225b20: 0x3e00008  jr          $ra
    ctx->pc = 0x225B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B20u;
        // 0x225b24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225B28u;
}
