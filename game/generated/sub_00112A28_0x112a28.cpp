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

// Function: sub_00112A28
// Address: 0x112a28 - 0x112af8
void sub_00112A28_0x112a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112A28_0x112a28");
#endif

    switch (ctx->pc) {
        case 0x112a28u: goto label_112a28;
        case 0x112a2cu: goto label_112a2c;
        case 0x112a30u: goto label_112a30;
        case 0x112a34u: goto label_112a34;
        case 0x112a38u: goto label_112a38;
        case 0x112a3cu: goto label_112a3c;
        case 0x112a40u: goto label_112a40;
        case 0x112a44u: goto label_112a44;
        case 0x112a48u: goto label_112a48;
        case 0x112a4cu: goto label_112a4c;
        case 0x112a50u: goto label_112a50;
        case 0x112a54u: goto label_112a54;
        case 0x112a58u: goto label_112a58;
        case 0x112a5cu: goto label_112a5c;
        case 0x112a60u: goto label_112a60;
        case 0x112a64u: goto label_112a64;
        case 0x112a68u: goto label_112a68;
        case 0x112a6cu: goto label_112a6c;
        case 0x112a70u: goto label_112a70;
        case 0x112a74u: goto label_112a74;
        case 0x112a78u: goto label_112a78;
        case 0x112a7cu: goto label_112a7c;
        case 0x112a80u: goto label_112a80;
        case 0x112a84u: goto label_112a84;
        case 0x112a88u: goto label_112a88;
        case 0x112a8cu: goto label_112a8c;
        case 0x112a90u: goto label_112a90;
        case 0x112a94u: goto label_112a94;
        case 0x112a98u: goto label_112a98;
        case 0x112a9cu: goto label_112a9c;
        case 0x112aa0u: goto label_112aa0;
        case 0x112aa4u: goto label_112aa4;
        case 0x112aa8u: goto label_112aa8;
        case 0x112aacu: goto label_112aac;
        case 0x112ab0u: goto label_112ab0;
        case 0x112ab4u: goto label_112ab4;
        case 0x112ab8u: goto label_112ab8;
        case 0x112abcu: goto label_112abc;
        case 0x112ac0u: goto label_112ac0;
        case 0x112ac4u: goto label_112ac4;
        case 0x112ac8u: goto label_112ac8;
        case 0x112accu: goto label_112acc;
        case 0x112ad0u: goto label_112ad0;
        case 0x112ad4u: goto label_112ad4;
        case 0x112ad8u: goto label_112ad8;
        case 0x112adcu: goto label_112adc;
        case 0x112ae0u: goto label_112ae0;
        case 0x112ae4u: goto label_112ae4;
        case 0x112ae8u: goto label_112ae8;
        case 0x112aecu: goto label_112aec;
        case 0x112af0u: goto label_112af0;
        case 0x112af4u: goto label_112af4;
        default: break;
    }

    ctx->pc = 0x112a28u;

label_112a28:
    // 0x112a28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x112a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_112a2c:
    // 0x112a2c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x112a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_112a30:
    // 0x112a30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x112a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_112a34:
    // 0x112a34: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x112a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
label_112a38:
    // 0x112a38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x112a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_112a3c:
    // 0x112a3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x112a3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_112a40:
    // 0x112a40: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x112a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_112a44:
    // 0x112a44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x112a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_112a48:
    // 0x112a48: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x112a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_112a4c:
    // 0x112a4c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_112a50:
    if (ctx->pc == 0x112A50u) {
        ctx->pc = 0x112A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A4Cu;
        // 0x112a50: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x112A54u;
        goto label_112a54;
    }
    ctx->pc = 0x112A4Cu;
    {
        const bool branch_taken_0x112a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x112A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A4Cu;
        // 0x112a50: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a4c) {
            ctx->pc = 0x112A74u;
            goto label_112a74;
        }
    }
    ctx->pc = 0x112A54u;
label_112a54:
    // 0x112a54: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_112a58:
    if (ctx->pc == 0x112A58u) {
        ctx->pc = 0x112A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A54u;
        // 0x112a58: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112A5Cu;
        goto label_112a5c;
    }
    ctx->pc = 0x112A54u;
    {
        const bool branch_taken_0x112a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A54u;
        // 0x112a58: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a54) {
            ctx->pc = 0x112ABCu;
            goto label_112abc;
        }
    }
    ctx->pc = 0x112A5Cu;
label_112a5c:
    // 0x112a5c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x112a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_112a60:
    // 0x112a60: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x112a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
label_112a64:
    // 0x112a64: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_112a68:
    if (ctx->pc == 0x112A68u) {
        ctx->pc = 0x112A6Cu;
        goto label_112a6c;
    }
    ctx->pc = 0x112A64u;
    {
        const bool branch_taken_0x112a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x112a64) {
            ctx->pc = 0x112AACu;
            goto label_112aac;
        }
    }
    ctx->pc = 0x112A6Cu;
label_112a6c:
    // 0x112a6c: 0x10000014  b           . + 4 + (0x14 << 2)
label_112a70:
    if (ctx->pc == 0x112A70u) {
        ctx->pc = 0x112A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A6Cu;
        // 0x112a70: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112A74u;
        goto label_112a74;
    }
    ctx->pc = 0x112A6Cu;
    {
        const bool branch_taken_0x112a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A6Cu;
        // 0x112a70: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a6c) {
            ctx->pc = 0x112AC0u;
            goto label_112ac0;
        }
    }
    ctx->pc = 0x112A74u;
label_112a74:
    // 0x112a74: 0x8e51001c  lw          $s1, 0x1C($s2)
    ctx->pc = 0x112a74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_112a78:
    // 0x112a78: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x112a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_112a7c:
    // 0x112a7c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_112a80:
    if (ctx->pc == 0x112A80u) {
        ctx->pc = 0x112A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A7Cu;
        // 0x112a80: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112A84u;
        goto label_112a84;
    }
    ctx->pc = 0x112A7Cu;
    {
        const bool branch_taken_0x112a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112a7c) {
            ctx->pc = 0x112A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112A7Cu;
            // 0x112a80: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112AC0u;
            goto label_112ac0;
        }
    }
    ctx->pc = 0x112A84u;
label_112a84:
    // 0x112a84: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x112a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_112a88:
    // 0x112a88: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x112a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_112a8c:
    // 0x112a8c: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x112a8cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_112a90:
    // 0x112a90: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x112a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_112a94:
    // 0x112a94: 0x40f809  jalr        $v0
label_112a98:
    if (ctx->pc == 0x112A98u) {
        ctx->pc = 0x112A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A94u;
        // 0x112a98: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112A9Cu;
        goto label_112a9c;
    }
    ctx->pc = 0x112A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x112A9Cu);
        ctx->pc = 0x112A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A94u;
        // 0x112a98: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112A94u, 0x112A9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x112A9Cu;
label_112a9c:
    // 0x112a9c: 0x380182d  daddu       $v1, $gp, $zero
    ctx->pc = 0x112a9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_112aa0:
    // 0x112aa0: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x112aa0u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_112aa4:
    // 0x112aa4: 0x10000005  b           . + 4 + (0x5 << 2)
label_112aa8:
    if (ctx->pc == 0x112AA8u) {
        ctx->pc = 0x112AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AA4u;
        // 0x112aa8: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112AACu;
        goto label_112aac;
    }
    ctx->pc = 0x112AA4u;
    {
        const bool branch_taken_0x112aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AA4u;
        // 0x112aa8: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112aa4) {
            ctx->pc = 0x112ABCu;
            goto label_112abc;
        }
    }
    ctx->pc = 0x112AACu;
label_112aac:
    // 0x112aac: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x112aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_112ab0:
    // 0x112ab0: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x112ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
label_112ab4:
    // 0x112ab4: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x112ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_112ab8:
    // 0x112ab8: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x112ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_112abc:
    // 0x112abc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x112abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_112ac0:
    // 0x112ac0: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
label_112ac4:
    if (ctx->pc == 0x112AC4u) {
        ctx->pc = 0x112AC8u;
        goto label_112ac8;
    }
    ctx->pc = 0x112AC0u;
    {
        const bool branch_taken_0x112ac0 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x112ac0) {
            ctx->pc = 0x112AD0u;
            goto label_112ad0;
        }
    }
    ctx->pc = 0x112AC8u;
label_112ac8:
    // 0x112ac8: 0xc043cf4  jal         func_10F3D0
label_112acc:
    if (ctx->pc == 0x112ACCu) {
        ctx->pc = 0x112AD0u;
        goto label_112ad0;
    }
    ctx->pc = 0x112AC8u;
    SET_GPR_U32(ctx, 31, 0x112AD0u);
    ctx->pc = 0x10F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3D0u, 0x112AC8u, 0x112AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112AD0u;
label_112ad0:
    // 0x112ad0: 0xc044a66  jal         func_112998
label_112ad4:
    if (ctx->pc == 0x112AD4u) {
        ctx->pc = 0x112AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AD0u;
        // 0x112ad4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112AD8u;
        goto label_112ad8;
    }
    ctx->pc = 0x112AD0u;
    SET_GPR_U32(ctx, 31, 0x112AD8u);
    ctx->pc = 0x112AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112AD0u;
    // 0x112ad4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112998u, 0x112AD0u, 0x112AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112AD8u;
label_112ad8:
    // 0x112ad8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x112ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_112adc:
    // 0x112adc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x112adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_112ae0:
    // 0x112ae0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x112ae0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_112ae4:
    // 0x112ae4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x112ae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_112ae8:
    // 0x112ae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_112aec:
    // 0x112aec: 0x3e00008  jr          $ra
label_112af0:
    if (ctx->pc == 0x112AF0u) {
        ctx->pc = 0x112AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AECu;
        // 0x112af0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112AF4u;
        goto label_112af4;
    }
    ctx->pc = 0x112AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AECu;
        // 0x112af0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112AF4u;
label_112af4:
    // 0x112af4: 0x0  nop
    ctx->pc = 0x112af4u;
    // NOP
    ctx->pc = 0x112af8u;
}
