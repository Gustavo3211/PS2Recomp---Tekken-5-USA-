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

// Function: sub_00221750
// Address: 0x221750 - 0x221940
void sub_00221750_0x221750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221750_0x221750");
#endif

    switch (ctx->pc) {
        case 0x2217c8u: goto label_2217c8;
        default: break;
    }

    ctx->pc = 0x221750u;

    // 0x221750: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x221750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x221754: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x221754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x221758: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x221758u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22175c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x22175cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x221760: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x221760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221764: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x221764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x221768: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x221768u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22176c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x22176cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x221770: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x221770u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221774: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x221774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x221778: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x221778u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22177c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x22177cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x221780: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x221780u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221784: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x221784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221788: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x221788u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22178c: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x22178cu;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221790: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x221790u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x221794: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x221794u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x221798: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x221798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x22179c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x22179cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2217a0: 0xda900000  lqc2        $vf16, 0x0($s4)
    ctx->pc = 0x2217a0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2217a4: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x2217a4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2217a8: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x2217a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2217ac: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x2217acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2217b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2217b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2217b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2217b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2217b8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2217b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2217bc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2217bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2217c0: 0xc08859c  jal         func_221670
    ctx->pc = 0x2217C0u;
    SET_GPR_U32(ctx, 31, 0x2217C8u);
    ctx->pc = 0x2217C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2217C0u;
    // 0x2217c4: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221670u, 0x2217C0u, 0x2217C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2217C8u;
label_2217c8:
    // 0x2217c8: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2217C8u;
    {
        const bool branch_taken_0x2217c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2217CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2217C8u;
        // 0x2217cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2217c8) {
            ctx->pc = 0x22191Cu;
            goto label_22191c;
        }
    }
    ctx->pc = 0x2217D0u;
    // 0x2217d0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2217d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2217d4: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2217d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2217d8: 0x460008e9  min.s       $f3, $f1, $f0
    ctx->pc = 0x2217d8u;
    ctx->f[3] = std::min(ctx->f[1], ctx->f[0]);
    // 0x2217dc: 0x46000968  max.s       $f5, $f1, $f0
    ctx->pc = 0x2217dcu;
    ctx->f[5] = std::max(ctx->f[1], ctx->f[0]);
    // 0x2217e0: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x2217e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2217e4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2217e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2217e8: 0x460011e9  min.s       $f7, $f2, $f0
    ctx->pc = 0x2217e8u;
    ctx->f[7] = std::min(ctx->f[2], ctx->f[0]);
    // 0x2217ec: 0x46001068  max.s       $f1, $f2, $f0
    ctx->pc = 0x2217ecu;
    ctx->f[1] = std::max(ctx->f[2], ctx->f[0]);
    // 0x2217f0: 0xc78984a8  lwc1        $f9, -0x7B58($gp)
    ctx->pc = 0x2217f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2217f4: 0xc6460000  lwc1        $f6, 0x0($s2)
    ctx->pc = 0x2217f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2217f8: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2217f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2217fc: 0x460932c0  add.s       $f11, $f6, $f9
    ctx->pc = 0x2217fcu;
    ctx->f[11] = FPU_ADD_S(ctx->f[6], ctx->f[9]);
    // 0x221800: 0x460358c1  sub.s       $f3, $f11, $f3
    ctx->pc = 0x221800u;
    ctx->f[3] = FPU_SUB_S(ctx->f[11], ctx->f[3]);
    // 0x221804: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x221804u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221808: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x221808u;
    {
        const bool branch_taken_0x221808 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22180Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221808u;
        // 0x22180c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221808) {
            ctx->pc = 0x221814u;
            goto label_221814;
        }
    }
    ctx->pc = 0x221810u;
    // 0x221810: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x221810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221814:
    // 0x221814: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x221814u;
    {
        const bool branch_taken_0x221814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221814u;
        // 0x221818: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221814) {
            ctx->pc = 0x22191Cu;
            goto label_22191c;
        }
    }
    ctx->pc = 0x22181Cu;
    // 0x22181c: 0x46092800  add.s       $f0, $f5, $f9
    ctx->pc = 0x22181cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[9]);
    // 0x221820: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x221820u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x221824: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x221824u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221828: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x221828u;
    {
        const bool branch_taken_0x221828 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221828u;
        // 0x22182c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221828) {
            ctx->pc = 0x221834u;
            goto label_221834;
        }
    }
    ctx->pc = 0x221830u;
    // 0x221830: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x221830u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221834:
    // 0x221834: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x221834u;
    {
        const bool branch_taken_0x221834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221834u;
        // 0x221838: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221834) {
            ctx->pc = 0x22191Cu;
            goto label_22191c;
        }
    }
    ctx->pc = 0x22183Cu;
    // 0x22183c: 0xc6450008  lwc1        $f5, 0x8($s2)
    ctx->pc = 0x22183cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x221840: 0x46092a80  add.s       $f10, $f5, $f9
    ctx->pc = 0x221840u;
    ctx->f[10] = FPU_ADD_S(ctx->f[5], ctx->f[9]);
    // 0x221844: 0x46075001  sub.s       $f0, $f10, $f7
    ctx->pc = 0x221844u;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[7]);
    // 0x221848: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x221848u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22184c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22184Cu;
    {
        const bool branch_taken_0x22184c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x221850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22184Cu;
        // 0x221850: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22184c) {
            ctx->pc = 0x221858u;
            goto label_221858;
        }
    }
    ctx->pc = 0x221854u;
    // 0x221854: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x221854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221858:
    // 0x221858: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x221858u;
    {
        const bool branch_taken_0x221858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221858u;
        // 0x22185c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221858) {
            ctx->pc = 0x22191Cu;
            goto label_22191c;
        }
    }
    ctx->pc = 0x221860u;
    // 0x221860: 0x46090800  add.s       $f0, $f1, $f9
    ctx->pc = 0x221860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x221864: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x221864u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x221868: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x221868u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22186c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x22186Cu;
    {
        const bool branch_taken_0x22186c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x221870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22186Cu;
        // 0x221870: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22186c) {
            ctx->pc = 0x221878u;
            goto label_221878;
        }
    }
    ctx->pc = 0x221874u;
    // 0x221874: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x221874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221878:
    // 0x221878: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x221878u;
    {
        const bool branch_taken_0x221878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221878u;
        // 0x22187c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221878) {
            ctx->pc = 0x22191Cu;
            goto label_22191c;
        }
    }
    ctx->pc = 0x221880u;
    // 0x221880: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x221880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x221884: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x221884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221888: 0x460008e9  min.s       $f3, $f1, $f0
    ctx->pc = 0x221888u;
    ctx->f[3] = std::min(ctx->f[1], ctx->f[0]);
    // 0x22188c: 0x460009e8  max.s       $f7, $f1, $f0
    ctx->pc = 0x22188cu;
    ctx->f[7] = std::max(ctx->f[1], ctx->f[0]);
    // 0x221890: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x221890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x221894: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x221894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x221898: 0x46001229  min.s       $f8, $f2, $f0
    ctx->pc = 0x221898u;
    ctx->f[8] = std::min(ctx->f[2], ctx->f[0]);
    // 0x22189c: 0x46001068  max.s       $f1, $f2, $f0
    ctx->pc = 0x22189cu;
    ctx->f[1] = std::max(ctx->f[2], ctx->f[0]);
    // 0x2218a0: 0x460358c1  sub.s       $f3, $f11, $f3
    ctx->pc = 0x2218a0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[11], ctx->f[3]);
    // 0x2218a4: 0x46032036  c.le.s      $f4, $f3
    ctx->pc = 0x2218a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2218a8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2218A8u;
    {
        const bool branch_taken_0x2218a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2218ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218A8u;
        // 0x2218ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2218a8) {
            ctx->pc = 0x2218B4u;
            goto label_2218b4;
        }
    }
    ctx->pc = 0x2218B0u;
    // 0x2218b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2218b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2218b4:
    // 0x2218b4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2218B4u;
    {
        const bool branch_taken_0x2218b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2218B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218B4u;
        // 0x2218b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2218b4) {
            ctx->pc = 0x22191Cu;
            goto label_22191c;
        }
    }
    ctx->pc = 0x2218BCu;
    // 0x2218bc: 0x46093800  add.s       $f0, $f7, $f9
    ctx->pc = 0x2218bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[9]);
    // 0x2218c0: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x2218c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x2218c4: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x2218c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2218c8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2218C8u;
    {
        const bool branch_taken_0x2218c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2218CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218C8u;
        // 0x2218cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2218c8) {
            ctx->pc = 0x2218D4u;
            goto label_2218d4;
        }
    }
    ctx->pc = 0x2218D0u;
    // 0x2218d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2218d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2218d4:
    // 0x2218d4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2218D4u;
    {
        const bool branch_taken_0x2218d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2218D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218D4u;
        // 0x2218d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2218d4) {
            ctx->pc = 0x22191Cu;
            goto label_22191c;
        }
    }
    ctx->pc = 0x2218DCu;
    // 0x2218dc: 0x46085001  sub.s       $f0, $f10, $f8
    ctx->pc = 0x2218dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[10], ctx->f[8]);
    // 0x2218e0: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x2218e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2218e4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2218E4u;
    {
        const bool branch_taken_0x2218e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2218E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2218E4u;
        // 0x2218e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2218e4) {
            ctx->pc = 0x2218F0u;
            goto label_2218f0;
        }
    }
    ctx->pc = 0x2218ECu;
    // 0x2218ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2218ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2218f0:
    // 0x2218f0: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2218F0u;
    {
        const bool branch_taken_0x2218f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2218f0) {
            ctx->pc = 0x2218F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2218F0u;
            // 0x2218f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22191Cu;
            goto label_22191c;
        }
    }
    ctx->pc = 0x2218F8u;
    // 0x2218f8: 0x46090800  add.s       $f0, $f1, $f9
    ctx->pc = 0x2218f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
    // 0x2218fc: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2218fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x221900: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x221900u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221904: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x221904u;
    {
        const bool branch_taken_0x221904 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x221908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221904u;
        // 0x221908: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221904) {
            ctx->pc = 0x221910u;
            goto label_221910;
        }
    }
    ctx->pc = 0x22190Cu;
    // 0x22190c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x22190cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221910:
    // 0x221910: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x221910u;
    {
        const bool branch_taken_0x221910 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x221914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221910u;
        // 0x221914: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221910) {
            ctx->pc = 0x22191Cu;
            goto label_22191c;
        }
    }
    ctx->pc = 0x221918u;
    // 0x221918: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x221918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22191c:
    // 0x22191c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x22191cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x221920: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x221920u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x221924: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x221924u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x221928: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x221928u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x22192c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22192cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x221930: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x221930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x221934: 0x3e00008  jr          $ra
    ctx->pc = 0x221934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221934u;
        // 0x221938: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22193Cu;
    // 0x22193c: 0x0  nop
    ctx->pc = 0x22193cu;
    // NOP
    ctx->pc = 0x221940u;
}
