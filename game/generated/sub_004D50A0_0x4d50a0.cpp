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

// Function: sub_004D50A0
// Address: 0x4d50a0 - 0x4d51a0
void sub_004D50A0_0x4d50a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D50A0_0x4d50a0");
#endif

    switch (ctx->pc) {
        case 0x4d5130u: goto label_4d5130;
        case 0x4d5178u: goto label_4d5178;
        default: break;
    }

    ctx->pc = 0x4d50a0u;

    // 0x4d50a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4d50a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4d50a4: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d50a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4d50a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d50a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4d50ac: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4d50acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4d50b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d50b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4d50b4: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4d50b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4d50b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d50b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4d50bc: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4d50bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4d50c0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d50c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4d50c4: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4d50c4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4d50c8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d50c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4d50cc: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x4d50ccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x4d50d0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d50d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4d50d4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4d50d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d50d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4d50d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4d50dc: 0x26731074  addiu       $s3, $s3, 0x1074
    ctx->pc = 0x4d50dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4212));
    // 0x4d50e0: 0x26311060  addiu       $s1, $s1, 0x1060
    ctx->pc = 0x4d50e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4192));
    // 0x4d50e4: 0x26521064  addiu       $s2, $s2, 0x1064
    ctx->pc = 0x4d50e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4196));
    // 0x4d50e8: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4d50e8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F1074u));
    // 0x4d50ec: 0x26101070  addiu       $s0, $s0, 0x1070
    ctx->pc = 0x4d50ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4208));
    // 0x4d50f0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4d50f0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F1060u));
    // 0x4d50f4: 0x24a4106c  addiu       $a0, $a1, 0x106C
    ctx->pc = 0x4d50f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4204));
    // 0x4d50f8: 0x84e20022  lh          $v0, 0x22($a3)
    ctx->pc = 0x4d50f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 34)));
    // 0x4d50fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4d50fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d5100: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d5100u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d5104: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4d5104u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1064u));
    // 0x4d5108: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4d5108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4d510c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d510cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4d5110: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d5110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d5114: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4d5114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4d5118: 0x84e20024  lh          $v0, 0x24($a3)
    ctx->pc = 0x4d5118u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x4d511c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4d511cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4d5120: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d5120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d5124: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d5124u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4d5128: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4D5128u;
    SET_GPR_U32(ctx, 31, 0x4D5130u);
    ctx->pc = 0x4D512Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5128u;
    // 0x4d512c: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4D5128u, 0x4D5130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5130u;
label_4d5130:
    // 0x4d5130: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4d5130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4d5134: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4d5134u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4d5138: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4d5138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4d513c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4d513cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4d5140: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4d5140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4d5144: 0x84e20026  lh          $v0, 0x26($a3)
    ctx->pc = 0x4d5144u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 38)));
    // 0x4d5148: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4d5148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d514c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d514cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4d5150: 0x24841068  addiu       $a0, $a0, 0x1068
    ctx->pc = 0x4d5150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4200));
    // 0x4d5154: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4d5154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4d5158: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4d5158u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4d515c: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4d515cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4d5160: 0x84e20028  lh          $v0, 0x28($a3)
    ctx->pc = 0x4d5160u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x4d5164: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4d5164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4d5168: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d5168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4d516c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d516cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4d5170: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4D5170u;
    SET_GPR_U32(ctx, 31, 0x4D5178u);
    ctx->pc = 0x4D5174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5170u;
    // 0x4d5174: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4D5170u, 0x4D5178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D5178u;
label_4d5178:
    // 0x4d5178: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4d5178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d517c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d517cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d5180: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d5180u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4d5184: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d5184u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4d5188: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d5188u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4d518c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d518cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4d5190: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d5190u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4d5194: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4d5194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4d5198: 0x81354c0  j           func_4D5300
    ctx->pc = 0x4D5198u;
    ctx->pc = 0x4D519Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D5198u;
    // 0x4d519c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D5300u, 0x4D5198u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4D51A0u;
}
