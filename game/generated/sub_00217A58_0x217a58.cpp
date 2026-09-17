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

// Function: sub_00217A58
// Address: 0x217a58 - 0x217bb0
void sub_00217A58_0x217a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00217A58_0x217a58");
#endif

    switch (ctx->pc) {
        case 0x217a70u: goto label_217a70;
        case 0x217aa0u: goto label_217aa0;
        case 0x217aa8u: goto label_217aa8;
        case 0x217ac8u: goto label_217ac8;
        case 0x217ae8u: goto label_217ae8;
        case 0x217afcu: goto label_217afc;
        case 0x217b0cu: goto label_217b0c;
        case 0x217b40u: goto label_217b40;
        case 0x217b4cu: goto label_217b4c;
        case 0x217b58u: goto label_217b58;
        case 0x217b8cu: goto label_217b8c;
        case 0x217b94u: goto label_217b94;
        default: break;
    }

    ctx->pc = 0x217a58u;

    // 0x217a58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x217a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x217a5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x217a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x217a60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x217a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x217a64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x217a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x217a68: 0xc0902ee  jal         func_240BB8
    ctx->pc = 0x217A68u;
    SET_GPR_U32(ctx, 31, 0x217A70u);
    ctx->pc = 0x217A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A68u;
    // 0x217a6c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x240BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240BB8u, 0x217A68u, 0x217A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217A70u;
label_217a70:
    // 0x217a70: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x217A70u;
    {
        const bool branch_taken_0x217a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217A70u;
        // 0x217a74: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217a70) {
            ctx->pc = 0x217AE0u;
            goto label_217ae0;
        }
    }
    ctx->pc = 0x217A78u;
    // 0x217a78: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x217a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x217a7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x217a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x217a80: 0x3c0142d2  lui         $at, 0x42D2
    ctx->pc = 0x217a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17106 << 16));
    // 0x217a84: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x217a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x217a88: 0x2484c450  addiu       $a0, $a0, -0x3BB0
    ctx->pc = 0x217a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952016));
    // 0x217a8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x217a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217a90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x217a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217a94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x217a94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217a98: 0xc0a5ee2  jal         func_297B88
    ctx->pc = 0x217A98u;
    SET_GPR_U32(ctx, 31, 0x217AA0u);
    ctx->pc = 0x217A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217A98u;
    // 0x217a9c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297B88u, 0x217A98u, 0x217AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217AA0u;
label_217aa0:
    // 0x217aa0: 0xc0b6ae0  jal         func_2DAB80
    ctx->pc = 0x217AA0u;
    SET_GPR_U32(ctx, 31, 0x217AA8u);
    ctx->pc = 0x2DAB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAB80u, 0x217AA0u, 0x217AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217AA8u;
label_217aa8:
    // 0x217aa8: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x217aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x217aac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217AACu;
    {
        const bool branch_taken_0x217aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217AACu;
        // 0x217ab0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217aac) {
            ctx->pc = 0x217AC0u;
            goto label_217ac0;
        }
    }
    ctx->pc = 0x217AB4u;
    // 0x217ab4: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x217ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x217ab8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x217AB8u;
    {
        const bool branch_taken_0x217ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217AB8u;
        // 0x217abc: 0xac62886c  sw          $v0, -0x7794($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294936684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ab8) {
            ctx->pc = 0x217B94u;
            goto label_217b94;
        }
    }
    ctx->pc = 0x217AC0u;
label_217ac0:
    // 0x217ac0: 0xc093796  jal         func_24DE58
    ctx->pc = 0x217AC0u;
    SET_GPR_U32(ctx, 31, 0x217AC8u);
    ctx->pc = 0x24DE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DE58u, 0x217AC0u, 0x217AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217AC8u;
label_217ac8:
    // 0x217ac8: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x217ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x217acc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x217accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x217ad0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217ad4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x217AD4u;
    {
        const bool branch_taken_0x217ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217AD4u;
        // 0x217ad8: 0xac83886c  sw          $v1, -0x7794($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294936684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ad4) {
            ctx->pc = 0x217B98u;
            goto label_217b98;
        }
    }
    ctx->pc = 0x217ADCu;
    // 0x217adc: 0x0  nop
    ctx->pc = 0x217adcu;
    // NOP
label_217ae0:
    // 0x217ae0: 0xc09031c  jal         func_240C70
    ctx->pc = 0x217AE0u;
    SET_GPR_U32(ctx, 31, 0x217AE8u);
    ctx->pc = 0x240C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240C70u, 0x217AE0u, 0x217AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217AE8u;
label_217ae8:
    // 0x217ae8: 0x5040002b  beql        $v0, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x217AE8u;
    {
        const bool branch_taken_0x217ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217ae8) {
            ctx->pc = 0x217AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217AE8u;
            // 0x217aec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217B98u;
            goto label_217b98;
        }
    }
    ctx->pc = 0x217AF0u;
    // 0x217af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217af4: 0xc08520c  jal         func_214830
    ctx->pc = 0x217AF4u;
    SET_GPR_U32(ctx, 31, 0x217AFCu);
    ctx->pc = 0x217AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217AF4u;
    // 0x217af8: 0x3c11003e  lui         $s1, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)62 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214830u, 0x217AF4u, 0x217AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217AFCu;
label_217afc:
    // 0x217afc: 0x262437e0  addiu       $a0, $s1, 0x37E0
    ctx->pc = 0x217afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14304));
    // 0x217b00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x217b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217b04: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x217B04u;
    SET_GPR_U32(ctx, 31, 0x217B0Cu);
    ctx->pc = 0x217B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B04u;
    // 0x217b08: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x217B04u, 0x217B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B0Cu;
label_217b0c:
    // 0x217b0c: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x217b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x217b10: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x217b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x217b14: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x217B14u;
    {
        const bool branch_taken_0x217b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x217b14) {
            ctx->pc = 0x217B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217B14u;
            // 0x217b18: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217B30u;
            goto label_217b30;
        }
    }
    ctx->pc = 0x217B1Cu;
    // 0x217b1c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x217b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x217b20: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x217b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x217b24: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217B24u;
    {
        const bool branch_taken_0x217b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x217b24) {
            ctx->pc = 0x217B38u;
            goto label_217b38;
        }
    }
    ctx->pc = 0x217B2Cu;
    // 0x217b2c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x217b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_217b30:
    // 0x217b30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x217b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b34: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x217b34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_217b38:
    // 0x217b38: 0xc090212  jal         func_240848
    ctx->pc = 0x217B38u;
    SET_GPR_U32(ctx, 31, 0x217B40u);
    ctx->pc = 0x240848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240848u, 0x217B38u, 0x217B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B40u;
label_217b40:
    // 0x217b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b44: 0xc0b6a76  jal         func_2DA9D8
    ctx->pc = 0x217B44u;
    SET_GPR_U32(ctx, 31, 0x217B4Cu);
    ctx->pc = 0x217B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B44u;
    // 0x217b48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9D8u, 0x217B44u, 0x217B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B4Cu;
label_217b4c:
    // 0x217b4c: 0x262437e0  addiu       $a0, $s1, 0x37E0
    ctx->pc = 0x217b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 14304));
    // 0x217b50: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x217B50u;
    SET_GPR_U32(ctx, 31, 0x217B58u);
    ctx->pc = 0x217B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B50u;
    // 0x217b54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x217B50u, 0x217B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B58u;
label_217b58:
    // 0x217b58: 0x24450058  addiu       $a1, $v0, 0x58
    ctx->pc = 0x217b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x217b5c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x217b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x217b60: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x217B60u;
    {
        const bool branch_taken_0x217b60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x217b60) {
            ctx->pc = 0x217B64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217B60u;
            // 0x217b64: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217B7Cu;
            goto label_217b7c;
        }
    }
    ctx->pc = 0x217B68u;
    // 0x217b68: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x217b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x217b6c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x217b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x217b70: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x217B70u;
    {
        const bool branch_taken_0x217b70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x217b70) {
            ctx->pc = 0x217B84u;
            goto label_217b84;
        }
    }
    ctx->pc = 0x217B78u;
    // 0x217b78: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x217b78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_217b7c:
    // 0x217b7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x217b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b80: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x217b80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_217b84:
    // 0x217b84: 0xc090212  jal         func_240848
    ctx->pc = 0x217B84u;
    SET_GPR_U32(ctx, 31, 0x217B8Cu);
    ctx->pc = 0x240848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240848u, 0x217B84u, 0x217B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B8Cu;
label_217b8c:
    // 0x217b8c: 0xc0b6a28  jal         func_2DA8A0
    ctx->pc = 0x217B8Cu;
    SET_GPR_U32(ctx, 31, 0x217B94u);
    ctx->pc = 0x217B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217B8Cu;
    // 0x217b90: 0x22040  sll         $a0, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA8A0u, 0x217B8Cu, 0x217B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217B94u;
label_217b94:
    // 0x217b94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x217b94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_217b98:
    // 0x217b98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x217b98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217b9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x217b9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x217ba0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x217ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x217BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217BA4u;
        // 0x217ba8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x217BACu;
    // 0x217bac: 0x0  nop
    ctx->pc = 0x217bacu;
    // NOP
    ctx->pc = 0x217bb0u;
}
