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

// Function: sub_0049CF18
// Address: 0x49cf18 - 0x49d220
void sub_0049CF18_0x49cf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049CF18_0x49cf18");
#endif

    switch (ctx->pc) {
        case 0x49cfa8u: goto label_49cfa8;
        case 0x49d014u: goto label_49d014;
        case 0x49d098u: goto label_49d098;
        case 0x49d13cu: goto label_49d13c;
        default: break;
    }

    ctx->pc = 0x49cf18u;

    // 0x49cf18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x49cf18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x49cf1c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x49cf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x49cf20: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x49cf20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49cf24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49cf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49cf28: 0x26a30118  addiu       $v1, $s5, 0x118
    ctx->pc = 0x49cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 280));
    // 0x49cf2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x49cf2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x49cf30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x49cf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x49cf34: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x49cf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x49cf38: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x49cf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x49cf3c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x49cf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x49cf40: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x49cf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x49cf44: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x49cf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x49cf48: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x49cf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x49cf4c: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x49cf4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49cf50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49cf50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49cf54: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49cf58: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49cf58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49cf5c: 0x441007a  bgez        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x49CF5Cu;
    {
        const bool branch_taken_0x49cf5c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x49CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49CF5Cu;
        // 0x49cf60: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49cf5c) {
            ctx->pc = 0x49D148u;
            goto label_49d148;
        }
    }
    ctx->pc = 0x49CF64u;
    // 0x49cf64: 0x86a2011a  lh          $v0, 0x11A($s5)
    ctx->pc = 0x49cf64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 282)));
    // 0x49cf68: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x49cf68u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x49cf6c: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x49cf6cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x49cf70: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x49cf70u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x49cf74: 0x26520b90  addiu       $s2, $s2, 0xB90
    ctx->pc = 0x49cf74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2960));
    // 0x49cf78: 0x26730b94  addiu       $s3, $s3, 0xB94
    ctx->pc = 0x49cf78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2964));
    // 0x49cf7c: 0x26940b98  addiu       $s4, $s4, 0xB98
    ctx->pc = 0x49cf7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2968));
    // 0x49cf80: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x49cf80u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49cf84: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x49cf84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0B98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B98u, _value); } while (0);
    // 0x49cf88: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49cf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x49cf8c: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x49cf8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0B94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B94u, _value); } while (0);
    // 0x49cf90: 0x24500b84  addiu       $s0, $v0, 0xB84
    ctx->pc = 0x49cf90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2948));
    // 0x49cf94: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x49cf94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x7F0B90u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0B90u, _value); } while (0);
    // 0x49cf98: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x49cf98u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x49cf9c: 0x26b60010  addiu       $s6, $s5, 0x10
    ctx->pc = 0x49cf9cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x49cfa0: 0xc129354  jal         func_4A4D50
    ctx->pc = 0x49CFA0u;
    SET_GPR_U32(ctx, 31, 0x49CFA8u);
    ctx->pc = 0x49CFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49CFA0u;
    // 0x49cfa4: 0x26b70014  addiu       $s7, $s5, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4D50u, 0x49CFA0u, 0x49CFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49CFA8u;
label_49cfa8:
    // 0x49cfa8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x49cfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49cfac: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49cfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49cfb0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x49cfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49cfb4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49cfb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49cfb8: 0x26be0018  addiu       $fp, $s5, 0x18
    ctx->pc = 0x49cfb8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x49cfbc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49cfbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49cfc0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49cfc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49cfc4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49cfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49cfc8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49cfc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49cfcc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x49cfccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49cfd0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49cfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49cfd4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49cfd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49cfd8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49cfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49cfdc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x49cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x49cfe0: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x49cfe0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49cfe4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x49cfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x49cfe8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49cfe8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49cfec: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49cfecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49cff0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49cff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49cff4: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x49cff4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x49cff8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49cff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49cffc: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x49cffcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49d000: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49d000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49d004: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49d004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49d008: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49d008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49d00c: 0xc129354  jal         func_4A4D50
    ctx->pc = 0x49D00Cu;
    SET_GPR_U32(ctx, 31, 0x49D014u);
    ctx->pc = 0x49D010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D00Cu;
    // 0x49d010: 0xae440000  sw          $a0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4D50u, 0x49D00Cu, 0x49D014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D014u;
label_49d014:
    // 0x49d014: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x49d014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49d018: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49d018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49d01c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x49d01cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49d020: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49d020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49d024: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49d024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49d028: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49d028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49d02c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49d02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49d030: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49d030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49d034: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x49d034u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49d038: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x49d038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x49d03c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49d03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49d040: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49d040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49d044: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49d044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49d048: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49d048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49d04c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x49d04cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49d050: 0x2442fe00  addiu       $v0, $v0, -0x200
    ctx->pc = 0x49d050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x49d054: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49d054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49d058: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49d058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49d05c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49d05cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49d060: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x49d060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49d064: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x49d064u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49d068: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x49d068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x49d06c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49d06cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49d070: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49d070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49d074: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49d074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49d078: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x49d078u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x49d07c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49d07cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49d080: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x49d080u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49d084: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49d084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49d088: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49d088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49d08c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x49d08cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x49d090: 0xc129354  jal         func_4A4D50
    ctx->pc = 0x49D090u;
    SET_GPR_U32(ctx, 31, 0x49D098u);
    ctx->pc = 0x49D094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D090u;
    // 0x49d094: 0xae640000  sw          $a0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4D50u, 0x49D090u, 0x49D098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D098u;
label_49d098:
    // 0x49d098: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x49d098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49d09c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49d09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49d0a0: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x49d0a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x49d0a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49d0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49d0a8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x49d0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x49d0ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49d0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49d0b0: 0x3c070006  lui         $a3, 0x6
    ctx->pc = 0x49d0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)6 << 16));
    // 0x49d0b4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49d0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49d0b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49d0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49d0bc: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x49d0bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x49d0c0: 0x34e70001  ori         $a3, $a3, 0x1
    ctx->pc = 0x49d0c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
    // 0x49d0c4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x49d0c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49d0c8: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x49d0c8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x49d0cc: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x49d0ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x49d0d0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x49d0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49d0d4: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x49d0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x49d0d8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49d0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49d0dc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49d0dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49d0e0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49d0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49d0e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49d0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49d0e8: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x49d0e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49d0ec: 0x2442fe00  addiu       $v0, $v0, -0x200
    ctx->pc = 0x49d0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x49d0f0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49d0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49d0f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49d0f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49d0f8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49d0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x49d0fc: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x49d0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x49d100: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x49d100u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49d104: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x49d104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x49d108: 0xad270b88  sw          $a3, 0xB88($t1)
    ctx->pc = 0x49d108u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 2952), GPR_U32(ctx, 7));
    // 0x49d10c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49d10cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49d110: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49d110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49d114: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x49d114u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x49d118: 0xae880000  sw          $t0, 0x0($s4)
    ctx->pc = 0x49d118u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 8));
    // 0x49d11c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x49d11cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x49d120: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x49d120u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x49d124: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49d124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49d128: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x49d128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x49d12c: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x49d12cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x49d130: 0xae880000  sw          $t0, 0x0($s4)
    ctx->pc = 0x49d130u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 8));
    // 0x49d134: 0xc1247c2  jal         func_491F08
    ctx->pc = 0x49D134u;
    SET_GPR_U32(ctx, 31, 0x49D13Cu);
    ctx->pc = 0x49D138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49D134u;
    // 0x49d138: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491F08u, 0x49D134u, 0x49D13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49D13Cu;
label_49d13c:
    // 0x49d13c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x49D13Cu;
    {
        const bool branch_taken_0x49d13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D13Cu;
        // 0x49d140: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49d13c) {
            ctx->pc = 0x49D158u;
            goto label_49d158;
        }
    }
    ctx->pc = 0x49D144u;
    // 0x49d144: 0x0  nop
    ctx->pc = 0x49d144u;
    // NOP
label_49d148:
    // 0x49d148: 0x26b60010  addiu       $s6, $s5, 0x10
    ctx->pc = 0x49d148u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x49d14c: 0x26b70014  addiu       $s7, $s5, 0x14
    ctx->pc = 0x49d14cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 20));
    // 0x49d150: 0x26be0018  addiu       $fp, $s5, 0x18
    ctx->pc = 0x49d150u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 24));
    // 0x49d154: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x49d154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_49d158:
    // 0x49d158: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x49d158u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x49d15c: 0x24450b84  addiu       $a1, $v0, 0xB84
    ctx->pc = 0x49d15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2948));
    // 0x49d160: 0x96a2011c  lhu         $v0, 0x11C($s5)
    ctx->pc = 0x49d160u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 284)));
    // 0x49d164: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x49d164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49d168: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49d168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49d16c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49d16cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49d170: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x49d170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x49d174: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x49d174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x49d178: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49d178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49d17c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49d17cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49d180: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49d180u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49d184: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49d184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49d188: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49d188u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49d18c: 0x86a2011e  lh          $v0, 0x11E($s5)
    ctx->pc = 0x49d18cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 286)));
    // 0x49d190: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x49d190u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49d194: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x49d194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x49d198: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x49d198u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49d19c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49d19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49d1a0: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x49d1a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x49d1a4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49d1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49d1a8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x49d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x49d1ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49d1b0: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x49d1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x49d1b4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x49d1b4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49d1b8: 0x96a40120  lhu         $a0, 0x120($s5)
    ctx->pc = 0x49d1b8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 288)));
    // 0x49d1bc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x49d1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49d1c0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x49d1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x49d1c4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x49d1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x49d1c8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49d1c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49d1cc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x49d1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x49d1d0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49d1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49d1d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49d1d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49d1d8: 0x86a20122  lh          $v0, 0x122($s5)
    ctx->pc = 0x49d1d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 290)));
    // 0x49d1dc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x49d1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x49d1e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49d1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49d1e4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49d1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49d1e8: 0x8ee20000  lw          $v0, 0x0($s7)
    ctx->pc = 0x49d1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x49d1ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49d1f0: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x49d1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x49d1f4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x49d1f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x49d1f8: 0x8ea30124  lw          $v1, 0x124($s5)
    ctx->pc = 0x49d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 292)));
    // 0x49d1fc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x49d1fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x49d200: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x49d200u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x49d204: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x49d204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x49d208: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49d208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49d20c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x49d20cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x49d210: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x49d210u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x49d214: 0x3e00008  jr          $ra
    ctx->pc = 0x49D214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49D214u;
        // 0x49d218: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49D214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49D21Cu;
    // 0x49d21c: 0x0  nop
    ctx->pc = 0x49d21cu;
    // NOP
    ctx->pc = 0x49d220u;
}
