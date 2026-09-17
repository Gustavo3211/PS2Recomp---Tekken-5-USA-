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

// Function: sub_0030DF40
// Address: 0x30df40 - 0x30e0d8
void sub_0030DF40_0x30df40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DF40_0x30df40");
#endif

    switch (ctx->pc) {
        case 0x30df78u: goto label_30df78;
        case 0x30e030u: goto label_30e030;
        default: break;
    }

    ctx->pc = 0x30df40u;

    // 0x30df40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30df40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30df44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30df44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30df48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30df48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30df4c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x30df4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x30df50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30df50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30df54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30df54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30df58: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x30df58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x30df5c: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x30df5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30df60: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x30df60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x30df64: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x30df64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30df68: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x30df68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x30df6c: 0x24150047  addiu       $s5, $zero, 0x47
    ctx->pc = 0x30df6cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x30df70: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x30df70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x30df74: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x30df74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_30df78:
    // 0x30df78: 0x241022c0  addiu       $s0, $zero, 0x22C0
    ctx->pc = 0x30df78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8896));
    // 0x30df7c: 0x3c02108b  lui         $v0, 0x108B
    ctx->pc = 0x30df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4235 << 16));
    // 0x30df80: 0x2501818  mult        $v1, $s2, $s0
    ctx->pc = 0x30df80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30df84: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30df84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30df88: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x30df88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x30df8c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x30df8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x30df90: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x30df90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x30df94: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x30df94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30df98: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x30df98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30df9c: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x30df9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30dfa0: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x30dfa0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x30dfa4: 0x768021  addu        $s0, $v1, $s6
    ctx->pc = 0x30dfa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x30dfa8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x30dfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30dfac: 0x26111190  addiu       $s1, $s0, 0x1190
    ctx->pc = 0x30dfacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4496));
    // 0x30dfb0: 0x3c080005  lui         $t0, 0x5
    ctx->pc = 0x30dfb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)5 << 16));
    // 0x30dfb4: 0x3508000d  ori         $t0, $t0, 0xD
    ctx->pc = 0x30dfb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)13);
    // 0x30dfb8: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x30dfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x30dfbc: 0x2409003f  addiu       $t1, $zero, 0x3F
    ctx->pc = 0x30dfbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30dfc0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x30dfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x30dfc4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x30dfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30dfc8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30dfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x30dfcc: 0x261111a0  addiu       $s1, $s0, 0x11A0
    ctx->pc = 0x30dfccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4512));
    // 0x30dfd0: 0xfe250008  sd          $a1, 0x8($s1)
    ctx->pc = 0x30dfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 5));
    // 0x30dfd4: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30dfd4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30dfd8: 0x261111b0  addiu       $s1, $s0, 0x11B0
    ctx->pc = 0x30dfd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4528));
    // 0x30dfdc: 0xfe260008  sd          $a2, 0x8($s1)
    ctx->pc = 0x30dfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 6));
    // 0x30dfe0: 0x8f82c544  lw          $v0, -0x3ABC($gp)
    ctx->pc = 0x30dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952260)));
    // 0x30dfe4: 0x8f83c548  lw          $v1, -0x3AB8($gp)
    ctx->pc = 0x30dfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952264)));
    // 0x30dfe8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30dfec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30dff0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30dff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30dff4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x30dff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30dff8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30dff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30dffc: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x30dffcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x30e000: 0x261111c0  addiu       $s1, $s0, 0x11C0
    ctx->pc = 0x30e000u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4544));
    // 0x30e004: 0xfe2a0008  sd          $t2, 0x8($s1)
    ctx->pc = 0x30e004u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 10));
    // 0x30e008: 0xfe270000  sd          $a3, 0x0($s1)
    ctx->pc = 0x30e008u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 7));
    // 0x30e00c: 0x261111d0  addiu       $s1, $s0, 0x11D0
    ctx->pc = 0x30e00cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4560));
    // 0x30e010: 0xfe350008  sd          $s5, 0x8($s1)
    ctx->pc = 0x30e010u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 21));
    // 0x30e014: 0xfe280000  sd          $t0, 0x0($s1)
    ctx->pc = 0x30e014u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 8));
    // 0x30e018: 0x261111e0  addiu       $s1, $s0, 0x11E0
    ctx->pc = 0x30e018u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4576));
    // 0x30e01c: 0xfe290008  sd          $t1, 0x8($s1)
    ctx->pc = 0x30e01cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 9));
    // 0x30e020: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30e020u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30e024: 0x261111f0  addiu       $s1, $s0, 0x11F0
    ctx->pc = 0x30e024u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4592));
    // 0x30e028: 0xc0c468c  jal         func_311A30
    ctx->pc = 0x30E028u;
    SET_GPR_U32(ctx, 31, 0x30E030u);
    ctx->pc = 0x30E02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E028u;
    // 0x30e02c: 0xfe240008  sd          $a0, 0x8($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311A30u, 0x30E028u, 0x30E030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E030u;
label_30e030:
    // 0x30e030: 0x8f83c55c  lw          $v1, -0x3AA4($gp)
    ctx->pc = 0x30e030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952284)));
    // 0x30e034: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x30e034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x30e038: 0x3404d500  ori         $a0, $zero, 0xD500
    ctx->pc = 0x30e038u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54528);
    // 0x30e03c: 0x424f8  dsll        $a0, $a0, 19
    ctx->pc = 0x30e03cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 19);
    // 0x30e040: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30e040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30e044: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x30e044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x30e048: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30e048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30e04c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x30e04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x30e050: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30e050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30e054: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x30e054u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30e058: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30e058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30e05c: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x30e05cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x30e060: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x30e060u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x30e064: 0x26111200  addiu       $s1, $s0, 0x1200
    ctx->pc = 0x30e064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4608));
    // 0x30e068: 0xfe250008  sd          $a1, 0x8($s1)
    ctx->pc = 0x30e068u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 5));
    // 0x30e06c: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30e06cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30e070: 0x26111210  addiu       $s1, $s0, 0x1210
    ctx->pc = 0x30e070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4624));
    // 0x30e074: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30e074u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30e078: 0xfe340008  sd          $s4, 0x8($s1)
    ctx->pc = 0x30e078u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 20));
    // 0x30e07c: 0x26111220  addiu       $s1, $s0, 0x1220
    ctx->pc = 0x30e07cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4640));
    // 0x30e080: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30e080u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30e084: 0xfe330008  sd          $s3, 0x8($s1)
    ctx->pc = 0x30e084u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 19));
    // 0x30e088: 0x26111230  addiu       $s1, $s0, 0x1230
    ctx->pc = 0x30e088u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4656));
    // 0x30e08c: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30e08cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30e090: 0xfe340008  sd          $s4, 0x8($s1)
    ctx->pc = 0x30e090u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 20));
    // 0x30e094: 0x26111240  addiu       $s1, $s0, 0x1240
    ctx->pc = 0x30e094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4672));
    // 0x30e098: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30e098u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30e09c: 0xfe330008  sd          $s3, 0x8($s1)
    ctx->pc = 0x30e09cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 19));
    // 0x30e0a0: 0x26111250  addiu       $s1, $s0, 0x1250
    ctx->pc = 0x30e0a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4688));
    // 0x30e0a4: 0xfe260000  sd          $a2, 0x0($s1)
    ctx->pc = 0x30e0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 6));
    // 0x30e0a8: 0x1460ffb3  bnez        $v1, . + 4 + (-0x4D << 2)
    ctx->pc = 0x30E0A8u;
    {
        const bool branch_taken_0x30e0a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E0A8u;
        // 0x30e0ac: 0xfe350008  sd          $s5, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e0a8) {
            ctx->pc = 0x30DF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30df78;
        }
    }
    ctx->pc = 0x30E0B0u;
    // 0x30e0b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30e0b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e0b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30e0b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30e0b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30e0b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e0bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x30e0bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30e0c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x30e0c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30e0c4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x30e0c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30e0c8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x30e0c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30e0cc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x30e0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30e0d0: 0x3e00008  jr          $ra
    ctx->pc = 0x30E0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E0D0u;
        // 0x30e0d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E0D8u;
}
