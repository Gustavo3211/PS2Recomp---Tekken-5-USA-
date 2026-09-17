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

// Function: sub_001F3A20
// Address: 0x1f3a20 - 0x1f3cb0
void sub_001F3A20_0x1f3a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3A20_0x1f3a20");
#endif

    switch (ctx->pc) {
        case 0x1f3a8cu: goto label_1f3a8c;
        case 0x1f3adcu: goto label_1f3adc;
        case 0x1f3ae4u: goto label_1f3ae4;
        case 0x1f3af0u: goto label_1f3af0;
        case 0x1f3afcu: goto label_1f3afc;
        case 0x1f3b08u: goto label_1f3b08;
        case 0x1f3b10u: goto label_1f3b10;
        case 0x1f3b18u: goto label_1f3b18;
        case 0x1f3b20u: goto label_1f3b20;
        case 0x1f3b28u: goto label_1f3b28;
        case 0x1f3b30u: goto label_1f3b30;
        case 0x1f3b38u: goto label_1f3b38;
        case 0x1f3b40u: goto label_1f3b40;
        case 0x1f3b48u: goto label_1f3b48;
        case 0x1f3b54u: goto label_1f3b54;
        case 0x1f3b94u: goto label_1f3b94;
        case 0x1f3bb0u: goto label_1f3bb0;
        case 0x1f3bb8u: goto label_1f3bb8;
        case 0x1f3bc0u: goto label_1f3bc0;
        case 0x1f3bc8u: goto label_1f3bc8;
        case 0x1f3bd0u: goto label_1f3bd0;
        case 0x1f3bdcu: goto label_1f3bdc;
        case 0x1f3be8u: goto label_1f3be8;
        case 0x1f3c1cu: goto label_1f3c1c;
        case 0x1f3c28u: goto label_1f3c28;
        case 0x1f3c34u: goto label_1f3c34;
        case 0x1f3c3cu: goto label_1f3c3c;
        default: break;
    }

    ctx->pc = 0x1f3a20u;

    // 0x1f3a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f3a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f3a24: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f3a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f3a28: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f3a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f3a2c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f3a2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3a30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f3a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f3a34: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x1f3a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x1f3a38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f3a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f3a3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f3a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f3a40: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f3a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f3a44: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1f3a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f3a48: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1f3a48u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x1f3a4c: 0x920301bc  lbu         $v1, 0x1BC($s0)
    ctx->pc = 0x1f3a4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 444)));
    // 0x1f3a50: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F3A50u;
    {
        const bool branch_taken_0x1f3a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3A50u;
        // 0x1f3a54: 0x8c520004  lw          $s2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3a50) {
            ctx->pc = 0x1F3A68u;
            goto label_1f3a68;
        }
    }
    ctx->pc = 0x1F3A58u;
    // 0x1f3a58: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1f3a58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3a5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3A5Cu;
    {
        const bool branch_taken_0x1f3a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3A5Cu;
        // 0x1f3a60: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3a5c) {
            ctx->pc = 0x1F3A70u;
            goto label_1f3a70;
        }
    }
    ctx->pc = 0x1F3A64u;
    // 0x1f3a64: 0x0  nop
    ctx->pc = 0x1f3a64u;
    // NOP
label_1f3a68:
    // 0x1f3a68: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x1f3a68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3a6c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1f3a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f3a70:
    // 0x1f3a70: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1f3a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1f3a74: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x1f3a74u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x1f3a78: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1f3a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1f3a7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3A7Cu;
    {
        const bool branch_taken_0x1f3a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3a7c) {
            ctx->pc = 0x1F3A8Cu;
            goto label_1f3a8c;
        }
    }
    ctx->pc = 0x1F3A84u;
    // 0x1f3a84: 0xc07f656  jal         func_1FD958
    ctx->pc = 0x1F3A84u;
    SET_GPR_U32(ctx, 31, 0x1F3A8Cu);
    ctx->pc = 0x1FD958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD958u, 0x1F3A84u, 0x1F3A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3A8Cu;
label_1f3a8c:
    // 0x1f3a8c: 0x12800060  beqz        $s4, . + 4 + (0x60 << 2)
    ctx->pc = 0x1F3A8Cu;
    {
        const bool branch_taken_0x1f3a8c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3A8Cu;
        // 0x1f3a90: 0x3c14003b  lui         $s4, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3a8c) {
            ctx->pc = 0x1F3C10u;
            goto label_1f3c10;
        }
    }
    ctx->pc = 0x1F3A94u;
    // 0x1f3a94: 0x268323b0  addiu       $v1, $s4, 0x23B0
    ctx->pc = 0x1f3a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 9136));
    // 0x1f3a98: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1f3a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1f3a9c: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x1f3a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1f3aa0: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3AA0u;
    {
        const bool branch_taken_0x1f3aa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F3AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3AA0u;
        // 0x1f3aa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3aa0) {
            ctx->pc = 0x1F3AB4u;
            goto label_1f3ab4;
        }
    }
    ctx->pc = 0x1F3AA8u;
    // 0x1f3aa8: 0x246200b8  addiu       $v0, $v1, 0xB8
    ctx->pc = 0x1f3aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
    // 0x1f3aac: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F3AACu;
    {
        const bool branch_taken_0x1f3aac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f3aac) {
            ctx->pc = 0x1F3AB8u;
            goto label_1f3ab8;
        }
    }
    ctx->pc = 0x1F3AB4u;
label_1f3ab4:
    // 0x1f3ab4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f3ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3ab8:
    // 0x1f3ab8: 0x14a0002f  bnez        $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1F3AB8u;
    {
        const bool branch_taken_0x1f3ab8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3AB8u;
        // 0x1f3abc: 0x8f839720  lw          $v1, -0x68E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3ab8) {
            ctx->pc = 0x1F3B78u;
            goto label_1f3b78;
        }
    }
    ctx->pc = 0x1F3AC0u;
    // 0x1f3ac0: 0x2c62ffff  sltiu       $v0, $v1, -0x1
    ctx->pc = 0x1f3ac0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x1f3ac4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3AC4u;
    {
        const bool branch_taken_0x1f3ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3AC4u;
        // 0x1f3ac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3ac4) {
            ctx->pc = 0x1F3AD4u;
            goto label_1f3ad4;
        }
    }
    ctx->pc = 0x1F3ACCu;
    // 0x1f3acc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f3accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f3ad0: 0xaf829720  sw          $v0, -0x68E0($gp)
    ctx->pc = 0x1f3ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940448), GPR_U32(ctx, 2));
label_1f3ad4:
    // 0x1f3ad4: 0xc098522  jal         func_261488
    ctx->pc = 0x1F3AD4u;
    SET_GPR_U32(ctx, 31, 0x1F3ADCu);
    ctx->pc = 0x1F3AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3AD4u;
    // 0x1f3ad8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261488u, 0x1F3AD4u, 0x1F3ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3ADCu;
label_1f3adc:
    // 0x1f3adc: 0xc09dea8  jal         func_277AA0
    ctx->pc = 0x1F3ADCu;
    SET_GPR_U32(ctx, 31, 0x1F3AE4u);
    ctx->pc = 0x277AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AA0u, 0x1F3ADCu, 0x1F3AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3AE4u;
label_1f3ae4:
    // 0x1f3ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3ae8: 0xc08c31e  jal         func_230C78
    ctx->pc = 0x1F3AE8u;
    SET_GPR_U32(ctx, 31, 0x1F3AF0u);
    ctx->pc = 0x1F3AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3AE8u;
    // 0x1f3aec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230C78u, 0x1F3AE8u, 0x1F3AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3AF0u;
label_1f3af0:
    // 0x1f3af0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f3af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3af4: 0xc08c182  jal         func_230608
    ctx->pc = 0x1F3AF4u;
    SET_GPR_U32(ctx, 31, 0x1F3AFCu);
    ctx->pc = 0x1F3AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3AF4u;
    // 0x1f3af8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230608u, 0x1F3AF4u, 0x1F3AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3AFCu;
label_1f3afc:
    // 0x1f3afc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3b00: 0xc08c182  jal         func_230608
    ctx->pc = 0x1F3B00u;
    SET_GPR_U32(ctx, 31, 0x1F3B08u);
    ctx->pc = 0x1F3B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3B00u;
    // 0x1f3b04: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230608u, 0x1F3B00u, 0x1F3B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B08u;
label_1f3b08:
    // 0x1f3b08: 0xc0809a8  jal         func_2026A0
    ctx->pc = 0x1F3B08u;
    SET_GPR_U32(ctx, 31, 0x1F3B10u);
    ctx->pc = 0x2026A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2026A0u, 0x1F3B08u, 0x1F3B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B10u;
label_1f3b10:
    // 0x1f3b10: 0xc07d874  jal         func_1F61D0
    ctx->pc = 0x1F3B10u;
    SET_GPR_U32(ctx, 31, 0x1F3B18u);
    ctx->pc = 0x1F61D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F61D0u, 0x1F3B10u, 0x1F3B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B18u;
label_1f3b18:
    // 0x1f3b18: 0xc07d42a  jal         func_1F50A8
    ctx->pc = 0x1F3B18u;
    SET_GPR_U32(ctx, 31, 0x1F3B20u);
    ctx->pc = 0x1F50A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F50A8u, 0x1F3B18u, 0x1F3B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B20u;
label_1f3b20:
    // 0x1f3b20: 0xc084210  jal         func_210840
    ctx->pc = 0x1F3B20u;
    SET_GPR_U32(ctx, 31, 0x1F3B28u);
    ctx->pc = 0x1F3B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3B20u;
    // 0x1f3b24: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210840u, 0x1F3B20u, 0x1F3B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B28u;
label_1f3b28:
    // 0x1f3b28: 0xc07d1ae  jal         func_1F46B8
    ctx->pc = 0x1F3B28u;
    SET_GPR_U32(ctx, 31, 0x1F3B30u);
    ctx->pc = 0x1F46B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F46B8u, 0x1F3B28u, 0x1F3B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B30u;
label_1f3b30:
    // 0x1f3b30: 0xc0801be  jal         func_2006F8
    ctx->pc = 0x1F3B30u;
    SET_GPR_U32(ctx, 31, 0x1F3B38u);
    ctx->pc = 0x2006F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2006F8u, 0x1F3B30u, 0x1F3B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B38u;
label_1f3b38:
    // 0x1f3b38: 0xc0834c4  jal         func_20D310
    ctx->pc = 0x1F3B38u;
    SET_GPR_U32(ctx, 31, 0x1F3B40u);
    ctx->pc = 0x20D310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D310u, 0x1F3B38u, 0x1F3B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B40u;
label_1f3b40:
    // 0x1f3b40: 0xc07c518  jal         func_1F1460
    ctx->pc = 0x1F3B40u;
    SET_GPR_U32(ctx, 31, 0x1F3B48u);
    ctx->pc = 0x1F3B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3B40u;
    // 0x1f3b44: 0x8f84c894  lw          $a0, -0x376C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1460u, 0x1F3B40u, 0x1F3B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B48u;
label_1f3b48:
    // 0x1f3b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3b4c: 0xc07f9f0  jal         func_1FE7C0
    ctx->pc = 0x1F3B4Cu;
    SET_GPR_U32(ctx, 31, 0x1F3B54u);
    ctx->pc = 0x1F3B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3B4Cu;
    // 0x1f3b50: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE7C0u, 0x1F3B4Cu, 0x1F3B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B54u;
label_1f3b54:
    // 0x1f3b54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f3b54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3b58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f3b58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f3b5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f3b5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3b60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f3b60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f3b64: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f3b64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3b68: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f3b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f3b6c: 0x808e91c  j           func_23A470
    ctx->pc = 0x1F3B6Cu;
    ctx->pc = 0x1F3B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3B6Cu;
    // 0x1f3b70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A470u;
    sub_0023A470_0x23a470(rdram, ctx, runtime); return;
    ctx->pc = 0x1F3B74u;
    // 0x1f3b74: 0x0  nop
    ctx->pc = 0x1f3b74u;
    // NOP
label_1f3b78:
    // 0x1f3b78: 0x2c62ffff  sltiu       $v0, $v1, -0x1
    ctx->pc = 0x1f3b78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x1f3b7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3B7Cu;
    {
        const bool branch_taken_0x1f3b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3B7Cu;
        // 0x1f3b80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3b7c) {
            ctx->pc = 0x1F3B8Cu;
            goto label_1f3b8c;
        }
    }
    ctx->pc = 0x1F3B84u;
    // 0x1f3b84: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f3b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f3b88: 0xaf829720  sw          $v0, -0x68E0($gp)
    ctx->pc = 0x1f3b88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940448), GPR_U32(ctx, 2));
label_1f3b8c:
    // 0x1f3b8c: 0xc0985d0  jal         func_261740
    ctx->pc = 0x1F3B8Cu;
    SET_GPR_U32(ctx, 31, 0x1F3B94u);
    ctx->pc = 0x1F3B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3B8Cu;
    // 0x1f3b90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261740u, 0x1F3B8Cu, 0x1F3B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3B94u;
label_1f3b94:
    // 0x1f3b94: 0x268223b0  addiu       $v0, $s4, 0x23B0
    ctx->pc = 0x1f3b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 9136));
    // 0x1f3b98: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1f3b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1f3b9c: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x1f3b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1f3ba0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F3BA0u;
    {
        const bool branch_taken_0x1f3ba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3ba0) {
            ctx->pc = 0x1F3BB0u;
            goto label_1f3bb0;
        }
    }
    ctx->pc = 0x1F3BA8u;
    // 0x1f3ba8: 0xc07d874  jal         func_1F61D0
    ctx->pc = 0x1F3BA8u;
    SET_GPR_U32(ctx, 31, 0x1F3BB0u);
    ctx->pc = 0x1F61D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F61D0u, 0x1F3BA8u, 0x1F3BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3BB0u;
label_1f3bb0:
    // 0x1f3bb0: 0xc07c582  jal         func_1F1608
    ctx->pc = 0x1F3BB0u;
    SET_GPR_U32(ctx, 31, 0x1F3BB8u);
    ctx->pc = 0x1F3BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3BB0u;
    // 0x1f3bb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1608u, 0x1F3BB0u, 0x1F3BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3BB8u;
label_1f3bb8:
    // 0x1f3bb8: 0xc0958fa  jal         func_2563E8
    ctx->pc = 0x1F3BB8u;
    SET_GPR_U32(ctx, 31, 0x1F3BC0u);
    ctx->pc = 0x2563E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2563E8u, 0x1F3BB8u, 0x1F3BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3BC0u;
label_1f3bc0:
    // 0x1f3bc0: 0xc084210  jal         func_210840
    ctx->pc = 0x1F3BC0u;
    SET_GPR_U32(ctx, 31, 0x1F3BC8u);
    ctx->pc = 0x1F3BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3BC0u;
    // 0x1f3bc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210840u, 0x1F3BC0u, 0x1F3BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3BC8u;
label_1f3bc8:
    // 0x1f3bc8: 0xc0801be  jal         func_2006F8
    ctx->pc = 0x1F3BC8u;
    SET_GPR_U32(ctx, 31, 0x1F3BD0u);
    ctx->pc = 0x2006F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2006F8u, 0x1F3BC8u, 0x1F3BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3BD0u;
label_1f3bd0:
    // 0x1f3bd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3bd4: 0xc08c31e  jal         func_230C78
    ctx->pc = 0x1F3BD4u;
    SET_GPR_U32(ctx, 31, 0x1F3BDCu);
    ctx->pc = 0x1F3BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3BD4u;
    // 0x1f3bd8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230C78u, 0x1F3BD4u, 0x1F3BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3BDCu;
label_1f3bdc:
    // 0x1f3bdc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f3bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3be0: 0xc08c182  jal         func_230608
    ctx->pc = 0x1F3BE0u;
    SET_GPR_U32(ctx, 31, 0x1F3BE8u);
    ctx->pc = 0x1F3BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3BE0u;
    // 0x1f3be4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230608u, 0x1F3BE0u, 0x1F3BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3BE8u;
label_1f3be8:
    // 0x1f3be8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3bec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f3becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3bf0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f3bf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f3bf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f3bf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3bf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f3bf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f3bfc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f3bfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3c00: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f3c00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3c04: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f3c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f3c08: 0x808c182  j           func_230608
    ctx->pc = 0x1F3C08u;
    ctx->pc = 0x1F3C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C08u;
    // 0x1f3c0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230608u;
    sub_00230608_0x230608(rdram, ctx, runtime); return;
    ctx->pc = 0x1F3C10u;
label_1f3c10:
    // 0x1f3c10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3c14: 0xc08c31e  jal         func_230C78
    ctx->pc = 0x1F3C14u;
    SET_GPR_U32(ctx, 31, 0x1F3C1Cu);
    ctx->pc = 0x1F3C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C14u;
    // 0x1f3c18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230C78u, 0x1F3C14u, 0x1F3C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C1Cu;
label_1f3c1c:
    // 0x1f3c1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f3c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3c20: 0xc08c182  jal         func_230608
    ctx->pc = 0x1F3C20u;
    SET_GPR_U32(ctx, 31, 0x1F3C28u);
    ctx->pc = 0x1F3C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C20u;
    // 0x1f3c24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230608u, 0x1F3C20u, 0x1F3C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C28u;
label_1f3c28:
    // 0x1f3c28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f3c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3c2c: 0xc08c182  jal         func_230608
    ctx->pc = 0x1F3C2Cu;
    SET_GPR_U32(ctx, 31, 0x1F3C34u);
    ctx->pc = 0x1F3C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C2Cu;
    // 0x1f3c30: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230608u, 0x1F3C2Cu, 0x1F3C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C34u;
label_1f3c34:
    // 0x1f3c34: 0xc08429e  jal         func_210A78
    ctx->pc = 0x1F3C34u;
    SET_GPR_U32(ctx, 31, 0x1F3C3Cu);
    ctx->pc = 0x210A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210A78u, 0x1F3C34u, 0x1F3C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3C3Cu;
label_1f3c3c:
    // 0x1f3c3c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f3c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f3c40: 0x244323b0  addiu       $v1, $v0, 0x23B0
    ctx->pc = 0x1f3c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
    // 0x1f3c44: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1f3c44u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x1f3c48: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x1f3c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1f3c4c: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F3C4Cu;
    {
        const bool branch_taken_0x1f3c4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F3C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C4Cu;
        // 0x1f3c50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3c4c) {
            ctx->pc = 0x1F3C60u;
            goto label_1f3c60;
        }
    }
    ctx->pc = 0x1F3C54u;
    // 0x1f3c54: 0x246200b8  addiu       $v0, $v1, 0xB8
    ctx->pc = 0x1f3c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 184));
    // 0x1f3c58: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F3C58u;
    {
        const bool branch_taken_0x1f3c58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f3c58) {
            ctx->pc = 0x1F3C64u;
            goto label_1f3c64;
        }
    }
    ctx->pc = 0x1F3C60u;
label_1f3c60:
    // 0x1f3c60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f3c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f3c64:
    // 0x1f3c64: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1F3C64u;
    {
        const bool branch_taken_0x1f3c64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3C64u;
        // 0x1f3c68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3c64) {
            ctx->pc = 0x1F3C90u;
            goto label_1f3c90;
        }
    }
    ctx->pc = 0x1F3C6Cu;
    // 0x1f3c6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f3c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3c70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f3c70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f3c74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f3c74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3c78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f3c78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f3c7c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f3c7cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3c80: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f3c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f3c84: 0x807c582  j           func_1F1608
    ctx->pc = 0x1F3C84u;
    ctx->pc = 0x1F3C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3C84u;
    // 0x1f3c88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1608u;
    sub_001F1608_0x1f1608(rdram, ctx, runtime); return;
    ctx->pc = 0x1F3C8Cu;
    // 0x1f3c8c: 0x0  nop
    ctx->pc = 0x1f3c8cu;
    // NOP
label_1f3c90:
    // 0x1f3c90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f3c90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f3c94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f3c94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f3c98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f3c98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f3c9c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f3c9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3ca0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f3ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f3ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3CA4u;
        // 0x1f3ca8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3CACu;
    // 0x1f3cac: 0x0  nop
    ctx->pc = 0x1f3cacu;
    // NOP
    ctx->pc = 0x1f3cb0u;
}
