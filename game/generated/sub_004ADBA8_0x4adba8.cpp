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

// Function: sub_004ADBA8
// Address: 0x4adba8 - 0x4adfb8
void sub_004ADBA8_0x4adba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ADBA8_0x4adba8");
#endif

    switch (ctx->pc) {
        case 0x4adbf0u: goto label_4adbf0;
        case 0x4adca0u: goto label_4adca0;
        case 0x4adcb8u: goto label_4adcb8;
        case 0x4adcc8u: goto label_4adcc8;
        case 0x4adcf0u: goto label_4adcf0;
        case 0x4add44u: goto label_4add44;
        case 0x4adee4u: goto label_4adee4;
        case 0x4adf1cu: goto label_4adf1c;
        case 0x4adf50u: goto label_4adf50;
        default: break;
    }

    ctx->pc = 0x4adba8u;

    // 0x4adba8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4adba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4adbac: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x4adbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x4adbb0: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x4adbb0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adbb4: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x4adbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x4adbb8: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x4adbb8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adbbc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4adbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4adbc0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4adbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4adbc4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4adbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4adbc8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x4adbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x4adbcc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4adbccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4adbd0: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x4adbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x4adbd4: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x4adbd4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x4adbd8: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x4adbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x4adbdc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x4adbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x4adbe0: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x4adbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x4adbe4: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x4adbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x4adbe8: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4ADBE8u;
    SET_GPR_U32(ctx, 31, 0x4ADBF0u);
    ctx->pc = 0x4ADBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ADBE8u;
    // 0x4adbec: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4ADBE8u, 0x4ADBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADBF0u;
label_4adbf0:
    // 0x4adbf0: 0x8fd00000  lw          $s0, 0x0($fp)
    ctx->pc = 0x4adbf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4adbf4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4adbf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adbf8: 0x8ef10000  lw          $s1, 0x0($s7)
    ctx->pc = 0x4adbf8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4adbfc: 0x27b20004  addiu       $s2, $sp, 0x4
    ctx->pc = 0x4adbfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4adc00: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x4adc00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x4adc04: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x4adc04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4adc08: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x4adc08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x4adc0c: 0x3624ffff  ori         $a0, $s1, 0xFFFF
    ctx->pc = 0x4adc0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4adc10: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4adc10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adc14: 0x86620002  lh          $v0, 0x2($s3)
    ctx->pc = 0x4adc14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x4adc18: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x4adc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x4adc1c: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4adc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4adc20: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x4adc20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x4adc24: 0x828824  and         $s1, $a0, $v0
    ctx->pc = 0x4adc24u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4adc28: 0x751824  and         $v1, $v1, $s5
    ctx->pc = 0x4adc28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
    // 0x4adc2c: 0x8ec50018  lw          $a1, 0x18($s6)
    ctx->pc = 0x4adc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x4adc30: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4adc30u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4adc34: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x4adc34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x4adc38: 0x3624ffff  ori         $a0, $s1, 0xFFFF
    ctx->pc = 0x4adc38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4adc3c: 0xb52824  and         $a1, $a1, $s5
    ctx->pc = 0x4adc3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 21));
    // 0x4adc40: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4adc40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4adc44: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4adc44u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4adc48: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4adc48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4adc4c: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4adc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4adc50: 0x828824  and         $s1, $a0, $v0
    ctx->pc = 0x4adc50u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4adc54: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x4adc54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x4adc58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4adc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adc5c: 0x3231ffff  andi        $s1, $s1, 0xFFFF
    ctx->pc = 0x4adc5cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x4adc60: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x4adc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4adc64: 0x118c00  sll         $s1, $s1, 16
    ctx->pc = 0x4adc64u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x4adc68: 0x118c03  sra         $s1, $s1, 16
    ctx->pc = 0x4adc68u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 16));
    // 0x4adc6c: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x4adc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4adc70: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4adc70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4adc74: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4adc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4adc78: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x4adc78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x4adc7c: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x4adc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x4adc80: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x4adc80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x4adc84: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4adc84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4adc88: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4adc88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4adc8c: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4adc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4adc90: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x4adc90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x4adc94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4adc94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adc98: 0xc12a21e  jal         func_4A8878
    ctx->pc = 0x4ADC98u;
    SET_GPR_U32(ctx, 31, 0x4ADCA0u);
    ctx->pc = 0x4ADC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ADC98u;
    // 0x4adc9c: 0xafb00004  sw          $s0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8878u, 0x4ADC98u, 0x4ADCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADCA0u;
label_4adca0:
    // 0x4adca0: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x4adca0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x4adca4: 0x87a40000  lh          $a0, 0x0($sp)
    ctx->pc = 0x4adca4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4adca8: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x4adca8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4adcac: 0x97b40000  lhu         $s4, 0x0($sp)
    ctx->pc = 0x4adcacu;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4adcb0: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4ADCB0u;
    SET_GPR_U32(ctx, 31, 0x4ADCB8u);
    ctx->pc = 0x4ADCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ADCB0u;
    // 0x4adcb4: 0x108403  sra         $s0, $s0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4ADCB0u, 0x4ADCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADCB8u;
label_4adcb8:
    // 0x4adcb8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4adcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adcbc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4adcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4adcc0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4ADCC0u;
    SET_GPR_U32(ctx, 31, 0x4ADCC8u);
    ctx->pc = 0x4ADCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ADCC0u;
    // 0x4adcc4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4ADCC0u, 0x4ADCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADCC8u;
label_4adcc8:
    // 0x4adcc8: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4adcc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4adccc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4adcccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adcd0: 0x518818  mult        $s1, $v0, $s1
    ctx->pc = 0x4adcd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x4adcd4: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x4adcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x4adcd8: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4adcd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4adcdc: 0x501818  mult        $v1, $v0, $s0
    ctx->pc = 0x4adcdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4adce0: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x4adce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x4adce4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4adce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4adce8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4ADCE8u;
    SET_GPR_U32(ctx, 31, 0x4ADCF0u);
    ctx->pc = 0x4ADCECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ADCE8u;
    // 0x4adcec: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4ADCE8u, 0x4ADCF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADCF0u;
label_4adcf0:
    // 0x4adcf0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x4adcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4adcf4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4adcf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adcf8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4adcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4adcfc: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x4adcfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4add00: 0x8ec40014  lw          $a0, 0x14($s6)
    ctx->pc = 0x4add00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x4add04: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4add04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4add08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4add08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4add0c: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4add0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4add10: 0x952024  and         $a0, $a0, $s5
    ctx->pc = 0x4add10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 21));
    // 0x4add14: 0x628824  and         $s1, $v1, $v0
    ctx->pc = 0x4add14u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4add18: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4add18u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4add1c: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x4add1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x4add20: 0x3623ffff  ori         $v1, $s1, 0xFFFF
    ctx->pc = 0x4add20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4add24: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x4add24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4add28: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4add28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4add2c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4add2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4add30: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4add30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4add34: 0x628824  and         $s1, $v1, $v0
    ctx->pc = 0x4add34u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4add38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4add38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4add3c: 0xc12a21e  jal         func_4A8878
    ctx->pc = 0x4ADD3Cu;
    SET_GPR_U32(ctx, 31, 0x4ADD44u);
    ctx->pc = 0x4ADD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ADD3Cu;
    // 0x4add40: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8878u, 0x4ADD3Cu, 0x4ADD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADD44u;
label_4add44:
    // 0x4add44: 0x86c4011c  lh          $a0, 0x11C($s6)
    ctx->pc = 0x4add44u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 284)));
    // 0x4add48: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x4add48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4add4c: 0x751824  and         $v1, $v1, $s5
    ctx->pc = 0x4add4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
    // 0x4add50: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x4add50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x4add54: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x4add54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4add58: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4add58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4add5c: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x4add5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4add60: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4add60u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4add64: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4add64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4add68: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x4add68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4add6c: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x4add6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4add70: 0x31403  sra         $v0, $v1, 16
    ctx->pc = 0x4add70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4add74: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4ADD74u;
    {
        const bool branch_taken_0x4add74 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4add74) {
            ctx->pc = 0x4ADD78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ADD74u;
            // 0x4add78: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ADD88u;
            goto label_4add88;
        }
    }
    ctx->pc = 0x4ADD7Cu;
    // 0x4add7c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4add7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4add80: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x4add80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4add84: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x4add84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_4add88:
    // 0x4add88: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x4add88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4add8c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x4add8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x4add90: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4add90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4add94: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4ADD94u;
    {
        const bool branch_taken_0x4add94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ADD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADD94u;
        // 0x4add98: 0x8fb10000  lw          $s1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4add94) {
            ctx->pc = 0x4ADDF8u;
            goto label_4addf8;
        }
    }
    ctx->pc = 0x4ADD9Cu;
    // 0x4add9c: 0x952024  and         $a0, $a0, $s5
    ctx->pc = 0x4add9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 21));
    // 0x4adda0: 0x86c50118  lh          $a1, 0x118($s6)
    ctx->pc = 0x4adda0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 280)));
    // 0x4adda4: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x4adda4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x4adda8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4adda8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4addac: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x4addacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4addb0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4addb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4addb4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4addb4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4addb8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4addb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4addbc: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4addbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4addc0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4addc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4addc4: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x4addc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4addc8: 0x31403  sra         $v0, $v1, 16
    ctx->pc = 0x4addc8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4addcc: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4ADDCCu;
    {
        const bool branch_taken_0x4addcc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4addcc) {
            ctx->pc = 0x4ADDD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ADDCCu;
            // 0x4addd0: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4ADDE8u;
            goto label_4adde8;
        }
    }
    ctx->pc = 0x4ADDD4u;
    // 0x4addd4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4addd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4addd8: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x4addd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4adddc: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4adddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4adde0: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4adde0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4adde4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x4adde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4adde8:
    // 0x4adde8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x4adde8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4addec: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x4addecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x4addf0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4addf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4addf4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4addf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_4addf8:
    // 0x4addf8: 0xaef10000  sw          $s1, 0x0($s7)
    ctx->pc = 0x4addf8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 17));
    // 0x4addfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4addfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ade00: 0xafc60000  sw          $a2, 0x0($fp)
    ctx->pc = 0x4ade00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 6));
    // 0x4ade04: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4ade04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ade08: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4ade08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ade0c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4ade0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ade10: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4ade10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ade14: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4ade14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ade18: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4ade18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4ade1c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4ade1cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4ade20: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x4ade20u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4ade24: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x4ade24u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4ade28: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x4ade28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4ade2c: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADE2Cu;
        // 0x4ade30: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADE34u;
    // 0x4ade34: 0x0  nop
    ctx->pc = 0x4ade34u;
    // NOP
    // 0x4ade38: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4ade38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4ade3c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4ade3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4ade40: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4ade40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4ade44: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4ade44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4ade48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ade48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ade4c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4ade4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4ade50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4ade50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ade54: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x4ade54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x4ade58: 0x27b30004  addiu       $s3, $sp, 0x4
    ctx->pc = 0x4ade58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4ade5c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4ade5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4ade60: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x4ade60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ade64: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x4ade64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x4ade68: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x4ade68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ade6c: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x4ade6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x4ade70: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x4ade70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
    // 0x4ade74: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x4ade74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x4ade78: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x4ade78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x4ade7c: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x4ade7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x4ade80: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x4ade80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x4ade84: 0x8cbe0000  lw          $fp, 0x0($a1)
    ctx->pc = 0x4ade84u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ade88: 0x8cd70000  lw          $s7, 0x0($a2)
    ctx->pc = 0x4ade88u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ade8c: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x4ade8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x4ade90: 0x37c6ffff  ori         $a2, $fp, 0xFFFF
    ctx->pc = 0x4ade90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65535);
    // 0x4ade94: 0x36e5ffff  ori         $a1, $s7, 0xFFFF
    ctx->pc = 0x4ade94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x4ade98: 0x86230026  lh          $v1, 0x26($s1)
    ctx->pc = 0x4ade98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x4ade9c: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x4ade9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    // 0x4adea0: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x4adea0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4adea4: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4adea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4adea8: 0x86220028  lh          $v0, 0x28($s1)
    ctx->pc = 0x4adea8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x4adeac: 0xc3f024  and         $fp, $a2, $v1
    ctx->pc = 0x4adeacu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4adeb0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4adeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4adeb4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x4adeb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adeb8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4adeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4adebc: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x4adebcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4adec0: 0xa2b824  and         $s7, $a1, $v0
    ctx->pc = 0x4adec0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4adec4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4adec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4adec8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4adec8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4adecc: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x4adeccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aded0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4aded0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4aded4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4aded4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aded8: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x4aded8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x4adedc: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4ADEDCu;
    SET_GPR_U32(ctx, 31, 0x4ADEE4u);
    ctx->pc = 0x4ADEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ADEDCu;
    // 0x4adee0: 0x8e950000  lw          $s5, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4ADEDCu, 0x4ADEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADEE4u;
label_4adee4:
    // 0x4adee4: 0x86230022  lh          $v1, 0x22($s1)
    ctx->pc = 0x4adee4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x4adee8: 0x37c5ffff  ori         $a1, $fp, 0xFFFF
    ctx->pc = 0x4adee8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65535);
    // 0x4adeec: 0x86220024  lh          $v0, 0x24($s1)
    ctx->pc = 0x4adeecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x4adef0: 0x36e4ffff  ori         $a0, $s7, 0xFFFF
    ctx->pc = 0x4adef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x4adef4: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4adef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4adef8: 0x27b20008  addiu       $s2, $sp, 0x8
    ctx->pc = 0x4adef8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x4adefc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4adefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4adf00: 0xa3f024  and         $fp, $a1, $v1
    ctx->pc = 0x4adf00u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4adf04: 0x82b824  and         $s7, $a0, $v0
    ctx->pc = 0x4adf04u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4adf08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4adf08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adf0c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4adf0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adf10: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x4adf10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adf14: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4ADF14u;
    SET_GPR_U32(ctx, 31, 0x4ADF1Cu);
    ctx->pc = 0x4ADF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ADF14u;
    // 0x4adf18: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4ADF14u, 0x4ADF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADF1Cu;
label_4adf1c:
    // 0x4adf1c: 0x37c7ffff  ori         $a3, $fp, 0xFFFF
    ctx->pc = 0x4adf1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)65535);
    // 0x4adf20: 0x8623002c  lh          $v1, 0x2C($s1)
    ctx->pc = 0x4adf20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x4adf24: 0x36e6ffff  ori         $a2, $s7, 0xFFFF
    ctx->pc = 0x4adf24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
    // 0x4adf28: 0x8622002a  lh          $v0, 0x2A($s1)
    ctx->pc = 0x4adf28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x4adf2c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4adf2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adf30: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4adf30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4adf34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4adf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adf38: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4adf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4adf3c: 0xc3b824  and         $s7, $a2, $v1
    ctx->pc = 0x4adf3cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4adf40: 0xe2f024  and         $fp, $a3, $v0
    ctx->pc = 0x4adf40u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4adf44: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x4adf44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4adf48: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4ADF48u;
    SET_GPR_U32(ctx, 31, 0x4ADF50u);
    ctx->pc = 0x4ADF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ADF48u;
    // 0x4adf4c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4ADF48u, 0x4ADF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ADF50u;
label_4adf50:
    // 0x4adf50: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x4adf50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4adf54: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4adf54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4adf58: 0xac5e0000  sw          $fp, 0x0($v0)
    ctx->pc = 0x4adf58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 30));
    // 0x4adf5c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4adf5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4adf60: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x4adf60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4adf64: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4adf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4adf68: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x4adf68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4adf6c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4adf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4adf70: 0xacb70000  sw          $s7, 0x0($a1)
    ctx->pc = 0x4adf70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 23));
    // 0x4adf74: 0xae950000  sw          $s5, 0x0($s4)
    ctx->pc = 0x4adf74u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 21));
    // 0x4adf78: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4adf78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4adf7c: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x4adf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4adf80: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4adf80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4adf84: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4adf84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4adf88: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4adf88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4adf8c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x4adf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4adf90: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4adf90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4adf94: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4adf94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4adf98: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x4adf98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4adf9c: 0xaec40000  sw          $a0, 0x0($s6)
    ctx->pc = 0x4adf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 4));
    // 0x4adfa0: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x4adfa0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4adfa4: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4adfa4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4adfa8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x4adfa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4adfac: 0x3e00008  jr          $ra
    ctx->pc = 0x4ADFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ADFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ADFACu;
        // 0x4adfb0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ADFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ADFB4u;
    // 0x4adfb4: 0x0  nop
    ctx->pc = 0x4adfb4u;
    // NOP
    ctx->pc = 0x4adfb8u;
}
