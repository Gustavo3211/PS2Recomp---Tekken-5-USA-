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

// Function: sub_0030E780
// Address: 0x30e780 - 0x310db8
void sub_0030E780_0x30e780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E780_0x30e780");
#endif

    switch (ctx->pc) {
        case 0x30e7e0u: goto label_30e7e0;
        case 0x30eaf8u: goto label_30eaf8;
        case 0x30eb30u: goto label_30eb30;
        case 0x30ecb0u: goto label_30ecb0;
        case 0x30edb8u: goto label_30edb8;
        case 0x30ede0u: goto label_30ede0;
        case 0x30ee28u: goto label_30ee28;
        case 0x30ee68u: goto label_30ee68;
        case 0x30ee98u: goto label_30ee98;
        case 0x30f110u: goto label_30f110;
        case 0x30f158u: goto label_30f158;
        case 0x30f600u: goto label_30f600;
        case 0x30f6e8u: goto label_30f6e8;
        case 0x30f728u: goto label_30f728;
        case 0x30f848u: goto label_30f848;
        case 0x30f888u: goto label_30f888;
        case 0x30fa00u: goto label_30fa00;
        case 0x30fa48u: goto label_30fa48;
        case 0x3101a0u: goto label_3101a0;
        case 0x310208u: goto label_310208;
        case 0x310400u: goto label_310400;
        case 0x310560u: goto label_310560;
        case 0x3105a8u: goto label_3105a8;
        case 0x3108c0u: goto label_3108c0;
        case 0x3108f8u: goto label_3108f8;
        case 0x310a40u: goto label_310a40;
        case 0x310a88u: goto label_310a88;
        default: break;
    }

    ctx->pc = 0x30e780u;

    // 0x30e780: 0x800013  mtlo        $a0
    ctx->pc = 0x30e780u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x30e784: 0x240222c0  addiu       $v0, $zero, 0x22C0
    ctx->pc = 0x30e784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8896));
    // 0x30e788: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x30e788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x30e78c: 0x70a21800  madd        $v1, $a1, $v0
    ctx->pc = 0x30e78cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30e790: 0xffb301d8  sd          $s3, 0x1D8($sp)
    ctx->pc = 0x30e790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 19));
    // 0x30e794: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x30e794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e798: 0xffb701f8  sd          $s7, 0x1F8($sp)
    ctx->pc = 0x30e798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 23));
    // 0x30e79c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x30e79cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e7a0: 0xffb001c0  sd          $s0, 0x1C0($sp)
    ctx->pc = 0x30e7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 16));
    // 0x30e7a4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30e7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e7a8: 0xffb101c8  sd          $s1, 0x1C8($sp)
    ctx->pc = 0x30e7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 17));
    // 0x30e7ac: 0x24630330  addiu       $v1, $v1, 0x330
    ctx->pc = 0x30e7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 816));
    // 0x30e7b0: 0xffb201d0  sd          $s2, 0x1D0($sp)
    ctx->pc = 0x30e7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 18));
    // 0x30e7b4: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x30e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x30e7b8: 0xffb401e0  sd          $s4, 0x1E0($sp)
    ctx->pc = 0x30e7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 20));
    // 0x30e7bc: 0x629825  or          $s3, $v1, $v0
    ctx->pc = 0x30e7bcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30e7c0: 0xffb501e8  sd          $s5, 0x1E8($sp)
    ctx->pc = 0x30e7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 21));
    // 0x30e7c4: 0xffb601f0  sd          $s6, 0x1F0($sp)
    ctx->pc = 0x30e7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 22));
    // 0x30e7c8: 0xffbe0200  sd          $fp, 0x200($sp)
    ctx->pc = 0x30e7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 30));
    // 0x30e7cc: 0xffbf0208  sd          $ra, 0x208($sp)
    ctx->pc = 0x30e7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 31));
    // 0x30e7d0: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x30e7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
    // 0x30e7d4: 0x8ce40320  lw          $a0, 0x320($a3)
    ctx->pc = 0x30e7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 800)));
    // 0x30e7d8: 0xc0cc106  jal         func_330418
    ctx->pc = 0x30E7D8u;
    SET_GPR_U32(ctx, 31, 0x30E7E0u);
    ctx->pc = 0x30E7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E7D8u;
    // 0x30e7dc: 0xafa30134  sw          $v1, 0x134($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330418u, 0x30E7D8u, 0x30E7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E7E0u;
label_30e7e0:
    // 0x30e7e0: 0x8fa80130  lw          $t0, 0x130($sp)
    ctx->pc = 0x30e7e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x30e7e4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x30e7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x30e7e8: 0xc5000014  lwc1        $f0, 0x14($t0)
    ctx->pc = 0x30e7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30e7ec: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x30e7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x30e7f0: 0x23982  srl         $a3, $v0, 6
    ctx->pc = 0x30e7f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x30e7f4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30e7f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30e7f8: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x30e7f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30e7fc: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x30e7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
    // 0x30e800: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x30e800u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x30e804: 0x30840040  andi        $a0, $a0, 0x40
    ctx->pc = 0x30e804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x30e808: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x30e808u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30e80c: 0xafa50140  sw          $a1, 0x140($sp)
    ctx->pc = 0x30e80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 5));
    // 0x30e810: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x30e810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x30e814: 0xafa60160  sw          $a2, 0x160($sp)
    ctx->pc = 0x30e814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 6));
    // 0x30e818: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x30e818u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x30e81c: 0xafa70154  sw          $a3, 0x154($sp)
    ctx->pc = 0x30e81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 7));
    // 0x30e820: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x30e820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30e824: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x30e824u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x30e828: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x30E828u;
    {
        const bool branch_taken_0x30e828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E828u;
        // 0x30e82c: 0xafa30150  sw          $v1, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e828) {
            ctx->pc = 0x30E890u;
            goto label_30e890;
        }
    }
    ctx->pc = 0x30E830u;
    // 0x30e830: 0x34040  sll         $t0, $v1, 1
    ctx->pc = 0x30e830u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30e834: 0x8f89c54c  lw          $t1, -0x3AB4($gp)
    ctx->pc = 0x30e834u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x30e838: 0xafa8018c  sw          $t0, 0x18C($sp)
    ctx->pc = 0x30e838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 8));
    // 0x30e83c: 0x8f8acba0  lw          $t2, -0x3460($gp)
    ctx->pc = 0x30e83cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953888)));
    // 0x30e840: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x30e840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x30e844: 0x8f88cb9c  lw          $t0, -0x3464($gp)
    ctx->pc = 0x30e844u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953884)));
    // 0x30e848: 0x4a2021  addu        $a0, $v0, $t2
    ctx->pc = 0x30e848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x30e84c: 0x1282821  addu        $a1, $t1, $t0
    ctx->pc = 0x30e84cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x30e850: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x30e850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x30e854: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x30e854u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x30e858: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x30e858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x30e85c: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x30e85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x30e860: 0x24a5001e  addiu       $a1, $a1, 0x1E
    ctx->pc = 0x30e860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30));
    // 0x30e864: 0x24840021  addiu       $a0, $a0, 0x21
    ctx->pc = 0x30e864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 33));
    // 0x30e868: 0x28460000  slti        $a2, $v0, 0x0
    ctx->pc = 0x30e868u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30e86c: 0x28670000  slti        $a3, $v1, 0x0
    ctx->pc = 0x30e86cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30e870: 0x86100b  movn        $v0, $a0, $a2
    ctx->pc = 0x30e870u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x30e874: 0xa7180b  movn        $v1, $a1, $a3
    ctx->pc = 0x30e874u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x30e878: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x30e878u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x30e87c: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x30e87cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x30e880: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30e880u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30e884: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30e884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30e888: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30E888u;
    {
        const bool branch_taken_0x30e888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E888u;
        // 0x30e88c: 0xafa20158  sw          $v0, 0x158($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e888) {
            ctx->pc = 0x30E8ACu;
            goto label_30e8ac;
        }
    }
    ctx->pc = 0x30E890u;
label_30e890:
    // 0x30e890: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x30e890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x30e894: 0x8f8acba0  lw          $t2, -0x3460($gp)
    ctx->pc = 0x30e894u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953888)));
    // 0x30e898: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x30e898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30e89c: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x30e89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
    // 0x30e8a0: 0x8f89c54c  lw          $t1, -0x3AB4($gp)
    ctx->pc = 0x30e8a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x30e8a4: 0xafa3018c  sw          $v1, 0x18C($sp)
    ctx->pc = 0x30e8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 3));
    // 0x30e8a8: 0x8f88cb9c  lw          $t0, -0x3464($gp)
    ctx->pc = 0x30e8a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953884)));
label_30e8ac:
    // 0x30e8ac: 0x8f85cba4  lw          $a1, -0x345C($gp)
    ctx->pc = 0x30e8acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953892)));
    // 0x30e8b0: 0x1483823  subu        $a3, $t2, $t0
    ctx->pc = 0x30e8b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x30e8b4: 0x8f83cba8  lw          $v1, -0x3458($gp)
    ctx->pc = 0x30e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953896)));
    // 0x30e8b8: 0x24f20001  addiu       $s2, $a3, 0x1
    ctx->pc = 0x30e8b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x30e8bc: 0x8f84c550  lw          $a0, -0x3AB0($gp)
    ctx->pc = 0x30e8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x30e8c0: 0x3a460001  xori        $a2, $s2, 0x1
    ctx->pc = 0x30e8c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
    // 0x30e8c4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x30e8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30e8c8: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x30e8c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x30e8cc: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x30e8ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30e8d0: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x30e8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x30e8d4: 0x3a220001  xori        $v0, $s1, 0x1
    ctx->pc = 0x30e8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x30e8d8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x30e8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30e8dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30e8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30e8e0: 0x248fffff  addiu       $t7, $a0, -0x1
    ctx->pc = 0x30e8e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x30e8e4: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x30e8e4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x30e8e8: 0xf1100  sll         $v0, $t7, 4
    ctx->pc = 0x30e8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x30e8ec: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x30e8ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x30e8f0: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x30e8f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x30e8f4: 0x250effff  addiu       $t6, $t0, -0x1
    ctx->pc = 0x30e8f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x30e8f8: 0x1f12821  addu        $a1, $t7, $s1
    ctx->pc = 0x30e8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x30e8fc: 0xe6900b  movn        $s2, $a3, $a2
    ctx->pc = 0x30e8fcu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 7));
    // 0x30e900: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x30e900u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x30e904: 0x1d22021  addu        $a0, $t6, $s2
    ctx->pc = 0x30e904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 18)));
    // 0x30e908: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x30e908u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30e90c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x30e90cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x30e910: 0xe1900  sll         $v1, $t6, 4
    ctx->pc = 0x30e910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x30e914: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30e914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30e918: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x30e918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x30e91c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x30e91cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x30e920: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30e920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30e924: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x30e924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30e928: 0x31a3c  dsll32      $v1, $v1, 8
    ctx->pc = 0x30e928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 8));
    // 0x30e92c: 0x31a3a  dsrl        $v1, $v1, 8
    ctx->pc = 0x30e92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 8);
    // 0x30e930: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x30e930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x30e934: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30e934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30e938: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x30e938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30e93c: 0xfe620030  sd          $v0, 0x30($s3)
    ctx->pc = 0x30e93cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 48), GPR_U64(ctx, 2));
    // 0x30e940: 0xfe640040  sd          $a0, 0x40($s3)
    ctx->pc = 0x30e940u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 64), GPR_U64(ctx, 4));
    // 0x30e944: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x30e944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x30e948: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x30e948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x30e94c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x30e94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x30e950: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30E950u;
    {
        const bool branch_taken_0x30e950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E950u;
        // 0x30e954: 0x26780050  addiu       $t8, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e950) {
            ctx->pc = 0x30E978u;
            goto label_30e978;
        }
    }
    ctx->pc = 0x30E958u;
    // 0x30e958: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x30e958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x30e95c: 0x3c025100  lui         $v0, 0x5100
    ctx->pc = 0x30e95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20736 << 16));
    // 0x30e960: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x30e960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x30e964: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x30e964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x30e968: 0xaf02000c  sw          $v0, 0xC($t8)
    ctx->pc = 0x30e968u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 2));
    // 0x30e96c: 0xaf030000  sw          $v1, 0x0($t8)
    ctx->pc = 0x30e96cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 3));
    // 0x30e970: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30E970u;
    {
        const bool branch_taken_0x30e970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E970u;
        // 0x30e974: 0xaf000004  sw          $zero, 0x4($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e970) {
            ctx->pc = 0x30E990u;
            goto label_30e990;
        }
    }
    ctx->pc = 0x30E978u;
label_30e978:
    // 0x30e978: 0x8fa50134  lw          $a1, 0x134($sp)
    ctx->pc = 0x30e978u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x30e97c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x30e97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x30e980: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x30e980u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    // 0x30e984: 0x24a30b90  addiu       $v1, $a1, 0xB90
    ctx->pc = 0x30e984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2960));
    // 0x30e988: 0xaf00000c  sw          $zero, 0xC($t8)
    ctx->pc = 0x30e988u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 0));
    // 0x30e98c: 0xaf030004  sw          $v1, 0x4($t8)
    ctx->pc = 0x30e98cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 3));
label_30e990:
    // 0x30e990: 0xaf000008  sw          $zero, 0x8($t8)
    ctx->pc = 0x30e990u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 0));
    // 0x30e994: 0x8fa70130  lw          $a3, 0x130($sp)
    ctx->pc = 0x30e994u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x30e998: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30e998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30e99c: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x30e99cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x30e9a0: 0x30c3000f  andi        $v1, $a2, 0xF
    ctx->pc = 0x30e9a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x30e9a4: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x30E9A4u;
    {
        const bool branch_taken_0x30e9a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E9A4u;
        // 0x30e9a8: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e9a4) {
            ctx->pc = 0x30EA00u;
            goto label_30ea00;
        }
    }
    ctx->pc = 0x30E9ACu;
    // 0x30e9ac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x30E9ACu;
    {
        const bool branch_taken_0x30e9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E9ACu;
        // 0x30e9b0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e9ac) {
            ctx->pc = 0x30E9F8u;
            goto label_30e9f8;
        }
    }
    ctx->pc = 0x30E9B4u;
    // 0x30e9b4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x30e9b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x30e9b8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x30E9B8u;
    {
        const bool branch_taken_0x30e9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E9B8u;
        // 0x30e9bc: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e9b8) {
            ctx->pc = 0x30EA0Cu;
            goto label_30ea0c;
        }
    }
    ctx->pc = 0x30E9C0u;
    // 0x30e9c0: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x30E9C0u;
    {
        const bool branch_taken_0x30e9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E9C0u;
        // 0x30e9c4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e9c0) {
            ctx->pc = 0x30EA10u;
            goto label_30ea10;
        }
    }
    ctx->pc = 0x30E9C8u;
    // 0x30e9c8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x30e9cc: 0x241e0020  addiu       $fp, $zero, 0x20
    ctx->pc = 0x30e9ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x30e9d0: 0x2442f6c4  addiu       $v0, $v0, -0x93C
    ctx->pc = 0x30e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964932));
    // 0x30e9d4: 0x6848001f  ldl         $t0, 0x1F($v0)
    ctx->pc = 0x30e9d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x30e9d8: 0x6c480018  ldr         $t0, 0x18($v0)
    ctx->pc = 0x30e9d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x30e9dc: 0x8c490020  lw          $t1, 0x20($v0)
    ctx->pc = 0x30e9dcu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x3EF6E4u));
    // 0x30e9e0: 0xb0480187  sdl         $t0, 0x187($v0)
    ctx->pc = 0x30e9e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 391); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30e9e4: 0xb4480180  sdr         $t0, 0x180($v0)
    ctx->pc = 0x30e9e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 384); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30e9e8: 0xac490188  sw          $t1, 0x188($v0)
    ctx->pc = 0x30e9e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x3EF84Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF84Cu, _value); } while (0);
    // 0x30e9ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30E9ECu;
    {
        const bool branch_taken_0x30e9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E9ECu;
        // 0x30e9f0: 0x8ce60004  lw          $a2, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e9ec) {
            ctx->pc = 0x30EA08u;
            goto label_30ea08;
        }
    }
    ctx->pc = 0x30E9F4u;
    // 0x30e9f4: 0x0  nop
    ctx->pc = 0x30e9f4u;
    // NOP
label_30e9f8:
    // 0x30e9f8: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30E9F8u;
    {
        const bool branch_taken_0x30e9f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30e9f8) {
            ctx->pc = 0x30E9FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E9F8u;
            // 0x30e9fc: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EA08u;
            goto label_30ea08;
        }
    }
    ctx->pc = 0x30EA00u;
label_30ea00:
    // 0x30ea00: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x30ea00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x30ea04: 0x8c9e0010  lw          $fp, 0x10($a0)
    ctx->pc = 0x30ea04u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_30ea08:
    // 0x30ea08: 0x30c3000f  andi        $v1, $a2, 0xF
    ctx->pc = 0x30ea08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
label_30ea0c:
    // 0x30ea0c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30ea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30ea10:
    // 0x30ea10: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x30EA10u;
    {
        const bool branch_taken_0x30ea10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30EA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA10u;
        // 0x30ea14: 0x26780ba0  addiu       $t8, $s3, 0xBA0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 2976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ea10) {
            ctx->pc = 0x30EA60u;
            goto label_30ea60;
        }
    }
    ctx->pc = 0x30EA18u;
    // 0x30ea18: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x30ea18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x30ea1c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30EA1Cu;
    {
        const bool branch_taken_0x30ea1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA1Cu;
        // 0x30ea20: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ea1c) {
            ctx->pc = 0x30EA40u;
            goto label_30ea40;
        }
    }
    ctx->pc = 0x30EA24u;
    // 0x30ea24: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x30ea24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x30ea28: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x30EA28u;
    {
        const bool branch_taken_0x30ea28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA28u;
        // 0x30ea2c: 0x30c20040  andi        $v0, $a2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ea28) {
            ctx->pc = 0x30EA78u;
            goto label_30ea78;
        }
    }
    ctx->pc = 0x30EA30u;
    // 0x30ea30: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x30EA30u;
    {
        const bool branch_taken_0x30ea30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ea30) {
            ctx->pc = 0x30EA78u;
            goto label_30ea78;
        }
    }
    ctx->pc = 0x30EA38u;
    // 0x30ea38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30EA38u;
    {
        const bool branch_taken_0x30ea38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA38u;
        // 0x30ea3c: 0x3c021002  lui         $v0, 0x1002 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4098 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ea38) {
            ctx->pc = 0x30EA4Cu;
            goto label_30ea4c;
        }
    }
    ctx->pc = 0x30EA40u;
label_30ea40:
    // 0x30ea40: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x30EA40u;
    {
        const bool branch_taken_0x30ea40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30EA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA40u;
        // 0x30ea44: 0x30c20040  andi        $v0, $a2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ea40) {
            ctx->pc = 0x30EA78u;
            goto label_30ea78;
        }
    }
    ctx->pc = 0x30EA48u;
    // 0x30ea48: 0x3c021002  lui         $v0, 0x1002
    ctx->pc = 0x30ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4098 << 16));
label_30ea4c:
    // 0x30ea4c: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x30ea4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x30ea50: 0xaf020004  sw          $v0, 0x4($t8)
    ctx->pc = 0x30ea50u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 2));
    // 0x30ea54: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x30ea54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x30ea58: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30EA58u;
    {
        const bool branch_taken_0x30ea58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA58u;
        // 0x30ea5c: 0x8ca60004  lw          $a2, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ea58) {
            ctx->pc = 0x30EA74u;
            goto label_30ea74;
        }
    }
    ctx->pc = 0x30EA60u;
label_30ea60:
    // 0x30ea60: 0x3c021002  lui         $v0, 0x1002
    ctx->pc = 0x30ea60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4098 << 16));
    // 0x30ea64: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x30ea64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x30ea68: 0xaf020004  sw          $v0, 0x4($t8)
    ctx->pc = 0x30ea68u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 2));
    // 0x30ea6c: 0x8fa70130  lw          $a3, 0x130($sp)
    ctx->pc = 0x30ea6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x30ea70: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x30ea70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_30ea74:
    // 0x30ea74: 0x30c20040  andi        $v0, $a2, 0x40
    ctx->pc = 0x30ea74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
label_30ea78:
    // 0x30ea78: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30EA78u;
    {
        const bool branch_taken_0x30ea78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EA78u;
        // 0x30ea7c: 0x8f82cba0  lw          $v0, -0x3460($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ea78) {
            ctx->pc = 0x30EA8Cu;
            goto label_30ea8c;
        }
    }
    ctx->pc = 0x30EA80u;
    // 0x30ea80: 0x8f020004  lw          $v0, 0x4($t8)
    ctx->pc = 0x30ea80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4)));
    // 0x30ea84: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x30ea84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x30ea88: 0x8f82cba0  lw          $v0, -0x3460($gp)
    ctx->pc = 0x30ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953888)));
label_30ea8c:
    // 0x30ea8c: 0x27c60001  addiu       $a2, $fp, 0x1
    ctx->pc = 0x30ea8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x30ea90: 0x8f84cb9c  lw          $a0, -0x3464($gp)
    ctx->pc = 0x30ea90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953884)));
    // 0x30ea94: 0x647c2  srl         $t0, $a2, 31
    ctx->pc = 0x30ea94u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x30ea98: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x30ea98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30ea9c: 0x2445003f  addiu       $a1, $v0, 0x3F
    ctx->pc = 0x30ea9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x30eaa0: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x30eaa0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x30eaa4: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x30eaa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30eaa8: 0x2487003f  addiu       $a3, $a0, 0x3F
    ctx->pc = 0x30eaa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x30eaac: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x30eaacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x30eab0: 0xe3200b  movn        $a0, $a3, $v1
    ctx->pc = 0x30eab0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 7));
    // 0x30eab4: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x30eab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x30eab8: 0x42183  sra         $a0, $a0, 6
    ctx->pc = 0x30eab8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
    // 0x30eabc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30eac0: 0x8fa80134  lw          $t0, 0x134($sp)
    ctx->pc = 0x30eac0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x30eac4: 0x447023  subu        $t6, $v0, $a0
    ctx->pc = 0x30eac4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30eac8: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x30eac8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x30eacc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x30eaccu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ead0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x30ead0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x30ead4: 0x26760bd0  addiu       $s6, $s3, 0xBD0
    ctx->pc = 0x30ead4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 3024));
    // 0x30ead8: 0x26750090  addiu       $s5, $s3, 0x90
    ctx->pc = 0x30ead8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
    // 0x30eadc: 0x1c0a02d  daddu       $s4, $t6, $zero
    ctx->pc = 0x30eadcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eae0: 0x3c0f2000  lui         $t7, 0x2000
    ctx->pc = 0x30eae0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)8192 << 16));
    // 0x30eae4: 0x25120e50  addiu       $s2, $t0, 0xE50
    ctx->pc = 0x30eae4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), 3664));
    // 0x30eae8: 0x25110310  addiu       $s1, $t0, 0x310
    ctx->pc = 0x30eae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), 784));
    // 0x30eaec: 0x25101e50  addiu       $s0, $t0, 0x1E50
    ctx->pc = 0x30eaecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 7760));
    // 0x30eaf0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x30eaf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eaf4: 0x0  nop
    ctx->pc = 0x30eaf4u;
    // NOP
label_30eaf8:
    // 0x30eaf8: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x30eaf8u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eafc: 0x1a800023  blez        $s4, . + 4 + (0x23 << 2)
    ctx->pc = 0x30EAFCu;
    {
        const bool branch_taken_0x30eafc = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x30EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EAFCu;
        // 0x30eb00: 0x2ab280b  movn        $a1, $s5, $t3 (Delay Slot)
        if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eafc) {
            ctx->pc = 0x30EB8Cu;
            goto label_30eb8c;
        }
    }
    ctx->pc = 0x30EB04u;
    // 0x30eb04: 0x3c0a3000  lui         $t2, 0x3000
    ctx->pc = 0x30eb04u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)12288 << 16));
    // 0x30eb08: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x30eb08u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x30eb0c: 0x3c085100  lui         $t0, 0x5100
    ctx->pc = 0x30eb0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)20736 << 16));
    // 0x30eb10: 0x3c025100  lui         $v0, 0x5100
    ctx->pc = 0x30eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20736 << 16));
    // 0x30eb14: 0xca6825  or          $t5, $a2, $t2
    ctx->pc = 0x30eb14u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) | GPR_U64(ctx, 10));
    // 0x30eb18: 0xc25025  or          $t2, $a2, $v0
    ctx->pc = 0x30eb18u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x30eb1c: 0x35290002  ori         $t1, $t1, 0x2
    ctx->pc = 0x30eb1cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2);
    // 0x30eb20: 0x35080002  ori         $t0, $t0, 0x2
    ctx->pc = 0x30eb20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
    // 0x30eb24: 0x200602d  daddu       $t4, $s0, $zero
    ctx->pc = 0x30eb24u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eb28: 0x43980  sll         $a3, $a0, 6
    ctx->pc = 0x30eb28u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x30eb2c: 0x1c0c82d  daddu       $t9, $t6, $zero
    ctx->pc = 0x30eb2cu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_30eb30:
    // 0x30eb30: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x30eb30u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30eb34: 0x24e3003f  addiu       $v1, $a3, 0x3F
    ctx->pc = 0x30eb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
    // 0x30eb38: 0xaf090000  sw          $t1, 0x0($t8)
    ctx->pc = 0x30eb38u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 9));
    // 0x30eb3c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30eb3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30eb40: 0xaf000004  sw          $zero, 0x4($t8)
    ctx->pc = 0x30eb40u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 0));
    // 0x30eb44: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x30eb44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x30eb48: 0xaf000008  sw          $zero, 0x8($t8)
    ctx->pc = 0x30eb48u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 0));
    // 0x30eb4c: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x30eb4cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x30eb50: 0xaf08000c  sw          $t0, 0xC($t8)
    ctx->pc = 0x30eb50u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 8));
    // 0x30eb54: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x30eb54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
    // 0x30eb58: 0x8f82c548  lw          $v0, -0x3AB8($gp)
    ctx->pc = 0x30eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952264)));
    // 0x30eb5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30eb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30eb60: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x30eb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30eb64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30eb64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30eb68: 0xff030020  sd          $v1, 0x20($t8)
    ctx->pc = 0x30eb68u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 32), GPR_U64(ctx, 3));
    // 0x30eb6c: 0x24b80030  addiu       $t8, $a1, 0x30
    ctx->pc = 0x30eb6cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x30eb70: 0xaf0a000c  sw          $t2, 0xC($t8)
    ctx->pc = 0x30eb70u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 10));
    // 0x30eb74: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x30eb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x30eb78: 0xaf0d0000  sw          $t5, 0x0($t8)
    ctx->pc = 0x30eb78u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 13));
    // 0x30eb7c: 0xaf0c0004  sw          $t4, 0x4($t8)
    ctx->pc = 0x30eb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 12));
    // 0x30eb80: 0x1720ffeb  bnez        $t9, . + 4 + (-0x15 << 2)
    ctx->pc = 0x30EB80u;
    {
        const bool branch_taken_0x30eb80 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB80u;
        // 0x30eb84: 0xaf000008  sw          $zero, 0x8($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb80) {
            ctx->pc = 0x30EB30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30eb30;
        }
    }
    ctx->pc = 0x30EB88u;
    // 0x30eb88: 0x1c0c82d  daddu       $t9, $t6, $zero
    ctx->pc = 0x30eb88u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_30eb8c:
    // 0x30eb8c: 0x2b22000a  slti        $v0, $t9, 0xA
    ctx->pc = 0x30eb8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x30eb90: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x30EB90u;
    {
        const bool branch_taken_0x30eb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB90u;
        // 0x30eb94: 0x8fa30130  lw          $v1, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb90) {
            ctx->pc = 0x30EBD4u;
            goto label_30ebd4;
        }
    }
    ctx->pc = 0x30EB98u;
    // 0x30eb98: 0x15600007  bnez        $t3, . + 4 + (0x7 << 2)
    ctx->pc = 0x30EB98u;
    {
        const bool branch_taken_0x30eb98 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EB98u;
        // 0x30eb9c: 0x191180  sll         $v0, $t9, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eb98) {
            ctx->pc = 0x30EBB8u;
            goto label_30ebb8;
        }
    }
    ctx->pc = 0x30EBA0u;
    // 0x30eba0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x30eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x30eba4: 0x24580bd0  addiu       $t8, $v0, 0xBD0
    ctx->pc = 0x30eba4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 3024));
    // 0x30eba8: 0xaf00000c  sw          $zero, 0xC($t8)
    ctx->pc = 0x30eba8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 0));
    // 0x30ebac: 0xaf0f0000  sw          $t7, 0x0($t8)
    ctx->pc = 0x30ebacu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 15));
    // 0x30ebb0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30EBB0u;
    {
        const bool branch_taken_0x30ebb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EBB0u;
        // 0x30ebb4: 0xaf120004  sw          $s2, 0x4($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ebb0) {
            ctx->pc = 0x30EBCCu;
            goto label_30ebcc;
        }
    }
    ctx->pc = 0x30EBB8u;
label_30ebb8:
    // 0x30ebb8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x30ebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x30ebbc: 0x24580090  addiu       $t8, $v0, 0x90
    ctx->pc = 0x30ebbcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x30ebc0: 0xaf00000c  sw          $zero, 0xC($t8)
    ctx->pc = 0x30ebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 0));
    // 0x30ebc4: 0xaf0f0000  sw          $t7, 0x0($t8)
    ctx->pc = 0x30ebc4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 15));
    // 0x30ebc8: 0xaf110004  sw          $s1, 0x4($t8)
    ctx->pc = 0x30ebc8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 17));
label_30ebcc:
    // 0x30ebcc: 0xaf000008  sw          $zero, 0x8($t8)
    ctx->pc = 0x30ebccu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 0));
    // 0x30ebd0: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x30ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_30ebd4:
    // 0x30ebd4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x30ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x30ebd8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x30ebd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x30ebdc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30EBDCu;
    {
        const bool branch_taken_0x30ebdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EBDCu;
        // 0x30ebe0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ebdc) {
            ctx->pc = 0x30EBF8u;
            goto label_30ebf8;
        }
    }
    ctx->pc = 0x30EBE4u;
    // 0x30ebe4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x30ebe4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x30ebe8: 0x29620002  slti        $v0, $t3, 0x2
    ctx->pc = 0x30ebe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30ebec: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x30EBECu;
    {
        const bool branch_taken_0x30ebec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EBECu;
        // 0x30ebf0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ebec) {
            ctx->pc = 0x30EAF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30eaf8;
        }
    }
    ctx->pc = 0x30EBF4u;
    // 0x30ebf4: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x30ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_30ebf8:
    // 0x30ebf8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x30ebf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x30ebfc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x30ebfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30ec00: 0x2447f6d0  addiu       $a3, $v0, -0x930
    ctx->pc = 0x30ec00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964944));
    // 0x30ec04: 0x27c5fffe  addiu       $a1, $fp, -0x2
    ctx->pc = 0x30ec04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967294));
    // 0x30ec08: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x30ec08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ec0c: 0x51fc2  srl         $v1, $a1, 31
    ctx->pc = 0x30ec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x30ec10: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x30ec10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ec14: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x30ec14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x30ec18: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x30ec18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x30ec1c: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x30ec1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ec20: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x30ec20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x30ec24: 0x26781e60  addiu       $t8, $s3, 0x1E60
    ctx->pc = 0x30ec24u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 7776));
    // 0x30ec28: 0x46001124  .word       0x46001124                   # cvt.w.s     $f4, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ec28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x30ec2c: 0x44042000  mfc1        $a0, $f4
    ctx->pc = 0x30ec2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x30ec30: 0x33043  sra         $a2, $v1, 1
    ctx->pc = 0x30ec30u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 1));
    // 0x30ec34: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x30ec34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x30ec38: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ec38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30ec3c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x30ec3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30ec40: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ec40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30ec44: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x30ec44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30ec48: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x30ec48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x30ec4c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30ec4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30ec50: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30ec50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30ec54: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30ec54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30ec58: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x30ec58u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x30ec5c: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x30ec5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ec60: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x30ec60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ec64: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x30ec64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x30ec68: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x30ec68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ec6c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x30ec6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x30ec70: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x30ec70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x30ec74: 0x46001124  .word       0x46001124                   # cvt.w.s     $f4, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ec74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x30ec78: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x30ec78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30ec7c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ec7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30ec80: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x30ec80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30ec84: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ec84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x30ec88: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x30ec88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x30ec8c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x30ec8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30ec90: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30ec90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30ec94: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x30ec94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x30ec98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30ec98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30ec9c: 0xff020008  sd          $v0, 0x8($t8)
    ctx->pc = 0x30ec9cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 2));
    // 0x30eca0: 0x26781e80  addiu       $t8, $s3, 0x1E80
    ctx->pc = 0x30eca0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 7808));
    // 0x30eca4: 0x18c00027  blez        $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x30ECA4u;
    {
        const bool branch_taken_0x30eca4 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x30ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ECA4u;
        // 0x30eca8: 0xae651e70  sw          $a1, 0x1E70($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 7792), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eca4) {
            ctx->pc = 0x30ED44u;
            goto label_30ed44;
        }
    }
    ctx->pc = 0x30ECACu;
    // 0x30ecac: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x30ecacu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_30ecb0:
    // 0x30ecb0: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x30ecb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ecb4: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x30ecb4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x30ecb8: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x30ecb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ecbc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x30ecbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x30ecc0: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x30ecc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ecc4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x30ecc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x30ecc8: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x30ecc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x30eccc: 0x46001124  .word       0x46001124                   # cvt.w.s     $f4, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ecccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x30ecd0: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x30ecd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30ecd4: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ecd4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30ecd8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x30ecd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30ecdc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ecdcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30ece0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x30ece0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x30ece4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x30ece4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30ece8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30ece8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30ecec: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x30ececu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x30ecf0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30ecf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30ecf4: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x30ecf4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x30ecf8: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x30ecf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ecfc: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x30ecfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ed00: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x30ed00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x30ed04: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x30ed04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ed08: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x30ed08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x30ed0c: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x30ed0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x30ed10: 0x46001124  .word       0x46001124                   # cvt.w.s     $f4, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ed10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x30ed14: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x30ed14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30ed18: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ed18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30ed1c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x30ed1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30ed20: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ed20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x30ed24: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x30ed24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x30ed28: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x30ed28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30ed2c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30ed2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30ed30: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x30ed30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x30ed34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30ed34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30ed38: 0xff020008  sd          $v0, 0x8($t8)
    ctx->pc = 0x30ed38u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 2));
    // 0x30ed3c: 0x1720ffdc  bnez        $t9, . + 4 + (-0x24 << 2)
    ctx->pc = 0x30ED3Cu;
    {
        const bool branch_taken_0x30ed3c = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x30ED40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ED3Cu;
        // 0x30ed40: 0x27180010  addiu       $t8, $t8, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ed3c) {
            ctx->pc = 0x30ECB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ecb0;
        }
    }
    ctx->pc = 0x30ED44u;
label_30ed44:
    // 0x30ed44: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x30ed44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x30ed48: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x30ED48u;
    {
        const bool branch_taken_0x30ed48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ED4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ED48u;
        // 0x30ed4c: 0x8fa20130  lw          $v0, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ed48) {
            ctx->pc = 0x30ED9Cu;
            goto label_30ed9c;
        }
    }
    ctx->pc = 0x30ED50u;
    // 0x30ed50: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x30ed50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x30ed54: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x30ed54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30ed58: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x30ed58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ed5c: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x30ed5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ed60: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x30ed60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x30ed64: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x30ed64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ed68: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x30ed68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x30ed6c: 0x460010e4  .word       0x460010E4                   # cvt.w.s     $f3, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ed6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x30ed70: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x30ed70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x30ed74: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ed74u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x30ed78: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x30ed78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x30ed7c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x30ed7cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x30ed80: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x30ed80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x30ed84: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x30ed84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30ed88: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30ed88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30ed8c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x30ed8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x30ed90: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30ed90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30ed94: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x30ed94u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x30ed98: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x30ed98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_30ed9c:
    // 0x30ed9c: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x30ed9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x30eda0: 0x30c20040  andi        $v0, $a2, 0x40
    ctx->pc = 0x30eda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
    // 0x30eda4: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x30EDA4u;
    {
        const bool branch_taken_0x30eda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EDA4u;
        // 0x30eda8: 0x26780360  addiu       $t8, $s3, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30eda4) {
            ctx->pc = 0x30EF7Cu;
            goto label_30ef7c;
        }
    }
    ctx->pc = 0x30EDACu;
    // 0x30edac: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x30edacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30edb0: 0x241900ff  addiu       $t9, $zero, 0xFF
    ctx->pc = 0x30edb0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x30edb4: 0x27a2012f  addiu       $v0, $sp, 0x12F
    ctx->pc = 0x30edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 303));
label_30edb8:
    // 0x30edb8: 0xa0590000  sb          $t9, 0x0($v0)
    ctx->pc = 0x30edb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 25));
    // 0x30edbc: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x30edbcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x30edc0: 0x0  nop
    ctx->pc = 0x30edc0u;
    // NOP
    // 0x30edc4: 0x0  nop
    ctx->pc = 0x30edc4u;
    // NOP
    // 0x30edc8: 0x0  nop
    ctx->pc = 0x30edc8u;
    // NOP
    // 0x30edcc: 0x721fffa  bgez        $t9, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30EDCCu;
    {
        const bool branch_taken_0x30edcc = (GPR_S32(ctx, 25) >= 0);
        ctx->pc = 0x30EDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EDCCu;
        // 0x30edd0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30edcc) {
            ctx->pc = 0x30EDB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30edb8;
        }
    }
    ctx->pc = 0x30EDD4u;
    // 0x30edd4: 0x200782d  daddu       $t7, $s0, $zero
    ctx->pc = 0x30edd4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30edd8: 0x24190007  addiu       $t9, $zero, 0x7
    ctx->pc = 0x30edd8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30eddc: 0x0  nop
    ctx->pc = 0x30eddcu;
    // NOP
label_30ede0:
    // 0x30ede0: 0xdde30000  ld          $v1, 0x0($t7)
    ctx->pc = 0x30ede0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x30ede4: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x30ede4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x30ede8: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x30ede8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x30edec: 0xff030000  sd          $v1, 0x0($t8)
    ctx->pc = 0x30edecu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 3));
    // 0x30edf0: 0xdde20000  ld          $v0, 0x0($t7)
    ctx->pc = 0x30edf0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x30edf4: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x30edf4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x30edf8: 0xff020010  sd          $v0, 0x10($t8)
    ctx->pc = 0x30edf8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 16), GPR_U64(ctx, 2));
    // 0x30edfc: 0xdde30000  ld          $v1, 0x0($t7)
    ctx->pc = 0x30edfcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x30ee00: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x30ee00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x30ee04: 0xff030008  sd          $v1, 0x8($t8)
    ctx->pc = 0x30ee04u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 3));
    // 0x30ee08: 0xdde20000  ld          $v0, 0x0($t7)
    ctx->pc = 0x30ee08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x30ee0c: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x30ee0cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x30ee10: 0xff020018  sd          $v0, 0x18($t8)
    ctx->pc = 0x30ee10u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 24), GPR_U64(ctx, 2));
    // 0x30ee14: 0x721fff2  bgez        $t9, . + 4 + (-0xE << 2)
    ctx->pc = 0x30EE14u;
    {
        const bool branch_taken_0x30ee14 = (GPR_S32(ctx, 25) >= 0);
        ctx->pc = 0x30EE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EE14u;
        // 0x30ee18: 0x27180020  addiu       $t8, $t8, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ee14) {
            ctx->pc = 0x30EDE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ede0;
        }
    }
    ctx->pc = 0x30EE1Cu;
    // 0x30ee1c: 0x267804a0  addiu       $t8, $s3, 0x4A0
    ctx->pc = 0x30ee1cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 1184));
    // 0x30ee20: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x30ee20u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ee24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x30ee24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30ee28:
    // 0x30ee28: 0x27220001  addiu       $v0, $t9, 0x1
    ctx->pc = 0x30ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x30ee2c: 0xd92821  addu        $a1, $a2, $t9
    ctx->pc = 0x30ee2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 25)));
    // 0x30ee30: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x30ee30u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x30ee34: 0x40c82d  daddu       $t9, $v0, $zero
    ctx->pc = 0x30ee34u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ee38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30ee38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30ee3c: 0x2b240100  slti        $a0, $t9, 0x100
    ctx->pc = 0x30ee3cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x30ee40: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x30ee40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x30ee44: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x30EE44u;
    {
        const bool branch_taken_0x30ee44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EE44u;
        // 0x30ee48: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ee44) {
            ctx->pc = 0x30EE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ee28;
        }
    }
    ctx->pc = 0x30EE4Cu;
    // 0x30ee4c: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x30ee4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x30ee50: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x30ee50u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ee54: 0x24110008  addiu       $s1, $zero, 0x8
    ctx->pc = 0x30ee54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30ee58: 0x240f0010  addiu       $t7, $zero, 0x10
    ctx->pc = 0x30ee58u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30ee5c: 0x246c0220  addiu       $t4, $v1, 0x220
    ctx->pc = 0x30ee5cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 544));
    // 0x30ee60: 0x33220018  andi        $v0, $t9, 0x18
    ctx->pc = 0x30ee60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)24);
    // 0x30ee64: 0x0  nop
    ctx->pc = 0x30ee64u;
    // NOP
label_30ee68:
    // 0x30ee68: 0x50510004  beql        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x30EE68u;
    {
        const bool branch_taken_0x30ee68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x30ee68) {
            ctx->pc = 0x30EE6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EE68u;
            // 0x30ee6c: 0x3b220018  xori        $v0, $t9, 0x18 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) ^ (uint64_t)(uint16_t)24);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EE7Cu;
            goto label_30ee7c;
        }
    }
    ctx->pc = 0x30EE70u;
    // 0x30ee70: 0x544f0002  bnel        $v0, $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x30EE70u;
    {
        const bool branch_taken_0x30ee70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x30ee70) {
            ctx->pc = 0x30EE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EE70u;
            // 0x30ee74: 0x320102d  daddu       $v0, $t9, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EE7Cu;
            goto label_30ee7c;
        }
    }
    ctx->pc = 0x30EE78u;
    // 0x30ee78: 0x3b220018  xori        $v0, $t9, 0x18
    ctx->pc = 0x30ee78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) ^ (uint64_t)(uint16_t)24);
label_30ee7c:
    // 0x30ee7c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x30ee7cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ee80: 0x25630008  addiu       $v1, $t3, 0x8
    ctx->pc = 0x30ee80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x30ee84: 0x163102a  slt         $v0, $t3, $v1
    ctx->pc = 0x30ee84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30ee88: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x30EE88u;
    {
        const bool branch_taken_0x30ee88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ee88) {
            ctx->pc = 0x30EE8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30EE88u;
            // 0x30ee8c: 0x27390008  addiu       $t9, $t9, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30EF68u;
            goto label_30ef68;
        }
    }
    ctx->pc = 0x30EE90u;
    // 0x30ee90: 0x60702d  daddu       $t6, $v1, $zero
    ctx->pc = 0x30ee90u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ee94: 0x200682d  daddu       $t5, $s0, $zero
    ctx->pc = 0x30ee94u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30ee98:
    // 0x30ee98: 0x18b1821  addu        $v1, $t4, $t3
    ctx->pc = 0x30ee98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x30ee9c: 0x1ab2821  addu        $a1, $t5, $t3
    ctx->pc = 0x30ee9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x30eea0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x30eea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30eea4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x30eea4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x30eea8: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x30eea8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30eeac: 0x18b3021  addu        $a2, $t4, $t3
    ctx->pc = 0x30eeacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x30eeb0: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x30eeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x30eeb4: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x30eeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x30eeb8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x30eeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x30eebc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x30eebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x30eec0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30eec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30eec4: 0x1ab2821  addu        $a1, $t5, $t3
    ctx->pc = 0x30eec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x30eec8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30eec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30eecc: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x30eeccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x30eed0: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x30eed0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    // 0x30eed4: 0x18b3821  addu        $a3, $t4, $t3
    ctx->pc = 0x30eed4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x30eed8: 0x1ab4021  addu        $t0, $t5, $t3
    ctx->pc = 0x30eed8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x30eedc: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x30eedcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x30eee0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x30eee0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30eee4: 0x1ab3021  addu        $a2, $t5, $t3
    ctx->pc = 0x30eee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x30eee8: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x30eee8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30eeec: 0x18b4821  addu        $t1, $t4, $t3
    ctx->pc = 0x30eeecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x30eef0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x30eef0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x30eef4: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x30eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x30eef8: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x30eef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x30eefc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x30eefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x30ef00: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x30ef00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x30ef04: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x30ef04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x30ef08: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30ef08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30ef0c: 0x16e502a  slt         $t2, $t3, $t6
    ctx->pc = 0x30ef0cu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x30ef10: 0xaf030004  sw          $v1, 0x4($t8)
    ctx->pc = 0x30ef10u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 3));
    // 0x30ef14: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x30ef14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x30ef18: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x30ef18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x30ef1c: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x30ef1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x30ef20: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x30ef20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x30ef24: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x30ef24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x30ef28: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x30ef28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x30ef2c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30ef2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30ef30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30ef30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30ef34: 0xaf020008  sw          $v0, 0x8($t8)
    ctx->pc = 0x30ef34u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 2));
    // 0x30ef38: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x30ef38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x30ef3c: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x30ef3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x30ef40: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x30ef40u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x30ef44: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x30ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x30ef48: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x30ef48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x30ef4c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x30ef4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x30ef50: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x30ef50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x30ef54: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30ef54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30ef58: 0xaf03000c  sw          $v1, 0xC($t8)
    ctx->pc = 0x30ef58u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 3));
    // 0x30ef5c: 0x1540ffce  bnez        $t2, . + 4 + (-0x32 << 2)
    ctx->pc = 0x30EF5Cu;
    {
        const bool branch_taken_0x30ef5c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EF5Cu;
        // 0x30ef60: 0x27180010  addiu       $t8, $t8, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ef5c) {
            ctx->pc = 0x30EE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ee98;
        }
    }
    ctx->pc = 0x30EF64u;
    // 0x30ef64: 0x27390008  addiu       $t9, $t9, 0x8
    ctx->pc = 0x30ef64u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 8));
label_30ef68:
    // 0x30ef68: 0x2b220100  slti        $v0, $t9, 0x100
    ctx->pc = 0x30ef68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x30ef6c: 0x1440ffbe  bnez        $v0, . + 4 + (-0x42 << 2)
    ctx->pc = 0x30EF6Cu;
    {
        const bool branch_taken_0x30ef6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EF6Cu;
        // 0x30ef70: 0x33220018  andi        $v0, $t9, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ef6c) {
            ctx->pc = 0x30EE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30ee68;
        }
    }
    ctx->pc = 0x30EF74u;
    // 0x30ef74: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x30ef74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x30ef78: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x30ef78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_30ef7c:
    // 0x30ef7c: 0x8f84cb9c  lw          $a0, -0x3464($gp)
    ctx->pc = 0x30ef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953884)));
    // 0x30ef80: 0x30c60040  andi        $a2, $a2, 0x40
    ctx->pc = 0x30ef80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
    // 0x30ef84: 0x8f85cba4  lw          $a1, -0x345C($gp)
    ctx->pc = 0x30ef84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953892)));
    // 0x30ef88: 0x8f82cba0  lw          $v0, -0x3460($gp)
    ctx->pc = 0x30ef88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953888)));
    // 0x30ef8c: 0x8f83cba8  lw          $v1, -0x3458($gp)
    ctx->pc = 0x30ef8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953896)));
    // 0x30ef90: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x30ef90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30ef94: 0x8fa7018c  lw          $a3, 0x18C($sp)
    ctx->pc = 0x30ef94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x30ef98: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x30ef98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30ef9c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30efa0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x30efa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30efa4: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x30efa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x30efa8: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x30efa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x30efac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x30efacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30efb0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30efb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30efb4: 0x8fa5018c  lw          $a1, 0x18C($sp)
    ctx->pc = 0x30efb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x30efb8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x30efb8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x30efbc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x30efbcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x30efc0: 0x244a0001  addiu       $t2, $v0, 0x1
    ctx->pc = 0x30efc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30efc4: 0x246c0001  addiu       $t4, $v1, 0x1
    ctx->pc = 0x30efc4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30efc8: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x30efc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x30efcc: 0x1873821  addu        $a3, $t4, $a3
    ctx->pc = 0x30efccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
    // 0x30efd0: 0xafa50164  sw          $a1, 0x164($sp)
    ctx->pc = 0x30efd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 5));
    // 0x30efd4: 0x10c00024  beqz        $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x30EFD4u;
    {
        const bool branch_taken_0x30efd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x30EFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30EFD4u;
        // 0x30efd8: 0xafa70168  sw          $a3, 0x168($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30efd4) {
            ctx->pc = 0x30F068u;
            goto label_30f068;
        }
    }
    ctx->pc = 0x30EFDCu;
    // 0x30efdc: 0x8fa80140  lw          $t0, 0x140($sp)
    ctx->pc = 0x30efdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x30efe0: 0x8fa90154  lw          $t1, 0x154($sp)
    ctx->pc = 0x30efe0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x30efe4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x30efe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30efe8: 0x52a3c  dsll32      $a1, $a1, 8
    ctx->pc = 0x30efe8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 8));
    // 0x30efec: 0x52a3a  dsrl        $a1, $a1, 8
    ctx->pc = 0x30efecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
    // 0x30eff0: 0x81142  srl         $v0, $t0, 5
    ctx->pc = 0x30eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 5));
    // 0x30eff4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x30eff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30eff8: 0x92438  dsll        $a0, $t1, 16
    ctx->pc = 0x30eff8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) << 16);
    // 0x30effc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30effcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30f000: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x30f000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x30f004: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x30f004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x30f008: 0xffa90180  sd          $t1, 0x180($sp)
    ctx->pc = 0x30f008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 9));
    // 0x30f00c: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x30f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x30f010: 0xfe6308c0  sd          $v1, 0x8C0($s3)
    ctx->pc = 0x30f010u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 2240), GPR_U64(ctx, 3));
    // 0x30f014: 0x29140  sll         $s2, $v0, 5
    ctx->pc = 0x30f014u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x30f018: 0x8f82c550  lw          $v0, -0x3AB0($gp)
    ctx->pc = 0x30f018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x30f01c: 0x8f83c54c  lw          $v1, -0x3AB4($gp)
    ctx->pc = 0x30f01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x30f020: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30f020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30f024: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30f024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30f028: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30f028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30f02c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30f02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30f030: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x30f030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x30f034: 0xfe6208f0  sd          $v0, 0x8F0($s3)
    ctx->pc = 0x30f034u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 2288), GPR_U64(ctx, 2));
    // 0x30f038: 0x8f83c550  lw          $v1, -0x3AB0($gp)
    ctx->pc = 0x30f038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x30f03c: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x30f03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x30f040: 0x8f82c54c  lw          $v0, -0x3AB4($gp)
    ctx->pc = 0x30f040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x30f044: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30f044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30f048: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30f048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30f04c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x30f04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x30f050: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30f050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30f054: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30f054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30f058: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x30f058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30f05c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x30f05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x30f060: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30F060u;
    {
        const bool branch_taken_0x30f060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F060u;
        // 0x30f064: 0xfe630900  sd          $v1, 0x900($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 2304), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f060) {
            ctx->pc = 0x30F07Cu;
            goto label_30f07c;
        }
    }
    ctx->pc = 0x30F068u;
label_30f068:
    // 0x30f068: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x30f068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x30f06c: 0x8fa50154  lw          $a1, 0x154($sp)
    ctx->pc = 0x30f06cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x30f070: 0x63142  srl         $a2, $a2, 5
    ctx->pc = 0x30f070u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x30f074: 0xffa50180  sd          $a1, 0x180($sp)
    ctx->pc = 0x30f074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 5));
    // 0x30f078: 0xafa601a0  sw          $a2, 0x1A0($sp)
    ctx->pc = 0x30f078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 6));
label_30f07c:
    // 0x30f07c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x30f07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30f080: 0x8fa801a0  lw          $t0, 0x1A0($sp)
    ctx->pc = 0x30f080u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x30f084: 0x771823  subu        $v1, $v1, $s7
    ctx->pc = 0x30f084u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x30f088: 0xdfa90180  ld          $t1, 0x180($sp)
    ctx->pc = 0x30f088u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x30f08c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x30f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x30f090: 0x8203c  dsll32      $a0, $t0, 0
    ctx->pc = 0x30f090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << (32 + 0));
    // 0x30f094: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30f094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30f098: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x30f098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x30f09c: 0x2407001a  addiu       $a3, $zero, 0x1A
    ctx->pc = 0x30f09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x30f0a0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x30f0a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x30f0a4: 0xe24023  subu        $t0, $a3, $v0
    ctx->pc = 0x30f0a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x30f0a8: 0x91438  dsll        $v0, $t1, 16
    ctx->pc = 0x30f0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << 16);
    // 0x30f0ac: 0x3c063000  lui         $a2, 0x3000
    ctx->pc = 0x30f0acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12288 << 16));
    // 0x30f0b0: 0x3c055100  lui         $a1, 0x5100
    ctx->pc = 0x30f0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20736 << 16));
    // 0x30f0b4: 0x26780910  addiu       $t8, $s3, 0x910
    ctx->pc = 0x30f0b4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 2320));
    // 0x30f0b8: 0x1052825  or          $a1, $t0, $a1
    ctx->pc = 0x30f0b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x30f0bc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x30f0bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x30f0c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30f0c4: 0x2123c  dsll32      $v0, $v0, 8
    ctx->pc = 0x30f0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 8));
    // 0x30f0c8: 0x2123a  dsrl        $v0, $v0, 8
    ctx->pc = 0x30f0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 8);
    // 0x30f0cc: 0x1063025  or          $a2, $t0, $a2
    ctx->pc = 0x30f0ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    // 0x30f0d0: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x30f0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x30f0d4: 0xaf05000c  sw          $a1, 0xC($t8)
    ctx->pc = 0x30f0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 5));
    // 0x30f0d8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x30f0d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x30f0dc: 0xaf060000  sw          $a2, 0x0($t8)
    ctx->pc = 0x30f0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 6));
    // 0x30f0e0: 0x26780fa0  addiu       $t8, $s3, 0xFA0
    ctx->pc = 0x30f0e0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 4000));
    // 0x30f0e4: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x30f0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x30f0e8: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x30f0e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f0ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30f0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f0f0: 0xaf05000c  sw          $a1, 0xC($t8)
    ctx->pc = 0x30f0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 5));
    // 0x30f0f4: 0xaf060000  sw          $a2, 0x0($t8)
    ctx->pc = 0x30f0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 6));
    // 0x30f0f8: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x30f0f8u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f0fc: 0xae631f70  sw          $v1, 0x1F70($s3)
    ctx->pc = 0x30f0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8048), GPR_U32(ctx, 3));
    // 0x30f100: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x30f100u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f104: 0x12420009  beq         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x30F104u;
    {
        const bool branch_taken_0x30f104 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x30F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F104u;
        // 0x30f108: 0xfe641fc0  sd          $a0, 0x1FC0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 8128), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f104) {
            ctx->pc = 0x30F12Cu;
            goto label_30f12c;
        }
    }
    ctx->pc = 0x30F10Cu;
    // 0x30f10c: 0x0  nop
    ctx->pc = 0x30f10cu;
    // NOP
label_30f110:
    // 0x30f110: 0xb5843  sra         $t3, $t3, 1
    ctx->pc = 0x30f110u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
    // 0x30f114: 0x0  nop
    ctx->pc = 0x30f114u;
    // NOP
    // 0x30f118: 0x0  nop
    ctx->pc = 0x30f118u;
    // NOP
    // 0x30f11c: 0x0  nop
    ctx->pc = 0x30f11cu;
    // NOP
    // 0x30f120: 0x0  nop
    ctx->pc = 0x30f120u;
    // NOP
    // 0x30f124: 0x1562fffa  bne         $t3, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30F124u;
    {
        const bool branch_taken_0x30f124 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x30F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F124u;
        // 0x30f128: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f124) {
            ctx->pc = 0x30F110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f110;
        }
    }
    ctx->pc = 0x30F12Cu;
label_30f12c:
    // 0x30f12c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30f12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f130: 0x3231004  sllv        $v0, $v1, $t9
    ctx->pc = 0x30f130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 25) & 0x1F));
    // 0x30f134: 0x104a0002  beq         $v0, $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x30F134u;
    {
        const bool branch_taken_0x30f134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x30F138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F134u;
        // 0x30f138: 0x27220001  addiu       $v0, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f134) {
            ctx->pc = 0x30F140u;
            goto label_30f140;
        }
    }
    ctx->pc = 0x30F13Cu;
    // 0x30f13c: 0x439004  sllv        $s2, $v1, $v0
    ctx->pc = 0x30f13cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_30f140:
    // 0x30f140: 0x180882d  daddu       $s1, $t4, $zero
    ctx->pc = 0x30f140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f144: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x30f144u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f148: 0x1223000a  beq         $s1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x30F148u;
    {
        const bool branch_taken_0x30f148 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x30F14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F148u;
        // 0x30f14c: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f148) {
            ctx->pc = 0x30F174u;
            goto label_30f174;
        }
    }
    ctx->pc = 0x30F150u;
    // 0x30f150: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30f150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f154: 0x0  nop
    ctx->pc = 0x30f154u;
    // NOP
label_30f158:
    // 0x30f158: 0xb5843  sra         $t3, $t3, 1
    ctx->pc = 0x30f158u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
    // 0x30f15c: 0x0  nop
    ctx->pc = 0x30f15cu;
    // NOP
    // 0x30f160: 0x0  nop
    ctx->pc = 0x30f160u;
    // NOP
    // 0x30f164: 0x0  nop
    ctx->pc = 0x30f164u;
    // NOP
    // 0x30f168: 0x0  nop
    ctx->pc = 0x30f168u;
    // NOP
    // 0x30f16c: 0x1562fffa  bne         $t3, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30F16Cu;
    {
        const bool branch_taken_0x30f16c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x30F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F16Cu;
        // 0x30f170: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f16c) {
            ctx->pc = 0x30F158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f158;
        }
    }
    ctx->pc = 0x30F174u;
label_30f174:
    // 0x30f174: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30f174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f178: 0x3231004  sllv        $v0, $v1, $t9
    ctx->pc = 0x30f178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 25) & 0x1F));
    // 0x30f17c: 0x104c0002  beq         $v0, $t4, . + 4 + (0x2 << 2)
    ctx->pc = 0x30F17Cu;
    {
        const bool branch_taken_0x30f17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        ctx->pc = 0x30F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F17Cu;
        // 0x30f180: 0x27220001  addiu       $v0, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f17c) {
            ctx->pc = 0x30F188u;
            goto label_30f188;
        }
    }
    ctx->pc = 0x30F184u;
    // 0x30f184: 0x438804  sllv        $s1, $v1, $v0
    ctx->pc = 0x30f184u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_30f188:
    // 0x30f188: 0x8f82cba4  lw          $v0, -0x345C($gp)
    ctx->pc = 0x30f188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953892)));
    // 0x30f18c: 0x2a450100  slti        $a1, $s2, 0x100
    ctx->pc = 0x30f18cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x30f190: 0x8f89c550  lw          $t1, -0x3AB0($gp)
    ctx->pc = 0x30f190u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x30f194: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x30f194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x30f198: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x30f198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x30f19c: 0x85900a  movz        $s2, $a0, $a1
    ctx->pc = 0x30f19cu;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
    // 0x30f1a0: 0x8f88c54c  lw          $t0, -0x3AB4($gp)
    ctx->pc = 0x30f1a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x30f1a4: 0x113840  sll         $a3, $s1, 1
    ctx->pc = 0x30f1a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x30f1a8: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x30f1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
    // 0x30f1ac: 0x1231021  addu        $v0, $t1, $v1
    ctx->pc = 0x30f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x30f1b0: 0x8f84cb9c  lw          $a0, -0x3464($gp)
    ctx->pc = 0x30f1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953884)));
    // 0x30f1b4: 0x244f0001  addiu       $t7, $v0, 0x1
    ctx->pc = 0x30f1b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30f1b8: 0xafa70178  sw          $a3, 0x178($sp)
    ctx->pc = 0x30f1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 7));
    // 0x30f1bc: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x30f1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x30f1c0: 0xafa4016c  sw          $a0, 0x16C($sp)
    ctx->pc = 0x30f1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 4));
    // 0x30f1c4: 0x1ec2021  addu        $a0, $t7, $t4
    ctx->pc = 0x30f1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x30f1c8: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x30f1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x30f1cc: 0x246e0001  addiu       $t6, $v1, 0x1
    ctx->pc = 0x30f1ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30f1d0: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x30f1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x30f1d4: 0x892023  subu        $a0, $a0, $t1
    ctx->pc = 0x30f1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x30f1d8: 0x24b00001  addiu       $s0, $a1, 0x1
    ctx->pc = 0x30f1d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30f1dc: 0xf2900  sll         $a1, $t7, 4
    ctx->pc = 0x30f1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x30f1e0: 0x8fa9016c  lw          $t1, 0x16C($sp)
    ctx->pc = 0x30f1e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x30f1e4: 0x1f13021  addu        $a2, $t7, $s1
    ctx->pc = 0x30f1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x30f1e8: 0x1ca1021  addu        $v0, $t6, $t2
    ctx->pc = 0x30f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x30f1ec: 0x1d23821  addu        $a3, $t6, $s2
    ctx->pc = 0x30f1ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 18)));
    // 0x30f1f0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x30f1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x30f1f4: 0x203a821  addu        $s5, $s0, $v1
    ctx->pc = 0x30f1f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x30f1f8: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x30f1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
    // 0x30f1fc: 0x25390001  addiu       $t9, $t1, 0x1
    ctx->pc = 0x30f1fcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x30f200: 0x484023  subu        $t0, $v0, $t0
    ctx->pc = 0x30f200u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x30f204: 0xe1100  sll         $v0, $t6, 4
    ctx->pc = 0x30f204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x30f208: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x30f208u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x30f20c: 0x106900  sll         $t5, $s0, 4
    ctx->pc = 0x30f20cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x30f210: 0x12b040  sll         $s6, $s2, 1
    ctx->pc = 0x30f210u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x30f214: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x30f214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x30f218: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x30f218u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f21c: 0x191100  sll         $v0, $t9, 4
    ctx->pc = 0x30f21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x30f220: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x30f220u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f224: 0x3363821  addu        $a3, $t9, $s6
    ctx->pc = 0x30f224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 22)));
    // 0x30f228: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x30f228u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x30f22c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x30f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x30f230: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x30f230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x30f234: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x30f234u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x30f238: 0x1a0482d  daddu       $t1, $t5, $zero
    ctx->pc = 0x30f238u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f23c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x30f23cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30f240: 0x14a23c  dsll32      $s4, $s4, 8
    ctx->pc = 0x30f240u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 8));
    // 0x30f244: 0x14a23a  dsrl        $s4, $s4, 8
    ctx->pc = 0x30f244u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 8);
    // 0x30f248: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x30f248u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x30f24c: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x30f24cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x30f250: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x30f250u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x30f254: 0x1652825  or          $a1, $t3, $a1
    ctx->pc = 0x30f254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) | GPR_U64(ctx, 5));
    // 0x30f258: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x30f258u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x30f25c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30f25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30f260: 0x3c63025  or          $a2, $fp, $a2
    ctx->pc = 0x30f260u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) | GPR_U64(ctx, 6));
    // 0x30f264: 0x494825  or          $t1, $v0, $t1
    ctx->pc = 0x30f264u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x30f268: 0x2ae20002  slti        $v0, $s7, 0x2
    ctx->pc = 0x30f268u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30f26c: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x30f26cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x30f270: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x30f270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x30f274: 0xb42825  or          $a1, $a1, $s4
    ctx->pc = 0x30f274u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 20));
    // 0x30f278: 0xd43025  or          $a2, $a2, $s4
    ctx->pc = 0x30f278u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 20));
    // 0x30f27c: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x30f27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
    // 0x30f280: 0x26782020  addiu       $t8, $s3, 0x2020
    ctx->pc = 0x30f280u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 8224));
    // 0x30f284: 0xfe681fd0  sd          $t0, 0x1FD0($s3)
    ctx->pc = 0x30f284u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8144), GPR_U64(ctx, 8));
    // 0x30f288: 0xfe691fe0  sd          $t1, 0x1FE0($s3)
    ctx->pc = 0x30f288u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8160), GPR_U64(ctx, 9));
    // 0x30f28c: 0xfe651ff0  sd          $a1, 0x1FF0($s3)
    ctx->pc = 0x30f28cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8176), GPR_U64(ctx, 5));
    // 0x30f290: 0xfe632000  sd          $v1, 0x2000($s3)
    ctx->pc = 0x30f290u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8192), GPR_U64(ctx, 3));
    // 0x30f294: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x30F294u;
    {
        const bool branch_taken_0x30f294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F294u;
        // 0x30f298: 0xfe662010  sd          $a2, 0x2010($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 8208), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f294) {
            ctx->pc = 0x30F360u;
            goto label_30f360;
        }
    }
    ctx->pc = 0x30F29Cu;
    // 0x30f29c: 0x8fa3018c  lw          $v1, 0x18C($sp)
    ctx->pc = 0x30f29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x30f2a0: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x30f2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x30f2a4: 0x8f84c550  lw          $a0, -0x3AB0($gp)
    ctx->pc = 0x30f2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x30f2a8: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x30f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30f2ac: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x30f2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30f2b0: 0xff030008  sd          $v1, 0x8($t8)
    ctx->pc = 0x30f2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 3));
    // 0x30f2b4: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x30f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x30f2b8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x30f2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30f2bc: 0x8fb00170  lw          $s0, 0x170($sp)
    ctx->pc = 0x30f2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x30f2c0: 0x248f0002  addiu       $t7, $a0, 0x2
    ctx->pc = 0x30f2c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x30f2c4: 0x8fa80178  lw          $t0, 0x178($sp)
    ctx->pc = 0x30f2c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x30f2c8: 0x1f13021  addu        $a2, $t7, $s1
    ctx->pc = 0x30f2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x30f2cc: 0x8f82c550  lw          $v0, -0x3AB0($gp)
    ctx->pc = 0x30f2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x30f2d0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x30f2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x30f2d4: 0x8fa90174  lw          $t1, 0x174($sp)
    ctx->pc = 0x30f2d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x30f2d8: 0x208a821  addu        $s5, $s0, $t0
    ctx->pc = 0x30f2d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x30f2dc: 0x8f87c54c  lw          $a3, -0x3AB4($gp)
    ctx->pc = 0x30f2dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x30f2e0: 0x1ec1821  addu        $v1, $t7, $t4
    ctx->pc = 0x30f2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x30f2e4: 0x8fb9016c  lw          $t9, 0x16C($sp)
    ctx->pc = 0x30f2e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x30f2e8: 0xf2900  sll         $a1, $t7, 4
    ctx->pc = 0x30f2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x30f2ec: 0x1273823  subu        $a3, $t1, $a3
    ctx->pc = 0x30f2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x30f2f0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x30f2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30f2f4: 0x106900  sll         $t5, $s0, 4
    ctx->pc = 0x30f2f4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x30f2f8: 0x152100  sll         $a0, $s5, 4
    ctx->pc = 0x30f2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x30f2fc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x30f2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x30f300: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30f300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30f304: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x30f304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x30f308: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x30f308u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x30f30c: 0x1a0482d  daddu       $t1, $t5, $zero
    ctx->pc = 0x30f30cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f310: 0x3364021  addu        $t0, $t9, $s6
    ctx->pc = 0x30f310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 22)));
    // 0x30f314: 0x1652825  or          $a1, $t3, $a1
    ctx->pc = 0x30f314u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) | GPR_U64(ctx, 5));
    // 0x30f318: 0x3c63025  or          $a2, $fp, $a2
    ctx->pc = 0x30f318u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) | GPR_U64(ctx, 6));
    // 0x30f31c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x30f31cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x30f320: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x30f320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30f324: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x30f324u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x30f328: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x30f328u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x30f32c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x30f32cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x30f330: 0x191100  sll         $v0, $t9, 4
    ctx->pc = 0x30f330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x30f334: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x30f334u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x30f338: 0x494825  or          $t1, $v0, $t1
    ctx->pc = 0x30f338u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x30f33c: 0x1042025  or          $a0, $t0, $a0
    ctx->pc = 0x30f33cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x30f340: 0xb42825  or          $a1, $a1, $s4
    ctx->pc = 0x30f340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 20));
    // 0x30f344: 0xd43025  or          $a2, $a2, $s4
    ctx->pc = 0x30f344u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 20));
    // 0x30f348: 0xff070000  sd          $a3, 0x0($t8)
    ctx->pc = 0x30f348u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 7));
    // 0x30f34c: 0x26782070  addiu       $t8, $s3, 0x2070
    ctx->pc = 0x30f34cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 8304));
    // 0x30f350: 0xfe692030  sd          $t1, 0x2030($s3)
    ctx->pc = 0x30f350u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8240), GPR_U64(ctx, 9));
    // 0x30f354: 0xfe652040  sd          $a1, 0x2040($s3)
    ctx->pc = 0x30f354u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8256), GPR_U64(ctx, 5));
    // 0x30f358: 0xfe642050  sd          $a0, 0x2050($s3)
    ctx->pc = 0x30f358u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8272), GPR_U64(ctx, 4));
    // 0x30f35c: 0xfe662060  sd          $a2, 0x2060($s3)
    ctx->pc = 0x30f35cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8288), GPR_U64(ctx, 6));
label_30f360:
    // 0x30f360: 0x241e0004  addiu       $fp, $zero, 0x4
    ctx->pc = 0x30f360u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30f364: 0x16fe0065  bne         $s7, $fp, . + 4 + (0x65 << 2)
    ctx->pc = 0x30F364u;
    {
        const bool branch_taken_0x30f364 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 30));
        ctx->pc = 0x30F368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F364u;
        // 0x30f368: 0x8fa8017c  lw          $t0, 0x17C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f364) {
            ctx->pc = 0x30F4FCu;
            goto label_30f4fc;
        }
    }
    ctx->pc = 0x30F36Cu;
    // 0x30f36c: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x30f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x30f370: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x30f370u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x30f374: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x30f374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x30f378: 0x1a0382d  daddu       $a3, $t5, $zero
    ctx->pc = 0x30f378u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f37c: 0x8f85c54c  lw          $a1, -0x3AB4($gp)
    ctx->pc = 0x30f37cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x30f380: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x30f380u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x30f384: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x30f384u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30f388: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x30f388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30f38c: 0x8f84c550  lw          $a0, -0x3AB0($gp)
    ctx->pc = 0x30f38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x30f390: 0x16a1821  addu        $v1, $t3, $t2
    ctx->pc = 0x30f390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x30f394: 0xff020008  sd          $v0, 0x8($t8)
    ctx->pc = 0x30f394u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 2));
    // 0x30f398: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x30f398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x30f39c: 0x24ae0002  addiu       $t6, $a1, 0x2
    ctx->pc = 0x30f39cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x30f3a0: 0x16c5821  addu        $t3, $t3, $t4
    ctx->pc = 0x30f3a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
    // 0x30f3a4: 0x8fa60150  lw          $a2, 0x150($sp)
    ctx->pc = 0x30f3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x30f3a8: 0x1ca4021  addu        $t0, $t6, $t2
    ctx->pc = 0x30f3a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 10)));
    // 0x30f3ac: 0x8f83c54c  lw          $v1, -0x3AB4($gp)
    ctx->pc = 0x30f3acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x30f3b0: 0xe5100  sll         $t2, $t6, 4
    ctx->pc = 0x30f3b0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x30f3b4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x30f3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x30f3b8: 0x193100  sll         $a2, $t9, 4
    ctx->pc = 0x30f3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x30f3bc: 0x248f0001  addiu       $t7, $a0, 0x1
    ctx->pc = 0x30f3bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30f3c0: 0x8f84c550  lw          $a0, -0x3AB0($gp)
    ctx->pc = 0x30f3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x30f3c4: 0x1ec1021  addu        $v0, $t7, $t4
    ctx->pc = 0x30f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x30f3c8: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x30f3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x30f3cc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x30f3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30f3d0: 0x1f12021  addu        $a0, $t7, $s1
    ctx->pc = 0x30f3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x30f3d4: 0xf2900  sll         $a1, $t7, 4
    ctx->pc = 0x30f3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x30f3d8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30f3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30f3dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30f3e0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30f3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30f3e4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x30f3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30f3e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30f3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30f3ec: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x30f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x30f3f0: 0x1d24821  addu        $t1, $t6, $s2
    ctx->pc = 0x30f3f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 18)));
    // 0x30f3f4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x30f3f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x30f3f8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x30f3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30f3fc: 0xff030000  sd          $v1, 0x0($t8)
    ctx->pc = 0x30f3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 3));
    // 0x30f400: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x30f400u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x30f404: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x30f404u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x30f408: 0x1452825  or          $a1, $t2, $a1
    ctx->pc = 0x30f408u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x30f40c: 0x3361821  addu        $v1, $t9, $s6
    ctx->pc = 0x30f40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 22)));
    // 0x30f410: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x30f410u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x30f414: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x30f414u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x30f418: 0xff070000  sd          $a3, 0x0($t8)
    ctx->pc = 0x30f418u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 7));
    // 0x30f41c: 0xb42825  or          $a1, $a1, $s4
    ctx->pc = 0x30f41cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 20));
    // 0x30f420: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x30f420u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x30f424: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30f424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30f428: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30f428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30f42c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x30f42cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x30f430: 0xff050000  sd          $a1, 0x0($t8)
    ctx->pc = 0x30f430u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 5));
    // 0x30f434: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x30f434u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x30f438: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30f438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30f43c: 0x1242025  or          $a0, $t1, $a0
    ctx->pc = 0x30f43cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
    // 0x30f440: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x30f440u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x30f444: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x30f444u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x30f448: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x30f448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
    // 0x30f44c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x30f44cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x30f450: 0xff040000  sd          $a0, 0x0($t8)
    ctx->pc = 0x30f450u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 4));
    // 0x30f454: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x30f454u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x30f458: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x30f458u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x30f45c: 0x8f84c550  lw          $a0, -0x3AB0($gp)
    ctx->pc = 0x30f45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x30f460: 0x8f83c54c  lw          $v1, -0x3AB4($gp)
    ctx->pc = 0x30f460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x30f464: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x30f464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x30f468: 0x8b5821  addu        $t3, $a0, $t3
    ctx->pc = 0x30f468u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x30f46c: 0x8fa70178  lw          $a3, 0x178($sp)
    ctx->pc = 0x30f46cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x30f470: 0x256f0002  addiu       $t7, $t3, 0x2
    ctx->pc = 0x30f470u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x30f474: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x30f474u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x30f478: 0x1ec1021  addu        $v0, $t7, $t4
    ctx->pc = 0x30f478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x30f47c: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x30f47cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x30f480: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x30f480u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30f484: 0xf2100  sll         $a0, $t7, 4
    ctx->pc = 0x30f484u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x30f488: 0x1f11821  addu        $v1, $t7, $s1
    ctx->pc = 0x30f488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x30f48c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30f490: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x30f490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30f494: 0x2073021  addu        $a2, $s0, $a3
    ctx->pc = 0x30f494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x30f498: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x30f498u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x30f49c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30f49cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30f4a0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x30f4a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x30f4a4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x30f4a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x30f4a8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x30f4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x30f4ac: 0x191100  sll         $v0, $t9, 4
    ctx->pc = 0x30f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x30f4b0: 0xff080000  sd          $t0, 0x0($t8)
    ctx->pc = 0x30f4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 8));
    // 0x30f4b4: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x30f4b4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x30f4b8: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x30f4b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x30f4bc: 0x3361021  addu        $v0, $t9, $s6
    ctx->pc = 0x30f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 22)));
    // 0x30f4c0: 0x1445025  or          $t2, $t2, $a0
    ctx->pc = 0x30f4c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x30f4c4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30f4c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30f4c8: 0xff050000  sd          $a1, 0x0($t8)
    ctx->pc = 0x30f4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 5));
    // 0x30f4cc: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x30f4ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x30f4d0: 0x1545025  or          $t2, $t2, $s4
    ctx->pc = 0x30f4d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 20));
    // 0x30f4d4: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x30f4d4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x30f4d8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30f4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30f4dc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x30f4dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x30f4e0: 0xff0a0000  sd          $t2, 0x0($t8)
    ctx->pc = 0x30f4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 10));
    // 0x30f4e4: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x30f4e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x30f4e8: 0x1344825  or          $t1, $t1, $s4
    ctx->pc = 0x30f4e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 20));
    // 0x30f4ec: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x30f4ecu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x30f4f0: 0xff090010  sd          $t1, 0x10($t8)
    ctx->pc = 0x30f4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 16), GPR_U64(ctx, 9));
    // 0x30f4f4: 0xff060000  sd          $a2, 0x0($t8)
    ctx->pc = 0x30f4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 6));
    // 0x30f4f8: 0x8fa8017c  lw          $t0, 0x17C($sp)
    ctx->pc = 0x30f4f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_30f4fc:
    // 0x30f4fc: 0x8fb20164  lw          $s2, 0x164($sp)
    ctx->pc = 0x30f4fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x30f500: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30F500u;
    {
        const bool branch_taken_0x30f500 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F500u;
        // 0x30f504: 0x8fb10168  lw          $s1, 0x168($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f500) {
            ctx->pc = 0x30F510u;
            goto label_30f510;
        }
    }
    ctx->pc = 0x30F508u;
    // 0x30f508: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x30f508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x30f50c: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x30f50cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_30f510:
    // 0x30f510: 0x16fe0003  bne         $s7, $fp, . + 4 + (0x3 << 2)
    ctx->pc = 0x30F510u;
    {
        const bool branch_taken_0x30f510 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 30));
        ctx->pc = 0x30F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F510u;
        // 0x30f514: 0x8f83c550  lw          $v1, -0x3AB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f510) {
            ctx->pc = 0x30F520u;
            goto label_30f520;
        }
    }
    ctx->pc = 0x30F518u;
    // 0x30f518: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x30f518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x30f51c: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x30f51cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_30f520:
    // 0x30f520: 0x26782250  addiu       $t8, $s3, 0x2250
    ctx->pc = 0x30f520u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 8784));
    // 0x30f524: 0x8f82c54c  lw          $v0, -0x3AB4($gp)
    ctx->pc = 0x30f524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x30f528: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30f528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30f52c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30f530: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30f530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30f534: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x30f534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30f538: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x30f538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x30f53c: 0xff030000  sd          $v1, 0x0($t8)
    ctx->pc = 0x30f53cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 3));
    // 0x30f540: 0x8f82c550  lw          $v0, -0x3AB0($gp)
    ctx->pc = 0x30f540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x30f544: 0x8f83c54c  lw          $v1, -0x3AB4($gp)
    ctx->pc = 0x30f544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x30f548: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30f548u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30f54c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x30f54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x30f550: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30f550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30f554: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30f554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30f558: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30f558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30f55c: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x30f55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x30f560: 0xff020008  sd          $v0, 0x8($t8)
    ctx->pc = 0x30f560u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 2));
    // 0x30f564: 0x26782260  addiu       $t8, $s3, 0x2260
    ctx->pc = 0x30f564u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 8800));
    // 0x30f568: 0x8f83c550  lw          $v1, -0x3AB0($gp)
    ctx->pc = 0x30f568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x30f56c: 0x8f82c54c  lw          $v0, -0x3AB4($gp)
    ctx->pc = 0x30f56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x30f570: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x30f570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x30f574: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30f574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30f578: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x30f578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x30f57c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30f580: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30f580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30f584: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x30f584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30f588: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x30f588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x30f58c: 0xff030000  sd          $v1, 0x0($t8)
    ctx->pc = 0x30f58cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 3));
    // 0x30f590: 0x8f82c550  lw          $v0, -0x3AB0($gp)
    ctx->pc = 0x30f590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x30f594: 0x8f83c54c  lw          $v1, -0x3AB4($gp)
    ctx->pc = 0x30f594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x30f598: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x30f598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x30f59c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30f59cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30f5a0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30f5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30f5a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30f5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30f5a8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x30f5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30f5ac: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x30f5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x30f5b0: 0xff020008  sd          $v0, 0x8($t8)
    ctx->pc = 0x30f5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 2));
    // 0x30f5b4: 0x8f83c550  lw          $v1, -0x3AB0($gp)
    ctx->pc = 0x30f5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x30f5b8: 0x8f82c54c  lw          $v0, -0x3AB4($gp)
    ctx->pc = 0x30f5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x30f5bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30f5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30f5c0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30f5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30f5c4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30f5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30f5c8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x30f5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30f5cc: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x30f5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x30f5d0: 0xfe632270  sd          $v1, 0x2270($s3)
    ctx->pc = 0x30f5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8816), GPR_U64(ctx, 3));
    // 0x30f5d4: 0x8fa90150  lw          $t1, 0x150($sp)
    ctx->pc = 0x30f5d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x30f5d8: 0x19200012  blez        $t1, . + 4 + (0x12 << 2)
    ctx->pc = 0x30F5D8u;
    {
        const bool branch_taken_0x30f5d8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x30F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F5D8u;
        // 0x30f5dc: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f5d8) {
            ctx->pc = 0x30F624u;
            goto label_30f624;
        }
    }
    ctx->pc = 0x30F5E0u;
    // 0x30f5e0: 0x8faa0134  lw          $t2, 0x134($sp)
    ctx->pc = 0x30f5e0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x30f5e4: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x30f5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x30f5e8: 0x3c035100  lui         $v1, 0x5100
    ctx->pc = 0x30f5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20736 << 16));
    // 0x30f5ec: 0x34840010  ori         $a0, $a0, 0x10
    ctx->pc = 0x30f5ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x30f5f0: 0x25452110  addiu       $a1, $t2, 0x2110
    ctx->pc = 0x30f5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 8464));
    // 0x30f5f4: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x30f5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x30f5f8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x30f5f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f5fc: 0x120c82d  daddu       $t9, $t1, $zero
    ctx->pc = 0x30f5fcu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_30f600:
    // 0x30f600: 0x24580930  addiu       $t8, $v0, 0x930
    ctx->pc = 0x30f600u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 2352));
    // 0x30f604: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x30f604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x30f608: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x30f608u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x30f60c: 0xaf03000c  sw          $v1, 0xC($t8)
    ctx->pc = 0x30f60cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 3));
    // 0x30f610: 0xaf040000  sw          $a0, 0x0($t8)
    ctx->pc = 0x30f610u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 4));
    // 0x30f614: 0xaf050004  sw          $a1, 0x4($t8)
    ctx->pc = 0x30f614u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 5));
    // 0x30f618: 0x1720fff9  bnez        $t9, . + 4 + (-0x7 << 2)
    ctx->pc = 0x30F618u;
    {
        const bool branch_taken_0x30f618 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F618u;
        // 0x30f61c: 0xaf000008  sw          $zero, 0x8($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f618) {
            ctx->pc = 0x30F600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f600;
        }
    }
    ctx->pc = 0x30F620u;
    // 0x30f620: 0x8fb90150  lw          $t9, 0x150($sp)
    ctx->pc = 0x30f620u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_30f624:
    // 0x30f624: 0x2b22000e  slti        $v0, $t9, 0xE
    ctx->pc = 0x30f624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x30f628: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x30F628u;
    {
        const bool branch_taken_0x30f628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F628u;
        // 0x30f62c: 0x8fa60140  lw          $a2, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f628) {
            ctx->pc = 0x30F65Cu;
            goto label_30f65c;
        }
    }
    ctx->pc = 0x30F630u;
    // 0x30f630: 0x8fa50134  lw          $a1, 0x134($sp)
    ctx->pc = 0x30f630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x30f634: 0x191100  sll         $v0, $t9, 4
    ctx->pc = 0x30f634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x30f638: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x30f638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x30f63c: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x30f63cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x30f640: 0x24580930  addiu       $t8, $v0, 0x930
    ctx->pc = 0x30f640u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 2352));
    // 0x30f644: 0x24a30a10  addiu       $v1, $a1, 0xA10
    ctx->pc = 0x30f644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2576));
    // 0x30f648: 0xaf040000  sw          $a0, 0x0($t8)
    ctx->pc = 0x30f648u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 4));
    // 0x30f64c: 0xaf030004  sw          $v1, 0x4($t8)
    ctx->pc = 0x30f64cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 3));
    // 0x30f650: 0xaf00000c  sw          $zero, 0xC($t8)
    ctx->pc = 0x30f650u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 0));
    // 0x30f654: 0xaf000008  sw          $zero, 0x8($t8)
    ctx->pc = 0x30f654u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 0));
    // 0x30f658: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x30f658u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_30f65c:
    // 0x30f65c: 0x3404ea80  ori         $a0, $zero, 0xEA80
    ctx->pc = 0x30f65cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60032);
    // 0x30f660: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x30f660u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x30f664: 0xdfa70180  ld          $a3, 0x180($sp)
    ctx->pc = 0x30f664u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x30f668: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x30f668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x30f66c: 0x8fa80164  lw          $t0, 0x164($sp)
    ctx->pc = 0x30f66cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x30f670: 0x713b8  dsll        $v0, $a3, 14
    ctx->pc = 0x30f670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 14);
    // 0x30f674: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x30f674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x30f678: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x30f678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30f67c: 0x8fa90168  lw          $t1, 0x168($sp)
    ctx->pc = 0x30f67cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x30f680: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x30f680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x30f684: 0x2512ffff  addiu       $s2, $t0, -0x1
    ctx->pc = 0x30f684u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x30f688: 0xfe632130  sd          $v1, 0x2130($s3)
    ctx->pc = 0x30f688u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8496), GPR_U64(ctx, 3));
    // 0x30f68c: 0x8f82c544  lw          $v0, -0x3ABC($gp)
    ctx->pc = 0x30f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952260)));
    // 0x30f690: 0x8f83c548  lw          $v1, -0x3AB8($gp)
    ctx->pc = 0x30f690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952264)));
    // 0x30f694: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30f694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30f698: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30f698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30f69c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30f69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30f6a0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x30f6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30f6a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30f6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30f6a8: 0xfe622150  sd          $v0, 0x2150($s3)
    ctx->pc = 0x30f6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8528), GPR_U64(ctx, 2));
    // 0x30f6ac: 0x8faa017c  lw          $t2, 0x17C($sp)
    ctx->pc = 0x30f6acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x30f6b0: 0x15400003  bnez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x30F6B0u;
    {
        const bool branch_taken_0x30f6b0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x30F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F6B0u;
        // 0x30f6b4: 0x2531ffff  addiu       $s1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f6b0) {
            ctx->pc = 0x30F6C0u;
            goto label_30f6c0;
        }
    }
    ctx->pc = 0x30F6B8u;
    // 0x30f6b8: 0x2291021  addu        $v0, $s1, $t1
    ctx->pc = 0x30f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x30f6bc: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x30f6bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_30f6c0:
    // 0x30f6c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30f6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30f6c4: 0x16e20004  bne         $s7, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30F6C4u;
    {
        const bool branch_taken_0x30f6c4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x30F6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F6C4u;
        // 0x30f6c8: 0x24180001  addiu       $t8, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f6c4) {
            ctx->pc = 0x30F6D8u;
            goto label_30f6d8;
        }
    }
    ctx->pc = 0x30F6CCu;
    // 0x30f6cc: 0x8fa30164  lw          $v1, 0x164($sp)
    ctx->pc = 0x30f6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x30f6d0: 0x2431021  addu        $v0, $s2, $v1
    ctx->pc = 0x30f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x30f6d4: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x30f6d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_30f6d8:
    // 0x30f6d8: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x30f6d8u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f6dc: 0x12580009  beq         $s2, $t8, . + 4 + (0x9 << 2)
    ctx->pc = 0x30F6DCu;
    {
        const bool branch_taken_0x30f6dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 24));
        ctx->pc = 0x30F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F6DCu;
        // 0x30f6e0: 0x240582d  daddu       $t3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f6dc) {
            ctx->pc = 0x30F704u;
            goto label_30f704;
        }
    }
    ctx->pc = 0x30F6E4u;
    // 0x30f6e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30f6e8:
    // 0x30f6e8: 0xb5843  sra         $t3, $t3, 1
    ctx->pc = 0x30f6e8u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
    // 0x30f6ec: 0x0  nop
    ctx->pc = 0x30f6ecu;
    // NOP
    // 0x30f6f0: 0x0  nop
    ctx->pc = 0x30f6f0u;
    // NOP
    // 0x30f6f4: 0x0  nop
    ctx->pc = 0x30f6f4u;
    // NOP
    // 0x30f6f8: 0x0  nop
    ctx->pc = 0x30f6f8u;
    // NOP
    // 0x30f6fc: 0x1562fffa  bne         $t3, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30F6FCu;
    {
        const bool branch_taken_0x30f6fc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x30F700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F6FCu;
        // 0x30f700: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f6fc) {
            ctx->pc = 0x30F6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f6e8;
        }
    }
    ctx->pc = 0x30F704u;
label_30f704:
    // 0x30f704: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30f704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f708: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x30f708u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f70c: 0x3231004  sllv        $v0, $v1, $t9
    ctx->pc = 0x30f70cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 25) & 0x1F));
    // 0x30f710: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x30f710u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f714: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x30f714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
    // 0x30f718: 0x1223000a  beq         $s1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x30F718u;
    {
        const bool branch_taken_0x30f718 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x30F71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F718u;
        // 0x30f71c: 0x2402b  sltu        $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f718) {
            ctx->pc = 0x30F744u;
            goto label_30f744;
        }
    }
    ctx->pc = 0x30F720u;
    // 0x30f720: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30f720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f724: 0x0  nop
    ctx->pc = 0x30f724u;
    // NOP
label_30f728:
    // 0x30f728: 0xb5843  sra         $t3, $t3, 1
    ctx->pc = 0x30f728u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
    // 0x30f72c: 0x0  nop
    ctx->pc = 0x30f72cu;
    // NOP
    // 0x30f730: 0x0  nop
    ctx->pc = 0x30f730u;
    // NOP
    // 0x30f734: 0x0  nop
    ctx->pc = 0x30f734u;
    // NOP
    // 0x30f738: 0x0  nop
    ctx->pc = 0x30f738u;
    // NOP
    // 0x30f73c: 0x1562fffa  bne         $t3, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30F73Cu;
    {
        const bool branch_taken_0x30f73c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x30F740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F73Cu;
        // 0x30f740: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f73c) {
            ctx->pc = 0x30F728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f728;
        }
    }
    ctx->pc = 0x30F744u;
label_30f744:
    // 0x30f744: 0x8f84c550  lw          $a0, -0x3AB0($gp)
    ctx->pc = 0x30f744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x30f748: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30f748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f74c: 0x8f83c54c  lw          $v1, -0x3AB4($gp)
    ctx->pc = 0x30f74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x30f750: 0x3221004  sllv        $v0, $v0, $t9
    ctx->pc = 0x30f750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x30f754: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x30f754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
    // 0x30f758: 0x248f0001  addiu       $t7, $a0, 0x1
    ctx->pc = 0x30f758u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30f75c: 0x8fa901a0  lw          $t1, 0x1A0($sp)
    ctx->pc = 0x30f75cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x30f760: 0x2c02b  sltu        $t8, $zero, $v0
    ctx->pc = 0x30f760u;
    SET_GPR_U64(ctx, 24, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30f764: 0x246e0001  addiu       $t6, $v1, 0x1
    ctx->pc = 0x30f764u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30f768: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x30f768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30f76c: 0x1f11021  addu        $v0, $t7, $s1
    ctx->pc = 0x30f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x30f770: 0xf2100  sll         $a0, $t7, 4
    ctx->pc = 0x30f770u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x30f774: 0xdfaa0180  ld          $t2, 0x180($sp)
    ctx->pc = 0x30f774u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x30f778: 0x982023  subu        $a0, $a0, $t8
    ctx->pc = 0x30f778u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
    // 0x30f77c: 0x2303821  addu        $a3, $s1, $s0
    ctx->pc = 0x30f77cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x30f780: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x30f780u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30f784: 0x1d22821  addu        $a1, $t6, $s2
    ctx->pc = 0x30f784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 18)));
    // 0x30f788: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30f788u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30f78c: 0xe1900  sll         $v1, $t6, 4
    ctx->pc = 0x30f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x30f790: 0x581023  subu        $v0, $v0, $t8
    ctx->pc = 0x30f790u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x30f794: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x30f794u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x30f798: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x30f798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x30f79c: 0x9303c  dsll32      $a2, $t1, 0
    ctx->pc = 0x30f79cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) << (32 + 0));
    // 0x30f7a0: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x30f7a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30f7a4: 0x94a3c  dsll32      $t1, $t1, 8
    ctx->pc = 0x30f7a4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 8));
    // 0x30f7a8: 0x94a3a  dsrl        $t1, $t1, 8
    ctx->pc = 0x30f7a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) >> 8);
    // 0x30f7ac: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x30f7acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x30f7b0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x30f7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x30f7b4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x30f7b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x30f7b8: 0xa2438  dsll        $a0, $t2, 16
    ctx->pc = 0x30f7b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << 16);
    // 0x30f7bc: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x30f7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x30f7c0: 0x2504021  addu        $t0, $s2, $s0
    ctx->pc = 0x30f7c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x30f7c4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30f7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30f7c8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x30f7c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x30f7cc: 0x26782170  addiu       $t8, $s3, 0x2170
    ctx->pc = 0x30f7ccu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 8560));
    // 0x30f7d0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x30f7d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x30f7d4: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x30f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x30f7d8: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x30f7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x30f7dc: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x30f7dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x30f7e0: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x30f7e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x30f7e4: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x30f7e4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x30f7e8: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x30f7e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x30f7ec: 0xff030008  sd          $v1, 0x8($t8)
    ctx->pc = 0x30f7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 3));
    // 0x30f7f0: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x30f7f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x30f7f4: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x30f7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x30f7f8: 0x26782180  addiu       $t8, $s3, 0x2180
    ctx->pc = 0x30f7f8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 8576));
    // 0x30f7fc: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x30f7fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x30f800: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x30f800u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x30f804: 0xff050008  sd          $a1, 0x8($t8)
    ctx->pc = 0x30f804u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 5));
    // 0x30f808: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30f808u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30f80c: 0xff070000  sd          $a3, 0x0($t8)
    ctx->pc = 0x30f80cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 7));
    // 0x30f810: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x30f810u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f814: 0xfe6621c0  sd          $a2, 0x21C0($s3)
    ctx->pc = 0x30f814u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 8640), GPR_U64(ctx, 6));
    // 0x30f818: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x30f818u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f81c: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x30f81cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f820: 0x8f82c544  lw          $v0, -0x3ABC($gp)
    ctx->pc = 0x30f820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952260)));
    // 0x30f824: 0x8f83c548  lw          $v1, -0x3AB8($gp)
    ctx->pc = 0x30f824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952264)));
    // 0x30f828: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30f828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30f82c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30f82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30f830: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30f830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30f834: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x30f834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30f838: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30f838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30f83c: 0x12580009  beq         $s2, $t8, . + 4 + (0x9 << 2)
    ctx->pc = 0x30F83Cu;
    {
        const bool branch_taken_0x30f83c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 24));
        ctx->pc = 0x30F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F83Cu;
        // 0x30f840: 0xfe6221d0  sd          $v0, 0x21D0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 8656), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f83c) {
            ctx->pc = 0x30F864u;
            goto label_30f864;
        }
    }
    ctx->pc = 0x30F844u;
    // 0x30f844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30f844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30f848:
    // 0x30f848: 0xb5843  sra         $t3, $t3, 1
    ctx->pc = 0x30f848u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
    // 0x30f84c: 0x0  nop
    ctx->pc = 0x30f84cu;
    // NOP
    // 0x30f850: 0x0  nop
    ctx->pc = 0x30f850u;
    // NOP
    // 0x30f854: 0x0  nop
    ctx->pc = 0x30f854u;
    // NOP
    // 0x30f858: 0x0  nop
    ctx->pc = 0x30f858u;
    // NOP
    // 0x30f85c: 0x1562fffa  bne         $t3, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30F85Cu;
    {
        const bool branch_taken_0x30f85c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x30F860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F85Cu;
        // 0x30f860: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f85c) {
            ctx->pc = 0x30F848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f848;
        }
    }
    ctx->pc = 0x30F864u;
label_30f864:
    // 0x30f864: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30f864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f868: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x30f868u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f86c: 0x3231004  sllv        $v0, $v1, $t9
    ctx->pc = 0x30f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 25) & 0x1F));
    // 0x30f870: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x30f870u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f874: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x30f874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
    // 0x30f878: 0x1223000a  beq         $s1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x30F878u;
    {
        const bool branch_taken_0x30f878 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x30F87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F878u;
        // 0x30f87c: 0x2402b  sltu        $t0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f878) {
            ctx->pc = 0x30F8A4u;
            goto label_30f8a4;
        }
    }
    ctx->pc = 0x30F880u;
    // 0x30f880: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30f880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f884: 0x0  nop
    ctx->pc = 0x30f884u;
    // NOP
label_30f888:
    // 0x30f888: 0xb5843  sra         $t3, $t3, 1
    ctx->pc = 0x30f888u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
    // 0x30f88c: 0x0  nop
    ctx->pc = 0x30f88cu;
    // NOP
    // 0x30f890: 0x0  nop
    ctx->pc = 0x30f890u;
    // NOP
    // 0x30f894: 0x0  nop
    ctx->pc = 0x30f894u;
    // NOP
    // 0x30f898: 0x0  nop
    ctx->pc = 0x30f898u;
    // NOP
    // 0x30f89c: 0x1562fffa  bne         $t3, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30F89Cu;
    {
        const bool branch_taken_0x30f89c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x30F8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F89Cu;
        // 0x30f8a0: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f89c) {
            ctx->pc = 0x30F888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f888;
        }
    }
    ctx->pc = 0x30F8A4u;
label_30f8a4:
    // 0x30f8a4: 0x8f83c550  lw          $v1, -0x3AB0($gp)
    ctx->pc = 0x30f8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x30f8a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30f8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f8ac: 0x8f85c54c  lw          $a1, -0x3AB4($gp)
    ctx->pc = 0x30f8acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x30f8b0: 0x3221004  sllv        $v0, $v0, $t9
    ctx->pc = 0x30f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 25) & 0x1F));
    // 0x30f8b4: 0x246f0001  addiu       $t7, $v1, 0x1
    ctx->pc = 0x30f8b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x30f8b8: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x30f8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
    // 0x30f8bc: 0x2c02b  sltu        $t8, $zero, $v0
    ctx->pc = 0x30f8bcu;
    SET_GPR_U64(ctx, 24, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x30f8c0: 0x24ae0001  addiu       $t6, $a1, 0x1
    ctx->pc = 0x30f8c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x30f8c4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x30f8c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f8c8: 0x1f12021  addu        $a0, $t7, $s1
    ctx->pc = 0x30f8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x30f8cc: 0xf3100  sll         $a2, $t7, 4
    ctx->pc = 0x30f8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x30f8d0: 0x1d22821  addu        $a1, $t6, $s2
    ctx->pc = 0x30f8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 18)));
    // 0x30f8d4: 0xd83023  subu        $a2, $a2, $t8
    ctx->pc = 0x30f8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 24)));
    // 0x30f8d8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x30f8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30f8dc: 0xe1100  sll         $v0, $t6, 4
    ctx->pc = 0x30f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x30f8e0: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x30f8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x30f8e4: 0x982023  subu        $a0, $a0, $t8
    ctx->pc = 0x30f8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 24)));
    // 0x30f8e8: 0x267821f0  addiu       $t8, $s3, 0x21F0
    ctx->pc = 0x30f8e8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 8688));
    // 0x30f8ec: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x30f8ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x30f8f0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x30f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x30f8f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30f8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30f8f8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x30f8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x30f8fc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x30f8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x30f900: 0x2503021  addu        $a2, $s2, $s0
    ctx->pc = 0x30f900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x30f904: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x30f904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x30f908: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x30f908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30f90c: 0x73a3c  dsll32      $a3, $a3, 8
    ctx->pc = 0x30f90cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 8));
    // 0x30f910: 0x73a3a  dsrl        $a3, $a3, 8
    ctx->pc = 0x30f910u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 8);
    // 0x30f914: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x30f914u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x30f918: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x30f918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x30f91c: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x30f91cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x30f920: 0x34840010  ori         $a0, $a0, 0x10
    ctx->pc = 0x30f920u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x30f924: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x30f924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x30f928: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x30f928u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x30f92c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30f92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30f930: 0xff020008  sd          $v0, 0x8($t8)
    ctx->pc = 0x30f930u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 2));
    // 0x30f934: 0xff040000  sd          $a0, 0x0($t8)
    ctx->pc = 0x30f934u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 4));
    // 0x30f938: 0x26782200  addiu       $t8, $s3, 0x2200
    ctx->pc = 0x30f938u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 8704));
    // 0x30f93c: 0xc31825  or          $v1, $a2, $v1
    ctx->pc = 0x30f93cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x30f940: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x30f940u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x30f944: 0xff050008  sd          $a1, 0x8($t8)
    ctx->pc = 0x30f944u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 5));
    // 0x30f948: 0xff030000  sd          $v1, 0x0($t8)
    ctx->pc = 0x30f948u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 3));
    // 0x30f94c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x30f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x30f950: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x30f950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x30f954: 0x30c20040  andi        $v0, $a2, 0x40
    ctx->pc = 0x30f954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
    // 0x30f958: 0x10400157  beqz        $v0, . + 4 + (0x157 << 2)
    ctx->pc = 0x30F958u;
    {
        const bool branch_taken_0x30f958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F958u;
        // 0x30f95c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f958) {
            ctx->pc = 0x30FEB8u;
            goto label_30feb8;
        }
    }
    ctx->pc = 0x30F960u;
    // 0x30f960: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x30f960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30f964: 0xd7001a  div         $zero, $a2, $s7
    ctx->pc = 0x30f964u;
    { int32_t divisor = GPR_S32(ctx, 23);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30f968: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x30f968u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x30f96c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x30f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x30f970: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x30f970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30f974: 0x624023  subu        $t0, $v1, $v0
    ctx->pc = 0x30f974u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30f978: 0x3c045100  lui         $a0, 0x5100
    ctx->pc = 0x30f978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20736 << 16));
    // 0x30f97c: 0x1042025  or          $a0, $t0, $a0
    ctx->pc = 0x30f97cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x30f980: 0x26780a10  addiu       $t8, $s3, 0xA10
    ctx->pc = 0x30f980u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 2576));
    // 0x30f984: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x30F984u;
    {
        const bool branch_taken_0x30f984 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x30f984) {
            ctx->pc = 0x30F988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F984u;
            // 0x30f988: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F98Cu;
            goto label_30f98c;
        }
    }
    ctx->pc = 0x30F98Cu;
label_30f98c:
    // 0x30f98c: 0xaf04000c  sw          $a0, 0xC($t8)
    ctx->pc = 0x30f98cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 4));
    // 0x30f990: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x30f990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x30f994: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x30f994u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f998: 0x1052825  or          $a1, $t0, $a1
    ctx->pc = 0x30f998u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | GPR_U64(ctx, 5));
    // 0x30f99c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x30f99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x30f9a0: 0xaf050000  sw          $a1, 0x0($t8)
    ctx->pc = 0x30f9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 5));
    // 0x30f9a4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x30f9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x30f9a8: 0xdfa50180  ld          $a1, 0x180($sp)
    ctx->pc = 0x30f9a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x30f9ac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30f9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30f9b0: 0x8f83cb98  lw          $v1, -0x3468($gp)
    ctx->pc = 0x30f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953880)));
    // 0x30f9b4: 0x523b8  dsll        $a0, $a1, 14
    ctx->pc = 0x30f9b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << 14);
    // 0x30f9b8: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x30f9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x30f9bc: 0x34a5001e  ori         $a1, $a1, 0x1E
    ctx->pc = 0x30f9bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)30);
    // 0x30f9c0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x30f9c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x30f9c4: 0x34a5a9b0  ori         $a1, $a1, 0xA9B0
    ctx->pc = 0x30f9c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)43440);
    // 0x30f9c8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x30f9c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x30f9cc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x30f9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30f9d0: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x30f9d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x30f9d4: 0x8fb20164  lw          $s2, 0x164($sp)
    ctx->pc = 0x30f9d4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x30f9d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30f9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30f9dc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x30f9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x30f9e0: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x30f9e0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f9e4: 0xfe620a40  sd          $v0, 0xA40($s3)
    ctx->pc = 0x30f9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 2624), GPR_U64(ctx, 2));
    // 0x30f9e8: 0x3012  mflo        $a2
    ctx->pc = 0x30f9e8u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x30f9ec: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x30f9ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x30f9f0: 0x1250000a  beq         $s2, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x30F9F0u;
    {
        const bool branch_taken_0x30f9f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        ctx->pc = 0x30F9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F9F0u;
        // 0x30f9f4: 0xfe660a50  sd          $a2, 0xA50($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 2640), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f9f0) {
            ctx->pc = 0x30FA1Cu;
            goto label_30fa1c;
        }
    }
    ctx->pc = 0x30F9F8u;
    // 0x30f9f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30f9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f9fc: 0x0  nop
    ctx->pc = 0x30f9fcu;
    // NOP
label_30fa00:
    // 0x30fa00: 0xb5843  sra         $t3, $t3, 1
    ctx->pc = 0x30fa00u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
    // 0x30fa04: 0x0  nop
    ctx->pc = 0x30fa04u;
    // NOP
    // 0x30fa08: 0x0  nop
    ctx->pc = 0x30fa08u;
    // NOP
    // 0x30fa0c: 0x0  nop
    ctx->pc = 0x30fa0cu;
    // NOP
    // 0x30fa10: 0x0  nop
    ctx->pc = 0x30fa10u;
    // NOP
    // 0x30fa14: 0x1562fffa  bne         $t3, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30FA14u;
    {
        const bool branch_taken_0x30fa14 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x30FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA14u;
        // 0x30fa18: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fa14) {
            ctx->pc = 0x30FA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30fa00;
        }
    }
    ctx->pc = 0x30FA1Cu;
label_30fa1c:
    // 0x30fa1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30fa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fa20: 0x8fa60164  lw          $a2, 0x164($sp)
    ctx->pc = 0x30fa20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x30fa24: 0x3231004  sllv        $v0, $v1, $t9
    ctx->pc = 0x30fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 25) & 0x1F));
    // 0x30fa28: 0x10460002  beq         $v0, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x30FA28u;
    {
        const bool branch_taken_0x30fa28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x30FA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA28u;
        // 0x30fa2c: 0x27220001  addiu       $v0, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fa28) {
            ctx->pc = 0x30FA34u;
            goto label_30fa34;
        }
    }
    ctx->pc = 0x30FA30u;
    // 0x30fa30: 0x439004  sllv        $s2, $v1, $v0
    ctx->pc = 0x30fa30u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_30fa34:
    // 0x30fa34: 0x8fb10168  lw          $s1, 0x168($sp)
    ctx->pc = 0x30fa34u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x30fa38: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x30fa38u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fa3c: 0x12230009  beq         $s1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x30FA3Cu;
    {
        const bool branch_taken_0x30fa3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x30FA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA3Cu;
        // 0x30fa40: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fa3c) {
            ctx->pc = 0x30FA64u;
            goto label_30fa64;
        }
    }
    ctx->pc = 0x30FA44u;
    // 0x30fa44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30fa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30fa48:
    // 0x30fa48: 0xb5843  sra         $t3, $t3, 1
    ctx->pc = 0x30fa48u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
    // 0x30fa4c: 0x0  nop
    ctx->pc = 0x30fa4cu;
    // NOP
    // 0x30fa50: 0x0  nop
    ctx->pc = 0x30fa50u;
    // NOP
    // 0x30fa54: 0x0  nop
    ctx->pc = 0x30fa54u;
    // NOP
    // 0x30fa58: 0x0  nop
    ctx->pc = 0x30fa58u;
    // NOP
    // 0x30fa5c: 0x1562fffa  bne         $t3, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30FA5Cu;
    {
        const bool branch_taken_0x30fa5c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x30FA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA5Cu;
        // 0x30fa60: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fa5c) {
            ctx->pc = 0x30FA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30fa48;
        }
    }
    ctx->pc = 0x30FA64u;
label_30fa64:
    // 0x30fa64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30fa64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fa68: 0x8fa70168  lw          $a3, 0x168($sp)
    ctx->pc = 0x30fa68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x30fa6c: 0x3231004  sllv        $v0, $v1, $t9
    ctx->pc = 0x30fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 25) & 0x1F));
    // 0x30fa70: 0x10470002  beq         $v0, $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x30FA70u;
    {
        const bool branch_taken_0x30fa70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x30FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FA70u;
        // 0x30fa74: 0x27220001  addiu       $v0, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fa70) {
            ctx->pc = 0x30FA7Cu;
            goto label_30fa7c;
        }
    }
    ctx->pc = 0x30FA78u;
    // 0x30fa78: 0x438804  sllv        $s1, $v1, $v0
    ctx->pc = 0x30fa78u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_30fa7c:
    // 0x30fa7c: 0x8f8bc54c  lw          $t3, -0x3AB4($gp)
    ctx->pc = 0x30fa7cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x30fa80: 0x11f040  sll         $fp, $s1, 1
    ctx->pc = 0x30fa80u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x30fa84: 0x8f82cb9c  lw          $v0, -0x3464($gp)
    ctx->pc = 0x30fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953884)));
    // 0x30fa88: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x30fa88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30fa8c: 0x8f8ac550  lw          $t2, -0x3AB0($gp)
    ctx->pc = 0x30fa8cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x30fa90: 0x29670000  slti        $a3, $t3, 0x0
    ctx->pc = 0x30fa90u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30fa94: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x30fa94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x30fa98: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x30fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x30fa9c: 0x8f83cba4  lw          $v1, -0x345C($gp)
    ctx->pc = 0x30fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953892)));
    // 0x30faa0: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x30faa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30faa4: 0x8fa80164  lw          $t0, 0x164($sp)
    ctx->pc = 0x30faa4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x30faa8: 0x447023  subu        $t6, $v0, $a0
    ctx->pc = 0x30faa8u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30faac: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x30faacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x30fab0: 0x8fa90168  lw          $t1, 0x168($sp)
    ctx->pc = 0x30fab0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x30fab4: 0x647823  subu        $t7, $v1, $a0
    ctx->pc = 0x30fab4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30fab8: 0x25c2ffff  addiu       $v0, $t6, -0x1
    ctx->pc = 0x30fab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x30fabc: 0x25c6001e  addiu       $a2, $t6, 0x1E
    ctx->pc = 0x30fabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), 30));
    // 0x30fac0: 0x25e3ffff  addiu       $v1, $t7, -0x1
    ctx->pc = 0x30fac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x30fac4: 0x86040  sll         $t4, $t0, 1
    ctx->pc = 0x30fac4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x30fac8: 0x2568001f  addiu       $t0, $t3, 0x1F
    ctx->pc = 0x30fac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 11), 31));
    // 0x30facc: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x30faccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30fad0: 0x107280b  movn        $a1, $t0, $a3
    ctx->pc = 0x30fad0u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
    // 0x30fad4: 0xc4100b  movn        $v0, $a2, $a0
    ctx->pc = 0x30fad4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x30fad8: 0x29460000  slti        $a2, $t2, 0x0
    ctx->pc = 0x30fad8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30fadc: 0x2548001f  addiu       $t0, $t2, 0x1F
    ctx->pc = 0x30fadcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 31));
    // 0x30fae0: 0x96840  sll         $t5, $t1, 1
    ctx->pc = 0x30fae0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x30fae4: 0x28670000  slti        $a3, $v1, 0x0
    ctx->pc = 0x30fae4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30fae8: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x30fae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30faec: 0x25e9001e  addiu       $t1, $t7, 0x1E
    ctx->pc = 0x30faecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 30));
    // 0x30faf0: 0x106200b  movn        $a0, $t0, $a2
    ctx->pc = 0x30faf0u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 8));
    // 0x30faf4: 0x127180b  movn        $v1, $t1, $a3
    ctx->pc = 0x30faf4u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
    // 0x30faf8: 0x8fa701a0  lw          $a3, 0x1A0($sp)
    ctx->pc = 0x30faf8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x30fafc: 0x52943  sra         $a1, $a1, 5
    ctx->pc = 0x30fafcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 5));
    // 0x30fb00: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x30fb00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x30fb04: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x30fb04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30fb08: 0x8fa5015c  lw          $a1, 0x15C($sp)
    ctx->pc = 0x30fb08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x30fb0c: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x30fb0cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x30fb10: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x30fb10u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x30fb14: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x30fb14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x30fb18: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x30fb18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30fb1c: 0x1c27023  subu        $t6, $t6, $v0
    ctx->pc = 0x30fb1cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x30fb20: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x30fb20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x30fb24: 0x1e37823  subu        $t7, $t7, $v1
    ctx->pc = 0x30fb24u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x30fb28: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x30fb28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x30fb2c: 0x1cc6021  addu        $t4, $t6, $t4
    ctx->pc = 0x30fb2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 12)));
    // 0x30fb30: 0x1ed6821  addu        $t5, $t7, $t5
    ctx->pc = 0x30fb30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 13)));
    // 0x30fb34: 0x18b6023  subu        $t4, $t4, $t3
    ctx->pc = 0x30fb34u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x30fb38: 0xf5900  sll         $t3, $t7, 4
    ctx->pc = 0x30fb38u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x30fb3c: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x30fb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x30fb40: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x30fb40u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x30fb44: 0x1aa6823  subu        $t5, $t5, $t2
    ctx->pc = 0x30fb44u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x30fb48: 0x185102a  slt         $v0, $t4, $a1
    ctx->pc = 0x30fb48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x30fb4c: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x30fb4cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x30fb50: 0x62600a  movz        $t4, $v1, $v0
    ctx->pc = 0x30fb50u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 3));
    // 0x30fb54: 0x1a6402a  slt         $t0, $t5, $a2
    ctx->pc = 0x30fb54u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x30fb58: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x30fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x30fb5c: 0x48680a  movz        $t5, $v0, $t0
    ctx->pc = 0x30fb5cu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 2));
    // 0x30fb60: 0xdfa80180  ld          $t0, 0x180($sp)
    ctx->pc = 0x30fb60u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x30fb64: 0x1fea021  addu        $s4, $t7, $fp
    ctx->pc = 0x30fb64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 30)));
    // 0x30fb68: 0x7303c  dsll32      $a2, $a3, 0
    ctx->pc = 0x30fb68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 0));
    // 0x30fb6c: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x30fb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x30fb70: 0x12b040  sll         $s6, $s2, 1
    ctx->pc = 0x30fb70u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x30fb74: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x30fb74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fb78: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x30fb78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x30fb7c: 0x81438  dsll        $v0, $t0, 16
    ctx->pc = 0x30fb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << 16);
    // 0x30fb80: 0x1d64021  addu        $t0, $t6, $s6
    ctx->pc = 0x30fb80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 22)));
    // 0x30fb84: 0xe4900  sll         $t1, $t6, 4
    ctx->pc = 0x30fb84u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x30fb88: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x30fb88u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fb8c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x30fb8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x30fb90: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x30fb90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x30fb94: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x30fb94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x30fb98: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x30fb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x30fb9c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x30fb9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x30fba0: 0x1273825  or          $a3, $t1, $a3
    ctx->pc = 0x30fba0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) | GPR_U64(ctx, 7));
    // 0x30fba4: 0xd4c3c  dsll32      $t1, $t5, 16
    ctx->pc = 0x30fba4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 13) << (32 + 16));
    // 0x30fba8: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x30fba8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30fbac: 0x15aa3c  dsll32      $s5, $s5, 8
    ctx->pc = 0x30fbacu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 8));
    // 0x30fbb0: 0x15aa3a  dsrl        $s5, $s5, 8
    ctx->pc = 0x30fbb0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> 8);
    // 0x30fbb4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x30fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x30fbb8: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x30fbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x30fbbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30fbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30fbc0: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x30fbc0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x30fbc4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30fbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30fbc8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x30fbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x30fbcc: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x30fbccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x30fbd0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x30fbd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x30fbd4: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x30fbd4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30fbd8: 0x26780aa0  addiu       $t8, $s3, 0xAA0
    ctx->pc = 0x30fbd8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 2720));
    // 0x30fbdc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x30fbdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x30fbe0: 0x174840  sll         $t1, $s7, 1
    ctx->pc = 0x30fbe0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x30fbe4: 0x1042025  or          $a0, $t0, $a0
    ctx->pc = 0x30fbe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x30fbe8: 0xf53825  or          $a3, $a3, $s5
    ctx->pc = 0x30fbe8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 21));
    // 0x30fbec: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x30fbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x30fbf0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x30fbf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x30fbf4: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x30fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    // 0x30fbf8: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x30fbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
    // 0x30fbfc: 0xafa90188  sw          $t1, 0x188($sp)
    ctx->pc = 0x30fbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 9));
    // 0x30fc00: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x30fc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x30fc04: 0xfe6a0a60  sd          $t2, 0xA60($s3)
    ctx->pc = 0x30fc04u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 2656), GPR_U64(ctx, 10));
    // 0x30fc08: 0x952025  or          $a0, $a0, $s5
    ctx->pc = 0x30fc08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 21));
    // 0x30fc0c: 0xfe660a70  sd          $a2, 0xA70($s3)
    ctx->pc = 0x30fc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 2672), GPR_U64(ctx, 6));
    // 0x30fc10: 0xae690a90  sw          $t1, 0xA90($s3)
    ctx->pc = 0x30fc10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2704), GPR_U32(ctx, 9));
    // 0x30fc14: 0xff070008  sd          $a3, 0x8($t8)
    ctx->pc = 0x30fc14u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 7));
    // 0x30fc18: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x30fc18u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x30fc1c: 0x26780ab0  addiu       $t8, $s3, 0xAB0
    ctx->pc = 0x30fc1cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 2736));
    // 0x30fc20: 0xff040008  sd          $a0, 0x8($t8)
    ctx->pc = 0x30fc20u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 4));
    // 0x30fc24: 0xff030000  sd          $v1, 0x0($t8)
    ctx->pc = 0x30fc24u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 3));
    // 0x30fc28: 0x8faa017c  lw          $t2, 0x17C($sp)
    ctx->pc = 0x30fc28u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x30fc2c: 0x15400024  bnez        $t2, . + 4 + (0x24 << 2)
    ctx->pc = 0x30FC2Cu;
    {
        const bool branch_taken_0x30fc2c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x30FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FC2Cu;
        // 0x30fc30: 0x26780ac0  addiu       $t8, $s3, 0xAC0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 2752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fc2c) {
            ctx->pc = 0x30FCC0u;
            goto label_30fcc0;
        }
    }
    ctx->pc = 0x30FC34u;
    // 0x30fc34: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x30fc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x30fc38: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x30fc38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x30fc3c: 0xf5900  sll         $t3, $t7, 4
    ctx->pc = 0x30fc3cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x30fc40: 0x1fea021  addu        $s4, $t7, $fp
    ctx->pc = 0x30fc40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 30)));
    // 0x30fc44: 0x24500002  addiu       $s0, $v0, 0x2
    ctx->pc = 0x30fc44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x30fc48: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x30fc48u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x30fc4c: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x30fc4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x30fc50: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x30fc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fc54: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x30fc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x30fc58: 0x141900  sll         $v1, $s4, 4
    ctx->pc = 0x30fc58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x30fc5c: 0xe1100  sll         $v0, $t6, 4
    ctx->pc = 0x30fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x30fc60: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x30fc60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x30fc64: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x30fc64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x30fc68: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x30fc68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x30fc6c: 0x1d64021  addu        $t0, $t6, $s6
    ctx->pc = 0x30fc6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 22)));
    // 0x30fc70: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x30fc70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30fc74: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x30fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x30fc78: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x30fc78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x30fc7c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x30fc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x30fc80: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x30fc80u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x30fc84: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30fc84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30fc88: 0x123900  sll         $a3, $s2, 4
    ctx->pc = 0x30fc88u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x30fc8c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x30fc8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x30fc90: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x30fc90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x30fc94: 0x952025  or          $a0, $a0, $s5
    ctx->pc = 0x30fc94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 21));
    // 0x30fc98: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x30fc98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x30fc9c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x30fc9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x30fca0: 0xff040008  sd          $a0, 0x8($t8)
    ctx->pc = 0x30fca0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 4));
    // 0x30fca4: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x30fca4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x30fca8: 0xff060000  sd          $a2, 0x0($t8)
    ctx->pc = 0x30fca8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 6));
    // 0x30fcac: 0x26780ad0  addiu       $t8, $s3, 0xAD0
    ctx->pc = 0x30fcacu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 2768));
    // 0x30fcb0: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x30fcb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x30fcb4: 0xff070000  sd          $a3, 0x0($t8)
    ctx->pc = 0x30fcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 7));
    // 0x30fcb8: 0xff030008  sd          $v1, 0x8($t8)
    ctx->pc = 0x30fcb8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 3));
    // 0x30fcbc: 0x26780ae0  addiu       $t8, $s3, 0xAE0
    ctx->pc = 0x30fcbcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 2784));
label_30fcc0:
    // 0x30fcc0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30fcc4: 0x16e20046  bne         $s7, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x30FCC4u;
    {
        const bool branch_taken_0x30fcc4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x30FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FCC4u;
        // 0x30fcc8: 0x2ae50004  slti        $a1, $s7, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fcc4) {
            ctx->pc = 0x30FDE0u;
            goto label_30fde0;
        }
    }
    ctx->pc = 0x30FCCCu;
    // 0x30fccc: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x30fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x30fcd0: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x30fcd0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x30fcd4: 0x8fa40164  lw          $a0, 0x164($sp)
    ctx->pc = 0x30fcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x30fcd8: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x30fcd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fcdc: 0x2031023  subu        $v0, $s0, $v1
    ctx->pc = 0x30fcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x30fce0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x30fce0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x30fce4: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x30fce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30fce8: 0x24990002  addiu       $t9, $a0, 0x2
    ctx->pc = 0x30fce8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x30fcec: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x30fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x30fcf0: 0xf1900  sll         $v1, $t7, 4
    ctx->pc = 0x30fcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x30fcf4: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x30fcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x30fcf8: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x30fcf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x30fcfc: 0x143900  sll         $a3, $s4, 4
    ctx->pc = 0x30fcfcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x30fd00: 0xe5100  sll         $t2, $t6, 4
    ctx->pc = 0x30fd00u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x30fd04: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x30fd04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x30fd08: 0x1d61021  addu        $v0, $t6, $s6
    ctx->pc = 0x30fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 22)));
    // 0x30fd0c: 0x3325821  addu        $t3, $t9, $s2
    ctx->pc = 0x30fd0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 18)));
    // 0x30fd10: 0x1fe2021  addu        $a0, $t7, $fp
    ctx->pc = 0x30fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 30)));
    // 0x30fd14: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x30fd14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x30fd18: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x30fd18u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x30fd1c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x30fd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x30fd20: 0x196100  sll         $t4, $t9, 4
    ctx->pc = 0x30fd20u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x30fd24: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x30fd24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x30fd28: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x30fd28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x30fd2c: 0x105100  sll         $t2, $s0, 4
    ctx->pc = 0x30fd2cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x30fd30: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x30fd30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x30fd34: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30fd38: 0x2114021  addu        $t0, $s0, $s1
    ctx->pc = 0x30fd38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x30fd3c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x30fd3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x30fd40: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x30fd40u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x30fd44: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x30fd44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x30fd48: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x30fd48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x30fd4c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x30fd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30fd50: 0x473825  or          $a3, $v0, $a3
    ctx->pc = 0x30fd50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x30fd54: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x30fd54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x30fd58: 0x1863025  or          $a2, $t4, $a2
    ctx->pc = 0x30fd58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) | GPR_U64(ctx, 6));
    // 0x30fd5c: 0x1d66821  addu        $t5, $t6, $s6
    ctx->pc = 0x30fd5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 22)));
    // 0x30fd60: 0x1354825  or          $t1, $t1, $s5
    ctx->pc = 0x30fd60u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 21));
    // 0x30fd64: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x30fd64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x30fd68: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x30fd68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x30fd6c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30fd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30fd70: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x30fd70u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x30fd74: 0xe1100  sll         $v0, $t6, 4
    ctx->pc = 0x30fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x30fd78: 0xff060000  sd          $a2, 0x0($t8)
    ctx->pc = 0x30fd78u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 6));
    // 0x30fd7c: 0x1652825  or          $a1, $t3, $a1
    ctx->pc = 0x30fd7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) | GPR_U64(ctx, 5));
    // 0x30fd80: 0xff090008  sd          $t1, 0x8($t8)
    ctx->pc = 0x30fd80u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 9));
    // 0x30fd84: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x30fd84u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x30fd88: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x30fd88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30fd8c: 0xf53825  or          $a3, $a3, $s5
    ctx->pc = 0x30fd8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 21));
    // 0x30fd90: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x30fd90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x30fd94: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x30fd94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x30fd98: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x30fd98u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x30fd9c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x30fd9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x30fda0: 0xff050000  sd          $a1, 0x0($t8)
    ctx->pc = 0x30fda0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 5));
    // 0x30fda4: 0x18a6025  or          $t4, $t4, $t2
    ctx->pc = 0x30fda4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 10));
    // 0x30fda8: 0xff070008  sd          $a3, 0x8($t8)
    ctx->pc = 0x30fda8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 7));
    // 0x30fdac: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x30fdacu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x30fdb0: 0x1a42025  or          $a0, $t5, $a0
    ctx->pc = 0x30fdb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) | GPR_U64(ctx, 4));
    // 0x30fdb4: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x30fdb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x30fdb8: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x30fdb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x30fdbc: 0xff0c0000  sd          $t4, 0x0($t8)
    ctx->pc = 0x30fdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 12));
    // 0x30fdc0: 0xff030008  sd          $v1, 0x8($t8)
    ctx->pc = 0x30fdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 3));
    // 0x30fdc4: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x30fdc4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x30fdc8: 0x1685825  or          $t3, $t3, $t0
    ctx->pc = 0x30fdc8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 8));
    // 0x30fdcc: 0x952025  or          $a0, $a0, $s5
    ctx->pc = 0x30fdccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 21));
    // 0x30fdd0: 0xff0b0000  sd          $t3, 0x0($t8)
    ctx->pc = 0x30fdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 11));
    // 0x30fdd4: 0xff040008  sd          $a0, 0x8($t8)
    ctx->pc = 0x30fdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 4));
    // 0x30fdd8: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x30fdd8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x30fddc: 0x2ae50004  slti        $a1, $s7, 0x4
    ctx->pc = 0x30fddcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
label_30fde0:
    // 0x30fde0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x30FDE0u;
    {
        const bool branch_taken_0x30fde0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FDE0u;
        // 0x30fde4: 0xafa501b0  sw          $a1, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fde0) {
            ctx->pc = 0x30FE04u;
            goto label_30fe04;
        }
    }
    ctx->pc = 0x30FDE8u;
    // 0x30fde8: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x30fde8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x30fdec: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x30fdecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x30fdf0: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x30fdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    // 0x30fdf4: 0x24c30b20  addiu       $v1, $a2, 0xB20
    ctx->pc = 0x30fdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2848));
    // 0x30fdf8: 0xaf00000c  sw          $zero, 0xC($t8)
    ctx->pc = 0x30fdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 0));
    // 0x30fdfc: 0xaf030004  sw          $v1, 0x4($t8)
    ctx->pc = 0x30fdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 3));
    // 0x30fe00: 0xaf000008  sw          $zero, 0x8($t8)
    ctx->pc = 0x30fe00u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 0));
label_30fe04:
    // 0x30fe04: 0x8fa70130  lw          $a3, 0x130($sp)
    ctx->pc = 0x30fe04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x30fe08: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x30fe08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x30fe0c: 0x30c20040  andi        $v0, $a2, 0x40
    ctx->pc = 0x30fe0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
    // 0x30fe10: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x30FE10u;
    {
        const bool branch_taken_0x30fe10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FE10u;
        // 0x30fe14: 0x8f83cba4  lw          $v1, -0x345C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fe10) {
            ctx->pc = 0x30FECCu;
            goto label_30fecc;
        }
    }
    ctx->pc = 0x30FE18u;
    // 0x30fe18: 0x8f84cba8  lw          $a0, -0x3458($gp)
    ctx->pc = 0x30fe18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953896)));
    // 0x30fe1c: 0x8f88cb9c  lw          $t0, -0x3464($gp)
    ctx->pc = 0x30fe1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953884)));
    // 0x30fe20: 0x8f86cba0  lw          $a2, -0x3460($gp)
    ctx->pc = 0x30fe20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953888)));
    // 0x30fe24: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x30fe24u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x30fe28: 0x8f85c550  lw          $a1, -0x3AB0($gp)
    ctx->pc = 0x30fe28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x30fe2c: 0x24910001  addiu       $s1, $a0, 0x1
    ctx->pc = 0x30fe2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30fe30: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x30fe30u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x30fe34: 0x8f87c54c  lw          $a3, -0x3AB4($gp)
    ctx->pc = 0x30fe34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x30fe38: 0x24d20001  addiu       $s2, $a2, 0x1
    ctx->pc = 0x30fe38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x30fe3c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x30fe3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x30fe40: 0x3a220001  xori        $v0, $s1, 0x1
    ctx->pc = 0x30fe40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)1);
    // 0x30fe44: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x30fe44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x30fe48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x30fe48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30fe4c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x30fe4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x30fe50: 0x3a430001  xori        $v1, $s2, 0x1
    ctx->pc = 0x30fe50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
    // 0x30fe54: 0x82880b  movn        $s1, $a0, $v0
    ctx->pc = 0x30fe54u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x30fe58: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x30fe58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x30fe5c: 0x24afffff  addiu       $t7, $a1, -0x1
    ctx->pc = 0x30fe5cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x30fe60: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x30fe60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x30fe64: 0x24eeffff  addiu       $t6, $a3, -0x1
    ctx->pc = 0x30fe64u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x30fe68: 0xc3900b  movn        $s2, $a2, $v1
    ctx->pc = 0x30fe68u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 6));
    // 0x30fe6c: 0x1f12821  addu        $a1, $t7, $s1
    ctx->pc = 0x30fe6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x30fe70: 0x1d21821  addu        $v1, $t6, $s2
    ctx->pc = 0x30fe70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 18)));
    // 0x30fe74: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x30fe74u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x30fe78: 0xf1100  sll         $v0, $t7, 4
    ctx->pc = 0x30fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x30fe7c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x30fe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30fe80: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x30fe80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x30fe84: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30fe84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30fe88: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x30fe88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x30fe8c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x30fe8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x30fe90: 0xe2100  sll         $a0, $t6, 4
    ctx->pc = 0x30fe90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x30fe94: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x30fe94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x30fe98: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x30fe98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x30fe9c: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x30fe9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x30fea0: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x30fea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x30fea4: 0xfe620b70  sd          $v0, 0xB70($s3)
    ctx->pc = 0x30fea4u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 2928), GPR_U64(ctx, 2));
    // 0x30fea8: 0xfe630b80  sd          $v1, 0xB80($s3)
    ctx->pc = 0x30fea8u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 2944), GPR_U64(ctx, 3));
    // 0x30feac: 0x8fa80130  lw          $t0, 0x130($sp)
    ctx->pc = 0x30feacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x30feb0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30FEB0u;
    {
        const bool branch_taken_0x30feb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FEB0u;
        // 0x30feb4: 0x8d060004  lw          $a2, 0x4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30feb0) {
            ctx->pc = 0x30FEC8u;
            goto label_30fec8;
        }
    }
    ctx->pc = 0x30FEB8u;
label_30feb8:
    // 0x30feb8: 0x174840  sll         $t1, $s7, 1
    ctx->pc = 0x30feb8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x30febc: 0x2aea0004  slti        $t2, $s7, 0x4
    ctx->pc = 0x30febcu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x30fec0: 0xafa90188  sw          $t1, 0x188($sp)
    ctx->pc = 0x30fec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 9));
    // 0x30fec4: 0xafaa01b0  sw          $t2, 0x1B0($sp)
    ctx->pc = 0x30fec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 10));
label_30fec8:
    // 0x30fec8: 0x30c20040  andi        $v0, $a2, 0x40
    ctx->pc = 0x30fec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
label_30fecc:
    // 0x30fecc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30FECCu;
    {
        const bool branch_taken_0x30fecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FECCu;
        // 0x30fed0: 0x26780e50  addiu       $t8, $s3, 0xE50 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 3664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fecc) {
            ctx->pc = 0x30FEF8u;
            goto label_30fef8;
        }
    }
    ctx->pc = 0x30FED4u;
    // 0x30fed4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x30fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x30fed8: 0x3c025100  lui         $v0, 0x5100
    ctx->pc = 0x30fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20736 << 16));
    // 0x30fedc: 0x3463000d  ori         $v1, $v1, 0xD
    ctx->pc = 0x30fedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13);
    // 0x30fee0: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x30fee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x30fee4: 0xaf02000c  sw          $v0, 0xC($t8)
    ctx->pc = 0x30fee4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 2));
    // 0x30fee8: 0xaf030000  sw          $v1, 0x0($t8)
    ctx->pc = 0x30fee8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 3));
    // 0x30feec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30FEECu;
    {
        const bool branch_taken_0x30feec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FEECu;
        // 0x30fef0: 0xaf000004  sw          $zero, 0x4($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30feec) {
            ctx->pc = 0x30FF10u;
            goto label_30ff10;
        }
    }
    ctx->pc = 0x30FEF4u;
    // 0x30fef4: 0x0  nop
    ctx->pc = 0x30fef4u;
    // NOP
label_30fef8:
    // 0x30fef8: 0x8fa40134  lw          $a0, 0x134($sp)
    ctx->pc = 0x30fef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x30fefc: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x30fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x30ff00: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x30ff00u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    // 0x30ff04: 0x24830f30  addiu       $v1, $a0, 0xF30
    ctx->pc = 0x30ff04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3888));
    // 0x30ff08: 0xaf00000c  sw          $zero, 0xC($t8)
    ctx->pc = 0x30ff08u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 0));
    // 0x30ff0c: 0xaf030004  sw          $v1, 0x4($t8)
    ctx->pc = 0x30ff0cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 3));
label_30ff10:
    // 0x30ff10: 0xaf000008  sw          $zero, 0x8($t8)
    ctx->pc = 0x30ff10u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 0));
    // 0x30ff14: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x30ff14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x30ff18: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x30ff18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x30ff1c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x30ff1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x30ff20: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x30FF20u;
    {
        const bool branch_taken_0x30ff20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FF20u;
        // 0x30ff24: 0x8f90cba4  lw          $s0, -0x345C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953892)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ff20) {
            ctx->pc = 0x310070u;
            goto label_310070;
        }
    }
    ctx->pc = 0x30FF28u;
    // 0x30ff28: 0x8f84c550  lw          $a0, -0x3AB0($gp)
    ctx->pc = 0x30ff28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x30ff2c: 0x8fa8018c  lw          $t0, 0x18C($sp)
    ctx->pc = 0x30ff2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x30ff30: 0x106100  sll         $t4, $s0, 4
    ctx->pc = 0x30ff30u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x30ff34: 0x8f99cb9c  lw          $t9, -0x3464($gp)
    ctx->pc = 0x30ff34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953884)));
    // 0x30ff38: 0x906821  addu        $t5, $a0, $s0
    ctx->pc = 0x30ff38u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x30ff3c: 0x8f87c54c  lw          $a3, -0x3AB4($gp)
    ctx->pc = 0x30ff3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x30ff40: 0x1a81023  subu        $v0, $t5, $t0
    ctx->pc = 0x30ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x30ff44: 0x8fa601a0  lw          $a2, 0x1A0($sp)
    ctx->pc = 0x30ff44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x30ff48: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x30ff48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30ff4c: 0xf97021  addu        $t6, $a3, $t9
    ctx->pc = 0x30ff4cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 25)));
    // 0x30ff50: 0x2489001f  addiu       $t1, $a0, 0x1F
    ctx->pc = 0x30ff50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x30ff54: 0x1c84023  subu        $t0, $t6, $t0
    ctx->pc = 0x30ff54u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x30ff58: 0x6583c  dsll32      $t3, $a2, 0
    ctx->pc = 0x30ff58u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
    // 0x30ff5c: 0x2442001e  addiu       $v0, $v0, 0x1E
    ctx->pc = 0x30ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30));
    // 0x30ff60: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x30ff60u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30ff64: 0x28860000  slti        $a2, $a0, 0x0
    ctx->pc = 0x30ff64u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30ff68: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x30ff68u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x30ff6c: 0x126200b  movn        $a0, $t1, $a2
    ctx->pc = 0x30ff6cu;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 9));
    // 0x30ff70: 0x24e9001f  addiu       $t1, $a3, 0x1F
    ctx->pc = 0x30ff70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 31));
    // 0x30ff74: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x30ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x30ff78: 0x2508001e  addiu       $t0, $t0, 0x1E
    ctx->pc = 0x30ff78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 30));
    // 0x30ff7c: 0x8f8acba8  lw          $t2, -0x3458($gp)
    ctx->pc = 0x30ff7cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953896)));
    // 0x30ff80: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x30ff80u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x30ff84: 0x28460000  slti        $a2, $v0, 0x0
    ctx->pc = 0x30ff84u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30ff88: 0x28e50000  slti        $a1, $a3, 0x0
    ctx->pc = 0x30ff88u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x30ff8c: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x30ff8cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x30ff90: 0x106100b  movn        $v0, $t0, $a2
    ctx->pc = 0x30ff90u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
    // 0x30ff94: 0x125380b  movn        $a3, $t1, $a1
    ctx->pc = 0x30ff94u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 9));
    // 0x30ff98: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x30ff98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x30ff9c: 0x73943  sra         $a3, $a3, 5
    ctx->pc = 0x30ff9cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 5));
    // 0x30ffa0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x30ffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x30ffa4: 0x8f84cba0  lw          $a0, -0x3460($gp)
    ctx->pc = 0x30ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953888)));
    // 0x30ffa8: 0x1505023  subu        $t2, $t2, $s0
    ctx->pc = 0x30ffa8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 16)));
    // 0x30ffac: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x30ffacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x30ffb0: 0x25510001  addiu       $s1, $t2, 0x1
    ctx->pc = 0x30ffb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x30ffb4: 0x1a37823  subu        $t7, $t5, $v1
    ctx->pc = 0x30ffb4u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x30ffb8: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x30ffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x30ffbc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x30ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x30ffc0: 0x992023  subu        $a0, $a0, $t9
    ctx->pc = 0x30ffc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
    // 0x30ffc4: 0x1f12821  addu        $a1, $t7, $s1
    ctx->pc = 0x30ffc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x30ffc8: 0xdfaa0180  ld          $t2, 0x180($sp)
    ctx->pc = 0x30ffc8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x30ffcc: 0x1c27023  subu        $t6, $t6, $v0
    ctx->pc = 0x30ffccu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x30ffd0: 0x24920001  addiu       $s2, $a0, 0x1
    ctx->pc = 0x30ffd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x30ffd4: 0x2113021  addu        $a2, $s0, $s1
    ctx->pc = 0x30ffd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x30ffd8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x30ffd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x30ffdc: 0xf1900  sll         $v1, $t7, 4
    ctx->pc = 0x30ffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x30ffe0: 0x1d24821  addu        $t1, $t6, $s2
    ctx->pc = 0x30ffe0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 18)));
    // 0x30ffe4: 0x3322021  addu        $a0, $t9, $s2
    ctx->pc = 0x30ffe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 18)));
    // 0x30ffe8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x30ffe8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x30ffec: 0xa4438  dsll        $t0, $t2, 16
    ctx->pc = 0x30ffecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) << 16);
    // 0x30fff0: 0xe1100  sll         $v0, $t6, 4
    ctx->pc = 0x30fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x30fff4: 0xb583e  dsrl32      $t3, $t3, 0
    ctx->pc = 0x30fff4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) >> (32 + 0));
    // 0x30fff8: 0x258c0008  addiu       $t4, $t4, 0x8
    ctx->pc = 0x30fff8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
    // 0x30fffc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x30fffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x310000: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x310000u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x310004: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x310004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x310008: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x310008u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x31000c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31000cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x310010: 0x193900  sll         $a3, $t9, 4
    ctx->pc = 0x310010u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x310014: 0x1685825  or          $t3, $t3, $t0
    ctx->pc = 0x310014u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 8));
    // 0x310018: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x310018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31001c: 0x8423c  dsll32      $t0, $t0, 8
    ctx->pc = 0x31001cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 8));
    // 0x310020: 0x8423a  dsrl        $t0, $t0, 8
    ctx->pc = 0x310020u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 8);
    // 0x310024: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x310024u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x310028: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x310028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x31002c: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x31002cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x310030: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x310030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x310034: 0x1252825  or          $a1, $t1, $a1
    ctx->pc = 0x310034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x310038: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x310038u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x31003c: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x31003cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x310040: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x310040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x310044: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x310044u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x310048: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x310048u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x31004c: 0xec3825  or          $a3, $a3, $t4
    ctx->pc = 0x31004cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 12));
    // 0x310050: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x310050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x310054: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x310054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x310058: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x310058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x31005c: 0xfe6b0e70  sd          $t3, 0xE70($s3)
    ctx->pc = 0x31005cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 3696), GPR_U64(ctx, 11));
    // 0x310060: 0xfe670ee0  sd          $a3, 0xEE0($s3)
    ctx->pc = 0x310060u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 3808), GPR_U64(ctx, 7));
    // 0x310064: 0xfe630ef0  sd          $v1, 0xEF0($s3)
    ctx->pc = 0x310064u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 3824), GPR_U64(ctx, 3));
    // 0x310068: 0xfe640f00  sd          $a0, 0xF00($s3)
    ctx->pc = 0x310068u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 3840), GPR_U64(ctx, 4));
    // 0x31006c: 0xfe650f10  sd          $a1, 0xF10($s3)
    ctx->pc = 0x31006cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 3856), GPR_U64(ctx, 5));
label_310070:
    // 0x310070: 0x8f84cb9c  lw          $a0, -0x3464($gp)
    ctx->pc = 0x310070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953884)));
    // 0x310074: 0x8f82cba0  lw          $v0, -0x3460($gp)
    ctx->pc = 0x310074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953888)));
    // 0x310078: 0x8f85cba4  lw          $a1, -0x345C($gp)
    ctx->pc = 0x310078u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953892)));
    // 0x31007c: 0x8f83cba8  lw          $v1, -0x3458($gp)
    ctx->pc = 0x31007cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953896)));
    // 0x310080: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x310080u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x310084: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x310084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x310088: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x310088u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x31008c: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x31008cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x310090: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x310090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x310094: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x310094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x310098: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x310098u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x31009c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x31009cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3100a0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3100a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3100a4: 0x244a0001  addiu       $t2, $v0, 0x1
    ctx->pc = 0x3100a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3100a8: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3100a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x3100ac: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x3100acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x3100b0: 0x246c0001  addiu       $t4, $v1, 0x1
    ctx->pc = 0x3100b0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3100b4: 0x8fa3017c  lw          $v1, 0x17C($sp)
    ctx->pc = 0x3100b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x3100b8: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x3100b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3100bc: 0x1826021  addu        $t4, $t4, $v0
    ctx->pc = 0x3100bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x3100c0: 0x25520002  addiu       $s2, $t2, 0x2
    ctx->pc = 0x3100c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x3100c4: 0x25910002  addiu       $s1, $t4, 0x2
    ctx->pc = 0x3100c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
    // 0x3100c8: 0xafaa0164  sw          $t2, 0x164($sp)
    ctx->pc = 0x3100c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 10));
    // 0x3100cc: 0xafac0168  sw          $t4, 0x168($sp)
    ctx->pc = 0x3100ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 12));
    // 0x3100d0: 0xafb20190  sw          $s2, 0x190($sp)
    ctx->pc = 0x3100d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 18));
    // 0x3100d4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3100D4u;
    {
        const bool branch_taken_0x3100d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3100D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3100D4u;
        // 0x3100d8: 0xafb10194  sw          $s1, 0x194($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3100d4) {
            ctx->pc = 0x3100F0u;
            goto label_3100f0;
        }
    }
    ctx->pc = 0x3100DCu;
    // 0x3100dc: 0xc2040  sll         $a0, $t4, 1
    ctx->pc = 0x3100dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x3100e0: 0xafa401b4  sw          $a0, 0x1B4($sp)
    ctx->pc = 0x3100e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 4));
    // 0x3100e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3100E4u;
    {
        const bool branch_taken_0x3100e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3100E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3100E4u;
        // 0x3100e8: 0x24910003  addiu       $s1, $a0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3100e4) {
            ctx->pc = 0x3100FCu;
            goto label_3100fc;
        }
    }
    ctx->pc = 0x3100ECu;
    // 0x3100ec: 0x0  nop
    ctx->pc = 0x3100ecu;
    // NOP
label_3100f0:
    // 0x3100f0: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x3100f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x3100f4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x3100f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x3100f8: 0xafa501b4  sw          $a1, 0x1B4($sp)
    ctx->pc = 0x3100f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 5));
label_3100fc:
    // 0x3100fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3100fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x310100: 0x16e20005  bne         $s7, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x310100u;
    {
        const bool branch_taken_0x310100 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x310104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310100u;
        // 0x310104: 0x8fa70164  lw          $a3, 0x164($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310100) {
            ctx->pc = 0x310118u;
            goto label_310118;
        }
    }
    ctx->pc = 0x310108u;
    // 0x310108: 0x8fa60164  lw          $a2, 0x164($sp)
    ctx->pc = 0x310108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x31010c: 0x6f040  sll         $fp, $a2, 1
    ctx->pc = 0x31010cu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x310110: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x310110u;
    {
        const bool branch_taken_0x310110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310110u;
        // 0x310114: 0x27d20003  addiu       $s2, $fp, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310110) {
            ctx->pc = 0x31011Cu;
            goto label_31011c;
        }
    }
    ctx->pc = 0x310118u;
label_310118:
    // 0x310118: 0x7f040  sll         $fp, $a3, 1
    ctx->pc = 0x310118u;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_31011c:
    // 0x31011c: 0x8fa801a0  lw          $t0, 0x1A0($sp)
    ctx->pc = 0x31011cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x310120: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x310120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x310124: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x310124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x310128: 0x4223a  dsrl        $a0, $a0, 8
    ctx->pc = 0x310128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 8);
    // 0x31012c: 0xdfa90180  ld          $t1, 0x180($sp)
    ctx->pc = 0x31012cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x310130: 0x26781000  addiu       $t8, $s3, 0x1000
    ctx->pc = 0x310130u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 4096));
    // 0x310134: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x310134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
    // 0x310138: 0x8faa0130  lw          $t2, 0x130($sp)
    ctx->pc = 0x310138u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x31013c: 0x91c38  dsll        $v1, $t1, 16
    ctx->pc = 0x31013cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << 16);
    // 0x310140: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x310140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x310144: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x310144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x310148: 0x254f0120  addiu       $t7, $t2, 0x120
    ctx->pc = 0x310148u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 10), 288));
    // 0x31014c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x31014cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x310150: 0x24190007  addiu       $t9, $zero, 0x7
    ctx->pc = 0x310150u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x310154: 0xfe620f50  sd          $v0, 0xF50($s3)
    ctx->pc = 0x310154u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 3920), GPR_U64(ctx, 2));
    // 0x310158: 0x8f82c550  lw          $v0, -0x3AB0($gp)
    ctx->pc = 0x310158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x31015c: 0x8f83c54c  lw          $v1, -0x3AB4($gp)
    ctx->pc = 0x31015cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x310160: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x310160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x310164: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x310164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x310168: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x310168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31016c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x31016cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x310170: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x310170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x310174: 0xfe620f80  sd          $v0, 0xF80($s3)
    ctx->pc = 0x310174u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 3968), GPR_U64(ctx, 2));
    // 0x310178: 0x8f83c550  lw          $v1, -0x3AB0($gp)
    ctx->pc = 0x310178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x31017c: 0x8f82c54c  lw          $v0, -0x3AB4($gp)
    ctx->pc = 0x31017cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x310180: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x310180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x310184: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x310184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x310188: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x310188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x31018c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31018cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x310190: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x310190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x310194: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x310194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x310198: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x310198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x31019c: 0xfe630f90  sd          $v1, 0xF90($s3)
    ctx->pc = 0x31019cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 3984), GPR_U64(ctx, 3));
label_3101a0:
    // 0x3101a0: 0xdde30000  ld          $v1, 0x0($t7)
    ctx->pc = 0x3101a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x3101a4: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x3101a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x3101a8: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x3101a8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x3101ac: 0xff030000  sd          $v1, 0x0($t8)
    ctx->pc = 0x3101acu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 3));
    // 0x3101b0: 0xdde20000  ld          $v0, 0x0($t7)
    ctx->pc = 0x3101b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x3101b4: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x3101b4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x3101b8: 0xff020010  sd          $v0, 0x10($t8)
    ctx->pc = 0x3101b8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 16), GPR_U64(ctx, 2));
    // 0x3101bc: 0xdde30000  ld          $v1, 0x0($t7)
    ctx->pc = 0x3101bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x3101c0: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x3101c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x3101c4: 0xff030008  sd          $v1, 0x8($t8)
    ctx->pc = 0x3101c4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 3));
    // 0x3101c8: 0xdde20000  ld          $v0, 0x0($t7)
    ctx->pc = 0x3101c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x3101cc: 0x25ef0008  addiu       $t7, $t7, 0x8
    ctx->pc = 0x3101ccu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x3101d0: 0xff020018  sd          $v0, 0x18($t8)
    ctx->pc = 0x3101d0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 24), GPR_U64(ctx, 2));
    // 0x3101d4: 0x721fff2  bgez        $t9, . + 4 + (-0xE << 2)
    ctx->pc = 0x3101D4u;
    {
        const bool branch_taken_0x3101d4 = (GPR_S32(ctx, 25) >= 0);
        ctx->pc = 0x3101D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3101D4u;
        // 0x3101d8: 0x27180020  addiu       $t8, $t8, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3101d4) {
            ctx->pc = 0x3101A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3101a0;
        }
    }
    ctx->pc = 0x3101DCu;
    // 0x3101dc: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x3101dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x3101e0: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3101E0u;
    {
        const bool branch_taken_0x3101e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3101E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3101E0u;
        // 0x3101e4: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3101e0) {
            ctx->pc = 0x31022Cu;
            goto label_31022c;
        }
    }
    ctx->pc = 0x3101E8u;
    // 0x3101e8: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x3101e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x3101ec: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x3101ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x3101f0: 0x3c035100  lui         $v1, 0x5100
    ctx->pc = 0x3101f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20736 << 16));
    // 0x3101f4: 0x8fb90150  lw          $t9, 0x150($sp)
    ctx->pc = 0x3101f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x3101f8: 0x34840010  ori         $a0, $a0, 0x10
    ctx->pc = 0x3101f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    // 0x3101fc: 0x24c52110  addiu       $a1, $a2, 0x2110
    ctx->pc = 0x3101fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8464));
    // 0x310200: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x310200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x310204: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x310204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_310208:
    // 0x310208: 0x24581110  addiu       $t8, $v0, 0x1110
    ctx->pc = 0x310208u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 4368));
    // 0x31020c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x31020cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x310210: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x310210u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x310214: 0xaf03000c  sw          $v1, 0xC($t8)
    ctx->pc = 0x310214u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 3));
    // 0x310218: 0xaf040000  sw          $a0, 0x0($t8)
    ctx->pc = 0x310218u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 4));
    // 0x31021c: 0xaf050004  sw          $a1, 0x4($t8)
    ctx->pc = 0x31021cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 5));
    // 0x310220: 0x1720fff9  bnez        $t9, . + 4 + (-0x7 << 2)
    ctx->pc = 0x310220u;
    {
        const bool branch_taken_0x310220 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x310224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310220u;
        // 0x310224: 0xaf000008  sw          $zero, 0x8($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310220) {
            ctx->pc = 0x310208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310208;
        }
    }
    ctx->pc = 0x310228u;
    // 0x310228: 0x8fb90150  lw          $t9, 0x150($sp)
    ctx->pc = 0x310228u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_31022c:
    // 0x31022c: 0x2b22000e  slti        $v0, $t9, 0xE
    ctx->pc = 0x31022cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)14) ? 1 : 0);
    // 0x310230: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x310230u;
    {
        const bool branch_taken_0x310230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310230u;
        // 0x310234: 0x8fa80130  lw          $t0, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310230) {
            ctx->pc = 0x310264u;
            goto label_310264;
        }
    }
    ctx->pc = 0x310238u;
    // 0x310238: 0x8fa70134  lw          $a3, 0x134($sp)
    ctx->pc = 0x310238u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x31023c: 0x191100  sll         $v0, $t9, 4
    ctx->pc = 0x31023cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x310240: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x310240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x310244: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x310244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x310248: 0x24581110  addiu       $t8, $v0, 0x1110
    ctx->pc = 0x310248u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 4368));
    // 0x31024c: 0x24e311f0  addiu       $v1, $a3, 0x11F0
    ctx->pc = 0x31024cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4592));
    // 0x310250: 0xaf040000  sw          $a0, 0x0($t8)
    ctx->pc = 0x310250u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 4));
    // 0x310254: 0xaf030004  sw          $v1, 0x4($t8)
    ctx->pc = 0x310254u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 3));
    // 0x310258: 0xaf00000c  sw          $zero, 0xC($t8)
    ctx->pc = 0x310258u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 0));
    // 0x31025c: 0xaf000008  sw          $zero, 0x8($t8)
    ctx->pc = 0x31025cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 0));
    // 0x310260: 0x8fa80130  lw          $t0, 0x130($sp)
    ctx->pc = 0x310260u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_310264:
    // 0x310264: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x310264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x310268: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x310268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x31026c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x31026Cu;
    {
        const bool branch_taken_0x31026c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31026Cu;
        // 0x310270: 0x267811f0  addiu       $t8, $s3, 0x11F0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 4592));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31026c) {
            ctx->pc = 0x3102A8u;
            goto label_3102a8;
        }
    }
    ctx->pc = 0x310274u;
    // 0x310274: 0x8fa90158  lw          $t1, 0x158($sp)
    ctx->pc = 0x310274u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x310278: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x310278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31027c: 0x3c025100  lui         $v0, 0x5100
    ctx->pc = 0x31027cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20736 << 16));
    // 0x310280: 0xaf000004  sw          $zero, 0x4($t8)
    ctx->pc = 0x310280u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 0));
    // 0x310284: 0x92080  sll         $a0, $t1, 2
    ctx->pc = 0x310284u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x310288: 0xaf000008  sw          $zero, 0x8($t8)
    ctx->pc = 0x310288u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 0));
    // 0x31028c: 0x24880007  addiu       $t0, $a0, 0x7
    ctx->pc = 0x31028cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x310290: 0x1021025  or          $v0, $t0, $v0
    ctx->pc = 0x310290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x310294: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x310294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x310298: 0xaf02000c  sw          $v0, 0xC($t8)
    ctx->pc = 0x310298u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 2));
    // 0x31029c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31029Cu;
    {
        const bool branch_taken_0x31029c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3102A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31029Cu;
        // 0x3102a0: 0xaf030000  sw          $v1, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31029c) {
            ctx->pc = 0x3102C4u;
            goto label_3102c4;
        }
    }
    ctx->pc = 0x3102A4u;
    // 0x3102a4: 0x0  nop
    ctx->pc = 0x3102a4u;
    // NOP
label_3102a8:
    // 0x3102a8: 0x8faa0134  lw          $t2, 0x134($sp)
    ctx->pc = 0x3102a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x3102ac: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3102acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3102b0: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x3102b0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    // 0x3102b4: 0x25431890  addiu       $v1, $t2, 0x1890
    ctx->pc = 0x3102b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 6288));
    // 0x3102b8: 0xaf00000c  sw          $zero, 0xC($t8)
    ctx->pc = 0x3102b8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 0));
    // 0x3102bc: 0xaf030004  sw          $v1, 0x4($t8)
    ctx->pc = 0x3102bcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 3));
    // 0x3102c0: 0xaf000008  sw          $zero, 0x8($t8)
    ctx->pc = 0x3102c0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 0));
label_3102c4:
    // 0x3102c4: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x3102c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3102c8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3102c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3102cc: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3102ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x3102d0: 0x10400174  beqz        $v0, . + 4 + (0x174 << 2)
    ctx->pc = 0x3102D0u;
    {
        const bool branch_taken_0x3102d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3102D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3102D0u;
        // 0x3102d4: 0x8fa40140  lw          $a0, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3102d0) {
            ctx->pc = 0x3108A4u;
            goto label_3108a4;
        }
    }
    ctx->pc = 0x3102D8u;
    // 0x3102d8: 0x26781270  addiu       $t8, $s3, 0x1270
    ctx->pc = 0x3102d8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 4720));
    // 0x3102dc: 0xdfa50180  ld          $a1, 0x180($sp)
    ctx->pc = 0x3102dcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x3102e0: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x3102e0u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3102e4: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x3102e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3102e8: 0x8fa60158  lw          $a2, 0x158($sp)
    ctx->pc = 0x3102e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3102ec: 0x523b8  dsll        $a0, $a1, 14
    ctx->pc = 0x3102ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << 14);
    // 0x3102f0: 0x3405ea8a  ori         $a1, $zero, 0xEA8A
    ctx->pc = 0x3102f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60042);
    // 0x3102f4: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x3102f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x3102f8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3102f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3102fc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x3102fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x310300: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x310300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x310304: 0xae631260  sw          $v1, 0x1260($s3)
    ctx->pc = 0x310304u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4704), GPR_U32(ctx, 3));
    // 0x310308: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x310308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x31030c: 0x68040  sll         $s0, $a2, 1
    ctx->pc = 0x31030cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x310310: 0xfe621240  sd          $v0, 0x1240($s3)
    ctx->pc = 0x310310u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 4672), GPR_U64(ctx, 2));
    // 0x310314: 0x8f8bc54c  lw          $t3, -0x3AB4($gp)
    ctx->pc = 0x310314u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x310318: 0x8f8ac550  lw          $t2, -0x3AB0($gp)
    ctx->pc = 0x310318u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x31031c: 0x8f84cb9c  lw          $a0, -0x3464($gp)
    ctx->pc = 0x31031cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953884)));
    // 0x310320: 0x256f001f  addiu       $t7, $t3, 0x1F
    ctx->pc = 0x310320u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 31));
    // 0x310324: 0x8f85cba4  lw          $a1, -0x345C($gp)
    ctx->pc = 0x310324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953892)));
    // 0x310328: 0x296e0000  slti        $t6, $t3, 0x0
    ctx->pc = 0x310328u;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x31032c: 0x8fa8018c  lw          $t0, 0x18C($sp)
    ctx->pc = 0x31032cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x310330: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x310330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x310334: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x310334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x310338: 0x8fa70160  lw          $a3, 0x160($sp)
    ctx->pc = 0x310338u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x31033c: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x31033cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x310340: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x310340u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x310344: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x310344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x310348: 0x2484001e  addiu       $a0, $a0, 0x1E
    ctx->pc = 0x310348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30));
    // 0x31034c: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x31034cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x310350: 0x24a5001e  addiu       $a1, $a1, 0x1E
    ctx->pc = 0x310350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30));
    // 0x310354: 0x78840  sll         $s1, $a3, 1
    ctx->pc = 0x310354u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x310358: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x310358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31035c: 0x28480000  slti        $t0, $v0, 0x0
    ctx->pc = 0x31035cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x310360: 0x286c0000  slti        $t4, $v1, 0x0
    ctx->pc = 0x310360u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x310364: 0x254d001f  addiu       $t5, $t2, 0x1F
    ctx->pc = 0x310364u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), 31));
    // 0x310368: 0x29490000  slti        $t1, $t2, 0x0
    ctx->pc = 0x310368u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x31036c: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x31036cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310370: 0x1ee380b  movn        $a3, $t7, $t6
    ctx->pc = 0x310370u;
    if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 15));
    // 0x310374: 0x88100b  movn        $v0, $a0, $t0
    ctx->pc = 0x310374u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x310378: 0xac180b  movn        $v1, $a1, $t4
    ctx->pc = 0x310378u;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x31037c: 0x1a9300b  movn        $a2, $t5, $t1
    ctx->pc = 0x31037cu;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x310380: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x310380u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x310384: 0x73943  sra         $a3, $a3, 5
    ctx->pc = 0x310384u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 5));
    // 0x310388: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x310388u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x31038c: 0x63143  sra         $a2, $a2, 5
    ctx->pc = 0x31038cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 5));
    // 0x310390: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x310390u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x310394: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x310394u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x310398: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x310398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x31039c: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x31039cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3103a0: 0x1627021  addu        $t6, $t3, $v0
    ctx->pc = 0x3103a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x3103a4: 0x1a000029  blez        $s0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3103A4u;
    {
        const bool branch_taken_0x3103a4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3103A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3103A4u;
        // 0x3103a8: 0x1437821  addu        $t7, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3103a4) {
            ctx->pc = 0x31044Cu;
            goto label_31044c;
        }
    }
    ctx->pc = 0x3103ACu;
    // 0x3103ac: 0x8fa90160  lw          $t1, 0x160($sp)
    ctx->pc = 0x3103acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x3103b0: 0x1f11021  addu        $v0, $t7, $s1
    ctx->pc = 0x3103b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x3103b4: 0xf5900  sll         $t3, $t7, 4
    ctx->pc = 0x3103b4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x3103b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3103b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3103bc: 0x91940  sll         $v1, $t1, 5
    ctx->pc = 0x3103bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
    // 0x3103c0: 0x3c090008  lui         $t1, 0x8
    ctx->pc = 0x3103c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)8 << 16));
    // 0x3103c4: 0xe2900  sll         $a1, $t6, 4
    ctx->pc = 0x3103c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x3103c8: 0x240effff  addiu       $t6, $zero, -0x1
    ctx->pc = 0x3103c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3103cc: 0xe723c  dsll32      $t6, $t6, 8
    ctx->pc = 0x3103ccu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 8));
    // 0x3103d0: 0xe723a  dsrl        $t6, $t6, 8
    ctx->pc = 0x3103d0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> 8);
    // 0x3103d4: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x3103d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3103d8: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x3103d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3103dc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x3103dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x3103e0: 0x24af0080  addiu       $t7, $a1, 0x80
    ctx->pc = 0x3103e0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x3103e4: 0x24a50100  addiu       $a1, $a1, 0x100
    ctx->pc = 0x3103e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    // 0x3103e8: 0x43c38  dsll        $a3, $a0, 16
    ctx->pc = 0x3103e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) << 16);
    // 0x3103ec: 0x34438  dsll        $t0, $v1, 16
    ctx->pc = 0x3103ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) << 16);
    // 0x3103f0: 0x23438  dsll        $a2, $v0, 16
    ctx->pc = 0x3103f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 16);
    // 0x3103f4: 0x240d0088  addiu       $t5, $zero, 0x88
    ctx->pc = 0x3103f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x3103f8: 0x200c82d  daddu       $t9, $s0, $zero
    ctx->pc = 0x3103f8u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3103fc: 0x0  nop
    ctx->pc = 0x3103fcu;
    // NOP
label_310400:
    // 0x310400: 0x1e71025  or          $v0, $t7, $a3
    ctx->pc = 0x310400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) | GPR_U64(ctx, 7));
    // 0x310404: 0x25ef0100  addiu       $t7, $t7, 0x100
    ctx->pc = 0x310404u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 256));
    // 0x310408: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x310408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x31040c: 0x1691825  or          $v1, $t3, $t1
    ctx->pc = 0x31040cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) | GPR_U64(ctx, 9));
    // 0x310410: 0xa62025  or          $a0, $a1, $a2
    ctx->pc = 0x310410u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x310414: 0x24a50100  addiu       $a1, $a1, 0x100
    ctx->pc = 0x310414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    // 0x310418: 0xff020008  sd          $v0, 0x8($t8)
    ctx->pc = 0x310418u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 2));
    // 0x31041c: 0x1a81025  or          $v0, $t5, $t0
    ctx->pc = 0x31041cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) | GPR_U64(ctx, 8));
    // 0x310420: 0xff030000  sd          $v1, 0x0($t8)
    ctx->pc = 0x310420u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 3));
    // 0x310424: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x310424u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x310428: 0x8e2025  or          $a0, $a0, $t6
    ctx->pc = 0x310428u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 14));
    // 0x31042c: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x31042cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x310430: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x310430u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x310434: 0x25ad0100  addiu       $t5, $t5, 0x100
    ctx->pc = 0x310434u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 256));
    // 0x310438: 0xff040008  sd          $a0, 0x8($t8)
    ctx->pc = 0x310438u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 4));
    // 0x31043c: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x31043cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x310440: 0x1720ffef  bnez        $t9, . + 4 + (-0x11 << 2)
    ctx->pc = 0x310440u;
    {
        const bool branch_taken_0x310440 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x310444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310440u;
        // 0x310444: 0x256b0100  addiu       $t3, $t3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310440) {
            ctx->pc = 0x310400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310400;
        }
    }
    ctx->pc = 0x310448u;
    // 0x310448: 0x200c82d  daddu       $t9, $s0, $zero
    ctx->pc = 0x310448u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31044c:
    // 0x31044c: 0x2b220028  slti        $v0, $t9, 0x28
    ctx->pc = 0x31044cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x310450: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x310450u;
    {
        const bool branch_taken_0x310450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310450u;
        // 0x310454: 0x8fa30130  lw          $v1, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310450) {
            ctx->pc = 0x310478u;
            goto label_310478;
        }
    }
    ctx->pc = 0x310458u;
    // 0x310458: 0x8faa0134  lw          $t2, 0x134($sp)
    ctx->pc = 0x310458u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x31045c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x31045cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x310460: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x310460u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    // 0x310464: 0x25431770  addiu       $v1, $t2, 0x1770
    ctx->pc = 0x310464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 6000));
    // 0x310468: 0xaf00000c  sw          $zero, 0xC($t8)
    ctx->pc = 0x310468u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 0));
    // 0x31046c: 0xaf030004  sw          $v1, 0x4($t8)
    ctx->pc = 0x31046cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 3));
    // 0x310470: 0xaf000008  sw          $zero, 0x8($t8)
    ctx->pc = 0x310470u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 0));
    // 0x310474: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x310474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_310478:
    // 0x310478: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x310478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x31047c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x31047cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x310480: 0x10400109  beqz        $v0, . + 4 + (0x109 << 2)
    ctx->pc = 0x310480u;
    {
        const bool branch_taken_0x310480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x310484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310480u;
        // 0x310484: 0x8faa0130  lw          $t2, 0x130($sp) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310480) {
            ctx->pc = 0x3108A8u;
            goto label_3108a8;
        }
    }
    ctx->pc = 0x310488u;
    // 0x310488: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x310488u;
    {
        const bool branch_taken_0x310488 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x310488) {
            ctx->pc = 0x31048Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310488u;
            // 0x31048c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x310490u;
            goto label_310490;
        }
    }
    ctx->pc = 0x310490u;
label_310490:
    // 0x310490: 0x90670019  lbu         $a3, 0x19($v1)
    ctx->pc = 0x310490u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 25)));
    // 0x310494: 0x9066001a  lbu         $a2, 0x1A($v1)
    ctx->pc = 0x310494u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x310498: 0xf7001a  div         $zero, $a3, $s7
    ctx->pc = 0x310498u;
    { int32_t divisor = GPR_S32(ctx, 23);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31049c: 0x90650018  lbu         $a1, 0x18($v1)
    ctx->pc = 0x31049cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x3104a0: 0x70d7001a  div1        $zero, $a2, $s7
    ctx->pc = 0x3104a0u;
    { int32_t divisor = GPR_S32(ctx, 23); int32_t dividend = GPR_S32(ctx, 6); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x3104a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3104a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3104a8: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x3104a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x3104ac: 0x24080011  addiu       $t0, $zero, 0x11
    ctx->pc = 0x3104acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3104b0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3104b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3104b4: 0x3c035100  lui         $v1, 0x5100
    ctx->pc = 0x3104b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20736 << 16));
    // 0x3104b8: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x3104b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3104bc: 0x26781770  addiu       $t8, $s3, 0x1770
    ctx->pc = 0x3104bcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 6000));
    // 0x3104c0: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x3104c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x3104c4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3104c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3104c8: 0xaf03000c  sw          $v1, 0xC($t8)
    ctx->pc = 0x3104c8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 3));
    // 0x3104cc: 0x1042025  or          $a0, $t0, $a0
    ctx->pc = 0x3104ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x3104d0: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x3104d0u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3104d4: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x3104d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3104d8: 0xaf040000  sw          $a0, 0x0($t8)
    ctx->pc = 0x3104d8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 4));
    // 0x3104dc: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x3104dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3104e0: 0xdfa80180  ld          $t0, 0x180($sp)
    ctx->pc = 0x3104e0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x3104e4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3104e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3104e8: 0x8f83cb98  lw          $v1, -0x3468($gp)
    ctx->pc = 0x3104e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953880)));
    // 0x3104ec: 0x823b8  dsll        $a0, $t0, 14
    ctx->pc = 0x3104ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) << 14);
    // 0x3104f0: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x3104f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
    // 0x3104f4: 0x35080006  ori         $t0, $t0, 0x6
    ctx->pc = 0x3104f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)6);
    // 0x3104f8: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x3104f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x3104fc: 0x3508a9b0  ori         $t0, $t0, 0xA9B0
    ctx->pc = 0x3104fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)43440);
    // 0x310500: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x310500u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x310504: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x310504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x310508: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x310508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31050c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x31050cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x310510: 0x8fb20164  lw          $s2, 0x164($sp)
    ctx->pc = 0x310510u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x310514: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x310514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x310518: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x310518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x31051c: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x31051cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310520: 0xfe6217a0  sd          $v0, 0x17A0($s3)
    ctx->pc = 0x310520u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 6048), GPR_U64(ctx, 2));
    // 0x310524: 0x3812  mflo        $a3
    ctx->pc = 0x310524u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x310528: 0xb7001a  div         $zero, $a1, $s7
    ctx->pc = 0x310528u;
    { int32_t divisor = GPR_S32(ctx, 23);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x31052c: 0x70003012  mflo1       $a2
    ctx->pc = 0x31052cu;
    SET_GPR_U64(ctx, 6, ctx->lo1);
    // 0x310530: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x310530u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x310534: 0x73a38  dsll        $a3, $a3, 8
    ctx->pc = 0x310534u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 8);
    // 0x310538: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x310538u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x31053c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x31053cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x310540: 0x2812  mflo        $a1
    ctx->pc = 0x310540u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x310544: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x310544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x310548: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x310548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x31054c: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x31054cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x310550: 0x1244000a  beq         $s2, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x310550u;
    {
        const bool branch_taken_0x310550 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        ctx->pc = 0x310554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310550u;
        // 0x310554: 0xfe6517b0  sd          $a1, 0x17B0($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 6064), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310550) {
            ctx->pc = 0x31057Cu;
            goto label_31057c;
        }
    }
    ctx->pc = 0x310558u;
    // 0x310558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x310558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31055c: 0x0  nop
    ctx->pc = 0x31055cu;
    // NOP
label_310560:
    // 0x310560: 0xb5843  sra         $t3, $t3, 1
    ctx->pc = 0x310560u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
    // 0x310564: 0x0  nop
    ctx->pc = 0x310564u;
    // NOP
    // 0x310568: 0x0  nop
    ctx->pc = 0x310568u;
    // NOP
    // 0x31056c: 0x0  nop
    ctx->pc = 0x31056cu;
    // NOP
    // 0x310570: 0x0  nop
    ctx->pc = 0x310570u;
    // NOP
    // 0x310574: 0x1562fffa  bne         $t3, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x310574u;
    {
        const bool branch_taken_0x310574 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x310578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310574u;
        // 0x310578: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310574) {
            ctx->pc = 0x310560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310560;
        }
    }
    ctx->pc = 0x31057Cu;
label_31057c:
    // 0x31057c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31057cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310580: 0x8fa40164  lw          $a0, 0x164($sp)
    ctx->pc = 0x310580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x310584: 0x3231004  sllv        $v0, $v1, $t9
    ctx->pc = 0x310584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 25) & 0x1F));
    // 0x310588: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x310588u;
    {
        const bool branch_taken_0x310588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x31058Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310588u;
        // 0x31058c: 0x27220001  addiu       $v0, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310588) {
            ctx->pc = 0x310594u;
            goto label_310594;
        }
    }
    ctx->pc = 0x310590u;
    // 0x310590: 0x439004  sllv        $s2, $v1, $v0
    ctx->pc = 0x310590u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_310594:
    // 0x310594: 0x8fb10168  lw          $s1, 0x168($sp)
    ctx->pc = 0x310594u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x310598: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x310598u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31059c: 0x12230009  beq         $s1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x31059Cu;
    {
        const bool branch_taken_0x31059c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x3105A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31059Cu;
        // 0x3105a0: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31059c) {
            ctx->pc = 0x3105C4u;
            goto label_3105c4;
        }
    }
    ctx->pc = 0x3105A4u;
    // 0x3105a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3105a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3105a8:
    // 0x3105a8: 0xb5843  sra         $t3, $t3, 1
    ctx->pc = 0x3105a8u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
    // 0x3105ac: 0x0  nop
    ctx->pc = 0x3105acu;
    // NOP
    // 0x3105b0: 0x0  nop
    ctx->pc = 0x3105b0u;
    // NOP
    // 0x3105b4: 0x0  nop
    ctx->pc = 0x3105b4u;
    // NOP
    // 0x3105b8: 0x0  nop
    ctx->pc = 0x3105b8u;
    // NOP
    // 0x3105bc: 0x1562fffa  bne         $t3, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3105BCu;
    {
        const bool branch_taken_0x3105bc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x3105C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3105BCu;
        // 0x3105c0: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3105bc) {
            ctx->pc = 0x3105A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3105a8;
        }
    }
    ctx->pc = 0x3105C4u;
label_3105c4:
    // 0x3105c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3105c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3105c8: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x3105c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x3105cc: 0x3231004  sllv        $v0, $v1, $t9
    ctx->pc = 0x3105ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 25) & 0x1F));
    // 0x3105d0: 0x10450002  beq         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3105D0u;
    {
        const bool branch_taken_0x3105d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x3105D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3105D0u;
        // 0x3105d4: 0x27220001  addiu       $v0, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3105d0) {
            ctx->pc = 0x3105DCu;
            goto label_3105dc;
        }
    }
    ctx->pc = 0x3105D8u;
    // 0x3105d8: 0x438804  sllv        $s1, $v1, $v0
    ctx->pc = 0x3105d8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_3105dc:
    // 0x3105dc: 0x8f85c54c  lw          $a1, -0x3AB4($gp)
    ctx->pc = 0x3105dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x3105e0: 0x11b040  sll         $s6, $s1, 1
    ctx->pc = 0x3105e0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x3105e4: 0x8f82cb9c  lw          $v0, -0x3464($gp)
    ctx->pc = 0x3105e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953884)));
    // 0x3105e8: 0x12a840  sll         $s5, $s2, 1
    ctx->pc = 0x3105e8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x3105ec: 0x8f86c550  lw          $a2, -0x3AB0($gp)
    ctx->pc = 0x3105ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x3105f0: 0x113900  sll         $a3, $s1, 4
    ctx->pc = 0x3105f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x3105f4: 0x8fa8018c  lw          $t0, 0x18C($sp)
    ctx->pc = 0x3105f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x3105f8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3105f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3105fc: 0x8f83cba4  lw          $v1, -0x345C($gp)
    ctx->pc = 0x3105fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953892)));
    // 0x310600: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x310600u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x310604: 0x14a23c  dsll32      $s4, $s4, 8
    ctx->pc = 0x310604u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 8));
    // 0x310608: 0x14a23a  dsrl        $s4, $s4, 8
    ctx->pc = 0x310608u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 8);
    // 0x31060c: 0x8fa901b4  lw          $t1, 0x1B4($sp)
    ctx->pc = 0x31060cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x310610: 0x487023  subu        $t6, $v0, $t0
    ctx->pc = 0x310610u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x310614: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x310614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x310618: 0x1de1021  addu        $v0, $t6, $fp
    ctx->pc = 0x310618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 30)));
    // 0x31061c: 0x687823  subu        $t7, $v1, $t0
    ctx->pc = 0x31061cu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x310620: 0x8f84c544  lw          $a0, -0x3ABC($gp)
    ctx->pc = 0x310620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952260)));
    // 0x310624: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x310624u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x310628: 0x8f85c548  lw          $a1, -0x3AB8($gp)
    ctx->pc = 0x310628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952264)));
    // 0x31062c: 0x1e91821  addu        $v1, $t7, $t1
    ctx->pc = 0x31062cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x310630: 0x244cffff  addiu       $t4, $v0, -0x1
    ctx->pc = 0x310630u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x310634: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x310634u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x310638: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x310638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x31063c: 0x246dffff  addiu       $t5, $v1, -0x1
    ctx->pc = 0x31063cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x310640: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x310640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x310644: 0x184202a  slt         $a0, $t4, $a0
    ctx->pc = 0x310644u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x310648: 0x1a5282a  slt         $a1, $t5, $a1
    ctx->pc = 0x310648u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x31064c: 0x44600a  movz        $t4, $v0, $a0
    ctx->pc = 0x31064cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 2));
    // 0x310650: 0x65680a  movz        $t5, $v1, $a1
    ctx->pc = 0x310650u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 3));
    // 0x310654: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x310654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310658: 0xd443c  dsll32      $t0, $t5, 16
    ctx->pc = 0x310658u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 13) << (32 + 16));
    // 0x31065c: 0x1f65021  addu        $t2, $t7, $s6
    ctx->pc = 0x31065cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 22)));
    // 0x310660: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x310660u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x310664: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x310664u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x310668: 0xf5900  sll         $t3, $t7, 4
    ctx->pc = 0x310668u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x31066c: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x31066cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x310670: 0xfe6617c0  sd          $a2, 0x17C0($s3)
    ctx->pc = 0x310670u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 6080), GPR_U64(ctx, 6));
    // 0x310674: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x310674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310678: 0x1d52821  addu        $a1, $t6, $s5
    ctx->pc = 0x310678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 21)));
    // 0x31067c: 0xe1900  sll         $v1, $t6, 4
    ctx->pc = 0x31067cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x310680: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x310680u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x310684: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x310684u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x310688: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x310688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31068c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x31068cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x310690: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x310690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x310694: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x310694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x310698: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x310698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x31069c: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x31069cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x3106a0: 0x26781810  addiu       $t8, $s3, 0x1810
    ctx->pc = 0x3106a0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 6160));
    // 0x3106a4: 0x24680014  addiu       $t0, $v1, 0x14
    ctx->pc = 0x3106a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x3106a8: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x3106a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
    // 0x3106ac: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3106acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x3106b0: 0x3c030014  lui         $v1, 0x14
    ctx->pc = 0x3106b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
    // 0x3106b4: 0x34630014  ori         $v1, $v1, 0x14
    ctx->pc = 0x3106b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20);
    // 0x3106b8: 0xae651800  sw          $a1, 0x1800($s3)
    ctx->pc = 0x3106b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 6144), GPR_U32(ctx, 5));
    // 0x3106bc: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x3106bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x3106c0: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x3106c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x3106c4: 0xff040008  sd          $a0, 0x8($t8)
    ctx->pc = 0x3106c4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 4));
    // 0x3106c8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3106c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3106cc: 0xff030000  sd          $v1, 0x0($t8)
    ctx->pc = 0x3106ccu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 3));
    // 0x3106d0: 0x26781820  addiu       $t8, $s3, 0x1820
    ctx->pc = 0x3106d0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 6176));
    // 0x3106d4: 0xff020008  sd          $v0, 0x8($t8)
    ctx->pc = 0x3106d4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 2));
    // 0x3106d8: 0xff070000  sd          $a3, 0x0($t8)
    ctx->pc = 0x3106d8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 7));
    // 0x3106dc: 0x8fa6017c  lw          $a2, 0x17C($sp)
    ctx->pc = 0x3106dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x3106e0: 0x14c00021  bnez        $a2, . + 4 + (0x21 << 2)
    ctx->pc = 0x3106E0u;
    {
        const bool branch_taken_0x3106e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3106E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3106E0u;
        // 0x3106e4: 0x26781830  addiu       $t8, $s3, 0x1830 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 6192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3106e0) {
            ctx->pc = 0x310768u;
            goto label_310768;
        }
    }
    ctx->pc = 0x3106E8u;
    // 0x3106e8: 0x8fb00194  lw          $s0, 0x194($sp)
    ctx->pc = 0x3106e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x3106ec: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x3106ecu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x3106f0: 0xf5900  sll         $t3, $t7, 4
    ctx->pc = 0x3106f0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x3106f4: 0x1f65021  addu        $t2, $t7, $s6
    ctx->pc = 0x3106f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 22)));
    // 0x3106f8: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x3106f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x3106fc: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x3106fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x310700: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x310700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310704: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x310704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x310708: 0xa2100  sll         $a0, $t2, 4
    ctx->pc = 0x310708u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x31070c: 0xe1100  sll         $v0, $t6, 4
    ctx->pc = 0x31070cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x310710: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x310710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x310714: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x310714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x310718: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x310718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x31071c: 0x1d53821  addu        $a3, $t6, $s5
    ctx->pc = 0x31071cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 21)));
    // 0x310720: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x310720u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x310724: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x310724u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x310728: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x310728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x31072c: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x31072cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x310730: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x310730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x310734: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x310734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x310738: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x310738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x31073c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x31073cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x310740: 0xb42825  or          $a1, $a1, $s4
    ctx->pc = 0x310740u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 20));
    // 0x310744: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x310744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x310748: 0xff050008  sd          $a1, 0x8($t8)
    ctx->pc = 0x310748u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 5));
    // 0x31074c: 0xff060000  sd          $a2, 0x0($t8)
    ctx->pc = 0x31074cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 6));
    // 0x310750: 0x26781840  addiu       $t8, $s3, 0x1840
    ctx->pc = 0x310750u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 6208));
    // 0x310754: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x310754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x310758: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x310758u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
    // 0x31075c: 0xff030000  sd          $v1, 0x0($t8)
    ctx->pc = 0x31075cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 3));
    // 0x310760: 0xff040008  sd          $a0, 0x8($t8)
    ctx->pc = 0x310760u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 4));
    // 0x310764: 0x26781850  addiu       $t8, $s3, 0x1850
    ctx->pc = 0x310764u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 6224));
label_310768:
    // 0x310768: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x310768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31076c: 0x16e20045  bne         $s7, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x31076Cu;
    {
        const bool branch_taken_0x31076c = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x310770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31076Cu;
        // 0x310770: 0x8fa801b0  lw          $t0, 0x1B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31076c) {
            ctx->pc = 0x310884u;
            goto label_310884;
        }
    }
    ctx->pc = 0x310774u;
    // 0x310774: 0x8fa70168  lw          $a3, 0x168($sp)
    ctx->pc = 0x310774u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x310778: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x310778u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x31077c: 0x8fb90190  lw          $t9, 0x190($sp)
    ctx->pc = 0x31077cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x310780: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x310780u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310784: 0x2071023  subu        $v0, $s0, $a3
    ctx->pc = 0x310784u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x310788: 0xa4100  sll         $t0, $t2, 4
    ctx->pc = 0x310788u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x31078c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x31078cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x310790: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x310790u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x310794: 0x2071021  addu        $v0, $s0, $a3
    ctx->pc = 0x310794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x310798: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x310798u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x31079c: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x31079cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x3107a0: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x3107a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3107a4: 0xe5100  sll         $t2, $t6, 4
    ctx->pc = 0x3107a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x3107a8: 0x3325821  addu        $t3, $t9, $s2
    ctx->pc = 0x3107a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 18)));
    // 0x3107ac: 0x1d51021  addu        $v0, $t6, $s5
    ctx->pc = 0x3107acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 21)));
    // 0x3107b0: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x3107b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x3107b4: 0x1f62021  addu        $a0, $t7, $s6
    ctx->pc = 0x3107b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 22)));
    // 0x3107b8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3107b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3107bc: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x3107bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x3107c0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x3107c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x3107c4: 0x196100  sll         $t4, $t9, 4
    ctx->pc = 0x3107c4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x3107c8: 0xf1900  sll         $v1, $t7, 4
    ctx->pc = 0x3107c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x3107cc: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x3107ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x3107d0: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x3107d0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x3107d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3107d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3107d8: 0x2113821  addu        $a3, $s0, $s1
    ctx->pc = 0x3107d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x3107dc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3107dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3107e0: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x3107e0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x3107e4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3107e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3107e8: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x3107e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x3107ec: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3107ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3107f0: 0x105100  sll         $t2, $s0, 4
    ctx->pc = 0x3107f0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x3107f4: 0x484025  or          $t0, $v0, $t0
    ctx->pc = 0x3107f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x3107f8: 0xe1100  sll         $v0, $t6, 4
    ctx->pc = 0x3107f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x3107fc: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x3107fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x310800: 0x1863025  or          $a2, $t4, $a2
    ctx->pc = 0x310800u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) | GPR_U64(ctx, 6));
    // 0x310804: 0x1d56821  addu        $t5, $t6, $s5
    ctx->pc = 0x310804u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 21)));
    // 0x310808: 0x1344825  or          $t1, $t1, $s4
    ctx->pc = 0x310808u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 20));
    // 0x31080c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x31080cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x310810: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x310810u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x310814: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x310814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x310818: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x310818u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x31081c: 0xff060000  sd          $a2, 0x0($t8)
    ctx->pc = 0x31081cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 6));
    // 0x310820: 0xff090008  sd          $t1, 0x8($t8)
    ctx->pc = 0x310820u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 9));
    // 0x310824: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x310824u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x310828: 0x1652825  or          $a1, $t3, $a1
    ctx->pc = 0x310828u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) | GPR_U64(ctx, 5));
    // 0x31082c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x31082cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x310830: 0x1144025  or          $t0, $t0, $s4
    ctx->pc = 0x310830u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 20));
    // 0x310834: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x310834u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x310838: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x310838u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x31083c: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x31083cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x310840: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x310840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x310844: 0xff050000  sd          $a1, 0x0($t8)
    ctx->pc = 0x310844u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 5));
    // 0x310848: 0xff080008  sd          $t0, 0x8($t8)
    ctx->pc = 0x310848u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 8));
    // 0x31084c: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x31084cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x310850: 0x18a6025  or          $t4, $t4, $t2
    ctx->pc = 0x310850u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 10));
    // 0x310854: 0x1a42025  or          $a0, $t5, $a0
    ctx->pc = 0x310854u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) | GPR_U64(ctx, 4));
    // 0x310858: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x310858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x31085c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x31085cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x310860: 0xff0c0000  sd          $t4, 0x0($t8)
    ctx->pc = 0x310860u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 12));
    // 0x310864: 0x1675825  or          $t3, $t3, $a3
    ctx->pc = 0x310864u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 7));
    // 0x310868: 0xff030008  sd          $v1, 0x8($t8)
    ctx->pc = 0x310868u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 3));
    // 0x31086c: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x31086cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x310870: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x310870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
    // 0x310874: 0xff0b0000  sd          $t3, 0x0($t8)
    ctx->pc = 0x310874u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 11));
    // 0x310878: 0xff040008  sd          $a0, 0x8($t8)
    ctx->pc = 0x310878u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 4));
    // 0x31087c: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x31087cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x310880: 0x8fa801b0  lw          $t0, 0x1B0($sp)
    ctx->pc = 0x310880u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_310884:
    // 0x310884: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x310884u;
    {
        const bool branch_taken_0x310884 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x310888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310884u;
        // 0x310888: 0x8fa90134  lw          $t1, 0x134($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310884) {
            ctx->pc = 0x3108A4u;
            goto label_3108a4;
        }
    }
    ctx->pc = 0x31088Cu;
    // 0x31088c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x31088cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x310890: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x310890u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    // 0x310894: 0x25231890  addiu       $v1, $t1, 0x1890
    ctx->pc = 0x310894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 6288));
    // 0x310898: 0xaf00000c  sw          $zero, 0xC($t8)
    ctx->pc = 0x310898u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 0));
    // 0x31089c: 0xaf030004  sw          $v1, 0x4($t8)
    ctx->pc = 0x31089cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 3));
    // 0x3108a0: 0xaf000008  sw          $zero, 0x8($t8)
    ctx->pc = 0x3108a0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 0));
label_3108a4:
    // 0x3108a4: 0x8faa0130  lw          $t2, 0x130($sp)
    ctx->pc = 0x3108a4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_3108a8:
    // 0x3108a8: 0x267818e0  addiu       $t8, $s3, 0x18E0
    ctx->pc = 0x3108a8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 6368));
    // 0x3108ac: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x3108acu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3108b0: 0x240d0008  addiu       $t5, $zero, 0x8
    ctx->pc = 0x3108b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3108b4: 0x254c0020  addiu       $t4, $t2, 0x20
    ctx->pc = 0x3108b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x3108b8: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x3108b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3108bc: 0x33220018  andi        $v0, $t9, 0x18
    ctx->pc = 0x3108bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)24);
label_3108c0:
    // 0x3108c0: 0x504d0004  beql        $v0, $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x3108C0u;
    {
        const bool branch_taken_0x3108c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 13));
        if (branch_taken_0x3108c0) {
            ctx->pc = 0x3108C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3108C0u;
            // 0x3108c4: 0x3b220018  xori        $v0, $t9, 0x18 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) ^ (uint64_t)(uint16_t)24);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3108D4u;
            goto label_3108d4;
        }
    }
    ctx->pc = 0x3108C8u;
    // 0x3108c8: 0x544a0002  bnel        $v0, $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x3108C8u;
    {
        const bool branch_taken_0x3108c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x3108c8) {
            ctx->pc = 0x3108CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3108C8u;
            // 0x3108cc: 0x320102d  daddu       $v0, $t9, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3108D4u;
            goto label_3108d4;
        }
    }
    ctx->pc = 0x3108D0u;
    // 0x3108d0: 0x3b220018  xori        $v0, $t9, 0x18
    ctx->pc = 0x3108d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) ^ (uint64_t)(uint16_t)24);
label_3108d4:
    // 0x3108d4: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x3108d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3108d8: 0x25630008  addiu       $v1, $t3, 0x8
    ctx->pc = 0x3108d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x3108dc: 0x163102a  slt         $v0, $t3, $v1
    ctx->pc = 0x3108dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3108e0: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x3108E0u;
    {
        const bool branch_taken_0x3108e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3108e0) {
            ctx->pc = 0x3108E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3108E0u;
            // 0x3108e4: 0x27390008  addiu       $t9, $t9, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310968u;
            goto label_310968;
        }
    }
    ctx->pc = 0x3108E8u;
    // 0x3108e8: 0x3c080080  lui         $t0, 0x80
    ctx->pc = 0x3108e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)128 << 16));
    // 0x3108ec: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x3108ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3108f0: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x3108f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x3108f4: 0x0  nop
    ctx->pc = 0x3108f4u;
    // NOP
label_3108f8:
    // 0x3108f8: 0x18b1821  addu        $v1, $t4, $t3
    ctx->pc = 0x3108f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x3108fc: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3108fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x310900: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x310900u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x310904: 0x18b2021  addu        $a0, $t4, $t3
    ctx->pc = 0x310904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x310908: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x310908u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x31090c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x31090cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x310910: 0x18b2821  addu        $a1, $t4, $t3
    ctx->pc = 0x310910u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x310914: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x310914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x310918: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x310918u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x31091c: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x31091cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    // 0x310920: 0x18b3021  addu        $a2, $t4, $t3
    ctx->pc = 0x310920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 11)));
    // 0x310924: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x310924u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x310928: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x310928u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31092c: 0x169382a  slt         $a3, $t3, $t1
    ctx->pc = 0x31092cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x310930: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x310930u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x310934: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x310934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x310938: 0xaf030004  sw          $v1, 0x4($t8)
    ctx->pc = 0x310938u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 3));
    // 0x31093c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x31093cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x310940: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x310940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x310944: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x310944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x310948: 0xaf020008  sw          $v0, 0x8($t8)
    ctx->pc = 0x310948u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 2));
    // 0x31094c: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x31094cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x310950: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x310950u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x310954: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x310954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x310958: 0xaf03000c  sw          $v1, 0xC($t8)
    ctx->pc = 0x310958u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 3));
    // 0x31095c: 0x14e0ffe6  bnez        $a3, . + 4 + (-0x1A << 2)
    ctx->pc = 0x31095Cu;
    {
        const bool branch_taken_0x31095c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x310960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31095Cu;
        // 0x310960: 0x27180010  addiu       $t8, $t8, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31095c) {
            ctx->pc = 0x3108F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3108f8;
        }
    }
    ctx->pc = 0x310964u;
    // 0x310964: 0x27390008  addiu       $t9, $t9, 0x8
    ctx->pc = 0x310964u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 8));
label_310968:
    // 0x310968: 0x2b220100  slti        $v0, $t9, 0x100
    ctx->pc = 0x310968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x31096c: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x31096Cu;
    {
        const bool branch_taken_0x31096c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31096Cu;
        // 0x310970: 0x33220018  andi        $v0, $t9, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31096c) {
            ctx->pc = 0x3108C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3108c0;
        }
    }
    ctx->pc = 0x310974u;
    // 0x310974: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x310974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x310978: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x310978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31097c: 0xb7001a  div         $zero, $a1, $s7
    ctx->pc = 0x31097cu;
    { int32_t divisor = GPR_S32(ctx, 23);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x310980: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x310980u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x310984: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x310984u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x310988: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x310988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x31098c: 0x624023  subu        $t0, $v1, $v0
    ctx->pc = 0x31098cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x310990: 0x3c035100  lui         $v1, 0x5100
    ctx->pc = 0x310990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20736 << 16));
    // 0x310994: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x310994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x310998: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x310998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x31099c: 0x1042025  or          $a0, $t0, $a0
    ctx->pc = 0x31099cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
    // 0x3109a0: 0x26781ce0  addiu       $t8, $s3, 0x1CE0
    ctx->pc = 0x3109a0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 7392));
    // 0x3109a4: 0x52e00001  beql        $s7, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3109A4u;
    {
        const bool branch_taken_0x3109a4 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x3109a4) {
            ctx->pc = 0x3109A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3109A4u;
            // 0x3109a8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3109ACu;
            goto label_3109ac;
        }
    }
    ctx->pc = 0x3109ACu;
label_3109ac:
    // 0x3109ac: 0xaf040000  sw          $a0, 0x0($t8)
    ctx->pc = 0x3109acu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 4));
    // 0x3109b0: 0xaf03000c  sw          $v1, 0xC($t8)
    ctx->pc = 0x3109b0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 3));
    // 0x3109b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3109b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3109b8: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x3109b8u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3109bc: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x3109bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x3109c0: 0xdfa60180  ld          $a2, 0x180($sp)
    ctx->pc = 0x3109c0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x3109c4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x3109c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3109c8: 0x8f83cb94  lw          $v1, -0x346C($gp)
    ctx->pc = 0x3109c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953876)));
    // 0x3109cc: 0x623b8  dsll        $a0, $a2, 14
    ctx->pc = 0x3109ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << 14);
    // 0x3109d0: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x3109d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x3109d4: 0x34c60006  ori         $a2, $a2, 0x6
    ctx->pc = 0x3109d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)6);
    // 0x3109d8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3109d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3109dc: 0x34c6a9b0  ori         $a2, $a2, 0xA9B0
    ctx->pc = 0x3109dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)43440);
    // 0x3109e0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x3109e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x3109e4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3109e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3109e8: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x3109e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x3109ec: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3109ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3109f0: 0x8fb20164  lw          $s2, 0x164($sp)
    ctx->pc = 0x3109f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x3109f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3109f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3109f8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3109f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3109fc: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x3109fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310a00: 0xfe621d10  sd          $v0, 0x1D10($s3)
    ctx->pc = 0x310a00u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 7440), GPR_U64(ctx, 2));
    // 0x310a04: 0x8fa80130  lw          $t0, 0x130($sp)
    ctx->pc = 0x310a04u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x310a08: 0x91040019  lbu         $a0, 0x19($t0)
    ctx->pc = 0x310a08u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 25)));
    // 0x310a0c: 0x9102001a  lbu         $v0, 0x1A($t0)
    ctx->pc = 0x310a0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 26)));
    // 0x310a10: 0x91030018  lbu         $v1, 0x18($t0)
    ctx->pc = 0x310a10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x310a14: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x310a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
    // 0x310a18: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x310a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x310a1c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x310a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x310a20: 0x2812  mflo        $a1
    ctx->pc = 0x310a20u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x310a24: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x310a24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x310a28: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x310a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x310a2c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x310a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x310a30: 0x1247000a  beq         $s2, $a3, . + 4 + (0xA << 2)
    ctx->pc = 0x310A30u;
    {
        const bool branch_taken_0x310a30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 7));
        ctx->pc = 0x310A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A30u;
        // 0x310a34: 0xfe631d20  sd          $v1, 0x1D20($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 7456), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a30) {
            ctx->pc = 0x310A5Cu;
            goto label_310a5c;
        }
    }
    ctx->pc = 0x310A38u;
    // 0x310a38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x310a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310a3c: 0x0  nop
    ctx->pc = 0x310a3cu;
    // NOP
label_310a40:
    // 0x310a40: 0xb5843  sra         $t3, $t3, 1
    ctx->pc = 0x310a40u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
    // 0x310a44: 0x0  nop
    ctx->pc = 0x310a44u;
    // NOP
    // 0x310a48: 0x0  nop
    ctx->pc = 0x310a48u;
    // NOP
    // 0x310a4c: 0x0  nop
    ctx->pc = 0x310a4cu;
    // NOP
    // 0x310a50: 0x0  nop
    ctx->pc = 0x310a50u;
    // NOP
    // 0x310a54: 0x1562fffa  bne         $t3, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x310A54u;
    {
        const bool branch_taken_0x310a54 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x310A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A54u;
        // 0x310a58: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a54) {
            ctx->pc = 0x310A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310a40;
        }
    }
    ctx->pc = 0x310A5Cu;
label_310a5c:
    // 0x310a5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x310a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310a60: 0x8fa90164  lw          $t1, 0x164($sp)
    ctx->pc = 0x310a60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
    // 0x310a64: 0x3231004  sllv        $v0, $v1, $t9
    ctx->pc = 0x310a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 25) & 0x1F));
    // 0x310a68: 0x10490002  beq         $v0, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x310A68u;
    {
        const bool branch_taken_0x310a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x310A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A68u;
        // 0x310a6c: 0x27220001  addiu       $v0, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a68) {
            ctx->pc = 0x310A74u;
            goto label_310a74;
        }
    }
    ctx->pc = 0x310A70u;
    // 0x310a70: 0x439004  sllv        $s2, $v1, $v0
    ctx->pc = 0x310a70u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_310a74:
    // 0x310a74: 0x8fb10168  lw          $s1, 0x168($sp)
    ctx->pc = 0x310a74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x310a78: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x310a78u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310a7c: 0x12230009  beq         $s1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x310A7Cu;
    {
        const bool branch_taken_0x310a7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x310A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A7Cu;
        // 0x310a80: 0x220582d  daddu       $t3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a7c) {
            ctx->pc = 0x310AA4u;
            goto label_310aa4;
        }
    }
    ctx->pc = 0x310A84u;
    // 0x310a84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x310a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_310a88:
    // 0x310a88: 0xb5843  sra         $t3, $t3, 1
    ctx->pc = 0x310a88u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 1));
    // 0x310a8c: 0x0  nop
    ctx->pc = 0x310a8cu;
    // NOP
    // 0x310a90: 0x0  nop
    ctx->pc = 0x310a90u;
    // NOP
    // 0x310a94: 0x0  nop
    ctx->pc = 0x310a94u;
    // NOP
    // 0x310a98: 0x0  nop
    ctx->pc = 0x310a98u;
    // NOP
    // 0x310a9c: 0x1562fffa  bne         $t3, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x310A9Cu;
    {
        const bool branch_taken_0x310a9c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x310AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A9Cu;
        // 0x310aa0: 0x27390001  addiu       $t9, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a9c) {
            ctx->pc = 0x310A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310a88;
        }
    }
    ctx->pc = 0x310AA4u;
label_310aa4:
    // 0x310aa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x310aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310aa8: 0x8faa0168  lw          $t2, 0x168($sp)
    ctx->pc = 0x310aa8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x310aac: 0x3231004  sllv        $v0, $v1, $t9
    ctx->pc = 0x310aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 25) & 0x1F));
    // 0x310ab0: 0x104a0002  beq         $v0, $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x310AB0u;
    {
        const bool branch_taken_0x310ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x310AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AB0u;
        // 0x310ab4: 0x27220001  addiu       $v0, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ab0) {
            ctx->pc = 0x310ABCu;
            goto label_310abc;
        }
    }
    ctx->pc = 0x310AB8u;
    // 0x310ab8: 0x438804  sllv        $s1, $v1, $v0
    ctx->pc = 0x310ab8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_310abc:
    // 0x310abc: 0x8f85c54c  lw          $a1, -0x3AB4($gp)
    ctx->pc = 0x310abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952268)));
    // 0x310ac0: 0x11b040  sll         $s6, $s1, 1
    ctx->pc = 0x310ac0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x310ac4: 0x8f82cb9c  lw          $v0, -0x3464($gp)
    ctx->pc = 0x310ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953884)));
    // 0x310ac8: 0x12a840  sll         $s5, $s2, 1
    ctx->pc = 0x310ac8u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x310acc: 0x8f86c550  lw          $a2, -0x3AB0($gp)
    ctx->pc = 0x310accu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952272)));
    // 0x310ad0: 0x113900  sll         $a3, $s1, 4
    ctx->pc = 0x310ad0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x310ad4: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x310ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x310ad8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x310ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x310adc: 0x8f83cba4  lw          $v1, -0x345C($gp)
    ctx->pc = 0x310adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953892)));
    // 0x310ae0: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x310ae0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x310ae4: 0x14a23c  dsll32      $s4, $s4, 8
    ctx->pc = 0x310ae4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 8));
    // 0x310ae8: 0x14a23a  dsrl        $s4, $s4, 8
    ctx->pc = 0x310ae8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) >> 8);
    // 0x310aec: 0x8fa8018c  lw          $t0, 0x18C($sp)
    ctx->pc = 0x310aecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x310af0: 0x447023  subu        $t6, $v0, $a0
    ctx->pc = 0x310af0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x310af4: 0x8fa901b4  lw          $t1, 0x1B4($sp)
    ctx->pc = 0x310af4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x310af8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x310af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x310afc: 0x687823  subu        $t7, $v1, $t0
    ctx->pc = 0x310afcu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x310b00: 0x1de1021  addu        $v0, $t6, $fp
    ctx->pc = 0x310b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 30)));
    // 0x310b04: 0x8f84c544  lw          $a0, -0x3ABC($gp)
    ctx->pc = 0x310b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952260)));
    // 0x310b08: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x310b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x310b0c: 0x1e91821  addu        $v1, $t7, $t1
    ctx->pc = 0x310b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
    // 0x310b10: 0x244cffff  addiu       $t4, $v0, -0x1
    ctx->pc = 0x310b10u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x310b14: 0x8f85c548  lw          $a1, -0x3AB8($gp)
    ctx->pc = 0x310b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952264)));
    // 0x310b18: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x310b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x310b1c: 0x246dffff  addiu       $t5, $v1, -0x1
    ctx->pc = 0x310b1cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x310b20: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x310b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x310b24: 0x184202a  slt         $a0, $t4, $a0
    ctx->pc = 0x310b24u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x310b28: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x310b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x310b2c: 0x44600a  movz        $t4, $v0, $a0
    ctx->pc = 0x310b2cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 2));
    // 0x310b30: 0x1a5282a  slt         $a1, $t5, $a1
    ctx->pc = 0x310b30u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x310b34: 0x65680a  movz        $t5, $v1, $a1
    ctx->pc = 0x310b34u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 3));
    // 0x310b38: 0xe1900  sll         $v1, $t6, 4
    ctx->pc = 0x310b38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x310b3c: 0x180302d  daddu       $a2, $t4, $zero
    ctx->pc = 0x310b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310b40: 0xd443c  dsll32      $t0, $t5, 16
    ctx->pc = 0x310b40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 13) << (32 + 16));
    // 0x310b44: 0x1f65021  addu        $t2, $t7, $s6
    ctx->pc = 0x310b44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 22)));
    // 0x310b48: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x310b48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x310b4c: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x310b4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x310b50: 0xf5900  sll         $t3, $t7, 4
    ctx->pc = 0x310b50u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x310b54: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x310b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x310b58: 0xfe661d30  sd          $a2, 0x1D30($s3)
    ctx->pc = 0x310b58u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 7472), GPR_U64(ctx, 6));
    // 0x310b5c: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x310b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310b60: 0x1d52821  addu        $a1, $t6, $s5
    ctx->pc = 0x310b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 21)));
    // 0x310b64: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x310b64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x310b68: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x310b68u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x310b6c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x310b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x310b70: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x310b70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x310b74: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x310b74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x310b78: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x310b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x310b7c: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x310b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x310b80: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x310b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x310b84: 0x26781d80  addiu       $t8, $s3, 0x1D80
    ctx->pc = 0x310b84u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 7552));
    // 0x310b88: 0x24680014  addiu       $t0, $v1, 0x14
    ctx->pc = 0x310b88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x310b8c: 0x3c030014  lui         $v1, 0x14
    ctx->pc = 0x310b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
    // 0x310b90: 0x34630014  ori         $v1, $v1, 0x14
    ctx->pc = 0x310b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20);
    // 0x310b94: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x310b94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
    // 0x310b98: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x310b98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x310b9c: 0xae651d70  sw          $a1, 0x1D70($s3)
    ctx->pc = 0x310b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 7536), GPR_U32(ctx, 5));
    // 0x310ba0: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x310ba0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x310ba4: 0xff040008  sd          $a0, 0x8($t8)
    ctx->pc = 0x310ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 4));
    // 0x310ba8: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x310ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x310bac: 0xff030000  sd          $v1, 0x0($t8)
    ctx->pc = 0x310bacu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 3));
    // 0x310bb0: 0x26781d90  addiu       $t8, $s3, 0x1D90
    ctx->pc = 0x310bb0u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 7568));
    // 0x310bb4: 0xff020008  sd          $v0, 0x8($t8)
    ctx->pc = 0x310bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 2));
    // 0x310bb8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x310bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310bbc: 0xff070000  sd          $a3, 0x0($t8)
    ctx->pc = 0x310bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 7));
    // 0x310bc0: 0x8fa6017c  lw          $a2, 0x17C($sp)
    ctx->pc = 0x310bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x310bc4: 0x14c00021  bnez        $a2, . + 4 + (0x21 << 2)
    ctx->pc = 0x310BC4u;
    {
        const bool branch_taken_0x310bc4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x310BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BC4u;
        // 0x310bc8: 0x26781da0  addiu       $t8, $s3, 0x1DA0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 7584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310bc4) {
            ctx->pc = 0x310C4Cu;
            goto label_310c4c;
        }
    }
    ctx->pc = 0x310BCCu;
    // 0x310bcc: 0x8fb00194  lw          $s0, 0x194($sp)
    ctx->pc = 0x310bccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x310bd0: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x310bd0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x310bd4: 0xf5900  sll         $t3, $t7, 4
    ctx->pc = 0x310bd4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x310bd8: 0x1f65021  addu        $t2, $t7, $s6
    ctx->pc = 0x310bd8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 22)));
    // 0x310bdc: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x310bdcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x310be0: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x310be0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x310be4: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x310be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310be8: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x310be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x310bec: 0xa2100  sll         $a0, $t2, 4
    ctx->pc = 0x310becu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x310bf0: 0xe1100  sll         $v0, $t6, 4
    ctx->pc = 0x310bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x310bf4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x310bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x310bf8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x310bf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x310bfc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x310bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x310c00: 0x1d53821  addu        $a3, $t6, $s5
    ctx->pc = 0x310c00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 21)));
    // 0x310c04: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x310c04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x310c08: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x310c08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x310c0c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x310c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x310c10: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x310c10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x310c14: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x310c14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x310c18: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x310c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x310c1c: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x310c1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x310c20: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x310c20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x310c24: 0xb42825  or          $a1, $a1, $s4
    ctx->pc = 0x310c24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 20));
    // 0x310c28: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x310c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x310c2c: 0xff050008  sd          $a1, 0x8($t8)
    ctx->pc = 0x310c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 5));
    // 0x310c30: 0xff060000  sd          $a2, 0x0($t8)
    ctx->pc = 0x310c30u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 6));
    // 0x310c34: 0x26781db0  addiu       $t8, $s3, 0x1DB0
    ctx->pc = 0x310c34u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 7600));
    // 0x310c38: 0x1031825  or          $v1, $t0, $v1
    ctx->pc = 0x310c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x310c3c: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x310c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
    // 0x310c40: 0xff030000  sd          $v1, 0x0($t8)
    ctx->pc = 0x310c40u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 3));
    // 0x310c44: 0xff040008  sd          $a0, 0x8($t8)
    ctx->pc = 0x310c44u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 4));
    // 0x310c48: 0x26781dc0  addiu       $t8, $s3, 0x1DC0
    ctx->pc = 0x310c48u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 7616));
label_310c4c:
    // 0x310c4c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x310c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x310c50: 0x16e20045  bne         $s7, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x310C50u;
    {
        const bool branch_taken_0x310c50 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x310C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C50u;
        // 0x310c54: 0x8fa801b0  lw          $t0, 0x1B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310c50) {
            ctx->pc = 0x310D68u;
            goto label_310d68;
        }
    }
    ctx->pc = 0x310C58u;
    // 0x310c58: 0x8fa70168  lw          $a3, 0x168($sp)
    ctx->pc = 0x310c58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x310c5c: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x310c5cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x310c60: 0x8fb90190  lw          $t9, 0x190($sp)
    ctx->pc = 0x310c60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x310c64: 0x160482d  daddu       $t1, $t3, $zero
    ctx->pc = 0x310c64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310c68: 0x2071023  subu        $v0, $s0, $a3
    ctx->pc = 0x310c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x310c6c: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x310c6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x310c70: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x310c70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x310c74: 0x3325821  addu        $t3, $t9, $s2
    ctx->pc = 0x310c74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 18)));
    // 0x310c78: 0x2071021  addu        $v0, $s0, $a3
    ctx->pc = 0x310c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x310c7c: 0xa3900  sll         $a3, $t2, 4
    ctx->pc = 0x310c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x310c80: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x310c80u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x310c84: 0x2112821  addu        $a1, $s0, $s1
    ctx->pc = 0x310c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x310c88: 0xe5100  sll         $t2, $t6, 4
    ctx->pc = 0x310c88u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x310c8c: 0x1f62021  addu        $a0, $t7, $s6
    ctx->pc = 0x310c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 22)));
    // 0x310c90: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x310c90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x310c94: 0x1d51021  addu        $v0, $t6, $s5
    ctx->pc = 0x310c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 21)));
    // 0x310c98: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x310c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x310c9c: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x310c9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x310ca0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x310ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x310ca4: 0x196100  sll         $t4, $t9, 4
    ctx->pc = 0x310ca4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 25), 4));
    // 0x310ca8: 0xf1900  sll         $v1, $t7, 4
    ctx->pc = 0x310ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x310cac: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x310cacu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x310cb0: 0x1494825  or          $t1, $t2, $t1
    ctx->pc = 0x310cb0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
    // 0x310cb4: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x310cb4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x310cb8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x310cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x310cbc: 0x2114021  addu        $t0, $s0, $s1
    ctx->pc = 0x310cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x310cc0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x310cc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x310cc4: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x310cc4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x310cc8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x310cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x310ccc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x310cccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x310cd0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x310cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x310cd4: 0x105100  sll         $t2, $s0, 4
    ctx->pc = 0x310cd4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x310cd8: 0x473825  or          $a3, $v0, $a3
    ctx->pc = 0x310cd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x310cdc: 0xe1100  sll         $v0, $t6, 4
    ctx->pc = 0x310cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x310ce0: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x310ce0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x310ce4: 0x1863025  or          $a2, $t4, $a2
    ctx->pc = 0x310ce4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) | GPR_U64(ctx, 6));
    // 0x310ce8: 0x1d56821  addu        $t5, $t6, $s5
    ctx->pc = 0x310ce8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 21)));
    // 0x310cec: 0x1344825  or          $t1, $t1, $s4
    ctx->pc = 0x310cecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 20));
    // 0x310cf0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x310cf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x310cf4: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x310cf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x310cf8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x310cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x310cfc: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x310cfcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x310d00: 0xff060000  sd          $a2, 0x0($t8)
    ctx->pc = 0x310d00u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 6));
    // 0x310d04: 0xff090008  sd          $t1, 0x8($t8)
    ctx->pc = 0x310d04u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 9));
    // 0x310d08: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x310d08u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x310d0c: 0x1652825  or          $a1, $t3, $a1
    ctx->pc = 0x310d0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) | GPR_U64(ctx, 5));
    // 0x310d10: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x310d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x310d14: 0xf43825  or          $a3, $a3, $s4
    ctx->pc = 0x310d14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 20));
    // 0x310d18: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x310d18u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x310d1c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x310d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x310d20: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x310d20u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x310d24: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x310d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x310d28: 0xff050000  sd          $a1, 0x0($t8)
    ctx->pc = 0x310d28u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 5));
    // 0x310d2c: 0xff070008  sd          $a3, 0x8($t8)
    ctx->pc = 0x310d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 7));
    // 0x310d30: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x310d30u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x310d34: 0x18a6025  or          $t4, $t4, $t2
    ctx->pc = 0x310d34u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 10));
    // 0x310d38: 0x1a42025  or          $a0, $t5, $a0
    ctx->pc = 0x310d38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) | GPR_U64(ctx, 4));
    // 0x310d3c: 0x741825  or          $v1, $v1, $s4
    ctx->pc = 0x310d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 20));
    // 0x310d40: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x310d40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x310d44: 0xff0c0000  sd          $t4, 0x0($t8)
    ctx->pc = 0x310d44u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 12));
    // 0x310d48: 0x1685825  or          $t3, $t3, $t0
    ctx->pc = 0x310d48u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 8));
    // 0x310d4c: 0xff030008  sd          $v1, 0x8($t8)
    ctx->pc = 0x310d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 3));
    // 0x310d50: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x310d50u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x310d54: 0x942025  or          $a0, $a0, $s4
    ctx->pc = 0x310d54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 20));
    // 0x310d58: 0xff0b0000  sd          $t3, 0x0($t8)
    ctx->pc = 0x310d58u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 11));
    // 0x310d5c: 0xff040008  sd          $a0, 0x8($t8)
    ctx->pc = 0x310d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 8), GPR_U64(ctx, 4));
    // 0x310d60: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x310d60u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x310d64: 0x8fa801b0  lw          $t0, 0x1B0($sp)
    ctx->pc = 0x310d64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
label_310d68:
    // 0x310d68: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x310D68u;
    {
        const bool branch_taken_0x310d68 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x310D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D68u;
        // 0x310d6c: 0x8fa90134  lw          $t1, 0x134($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d68) {
            ctx->pc = 0x310D88u;
            goto label_310d88;
        }
    }
    ctx->pc = 0x310D70u;
    // 0x310d70: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x310d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x310d74: 0xaf020000  sw          $v0, 0x0($t8)
    ctx->pc = 0x310d74u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 2));
    // 0x310d78: 0x25231e00  addiu       $v1, $t1, 0x1E00
    ctx->pc = 0x310d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 7680));
    // 0x310d7c: 0xaf00000c  sw          $zero, 0xC($t8)
    ctx->pc = 0x310d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 0));
    // 0x310d80: 0xaf030004  sw          $v1, 0x4($t8)
    ctx->pc = 0x310d80u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4), GPR_U32(ctx, 3));
    // 0x310d84: 0xaf000008  sw          $zero, 0x8($t8)
    ctx->pc = 0x310d84u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 0));
label_310d88:
    // 0x310d88: 0xdfb001c0  ld          $s0, 0x1C0($sp)
    ctx->pc = 0x310d88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x310d8c: 0xdfb101c8  ld          $s1, 0x1C8($sp)
    ctx->pc = 0x310d8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x310d90: 0xdfb201d0  ld          $s2, 0x1D0($sp)
    ctx->pc = 0x310d90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x310d94: 0xdfb301d8  ld          $s3, 0x1D8($sp)
    ctx->pc = 0x310d94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x310d98: 0xdfb401e0  ld          $s4, 0x1E0($sp)
    ctx->pc = 0x310d98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x310d9c: 0xdfb501e8  ld          $s5, 0x1E8($sp)
    ctx->pc = 0x310d9cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x310da0: 0xdfb601f0  ld          $s6, 0x1F0($sp)
    ctx->pc = 0x310da0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x310da4: 0xdfb701f8  ld          $s7, 0x1F8($sp)
    ctx->pc = 0x310da4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x310da8: 0xdfbe0200  ld          $fp, 0x200($sp)
    ctx->pc = 0x310da8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x310dac: 0xdfbf0208  ld          $ra, 0x208($sp)
    ctx->pc = 0x310dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x310db0: 0x3e00008  jr          $ra
    ctx->pc = 0x310DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DB0u;
        // 0x310db4: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310DB8u;
}
