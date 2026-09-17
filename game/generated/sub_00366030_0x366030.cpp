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

// Function: sub_00366030
// Address: 0x366030 - 0x3663f8
void sub_00366030_0x366030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366030_0x366030");
#endif

    switch (ctx->pc) {
        case 0x366044u: goto label_366044;
        case 0x366068u: goto label_366068;
        case 0x3660acu: goto label_3660ac;
        case 0x3660d8u: goto label_3660d8;
        case 0x36611cu: goto label_36611c;
        case 0x366134u: goto label_366134;
        case 0x36614cu: goto label_36614c;
        case 0x366164u: goto label_366164;
        case 0x366188u: goto label_366188;
        case 0x3661b0u: goto label_3661b0;
        case 0x3661e0u: goto label_3661e0;
        case 0x3661e8u: goto label_3661e8;
        case 0x366220u: goto label_366220;
        case 0x366228u: goto label_366228;
        case 0x366260u: goto label_366260;
        case 0x3662bcu: goto label_3662bc;
        case 0x366308u: goto label_366308;
        case 0x366320u: goto label_366320;
        case 0x366340u: goto label_366340;
        case 0x366360u: goto label_366360;
        case 0x366378u: goto label_366378;
        case 0x366380u: goto label_366380;
        case 0x366398u: goto label_366398;
        case 0x3663a0u: goto label_3663a0;
        case 0x3663c0u: goto label_3663c0;
        case 0x3663e4u: goto label_3663e4;
        default: break;
    }

    ctx->pc = 0x366030u;

    // 0x366030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x366030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x366034: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x366034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x366038: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x366038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36603c: 0xc0d9314  jal         func_364C50
    ctx->pc = 0x36603Cu;
    SET_GPR_U32(ctx, 31, 0x366044u);
    ctx->pc = 0x366040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36603Cu;
    // 0x366040: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364C50u, 0x36603Cu, 0x366044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366044u;
label_366044:
    // 0x366044: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x366044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x366048: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x366048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36604c: 0xae001498  sw          $zero, 0x1498($s0)
    ctx->pc = 0x36604cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5272), GPR_U32(ctx, 0));
    // 0x366050: 0xae02148c  sw          $v0, 0x148C($s0)
    ctx->pc = 0x366050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5260), GPR_U32(ctx, 2));
    // 0x366054: 0xae001494  sw          $zero, 0x1494($s0)
    ctx->pc = 0x366054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5268), GPR_U32(ctx, 0));
    // 0x366058: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x366058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36605c: 0x3e00008  jr          $ra
    ctx->pc = 0x36605Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36605Cu;
        // 0x366060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36605Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366064u;
    // 0x366064: 0x0  nop
    ctx->pc = 0x366064u;
    // NOP
label_366068:
    // 0x366068: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x366068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36606c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36606cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x366070: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x366070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366074: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x366074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x366078: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x366078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36607c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x36607cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x366080: 0x24120800  addiu       $s2, $zero, 0x800
    ctx->pc = 0x366080u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x366084: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x366084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x366088: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x366088u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36608c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x36608cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x366090: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x366090u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366094: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x366094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x366098: 0x118b00  sll         $s1, $s1, 12
    ctx->pc = 0x366098u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 12));
    // 0x36609c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x36609cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3660a0: 0x28620801  slti        $v0, $v1, 0x801
    ctx->pc = 0x3660a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x3660a4: 0xc0d8af8  jal         func_362BE0
    ctx->pc = 0x3660A4u;
    SET_GPR_U32(ctx, 31, 0x3660ACu);
    ctx->pc = 0x3660A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3660A4u;
    // 0x3660a8: 0x62900b  movn        $s2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362BE0u, 0x3660A4u, 0x3660ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3660ACu;
label_3660ac:
    // 0x3660ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3660acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3660b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3660b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3660b4: 0x3c014496  lui         $at, 0x4496
    ctx->pc = 0x3660b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17558 << 16));
    // 0x3660b8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3660b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3660bc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3660bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x3660c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3660c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3660c4: 0x0  nop
    ctx->pc = 0x3660c4u;
    // NOP
    // 0x3660c8: 0x0  nop
    ctx->pc = 0x3660c8u;
    // NOP
    // 0x3660cc: 0x460d0343  div.s       $f13, $f0, $f13
    ctx->pc = 0x3660ccu;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[13];
    // 0x3660d0: 0xc047546  jal         func_11D518
    ctx->pc = 0x3660D0u;
    SET_GPR_U32(ctx, 31, 0x3660D8u);
    ctx->pc = 0x11D518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D518u, 0x3660D0u, 0x3660D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3660D8u;
label_3660d8:
    // 0x3660d8: 0x3402bb80  ori         $v0, $zero, 0xBB80
    ctx->pc = 0x3660d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
    // 0x3660dc: 0x222001a  div         $zero, $s1, $v0
    ctx->pc = 0x3660dcu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x3660e0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3660E0u;
    {
        const bool branch_taken_0x3660e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3660e0) {
            ctx->pc = 0x3660E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3660E0u;
            // 0x3660e4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3660E8u;
            goto label_3660e8;
        }
    }
    ctx->pc = 0x3660E8u;
label_3660e8:
    // 0x3660e8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3660e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3660ec: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3660ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3660f0: 0x8e060030  lw          $a2, 0x30($s0)
    ctx->pc = 0x3660f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3660f4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3660f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3660f8: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x3660f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3660fc: 0x8812  mflo        $s1
    ctx->pc = 0x3660fcu;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x366100: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x366100u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x366104: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x366104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x366108: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x366108u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x36610c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36610cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x366110: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x366110u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x366114: 0xc0d6ab6  jal         func_35AAD8
    ctx->pc = 0x366114u;
    SET_GPR_U32(ctx, 31, 0x36611Cu);
    ctx->pc = 0x366118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366114u;
    // 0x366118: 0xa6020994  sh          $v0, 0x994($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 2452), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AAD8u, 0x366114u, 0x36611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36611Cu;
label_36611c:
    // 0x36611c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x36611cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x366120: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x366120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x366124: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x366124u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366128: 0x8e060034  lw          $a2, 0x34($s0)
    ctx->pc = 0x366128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x36612c: 0xc0d6ab6  jal         func_35AAD8
    ctx->pc = 0x36612Cu;
    SET_GPR_U32(ctx, 31, 0x366134u);
    ctx->pc = 0x366130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36612Cu;
    // 0x366130: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AAD8u, 0x36612Cu, 0x366134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366134u;
label_366134:
    // 0x366134: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x366134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x366138: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x366138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x36613c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x36613cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x366140: 0x86060038  lh          $a2, 0x38($s0)
    ctx->pc = 0x366140u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x366144: 0xc0d6ab6  jal         func_35AAD8
    ctx->pc = 0x366144u;
    SET_GPR_U32(ctx, 31, 0x36614Cu);
    ctx->pc = 0x366148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366144u;
    // 0x366148: 0x8607003a  lh          $a3, 0x3A($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AAD8u, 0x366144u, 0x36614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36614Cu;
label_36614c:
    // 0x36614c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x36614cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x366150: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x366150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x366154: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x366154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366158: 0x96070994  lhu         $a3, 0x994($s0)
    ctx->pc = 0x366158u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2452)));
    // 0x36615c: 0xc0d6ab6  jal         func_35AAD8
    ctx->pc = 0x36615Cu;
    SET_GPR_U32(ctx, 31, 0x366164u);
    ctx->pc = 0x366160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36615Cu;
    // 0x366160: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AAD8u, 0x36615Cu, 0x366164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366164u;
label_366164:
    // 0x366164: 0xae14149c  sw          $s4, 0x149C($s0)
    ctx->pc = 0x366164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5276), GPR_U32(ctx, 20));
    // 0x366168: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x366168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36616c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x36616cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x366170: 0xae031494  sw          $v1, 0x1494($s0)
    ctx->pc = 0x366170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5268), GPR_U32(ctx, 3));
    // 0x366174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x366174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366178: 0xae02148c  sw          $v0, 0x148C($s0)
    ctx->pc = 0x366178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5260), GPR_U32(ctx, 2));
    // 0x36617c: 0xae031488  sw          $v1, 0x1488($s0)
    ctx->pc = 0x36617cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5256), GPR_U32(ctx, 3));
    // 0x366180: 0xc0d9942  jal         func_366508
    ctx->pc = 0x366180u;
    SET_GPR_U32(ctx, 31, 0x366188u);
    ctx->pc = 0x366184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366180u;
    // 0x366184: 0xae001498  sw          $zero, 0x1498($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 5272), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366508u, 0x366180u, 0x366188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366188u;
label_366188:
    // 0x366188: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x366188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36618c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36618cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366190: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x366190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x366194: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x366194u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366198: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x366198u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36619c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x36619cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3661a0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3661a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3661a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3661A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3661A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3661A4u;
        // 0x3661a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3661A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3661ACu;
    // 0x3661ac: 0x0  nop
    ctx->pc = 0x3661acu;
    // NOP
label_3661b0:
    // 0x3661b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3661b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3661b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3661b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3661b8: 0x8c831494  lw          $v1, 0x1494($a0)
    ctx->pc = 0x3661b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5268)));
    // 0x3661bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3661BCu;
    {
        const bool branch_taken_0x3661bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3661C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3661BCu;
        // 0x3661c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3661bc) {
            ctx->pc = 0x3661D0u;
            goto label_3661d0;
        }
    }
    ctx->pc = 0x3661C4u;
    // 0x3661c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3661c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3661c8: 0x80d995c  j           func_366570
    ctx->pc = 0x3661C8u;
    ctx->pc = 0x3661CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3661C8u;
    // 0x3661cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366570u, 0x3661C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3661D0u;
label_3661d0:
    // 0x3661d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3661d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3661d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3661D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3661D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3661D4u;
        // 0x3661d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3661D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3661DCu;
    // 0x3661dc: 0x0  nop
    ctx->pc = 0x3661dcu;
    // NOP
label_3661e0:
    // 0x3661e0: 0x24840a80  addiu       $a0, $a0, 0xA80
    ctx->pc = 0x3661e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2688));
    // 0x3661e4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3661e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3661e8:
    // 0x3661e8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3661e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3661ec: 0x54450006  bnel        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3661ECu;
    {
        const bool branch_taken_0x3661ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x3661ec) {
            ctx->pc = 0x3661F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3661ECu;
            // 0x3661f0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x366208u;
            goto label_366208;
        }
    }
    ctx->pc = 0x3661F4u;
    // 0x3661f4: 0x8082000c  lb          $v0, 0xC($a0)
    ctx->pc = 0x3661f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3661f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3661f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3661fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3661FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3661FCu;
        // 0x366200: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3661FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366204u;
    // 0x366204: 0x0  nop
    ctx->pc = 0x366204u;
    // NOP
label_366208:
    // 0x366208: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x366208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x36620c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x36620Cu;
    {
        const bool branch_taken_0x36620c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36620Cu;
        // 0x366210: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36620c) {
            ctx->pc = 0x3661E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3661e8;
        }
    }
    ctx->pc = 0x366214u;
    // 0x366214: 0x3e00008  jr          $ra
    ctx->pc = 0x366214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366214u;
        // 0x366218: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36621Cu;
    // 0x36621c: 0x0  nop
    ctx->pc = 0x36621cu;
    // NOP
label_366220:
    // 0x366220: 0x24840a80  addiu       $a0, $a0, 0xA80
    ctx->pc = 0x366220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2688));
    // 0x366224: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x366224u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_366228:
    // 0x366228: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x366228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x36622c: 0x54450006  bnel        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x36622Cu;
    {
        const bool branch_taken_0x36622c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x36622c) {
            ctx->pc = 0x366230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36622Cu;
            // 0x366230: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x366248u;
            goto label_366248;
        }
    }
    ctx->pc = 0x366234u;
    // 0x366234: 0x9082000c  lbu         $v0, 0xC($a0)
    ctx->pc = 0x366234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x366238: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x366238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x36623c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x36623cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x366240: 0x3e00008  jr          $ra
    ctx->pc = 0x366240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366240u;
        // 0x366244: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366248u;
label_366248:
    // 0x366248: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x366248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x36624c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x36624Cu;
    {
        const bool branch_taken_0x36624c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x366250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36624Cu;
        // 0x366250: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36624c) {
            ctx->pc = 0x366228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366228;
        }
    }
    ctx->pc = 0x366254u;
    // 0x366254: 0x3e00008  jr          $ra
    ctx->pc = 0x366254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366254u;
        // 0x366258: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36625Cu;
    // 0x36625c: 0x0  nop
    ctx->pc = 0x36625cu;
    // NOP
label_366260:
    // 0x366260: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x366260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x366264: 0x24031fc6  addiu       $v1, $zero, 0x1FC6
    ctx->pc = 0x366264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8134));
    // 0x366268: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x366268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36626c: 0x24100800  addiu       $s0, $zero, 0x800
    ctx->pc = 0x36626cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x366270: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x366270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x366274: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x366274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366278: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x366278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36627c: 0x2632098c  addiu       $s2, $s1, 0x98C
    ctx->pc = 0x36627cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 2444));
    // 0x366280: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x366280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x366284: 0x24071770  addiu       $a3, $zero, 0x1770
    ctx->pc = 0x366284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x366288: 0x240210ff  addiu       $v0, $zero, 0x10FF
    ctx->pc = 0x366288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4351));
    // 0x36628c: 0xa6230992  sh          $v1, 0x992($s1)
    ctx->pc = 0x36628cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2450), (uint16_t)GPR_U32(ctx, 3));
    // 0x366290: 0x8e260028  lw          $a2, 0x28($s1)
    ctx->pc = 0x366290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x366294: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x366294u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366298: 0x8e280034  lw          $t0, 0x34($s1)
    ctx->pc = 0x366298u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x36629c: 0x28c40801  slti        $a0, $a2, 0x801
    ctx->pc = 0x36629cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2049) ? 1 : 0);
    // 0x3662a0: 0xa627098e  sh          $a3, 0x98E($s1)
    ctx->pc = 0x3662a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2446), (uint16_t)GPR_U32(ctx, 7));
    // 0x3662a4: 0xc4800b  movn        $s0, $a2, $a0
    ctx->pc = 0x3662a4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 6));
    // 0x3662a8: 0x86240038  lh          $a0, 0x38($s1)
    ctx->pc = 0x3662a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x3662ac: 0xae280998  sw          $t0, 0x998($s1)
    ctx->pc = 0x3662acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2456), GPR_U32(ctx, 8));
    // 0x3662b0: 0xa627098c  sh          $a3, 0x98C($s1)
    ctx->pc = 0x3662b0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2444), (uint16_t)GPR_U32(ctx, 7));
    // 0x3662b4: 0xc0d8856  jal         func_362158
    ctx->pc = 0x3662B4u;
    SET_GPR_U32(ctx, 31, 0x3662BCu);
    ctx->pc = 0x3662B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3662B4u;
    // 0x3662b8: 0xa6220990  sh          $v0, 0x990($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 2448), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362158u, 0x3662B4u, 0x3662BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3662BCu;
label_3662bc:
    // 0x3662bc: 0x262509a0  addiu       $a1, $s1, 0x9A0
    ctx->pc = 0x3662bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2464));
    // 0x3662c0: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x3662c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3662c4: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x3662c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3662c8: 0x6a43000f  ldl         $v1, 0xF($s2)
    ctx->pc = 0x3662c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3662cc: 0x6e430008  ldr         $v1, 0x8($s2)
    ctx->pc = 0x3662ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3662d0: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x3662d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x3662d4: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x3662d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3662d8: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x3662d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3662dc: 0xb0a3000f  sdl         $v1, 0xF($a1)
    ctx->pc = 0x3662dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3662e0: 0xb4a30008  sdr         $v1, 0x8($a1)
    ctx->pc = 0x3662e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3662e4: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x3662e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
    // 0x3662e8: 0x1017c2  srl         $v0, $s0, 31
    ctx->pc = 0x3662e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x3662ec: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3662ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3662f0: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x3662f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3662f4: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x3662f4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x3662f8: 0x8624003a  lh          $a0, 0x3A($s1)
    ctx->pc = 0x3662f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 58)));
    // 0x3662fc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3662fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x366300: 0xc0d8856  jal         func_362158
    ctx->pc = 0x366300u;
    SET_GPR_U32(ctx, 31, 0x366308u);
    ctx->pc = 0x366304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366300u;
    // 0x366304: 0xae2209ac  sw          $v0, 0x9AC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2476), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362158u, 0x366300u, 0x366308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366308u;
label_366308:
    // 0x366308: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x366308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x36630c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x36630cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x366310: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x366310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x366314: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x366314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x366318: 0xc0d6ab6  jal         func_35AAD8
    ctx->pc = 0x366318u;
    SET_GPR_U32(ctx, 31, 0x366320u);
    ctx->pc = 0x36631Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366318u;
    // 0x36631c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AAD8u, 0x366318u, 0x366320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366320u;
label_366320:
    // 0x366320: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x366320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366324: 0xae221498  sw          $v0, 0x1498($s1)
    ctx->pc = 0x366324u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5272), GPR_U32(ctx, 2));
    // 0x366328: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x366328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x36632c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x36632cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x366330: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x366330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366334: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x366334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x366338: 0xc0d6ab6  jal         func_35AAD8
    ctx->pc = 0x366338u;
    SET_GPR_U32(ctx, 31, 0x366340u);
    ctx->pc = 0x36633Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366338u;
    // 0x36633c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AAD8u, 0x366338u, 0x366340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366340u;
label_366340:
    // 0x366340: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x366340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366344: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x366344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x366348: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x366348u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36634c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x36634cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366350: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x366350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366354: 0x3e00008  jr          $ra
    ctx->pc = 0x366354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366354u;
        // 0x366358: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36635Cu;
    // 0x36635c: 0x0  nop
    ctx->pc = 0x36635cu;
    // NOP
label_366360:
    // 0x366360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x366360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x366364: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x366364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x366368: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x366368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36636c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36636cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x366370: 0xc0d8890  jal         func_362240
    ctx->pc = 0x366370u;
    SET_GPR_U32(ctx, 31, 0x366378u);
    ctx->pc = 0x366374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366370u;
    // 0x366374: 0x86040038  lh          $a0, 0x38($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362240u, 0x366370u, 0x366378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366378u;
label_366378:
    // 0x366378: 0xc0d8890  jal         func_362240
    ctx->pc = 0x366378u;
    SET_GPR_U32(ctx, 31, 0x366380u);
    ctx->pc = 0x36637Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366378u;
    // 0x36637c: 0x8604003a  lh          $a0, 0x3A($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 58)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362240u, 0x366378u, 0x366380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366380u;
label_366380:
    // 0x366380: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x366380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x366384: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x366384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x366388: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x366388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36638c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x36638cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x366390: 0xc0d6ab6  jal         func_35AAD8
    ctx->pc = 0x366390u;
    SET_GPR_U32(ctx, 31, 0x366398u);
    ctx->pc = 0x366394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366390u;
    // 0x366394: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AAD8u, 0x366390u, 0x366398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366398u;
label_366398:
    // 0x366398: 0xc0d9942  jal         func_366508
    ctx->pc = 0x366398u;
    SET_GPR_U32(ctx, 31, 0x3663A0u);
    ctx->pc = 0x36639Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x366398u;
    // 0x36639c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366508u, 0x366398u, 0x3663A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3663A0u;
label_3663a0:
    // 0x3663a0: 0xae001494  sw          $zero, 0x1494($s0)
    ctx->pc = 0x3663a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5268), GPR_U32(ctx, 0));
    // 0x3663a4: 0xae001498  sw          $zero, 0x1498($s0)
    ctx->pc = 0x3663a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5272), GPR_U32(ctx, 0));
    // 0x3663a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3663a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3663ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3663acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3663b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3663b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3663b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3663B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3663B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3663B4u;
        // 0x3663b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3663B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3663BCu;
    // 0x3663bc: 0x0  nop
    ctx->pc = 0x3663bcu;
    // NOP
label_3663c0:
    // 0x3663c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3663c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3663c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3663c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3663c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3663c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3663cc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x3663ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3663d0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x3663d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3663d4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3663d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3663d8: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x3663d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3663dc: 0xc0d6ab6  jal         func_35AAD8
    ctx->pc = 0x3663DCu;
    SET_GPR_U32(ctx, 31, 0x3663E4u);
    ctx->pc = 0x3663E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3663DCu;
    // 0x3663e0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AAD8u, 0x3663DCu, 0x3663E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3663E4u;
label_3663e4:
    // 0x3663e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3663e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3663e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3663e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3663ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3663ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3663F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3663ECu;
        // 0x3663f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3663ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3663F4u;
    // 0x3663f4: 0x0  nop
    ctx->pc = 0x3663f4u;
    // NOP
    ctx->pc = 0x3663f8u;
}
