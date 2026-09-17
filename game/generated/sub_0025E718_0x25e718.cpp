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

// Function: sub_0025E718
// Address: 0x25e718 - 0x25e948
void sub_0025E718_0x25e718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E718_0x25e718");
#endif

    switch (ctx->pc) {
        case 0x25e7e0u: goto label_25e7e0;
        case 0x25e848u: goto label_25e848;
        case 0x25e860u: goto label_25e860;
        case 0x25e8b0u: goto label_25e8b0;
        case 0x25e8c4u: goto label_25e8c4;
        case 0x25e8f0u: goto label_25e8f0;
        default: break;
    }

    ctx->pc = 0x25e718u;

    // 0x25e718: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x25e718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x25e71c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25e71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25e720: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x25e720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e724: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25e724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25e728: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x25e728u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e72c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x25e72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x25e730: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x25e730u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e734: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x25e734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x25e738: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x25e738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25e73c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x25e73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x25e740: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x25e740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x25e744: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x25e744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x25e748: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25e748u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25e74c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x25e74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x25e750: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x25e750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x25e754: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x25e754u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x25e758: 0x86230012  lh          $v1, 0x12($s1)
    ctx->pc = 0x25e758u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x25e75c: 0x94440838  lhu         $a0, 0x838($v0)
    ctx->pc = 0x25e75cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2104)));
    // 0x25e760: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x25e760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25e764: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x25e764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25e768: 0x30844000  andi        $a0, $a0, 0x4000
    ctx->pc = 0x25e768u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x25e76c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x25e76cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x25e770: 0x3c150017  lui         $s5, 0x17
    ctx->pc = 0x25e770u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)23 << 16));
    // 0x25e774: 0x26b5e750  addiu       $s5, $s5, -0x18B0
    ctx->pc = 0x25e774u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294960976));
    // 0x25e778: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x25e778u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x25e77c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25E77Cu;
    {
        const bool branch_taken_0x25e77c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E77Cu;
        // 0x25e780: 0x2442082c  addiu       $v0, $v0, 0x82C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2092));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e77c) {
            ctx->pc = 0x25E790u;
            goto label_25e790;
        }
    }
    ctx->pc = 0x25E784u;
    // 0x25e784: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25E784u;
    {
        const bool branch_taken_0x25e784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E784u;
        // 0x25e788: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e784) {
            ctx->pc = 0x25E794u;
            goto label_25e794;
        }
    }
    ctx->pc = 0x25E78Cu;
    // 0x25e78c: 0x0  nop
    ctx->pc = 0x25e78cu;
    // NOP
label_25e790:
    // 0x25e790: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x25e790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25e794:
    // 0x25e794: 0x24530008  addiu       $s3, $v0, 0x8
    ctx->pc = 0x25e794u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x25e798: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x25e798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e79c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x25e79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25e7a0: 0xc7828b78  lwc1        $f2, -0x7488($gp)
    ctx->pc = 0x25e7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25e7a4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25e7a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25e7a8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x25e7a8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x25e7ac: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x25e7acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25e7b0: 0x45020019  bc1fl       . + 4 + (0x19 << 2)
    ctx->pc = 0x25E7B0u;
    {
        const bool branch_taken_0x25e7b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25e7b0) {
            ctx->pc = 0x25E7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E7B0u;
            // 0x25e7b4: 0x96620004  lhu         $v0, 0x4($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E818u;
            goto label_25e818;
        }
    }
    ctx->pc = 0x25E7B8u;
    // 0x25e7b8: 0x96a30006  lhu         $v1, 0x6($s5)
    ctx->pc = 0x25e7b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x25e7bc: 0x96620006  lhu         $v0, 0x6($s3)
    ctx->pc = 0x25e7bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x25e7c0: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x25E7C0u;
    {
        const bool branch_taken_0x25e7c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E7C0u;
        // 0x25e7c4: 0x96620004  lhu         $v0, 0x4($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e7c0) {
            ctx->pc = 0x25E818u;
            goto label_25e818;
        }
    }
    ctx->pc = 0x25E7C8u;
    // 0x25e7c8: 0x96a30004  lhu         $v1, 0x4($s5)
    ctx->pc = 0x25e7c8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x25e7cc: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25E7CCu;
    {
        const bool branch_taken_0x25e7cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E7CCu;
        // 0x25e7d0: 0x2412000e  addiu       $s2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e7cc) {
            ctx->pc = 0x25E818u;
            goto label_25e818;
        }
    }
    ctx->pc = 0x25E7D4u;
    // 0x25e7d4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x25e7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x25e7d8: 0x503023  subu        $a2, $v0, $s0
    ctx->pc = 0x25e7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x25e7dc: 0x0  nop
    ctx->pc = 0x25e7dcu;
    // NOP
label_25e7e0:
    // 0x25e7e0: 0x8e220894  lw          $v0, 0x894($s1)
    ctx->pc = 0x25e7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2196)));
    // 0x25e7e4: 0xd22021  addu        $a0, $a2, $s2
    ctx->pc = 0x25e7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x25e7e8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x25e7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x25e7ec: 0x122900  sll         $a1, $s2, 4
    ctx->pc = 0x25e7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x25e7f0: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x25e7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x25e7f4: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x25e7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x25e7f8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x25e7f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x25e7fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x25e7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25e800: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x25e800u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25e804: 0x641fff6  bgez        $s2, . + 4 + (-0xA << 2)
    ctx->pc = 0x25E804u;
    {
        const bool branch_taken_0x25e804 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x25E808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E804u;
        // 0x25e808: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e804) {
            ctx->pc = 0x25E7E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e7e0;
        }
    }
    ctx->pc = 0x25E80Cu;
    // 0x25e80c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x25E80Cu;
    {
        const bool branch_taken_0x25e80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E80Cu;
        // 0x25e810: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e80c) {
            ctx->pc = 0x25E920u;
            goto label_25e920;
        }
    }
    ctx->pc = 0x25E814u;
    // 0x25e814: 0x0  nop
    ctx->pc = 0x25e814u;
    // NOP
label_25e818:
    // 0x25e818: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x25E818u;
    {
        const bool branch_taken_0x25e818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e818) {
            ctx->pc = 0x25E81Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E818u;
            // 0x25e81c: 0x96660004  lhu         $a2, 0x4($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E850u;
            goto label_25e850;
        }
    }
    ctx->pc = 0x25E820u;
    // 0x25e820: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x25e820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25e824: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25e824u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x25e828: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25e828u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25e82c: 0x28420020  slti        $v0, $v0, 0x20
    ctx->pc = 0x25e82cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x25e830: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x25E830u;
    {
        const bool branch_taken_0x25e830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e830) {
            ctx->pc = 0x25E834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E830u;
            // 0x25e834: 0x96660004  lhu         $a2, 0x4($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E850u;
            goto label_25e850;
        }
    }
    ctx->pc = 0x25E838u;
    // 0x25e838: 0x8e220894  lw          $v0, 0x894($s1)
    ctx->pc = 0x25e838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2196)));
    // 0x25e83c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25e83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e840: 0xc09794c  jal         func_25E530
    ctx->pc = 0x25E840u;
    SET_GPR_U32(ctx, 31, 0x25E848u);
    ctx->pc = 0x25E844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E840u;
    // 0x25e844: 0x8c450050  lw          $a1, 0x50($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E530u, 0x25E840u, 0x25E848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E848u;
label_25e848:
    // 0x25e848: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25E848u;
    {
        const bool branch_taken_0x25e848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E848u;
        // 0x25e84c: 0x8e220894  lw          $v0, 0x894($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e848) {
            ctx->pc = 0x25E86Cu;
            goto label_25e86c;
        }
    }
    ctx->pc = 0x25E850u;
label_25e850:
    // 0x25e850: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x25e850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e854: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x25e854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25e858: 0xc0972e4  jal         func_25CB90
    ctx->pc = 0x25E858u;
    SET_GPR_U32(ctx, 31, 0x25E860u);
    ctx->pc = 0x25E85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E858u;
    // 0x25e85c: 0x30c63fff  andi        $a2, $a2, 0x3FFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB90u, 0x25E858u, 0x25E860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E860u;
label_25e860:
    // 0x25e860: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x25E860u;
    {
        const bool branch_taken_0x25e860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25e860) {
            ctx->pc = 0x25E864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25E860u;
            // 0x25e864: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25E920u;
            goto label_25e920;
        }
    }
    ctx->pc = 0x25E868u;
    // 0x25e868: 0x8e220894  lw          $v0, 0x894($s1)
    ctx->pc = 0x25e868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2196)));
label_25e86c:
    // 0x25e86c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x25e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x25e870: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x25e870u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25e874: 0x269000e0  addiu       $s0, $s4, 0xE0
    ctx->pc = 0x25e874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 224));
    // 0x25e878: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x25e878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x25e87c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x25e87cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x25e880: 0x96650006  lhu         $a1, 0x6($s3)
    ctx->pc = 0x25e880u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
    // 0x25e884: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25e884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25e888: 0x18a00017  blez        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x25E888u;
    {
        const bool branch_taken_0x25e888 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x25E88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E888u;
        // 0x25e88c: 0x249100e0  addiu       $s1, $a0, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e888) {
            ctx->pc = 0x25E8E8u;
            goto label_25e8e8;
        }
    }
    ctx->pc = 0x25E890u;
    // 0x25e890: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x25e890u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25e894: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25e894u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25e898: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25e898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25e89c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25e89cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25e8a0: 0x2412000e  addiu       $s2, $zero, 0xE
    ctx->pc = 0x25e8a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x25e8a4: 0x0  nop
    ctx->pc = 0x25e8a4u;
    // NOP
    // 0x25e8a8: 0x0  nop
    ctx->pc = 0x25e8a8u;
    // NOP
    // 0x25e8ac: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x25e8acu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
label_25e8b0:
    // 0x25e8b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25e8b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e8b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25e8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e8b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x25e8b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25e8bc: 0xc097110  jal         func_25C440
    ctx->pc = 0x25E8BCu;
    SET_GPR_U32(ctx, 31, 0x25E8C4u);
    ctx->pc = 0x25E8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E8BCu;
    // 0x25e8c0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C440u, 0x25E8BCu, 0x25E8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E8C4u;
label_25e8c4:
    // 0x25e8c4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x25e8c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25e8c8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x25e8c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x25e8cc: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x25e8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x25e8d0: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x25e8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x25e8d4: 0x641fff6  bgez        $s2, . + 4 + (-0xA << 2)
    ctx->pc = 0x25E8D4u;
    {
        const bool branch_taken_0x25e8d4 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x25E8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E8D4u;
        // 0x25e8d8: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e8d4) {
            ctx->pc = 0x25E8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e8b0;
        }
    }
    ctx->pc = 0x25E8DCu;
    // 0x25e8dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x25E8DCu;
    {
        const bool branch_taken_0x25e8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e8dc) {
            ctx->pc = 0x25E90Cu;
            goto label_25e90c;
        }
    }
    ctx->pc = 0x25E8E4u;
    // 0x25e8e4: 0x0  nop
    ctx->pc = 0x25e8e4u;
    // NOP
label_25e8e8:
    // 0x25e8e8: 0x2412000e  addiu       $s2, $zero, 0xE
    ctx->pc = 0x25e8e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x25e8ec: 0x0  nop
    ctx->pc = 0x25e8ecu;
    // NOP
label_25e8f0:
    // 0x25e8f0: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x25e8f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25e8f4: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x25e8f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x25e8f8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x25e8f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x25e8fc: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x25e8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x25e900: 0x0  nop
    ctx->pc = 0x25e900u;
    // NOP
    // 0x25e904: 0x641fffa  bgez        $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x25E904u;
    {
        const bool branch_taken_0x25e904 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x25E908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E904u;
        // 0x25e908: 0x2631fff0  addiu       $s1, $s1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25e904) {
            ctx->pc = 0x25E8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25e8f0;
        }
    }
    ctx->pc = 0x25E90Cu;
label_25e90c:
    // 0x25e90c: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x25e90cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x25e910: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x25e910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x25e914: 0xb2a20007  sdl         $v0, 0x7($s5)
    ctx->pc = 0x25e914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25e918: 0xb6a20000  sdr         $v0, 0x0($s5)
    ctx->pc = 0x25e918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25e91c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25e91cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25e920:
    // 0x25e920: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25e920u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25e924: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x25e924u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e928: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x25e928u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25e92c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x25e92cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e930: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x25e930u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25e934: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x25e934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e938: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x25e938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25e93c: 0x3e00008  jr          $ra
    ctx->pc = 0x25E93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E93Cu;
        // 0x25e940: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E93Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E944u;
    // 0x25e944: 0x0  nop
    ctx->pc = 0x25e944u;
    // NOP
    ctx->pc = 0x25e948u;
}
