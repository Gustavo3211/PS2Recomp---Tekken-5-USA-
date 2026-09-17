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

// Function: sub_00216A40
// Address: 0x216a40 - 0x217038
void sub_00216A40_0x216a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216A40_0x216a40");
#endif

    switch (ctx->pc) {
        case 0x216a60u: goto label_216a60;
        case 0x216a70u: goto label_216a70;
        case 0x216a78u: goto label_216a78;
        case 0x216a9cu: goto label_216a9c;
        case 0x216ac4u: goto label_216ac4;
        case 0x216af4u: goto label_216af4;
        case 0x216b1cu: goto label_216b1c;
        case 0x216df8u: goto label_216df8;
        case 0x216eb4u: goto label_216eb4;
        case 0x216f54u: goto label_216f54;
        case 0x216f68u: goto label_216f68;
        case 0x216f78u: goto label_216f78;
        case 0x216f80u: goto label_216f80;
        case 0x216fc4u: goto label_216fc4;
        case 0x216fd4u: goto label_216fd4;
        case 0x217004u: goto label_217004;
        case 0x21700cu: goto label_21700c;
        case 0x21701cu: goto label_21701c;
        default: break;
    }

    ctx->pc = 0x216a40u;

    // 0x216a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x216a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x216a44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x216a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x216a48: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x216a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216a4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x216a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x216a50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x216a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x216a54: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x216a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x216a58: 0xc09d93c  jal         func_2764F0
    ctx->pc = 0x216A58u;
    SET_GPR_U32(ctx, 31, 0x216A60u);
    ctx->pc = 0x216A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A58u;
    // 0x216a5c: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2764F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2764F0u, 0x216A58u, 0x216A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A60u;
label_216a60:
    // 0x216a60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x216A60u;
    {
        const bool branch_taken_0x216a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A60u;
        // 0x216a64: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216a60) {
            ctx->pc = 0x216A80u;
            goto label_216a80;
        }
    }
    ctx->pc = 0x216A68u;
    // 0x216a68: 0xc07c864  jal         func_1F2190
    ctx->pc = 0x216A68u;
    SET_GPR_U32(ctx, 31, 0x216A70u);
    ctx->pc = 0x216A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A68u;
    // 0x216a6c: 0x3c12003b  lui         $s2, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2190u, 0x216A68u, 0x216A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A70u;
label_216a70:
    // 0x216a70: 0xc09d968  jal         func_2765A0
    ctx->pc = 0x216A70u;
    SET_GPR_U32(ctx, 31, 0x216A78u);
    ctx->pc = 0x216A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A70u;
    // 0x216a74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2765A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2765A0u, 0x216A70u, 0x216A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A78u;
label_216a78:
    // 0x216a78: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x216A78u;
    {
        const bool branch_taken_0x216a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216a78) {
            ctx->pc = 0x216F78u;
            goto label_216f78;
        }
    }
    ctx->pc = 0x216A80u;
label_216a80:
    // 0x216a80: 0x3c12003b  lui         $s2, 0x3B
    ctx->pc = 0x216a80u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)59 << 16));
    // 0x216a84: 0x8e4383c0  lw          $v1, -0x7C40($s2)
    ctx->pc = 0x216a84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x216a88: 0x38620007  xori        $v0, $v1, 0x7
    ctx->pc = 0x216a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
    // 0x216a8c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x216A8Cu;
    {
        const bool branch_taken_0x216a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216A8Cu;
        // 0x216a90: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216a8c) {
            ctx->pc = 0x216AA8u;
            goto label_216aa8;
        }
    }
    ctx->pc = 0x216A94u;
    // 0x216a94: 0xc07c864  jal         func_1F2190
    ctx->pc = 0x216A94u;
    SET_GPR_U32(ctx, 31, 0x216A9Cu);
    ctx->pc = 0x216A98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216A94u;
    // 0x216a98: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2190u, 0x216A94u, 0x216A9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A9Cu;
label_216a9c:
    // 0x216a9c: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x216A9Cu;
    {
        const bool branch_taken_0x216a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216a9c) {
            ctx->pc = 0x216F78u;
            goto label_216f78;
        }
    }
    ctx->pc = 0x216AA4u;
    // 0x216aa4: 0x0  nop
    ctx->pc = 0x216aa4u;
    // NOP
label_216aa8:
    // 0x216aa8: 0x38620009  xori        $v0, $v1, 0x9
    ctx->pc = 0x216aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)9);
    // 0x216aac: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x216AACu;
    {
        const bool branch_taken_0x216aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216aac) {
            ctx->pc = 0x216AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216AACu;
            // 0x216ab0: 0x8f82973c  lw          $v0, -0x68C4($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216B00u;
            goto label_216b00;
        }
    }
    ctx->pc = 0x216AB4u;
    // 0x216ab4: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x216ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x216ab8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x216ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216abc: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x216ABCu;
    SET_GPR_U32(ctx, 31, 0x216AC4u);
    ctx->pc = 0x216AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216ABCu;
    // 0x216ac0: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x216ABCu, 0x216AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216AC4u;
label_216ac4:
    // 0x216ac4: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x216ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x216ac8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x216ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x216acc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x216ACCu;
    {
        const bool branch_taken_0x216acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216acc) {
            ctx->pc = 0x216AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216ACCu;
            // 0x216ad0: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216AE8u;
            goto label_216ae8;
        }
    }
    ctx->pc = 0x216AD4u;
    // 0x216ad4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x216ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x216ad8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x216ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x216adc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x216ADCu;
    {
        const bool branch_taken_0x216adc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x216adc) {
            ctx->pc = 0x216AECu;
            goto label_216aec;
        }
    }
    ctx->pc = 0x216AE4u;
    // 0x216ae4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x216ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_216ae8:
    // 0x216ae8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x216ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_216aec:
    // 0x216aec: 0xc07c864  jal         func_1F2190
    ctx->pc = 0x216AECu;
    SET_GPR_U32(ctx, 31, 0x216AF4u);
    ctx->pc = 0x216AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216AECu;
    // 0x216af0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2190u, 0x216AECu, 0x216AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216AF4u;
label_216af4:
    // 0x216af4: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x216AF4u;
    {
        const bool branch_taken_0x216af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216af4) {
            ctx->pc = 0x216F78u;
            goto label_216f78;
        }
    }
    ctx->pc = 0x216AFCu;
    // 0x216afc: 0x0  nop
    ctx->pc = 0x216afcu;
    // NOP
label_216b00:
    // 0x216b00: 0x1440011b  bnez        $v0, . + 4 + (0x11B << 2)
    ctx->pc = 0x216B00u;
    {
        const bool branch_taken_0x216b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B00u;
        // 0x216b04: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b00) {
            ctx->pc = 0x216F70u;
            goto label_216f70;
        }
    }
    ctx->pc = 0x216B08u;
    // 0x216b08: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x216B08u;
    {
        const bool branch_taken_0x216b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216b08) {
            ctx->pc = 0x216B0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216B08u;
            // 0x216b0c: 0x9206001a  lbu         $a2, 0x1A($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216B34u;
            goto label_216b34;
        }
    }
    ctx->pc = 0x216B10u;
    // 0x216b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x216b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216b14: 0xc085238  jal         func_2148E0
    ctx->pc = 0x216B14u;
    SET_GPR_U32(ctx, 31, 0x216B1Cu);
    ctx->pc = 0x216B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216B14u;
    // 0x216b18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2148E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2148E0u, 0x216B14u, 0x216B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216B1Cu;
label_216b1c:
    // 0x216b1c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x216B1Cu;
    {
        const bool branch_taken_0x216b1c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x216B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B1Cu;
        // 0x216b20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b1c) {
            ctx->pc = 0x216B30u;
            goto label_216b30;
        }
    }
    ctx->pc = 0x216B24u;
    // 0x216b24: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x216B24u;
    {
        const bool branch_taken_0x216b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B24u;
        // 0x216b28: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b24) {
            ctx->pc = 0x216EACu;
            goto label_216eac;
        }
    }
    ctx->pc = 0x216B2Cu;
    // 0x216b2c: 0x0  nop
    ctx->pc = 0x216b2cu;
    // NOP
label_216b30:
    // 0x216b30: 0x9206001a  lbu         $a2, 0x1A($s0)
    ctx->pc = 0x216b30u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26)));
label_216b34:
    // 0x216b34: 0x14c00027  bnez        $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x216B34u;
    {
        const bool branch_taken_0x216b34 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x216B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B34u;
        // 0x216b38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b34) {
            ctx->pc = 0x216BD4u;
            goto label_216bd4;
        }
    }
    ctx->pc = 0x216B3Cu;
    // 0x216b3c: 0x8e2283c0  lw          $v0, -0x7C40($s1)
    ctx->pc = 0x216b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294935488)));
    // 0x216b40: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x216b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x216b44: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x216B44u;
    {
        const bool branch_taken_0x216b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B44u;
        // 0x216b48: 0x3c05003b  lui         $a1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b44) {
            ctx->pc = 0x216BD4u;
            goto label_216bd4;
        }
    }
    ctx->pc = 0x216B4Cu;
    // 0x216b4c: 0x24a488d0  addiu       $a0, $a1, -0x7730
    ctx->pc = 0x216b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936784));
    // 0x216b50: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x216b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x216b54: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x216b54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x216b58: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x216B58u;
    {
        const bool branch_taken_0x216b58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216b58) {
            ctx->pc = 0x216B5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216B58u;
            // 0x216b5c: 0x24a588d0  addiu       $a1, $a1, -0x7730 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936784));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216B94u;
            goto label_216b94;
        }
    }
    ctx->pc = 0x216B60u;
    // 0x216b60: 0x84630040  lh          $v1, 0x40($v1)
    ctx->pc = 0x216b60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x216b64: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x216b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x216b68: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x216B68u;
    {
        const bool branch_taken_0x216b68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x216B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216B68u;
        // 0x216b6c: 0x24a588d0  addiu       $a1, $a1, -0x7730 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216b68) {
            ctx->pc = 0x216B94u;
            goto label_216b94;
        }
    }
    ctx->pc = 0x216B70u;
    // 0x216b70: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x216b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x216b74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x216b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216b78: 0x908201bc  lbu         $v0, 0x1BC($a0)
    ctx->pc = 0x216b78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x216b7c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x216B7Cu;
    {
        const bool branch_taken_0x216b7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x216b7c) {
            ctx->pc = 0x216B98u;
            goto label_216b98;
        }
    }
    ctx->pc = 0x216B84u;
    // 0x216b84: 0x84830040  lh          $v1, 0x40($a0)
    ctx->pc = 0x216b84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x216b88: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x216b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x216b8c: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x216B8Cu;
    {
        const bool branch_taken_0x216b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x216b8c) {
            ctx->pc = 0x216B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216B8Cu;
            // 0x216b90: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216BD4u;
            goto label_216bd4;
        }
    }
    ctx->pc = 0x216B94u;
label_216b94:
    // 0x216b94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x216b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216b98:
    // 0x216b98: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x216b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x216b9c: 0x908201bc  lbu         $v0, 0x1BC($a0)
    ctx->pc = 0x216b9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x216ba0: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x216BA0u;
    {
        const bool branch_taken_0x216ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x216BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BA0u;
        // 0x216ba4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ba0) {
            ctx->pc = 0x216BD4u;
            goto label_216bd4;
        }
    }
    ctx->pc = 0x216BA8u;
    // 0x216ba8: 0x84830040  lh          $v1, 0x40($a0)
    ctx->pc = 0x216ba8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x216bac: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x216BACu;
    {
        const bool branch_taken_0x216bac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x216bac) {
            ctx->pc = 0x216BD4u;
            goto label_216bd4;
        }
    }
    ctx->pc = 0x216BB4u;
    // 0x216bb4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x216bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x216bb8: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x216bb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x216bbc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x216BBCu;
    {
        const bool branch_taken_0x216bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BBCu;
        // 0x216bc0: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216bbc) {
            ctx->pc = 0x216BD4u;
            goto label_216bd4;
        }
    }
    ctx->pc = 0x216BC4u;
    // 0x216bc4: 0x84630040  lh          $v1, 0x40($v1)
    ctx->pc = 0x216bc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x216bc8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x216BC8u;
    {
        const bool branch_taken_0x216bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x216bc8) {
            ctx->pc = 0x216BD4u;
            goto label_216bd4;
        }
    }
    ctx->pc = 0x216BD0u;
    // 0x216bd0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x216bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216bd4:
    // 0x216bd4: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x216BD4u;
    {
        const bool branch_taken_0x216bd4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x216BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BD4u;
        // 0x216bd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216bd4) {
            ctx->pc = 0x216BE8u;
            goto label_216be8;
        }
    }
    ctx->pc = 0x216BDCu;
    // 0x216bdc: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x216BDCu;
    {
        const bool branch_taken_0x216bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BDCu;
        // 0x216be0: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216bdc) {
            ctx->pc = 0x216DF0u;
            goto label_216df0;
        }
    }
    ctx->pc = 0x216BE4u;
    // 0x216be4: 0x0  nop
    ctx->pc = 0x216be4u;
    // NOP
label_216be8:
    // 0x216be8: 0x14c00027  bnez        $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x216BE8u;
    {
        const bool branch_taken_0x216be8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x216BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BE8u;
        // 0x216bec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216be8) {
            ctx->pc = 0x216C88u;
            goto label_216c88;
        }
    }
    ctx->pc = 0x216BF0u;
    // 0x216bf0: 0x8e2283c0  lw          $v0, -0x7C40($s1)
    ctx->pc = 0x216bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294935488)));
    // 0x216bf4: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x216bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x216bf8: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x216BF8u;
    {
        const bool branch_taken_0x216bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216BF8u;
        // 0x216bfc: 0x3c05003b  lui         $a1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216bf8) {
            ctx->pc = 0x216C88u;
            goto label_216c88;
        }
    }
    ctx->pc = 0x216C00u;
    // 0x216c00: 0x24a488d0  addiu       $a0, $a1, -0x7730
    ctx->pc = 0x216c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936784));
    // 0x216c04: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x216c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x216c08: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x216c08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x216c0c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x216C0Cu;
    {
        const bool branch_taken_0x216c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216c0c) {
            ctx->pc = 0x216C10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216C0Cu;
            // 0x216c10: 0x24a588d0  addiu       $a1, $a1, -0x7730 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936784));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216C48u;
            goto label_216c48;
        }
    }
    ctx->pc = 0x216C14u;
    // 0x216c14: 0x84630040  lh          $v1, 0x40($v1)
    ctx->pc = 0x216c14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x216c18: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x216c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x216c1c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x216C1Cu;
    {
        const bool branch_taken_0x216c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x216C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C1Cu;
        // 0x216c20: 0x24a588d0  addiu       $a1, $a1, -0x7730 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c1c) {
            ctx->pc = 0x216C48u;
            goto label_216c48;
        }
    }
    ctx->pc = 0x216C24u;
    // 0x216c24: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x216c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x216c28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x216c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216c2c: 0x908201bc  lbu         $v0, 0x1BC($a0)
    ctx->pc = 0x216c2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x216c30: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x216C30u;
    {
        const bool branch_taken_0x216c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x216c30) {
            ctx->pc = 0x216C4Cu;
            goto label_216c4c;
        }
    }
    ctx->pc = 0x216C38u;
    // 0x216c38: 0x84830040  lh          $v1, 0x40($a0)
    ctx->pc = 0x216c38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x216c3c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x216c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x216c40: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x216C40u;
    {
        const bool branch_taken_0x216c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x216c40) {
            ctx->pc = 0x216C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216C40u;
            // 0x216c44: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216C88u;
            goto label_216c88;
        }
    }
    ctx->pc = 0x216C48u;
label_216c48:
    // 0x216c48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x216c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216c4c:
    // 0x216c4c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x216c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x216c50: 0x908201bc  lbu         $v0, 0x1BC($a0)
    ctx->pc = 0x216c50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x216c54: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x216C54u;
    {
        const bool branch_taken_0x216c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x216C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C54u;
        // 0x216c58: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c54) {
            ctx->pc = 0x216C88u;
            goto label_216c88;
        }
    }
    ctx->pc = 0x216C5Cu;
    // 0x216c5c: 0x84830040  lh          $v1, 0x40($a0)
    ctx->pc = 0x216c5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x216c60: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x216C60u;
    {
        const bool branch_taken_0x216c60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x216c60) {
            ctx->pc = 0x216C88u;
            goto label_216c88;
        }
    }
    ctx->pc = 0x216C68u;
    // 0x216c68: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x216c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x216c6c: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x216c6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x216c70: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x216C70u;
    {
        const bool branch_taken_0x216c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C70u;
        // 0x216c74: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c70) {
            ctx->pc = 0x216C88u;
            goto label_216c88;
        }
    }
    ctx->pc = 0x216C78u;
    // 0x216c78: 0x84630040  lh          $v1, 0x40($v1)
    ctx->pc = 0x216c78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x216c7c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x216C7Cu;
    {
        const bool branch_taken_0x216c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x216c7c) {
            ctx->pc = 0x216C88u;
            goto label_216c88;
        }
    }
    ctx->pc = 0x216C84u;
    // 0x216c84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x216c84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216c88:
    // 0x216c88: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x216C88u;
    {
        const bool branch_taken_0x216c88 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x216C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C88u;
        // 0x216c8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c88) {
            ctx->pc = 0x216C98u;
            goto label_216c98;
        }
    }
    ctx->pc = 0x216C90u;
    // 0x216c90: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x216C90u;
    {
        const bool branch_taken_0x216c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C90u;
        // 0x216c94: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c90) {
            ctx->pc = 0x216DF0u;
            goto label_216df0;
        }
    }
    ctx->pc = 0x216C98u;
label_216c98:
    // 0x216c98: 0x14c00027  bnez        $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x216C98u;
    {
        const bool branch_taken_0x216c98 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x216C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216C98u;
        // 0x216c9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c98) {
            ctx->pc = 0x216D38u;
            goto label_216d38;
        }
    }
    ctx->pc = 0x216CA0u;
    // 0x216ca0: 0x8e2283c0  lw          $v0, -0x7C40($s1)
    ctx->pc = 0x216ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294935488)));
    // 0x216ca4: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x216ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x216ca8: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x216CA8u;
    {
        const bool branch_taken_0x216ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216CA8u;
        // 0x216cac: 0x3c05003b  lui         $a1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ca8) {
            ctx->pc = 0x216D38u;
            goto label_216d38;
        }
    }
    ctx->pc = 0x216CB0u;
    // 0x216cb0: 0x24a488d0  addiu       $a0, $a1, -0x7730
    ctx->pc = 0x216cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936784));
    // 0x216cb4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x216cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x216cb8: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x216cb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x216cbc: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x216CBCu;
    {
        const bool branch_taken_0x216cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216cbc) {
            ctx->pc = 0x216CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216CBCu;
            // 0x216cc0: 0x24a588d0  addiu       $a1, $a1, -0x7730 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936784));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216CF8u;
            goto label_216cf8;
        }
    }
    ctx->pc = 0x216CC4u;
    // 0x216cc4: 0x84630040  lh          $v1, 0x40($v1)
    ctx->pc = 0x216cc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x216cc8: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x216cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x216ccc: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x216CCCu;
    {
        const bool branch_taken_0x216ccc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x216CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216CCCu;
        // 0x216cd0: 0x24a588d0  addiu       $a1, $a1, -0x7730 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ccc) {
            ctx->pc = 0x216CF8u;
            goto label_216cf8;
        }
    }
    ctx->pc = 0x216CD4u;
    // 0x216cd4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x216cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x216cd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x216cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216cdc: 0x908201bc  lbu         $v0, 0x1BC($a0)
    ctx->pc = 0x216cdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x216ce0: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x216CE0u;
    {
        const bool branch_taken_0x216ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x216ce0) {
            ctx->pc = 0x216CFCu;
            goto label_216cfc;
        }
    }
    ctx->pc = 0x216CE8u;
    // 0x216ce8: 0x84830040  lh          $v1, 0x40($a0)
    ctx->pc = 0x216ce8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x216cec: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x216cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x216cf0: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x216CF0u;
    {
        const bool branch_taken_0x216cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x216cf0) {
            ctx->pc = 0x216CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216CF0u;
            // 0x216cf4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216D38u;
            goto label_216d38;
        }
    }
    ctx->pc = 0x216CF8u;
label_216cf8:
    // 0x216cf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x216cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216cfc:
    // 0x216cfc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x216cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x216d00: 0x908201bc  lbu         $v0, 0x1BC($a0)
    ctx->pc = 0x216d00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x216d04: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x216D04u;
    {
        const bool branch_taken_0x216d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x216D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D04u;
        // 0x216d08: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216d04) {
            ctx->pc = 0x216D38u;
            goto label_216d38;
        }
    }
    ctx->pc = 0x216D0Cu;
    // 0x216d0c: 0x84830040  lh          $v1, 0x40($a0)
    ctx->pc = 0x216d0cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x216d10: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x216D10u;
    {
        const bool branch_taken_0x216d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x216d10) {
            ctx->pc = 0x216D38u;
            goto label_216d38;
        }
    }
    ctx->pc = 0x216D18u;
    // 0x216d18: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x216d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x216d1c: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x216d1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x216d20: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x216D20u;
    {
        const bool branch_taken_0x216d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D20u;
        // 0x216d24: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216d20) {
            ctx->pc = 0x216D38u;
            goto label_216d38;
        }
    }
    ctx->pc = 0x216D28u;
    // 0x216d28: 0x84630040  lh          $v1, 0x40($v1)
    ctx->pc = 0x216d28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x216d2c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x216D2Cu;
    {
        const bool branch_taken_0x216d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x216d2c) {
            ctx->pc = 0x216D38u;
            goto label_216d38;
        }
    }
    ctx->pc = 0x216D34u;
    // 0x216d34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x216d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216d38:
    // 0x216d38: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x216D38u;
    {
        const bool branch_taken_0x216d38 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x216D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D38u;
        // 0x216d3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216d38) {
            ctx->pc = 0x216D48u;
            goto label_216d48;
        }
    }
    ctx->pc = 0x216D40u;
    // 0x216d40: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x216D40u;
    {
        const bool branch_taken_0x216d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D40u;
        // 0x216d44: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216d40) {
            ctx->pc = 0x216DF0u;
            goto label_216df0;
        }
    }
    ctx->pc = 0x216D48u;
label_216d48:
    // 0x216d48: 0x14c00026  bnez        $a2, . + 4 + (0x26 << 2)
    ctx->pc = 0x216D48u;
    {
        const bool branch_taken_0x216d48 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x216D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D48u;
        // 0x216d4c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216d48) {
            ctx->pc = 0x216DE4u;
            goto label_216de4;
        }
    }
    ctx->pc = 0x216D50u;
    // 0x216d50: 0x8e2283c0  lw          $v0, -0x7C40($s1)
    ctx->pc = 0x216d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294935488)));
    // 0x216d54: 0x38420005  xori        $v0, $v0, 0x5
    ctx->pc = 0x216d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x216d58: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x216D58u;
    {
        const bool branch_taken_0x216d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D58u;
        // 0x216d5c: 0x3c06003b  lui         $a2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216d58) {
            ctx->pc = 0x216DE4u;
            goto label_216de4;
        }
    }
    ctx->pc = 0x216D60u;
    // 0x216d60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x216d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216d64: 0x24c488d0  addiu       $a0, $a2, -0x7730
    ctx->pc = 0x216d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936784));
    // 0x216d68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x216d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x216d6c: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x216d6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x216d70: 0x54450006  bnel        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x216D70u;
    {
        const bool branch_taken_0x216d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x216d70) {
            ctx->pc = 0x216D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216D70u;
            // 0x216d74: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216D8Cu;
            goto label_216d8c;
        }
    }
    ctx->pc = 0x216D78u;
    // 0x216d78: 0x84630040  lh          $v1, 0x40($v1)
    ctx->pc = 0x216d78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x216d7c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x216d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x216d80: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x216D80u;
    {
        const bool branch_taken_0x216d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x216d80) {
            ctx->pc = 0x216D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216D80u;
            // 0x216d84: 0x24c588d0  addiu       $a1, $a2, -0x7730 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936784));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216DA4u;
            goto label_216da4;
        }
    }
    ctx->pc = 0x216D88u;
    // 0x216d88: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x216d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_216d8c:
    // 0x216d8c: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x216d8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x216d90: 0x14450014  bne         $v0, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x216D90u;
    {
        const bool branch_taken_0x216d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x216D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D90u;
        // 0x216d94: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216d90) {
            ctx->pc = 0x216DE4u;
            goto label_216de4;
        }
    }
    ctx->pc = 0x216D98u;
    // 0x216d98: 0x84630040  lh          $v1, 0x40($v1)
    ctx->pc = 0x216d98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x216d9c: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x216D9Cu;
    {
        const bool branch_taken_0x216d9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x216DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216D9Cu;
        // 0x216da0: 0x24c588d0  addiu       $a1, $a2, -0x7730 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216d9c) {
            ctx->pc = 0x216DE4u;
            goto label_216de4;
        }
    }
    ctx->pc = 0x216DA4u;
label_216da4:
    // 0x216da4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x216da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x216da8: 0x908201bc  lbu         $v0, 0x1BC($a0)
    ctx->pc = 0x216da8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x216dac: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x216DACu;
    {
        const bool branch_taken_0x216dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216dac) {
            ctx->pc = 0x216DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216DACu;
            // 0x216db0: 0x8484003e  lh          $a0, 0x3E($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 62)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216DC8u;
            goto label_216dc8;
        }
    }
    ctx->pc = 0x216DB4u;
    // 0x216db4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x216db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x216db8: 0x904301bc  lbu         $v1, 0x1BC($v0)
    ctx->pc = 0x216db8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x216dbc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x216DBCu;
    {
        const bool branch_taken_0x216dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x216dbc) {
            ctx->pc = 0x216DE4u;
            goto label_216de4;
        }
    }
    ctx->pc = 0x216DC4u;
    // 0x216dc4: 0x8484003e  lh          $a0, 0x3E($a0)
    ctx->pc = 0x216dc4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 62)));
label_216dc8:
    // 0x216dc8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x216dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x216dcc: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x216DCCu;
    {
        const bool branch_taken_0x216dcc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x216dcc) {
            ctx->pc = 0x216DD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216DCCu;
            // 0x216dd0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216DE4u;
            goto label_216de4;
        }
    }
    ctx->pc = 0x216DD4u;
    // 0x216dd4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x216dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x216dd8: 0x8443003e  lh          $v1, 0x3E($v0)
    ctx->pc = 0x216dd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
    // 0x216ddc: 0x54640001  bnel        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x216DDCu;
    {
        const bool branch_taken_0x216ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x216ddc) {
            ctx->pc = 0x216DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216DDCu;
            // 0x216de0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216DE4u;
            goto label_216de4;
        }
    }
    ctx->pc = 0x216DE4u;
label_216de4:
    // 0x216de4: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x216DE4u;
    {
        const bool branch_taken_0x216de4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x216DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DE4u;
        // 0x216de8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216de4) {
            ctx->pc = 0x216E00u;
            goto label_216e00;
        }
    }
    ctx->pc = 0x216DECu;
    // 0x216dec: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x216decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_216df0:
    // 0x216df0: 0xc07c864  jal         func_1F2190
    ctx->pc = 0x216DF0u;
    SET_GPR_U32(ctx, 31, 0x216DF8u);
    ctx->pc = 0x216DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216DF0u;
    // 0x216df4: 0xa202001a  sb          $v0, 0x1A($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2190u, 0x216DF0u, 0x216DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216DF8u;
label_216df8:
    // 0x216df8: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x216DF8u;
    {
        const bool branch_taken_0x216df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216df8) {
            ctx->pc = 0x216F78u;
            goto label_216f78;
        }
    }
    ctx->pc = 0x216E00u;
label_216e00:
    // 0x216e00: 0x262583c0  addiu       $a1, $s1, -0x7C40
    ctx->pc = 0x216e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294935488));
    // 0x216e04: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x216e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x216e08: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x216e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x216e0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x216e0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216e10: 0x14430023  bne         $v0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x216E10u;
    {
        const bool branch_taken_0x216e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x216E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E10u;
        // 0x216e14: 0x9204001b  lbu         $a0, 0x1B($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 27)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216e10) {
            ctx->pc = 0x216EA0u;
            goto label_216ea0;
        }
    }
    ctx->pc = 0x216E18u;
    // 0x216e18: 0x14800021  bnez        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x216E18u;
    {
        const bool branch_taken_0x216e18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x216e18) {
            ctx->pc = 0x216EA0u;
            goto label_216ea0;
        }
    }
    ctx->pc = 0x216E20u;
    // 0x216e20: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x216e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x216e24: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x216e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x216e28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x216E28u;
    {
        const bool branch_taken_0x216e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E28u;
        // 0x216e2c: 0x3c06003b  lui         $a2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216e28) {
            ctx->pc = 0x216E3Cu;
            goto label_216e3c;
        }
    }
    ctx->pc = 0x216E30u;
    // 0x216e30: 0x38620005  xori        $v0, $v1, 0x5
    ctx->pc = 0x216e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)5);
    // 0x216e34: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x216E34u;
    {
        const bool branch_taken_0x216e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216e34) {
            ctx->pc = 0x216EA0u;
            goto label_216ea0;
        }
    }
    ctx->pc = 0x216E3Cu;
label_216e3c:
    // 0x216e3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x216e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216e40: 0x24c488d0  addiu       $a0, $a2, -0x7730
    ctx->pc = 0x216e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936784));
    // 0x216e44: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x216e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x216e48: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x216e48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x216e4c: 0x54450006  bnel        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x216E4Cu;
    {
        const bool branch_taken_0x216e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x216e4c) {
            ctx->pc = 0x216E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216E4Cu;
            // 0x216e50: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216E68u;
            goto label_216e68;
        }
    }
    ctx->pc = 0x216E54u;
    // 0x216e54: 0x84630040  lh          $v1, 0x40($v1)
    ctx->pc = 0x216e54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x216e58: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x216e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x216e5c: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x216E5Cu;
    {
        const bool branch_taken_0x216e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x216e5c) {
            ctx->pc = 0x216E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216E5Cu;
            // 0x216e60: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216E84u;
            goto label_216e84;
        }
    }
    ctx->pc = 0x216E64u;
    // 0x216e64: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x216e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_216e68:
    // 0x216e68: 0x906201bc  lbu         $v0, 0x1BC($v1)
    ctx->pc = 0x216e68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 444)));
    // 0x216e6c: 0x1445000c  bne         $v0, $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x216E6Cu;
    {
        const bool branch_taken_0x216e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x216E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E6Cu;
        // 0x216e70: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216e6c) {
            ctx->pc = 0x216EA0u;
            goto label_216ea0;
        }
    }
    ctx->pc = 0x216E74u;
    // 0x216e74: 0x84630040  lh          $v1, 0x40($v1)
    ctx->pc = 0x216e74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x216e78: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x216E78u;
    {
        const bool branch_taken_0x216e78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x216E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216E78u;
        // 0x216e7c: 0x24c488d0  addiu       $a0, $a2, -0x7730 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216e78) {
            ctx->pc = 0x216EA0u;
            goto label_216ea0;
        }
    }
    ctx->pc = 0x216E80u;
    // 0x216e80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x216e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_216e84:
    // 0x216e84: 0x904301bc  lbu         $v1, 0x1BC($v0)
    ctx->pc = 0x216e84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x216e88: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x216E88u;
    {
        const bool branch_taken_0x216e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x216e88) {
            ctx->pc = 0x216E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216E88u;
            // 0x216e8c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216EA0u;
            goto label_216ea0;
        }
    }
    ctx->pc = 0x216E90u;
    // 0x216e90: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x216e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x216e94: 0x904301bc  lbu         $v1, 0x1BC($v0)
    ctx->pc = 0x216e94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x216e98: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x216E98u;
    {
        const bool branch_taken_0x216e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x216e98) {
            ctx->pc = 0x216E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216E98u;
            // 0x216e9c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216EA0u;
            goto label_216ea0;
        }
    }
    ctx->pc = 0x216EA0u;
label_216ea0:
    // 0x216ea0: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x216EA0u;
    {
        const bool branch_taken_0x216ea0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x216EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216EA0u;
        // 0x216ea4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ea0) {
            ctx->pc = 0x216EC0u;
            goto label_216ec0;
        }
    }
    ctx->pc = 0x216EA8u;
    // 0x216ea8: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x216ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_216eac:
    // 0x216eac: 0xc07c864  jal         func_1F2190
    ctx->pc = 0x216EACu;
    SET_GPR_U32(ctx, 31, 0x216EB4u);
    ctx->pc = 0x216EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216EACu;
    // 0x216eb0: 0xa202001b  sb          $v0, 0x1B($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 27), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2190u, 0x216EACu, 0x216EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216EB4u;
label_216eb4:
    // 0x216eb4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x216EB4u;
    {
        const bool branch_taken_0x216eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216eb4) {
            ctx->pc = 0x216F78u;
            goto label_216f78;
        }
    }
    ctx->pc = 0x216EBCu;
    // 0x216ebc: 0x0  nop
    ctx->pc = 0x216ebcu;
    // NOP
label_216ec0:
    // 0x216ec0: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x216ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x216ec4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x216ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216ec8: 0x24c588d0  addiu       $a1, $a2, -0x7730
    ctx->pc = 0x216ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936784));
    // 0x216ecc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x216eccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x216ed0: 0x904401bc  lbu         $a0, 0x1BC($v0)
    ctx->pc = 0x216ed0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x216ed4: 0x5483000b  bnel        $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x216ED4u;
    {
        const bool branch_taken_0x216ed4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x216ed4) {
            ctx->pc = 0x216ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216ED4u;
            // 0x216ed8: 0xa2000014  sb          $zero, 0x14($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216F04u;
            goto label_216f04;
        }
    }
    ctx->pc = 0x216EDCu;
    // 0x216edc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x216edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x216ee0: 0x904301bc  lbu         $v1, 0x1BC($v0)
    ctx->pc = 0x216ee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x216ee4: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x216EE4u;
    {
        const bool branch_taken_0x216ee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x216ee4) {
            ctx->pc = 0x216EE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216EE4u;
            // 0x216ee8: 0xa2000014  sb          $zero, 0x14($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216F00u;
            goto label_216f00;
        }
    }
    ctx->pc = 0x216EECu;
    // 0x216eec: 0x92020016  lbu         $v0, 0x16($s0)
    ctx->pc = 0x216eecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
    // 0x216ef0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x216EF0u;
    {
        const bool branch_taken_0x216ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216EF0u;
        // 0x216ef4: 0xa2040014  sb          $a0, 0x14($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ef0) {
            ctx->pc = 0x216F4Cu;
            goto label_216f4c;
        }
    }
    ctx->pc = 0x216EF8u;
    // 0x216ef8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x216EF8u;
    {
        const bool branch_taken_0x216ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216ef8) {
            ctx->pc = 0x216F60u;
            goto label_216f60;
        }
    }
    ctx->pc = 0x216F00u;
label_216f00:
    // 0x216f00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x216f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216f04:
    // 0x216f04: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x216f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x216f08: 0x904401bc  lbu         $a0, 0x1BC($v0)
    ctx->pc = 0x216f08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x216f0c: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x216F0Cu;
    {
        const bool branch_taken_0x216f0c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x216f0c) {
            ctx->pc = 0x216F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216F0Cu;
            // 0x216f10: 0x24c488d0  addiu       $a0, $a2, -0x7730 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936784));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216F28u;
            goto label_216f28;
        }
    }
    ctx->pc = 0x216F14u;
    // 0x216f14: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x216f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x216f18: 0x904301bc  lbu         $v1, 0x1BC($v0)
    ctx->pc = 0x216f18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x216f1c: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x216F1Cu;
    {
        const bool branch_taken_0x216f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x216f1c) {
            ctx->pc = 0x216F4Cu;
            goto label_216f4c;
        }
    }
    ctx->pc = 0x216F24u;
    // 0x216f24: 0x24c488d0  addiu       $a0, $a2, -0x7730
    ctx->pc = 0x216f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936784));
label_216f28:
    // 0x216f28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x216f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x216f2c: 0x904301bc  lbu         $v1, 0x1BC($v0)
    ctx->pc = 0x216f2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x216f30: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x216F30u;
    {
        const bool branch_taken_0x216f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x216f30) {
            ctx->pc = 0x216F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216F30u;
            // 0x216f34: 0x92020015  lbu         $v0, 0x15($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216F44u;
            goto label_216f44;
        }
    }
    ctx->pc = 0x216F38u;
    // 0x216f38: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x216f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x216f3c: 0x904301bc  lbu         $v1, 0x1BC($v0)
    ctx->pc = 0x216f3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 444)));
    // 0x216f40: 0x92020015  lbu         $v0, 0x15($s0)
    ctx->pc = 0x216f40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
label_216f44:
    // 0x216f44: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x216F44u;
    {
        const bool branch_taken_0x216f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216f44) {
            ctx->pc = 0x216F60u;
            goto label_216f60;
        }
    }
    ctx->pc = 0x216F4Cu;
label_216f4c:
    // 0x216f4c: 0xc07c864  jal         func_1F2190
    ctx->pc = 0x216F4Cu;
    SET_GPR_U32(ctx, 31, 0x216F54u);
    ctx->pc = 0x216F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216F4Cu;
    // 0x216f50: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2190u, 0x216F4Cu, 0x216F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216F54u;
label_216f54:
    // 0x216f54: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x216F54u;
    {
        const bool branch_taken_0x216f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216f54) {
            ctx->pc = 0x216F78u;
            goto label_216f78;
        }
    }
    ctx->pc = 0x216F5Cu;
    // 0x216f5c: 0x0  nop
    ctx->pc = 0x216f5cu;
    // NOP
label_216f60:
    // 0x216f60: 0xc07c864  jal         func_1F2190
    ctx->pc = 0x216F60u;
    SET_GPR_U32(ctx, 31, 0x216F68u);
    ctx->pc = 0x216F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216F60u;
    // 0x216f64: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2190u, 0x216F60u, 0x216F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216F68u;
label_216f68:
    // 0x216f68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x216F68u;
    {
        const bool branch_taken_0x216f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216f68) {
            ctx->pc = 0x216F78u;
            goto label_216f78;
        }
    }
    ctx->pc = 0x216F70u;
label_216f70:
    // 0x216f70: 0xc07c864  jal         func_1F2190
    ctx->pc = 0x216F70u;
    SET_GPR_U32(ctx, 31, 0x216F78u);
    ctx->pc = 0x216F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216F70u;
    // 0x216f74: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2190u, 0x216F70u, 0x216F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216F78u;
label_216f78:
    // 0x216f78: 0xc0a6100  jal         func_298400
    ctx->pc = 0x216F78u;
    SET_GPR_U32(ctx, 31, 0x216F80u);
    ctx->pc = 0x298400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298400u, 0x216F78u, 0x216F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216F80u;
label_216f80:
    // 0x216f80: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x216F80u;
    {
        const bool branch_taken_0x216f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F80u;
        // 0x216f84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216f80) {
            ctx->pc = 0x216F8Cu;
            goto label_216f8c;
        }
    }
    ctx->pc = 0x216F88u;
    // 0x216f88: 0xaf82a1b8  sw          $v0, -0x5E48($gp)
    ctx->pc = 0x216f88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943160), GPR_U32(ctx, 2));
label_216f8c:
    // 0x216f8c: 0x8f82a1b8  lw          $v0, -0x5E48($gp)
    ctx->pc = 0x216f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943160)));
    // 0x216f90: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x216F90u;
    {
        const bool branch_taken_0x216f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F90u;
        // 0x216f94: 0x3c11003b  lui         $s1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216f90) {
            ctx->pc = 0x216FC8u;
            goto label_216fc8;
        }
    }
    ctx->pc = 0x216F98u;
    // 0x216f98: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x216f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x216f9c: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x216f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x216fa0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x216fa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x216fa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x216fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216fa8: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x216fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x216fac: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x216facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x216fb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x216fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216fb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x216fb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216fb8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x216fb8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216fbc: 0xc0a5ec2  jal         func_297B08
    ctx->pc = 0x216FBCu;
    SET_GPR_U32(ctx, 31, 0x216FC4u);
    ctx->pc = 0x216FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216FBCu;
    // 0x216fc0: 0xaf82a1b8  sw          $v0, -0x5E48($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294943160), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B08u, 0x216FBCu, 0x216FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216FC4u;
label_216fc4:
    // 0x216fc4: 0x3c11003b  lui         $s1, 0x3B
    ctx->pc = 0x216fc4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)59 << 16));
label_216fc8:
    // 0x216fc8: 0x26228858  addiu       $v0, $s1, -0x77A8
    ctx->pc = 0x216fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936664));
    // 0x216fcc: 0xc0926a0  jal         func_249A80
    ctx->pc = 0x216FCCu;
    SET_GPR_U32(ctx, 31, 0x216FD4u);
    ctx->pc = 0x216FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216FCCu;
    // 0x216fd0: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249A80u, 0x216FCCu, 0x216FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216FD4u;
label_216fd4:
    // 0x216fd4: 0x8e4383c0  lw          $v1, -0x7C40($s2)
    ctx->pc = 0x216fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935488)));
    // 0x216fd8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x216fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x216fdc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x216FDCu;
    {
        const bool branch_taken_0x216fdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x216FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216FDCu;
        // 0x216fe0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216fdc) {
            ctx->pc = 0x216FF0u;
            goto label_216ff0;
        }
    }
    ctx->pc = 0x216FE4u;
    // 0x216fe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x216fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x216fe8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x216FE8u;
    {
        const bool branch_taken_0x216fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x216fe8) {
            ctx->pc = 0x216FF4u;
            goto label_216ff4;
        }
    }
    ctx->pc = 0x216FF0u;
label_216ff0:
    // 0x216ff0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x216ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_216ff4:
    // 0x216ff4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x216FF4u;
    {
        const bool branch_taken_0x216ff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x216ff4) {
            ctx->pc = 0x217004u;
            goto label_217004;
        }
    }
    ctx->pc = 0x216FFCu;
    // 0x216ffc: 0xc0821ce  jal         func_208738
    ctx->pc = 0x216FFCu;
    SET_GPR_U32(ctx, 31, 0x217004u);
    ctx->pc = 0x217000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216FFCu;
    // 0x217000: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208738u, 0x216FFCu, 0x217004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217004u;
label_217004:
    // 0x217004: 0xc092104  jal         func_248410
    ctx->pc = 0x217004u;
    SET_GPR_U32(ctx, 31, 0x21700Cu);
    ctx->pc = 0x217008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217004u;
    // 0x217008: 0xa2000010  sb          $zero, 0x10($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 16), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248410u, 0x217004u, 0x21700Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21700Cu;
label_21700c:
    // 0x21700c: 0x26238858  addiu       $v1, $s1, -0x77A8
    ctx->pc = 0x21700cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936664));
    // 0x217010: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x217010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x217014: 0xc0b4266  jal         func_2D0998
    ctx->pc = 0x217014u;
    SET_GPR_U32(ctx, 31, 0x21701Cu);
    ctx->pc = 0x217018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217014u;
    // 0x217018: 0xac620014  sw          $v0, 0x14($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0998u, 0x217014u, 0x21701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21701Cu;
label_21701c:
    // 0x21701c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21701cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217020: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217024: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217024u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217028: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x217028u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21702c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21702cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x217030: 0x3e00008  jr          $ra
    ctx->pc = 0x217030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217030u;
        // 0x217034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217038u;
}
