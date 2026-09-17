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

// Function: sub_00230490
// Address: 0x230490 - 0x230608
void sub_00230490_0x230490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230490_0x230490");
#endif

    switch (ctx->pc) {
        case 0x230534u: goto label_230534;
        case 0x230574u: goto label_230574;
        case 0x2305b8u: goto label_2305b8;
        default: break;
    }

    ctx->pc = 0x230490u;

    // 0x230490: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x230490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x230494: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x230494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230498: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x230498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x23049c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x23049cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x2304a0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2304a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2304a4: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2304a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x2304a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2304a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2304ac: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2304acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x2304b0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2304b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2304b4: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x2304b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x2304b8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2304b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2304bc: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2304bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2304c0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2304c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2304c4: 0xe7ac0008  swc1        $f12, 0x8($sp)
    ctx->pc = 0x2304c4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2304c8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2304c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2304cc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2304ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2304d0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2304d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2304d4: 0x7e000000  sq          $zero, 0x0($s0)
    ctx->pc = 0x2304d4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 0));
    // 0x2304d8: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x2304d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 0));
    // 0x2304dc: 0x7e000020  sq          $zero, 0x20($s0)
    ctx->pc = 0x2304dcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 0));
    // 0x2304e0: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x2304e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2304e4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2304e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2304e8: 0x73823  negu        $a3, $a3
    ctx->pc = 0x2304e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x2304ec: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x2304ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x2304f0: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x2304f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x2304f4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2304f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2304f8: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x2304f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2304fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2304fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230500: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x230500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230504: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x230504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x230508: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x230508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x23050c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23050Cu;
    {
        const bool branch_taken_0x23050c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23050Cu;
        // 0x230510: 0xafa30024  sw          $v1, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23050c) {
            ctx->pc = 0x230520u;
            goto label_230520;
        }
    }
    ctx->pc = 0x230514u;
    // 0x230514: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x230514u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230518: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x230518u;
    {
        const bool branch_taken_0x230518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23051Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230518u;
        // 0x23051c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230518) {
            ctx->pc = 0x230528u;
            goto label_230528;
        }
    }
    ctx->pc = 0x230520u;
label_230520:
    // 0x230520: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x230520u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230524: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x230524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_230528:
    // 0x230528: 0xc78084d8  lwc1        $f0, -0x7B28($gp)
    ctx->pc = 0x230528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23052c: 0xc084a7e  jal         func_2129F8
    ctx->pc = 0x23052Cu;
    SET_GPR_U32(ctx, 31, 0x230534u);
    ctx->pc = 0x230530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23052Cu;
    // 0x230530: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2129F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2129F8u, 0x23052Cu, 0x230534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230534u;
label_230534:
    // 0x230534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230538: 0x3226ffff  andi        $a2, $s1, 0xFFFF
    ctx->pc = 0x230538u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x23053c: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x23053cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x230540: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x230540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x230544: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x230544u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x230548: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x230548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23054c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23054Cu;
    {
        const bool branch_taken_0x23054c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23054Cu;
        // 0x230550: 0xc31821  addu        $v1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23054c) {
            ctx->pc = 0x230560u;
            goto label_230560;
        }
    }
    ctx->pc = 0x230554u;
    // 0x230554: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x230554u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230558: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x230558u;
    {
        const bool branch_taken_0x230558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230558u;
        // 0x23055c: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230558) {
            ctx->pc = 0x230568u;
            goto label_230568;
        }
    }
    ctx->pc = 0x230560u;
label_230560:
    // 0x230560: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x230560u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230564: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x230564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_230568:
    // 0x230568: 0xc78084dc  lwc1        $f0, -0x7B24($gp)
    ctx->pc = 0x230568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23056c: 0xc084a46  jal         func_212918
    ctx->pc = 0x23056Cu;
    SET_GPR_U32(ctx, 31, 0x230574u);
    ctx->pc = 0x230570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23056Cu;
    // 0x230570: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212918u, 0x23056Cu, 0x230574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230574u;
label_230574:
    // 0x230574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230578: 0x3246ffff  andi        $a2, $s2, 0xFFFF
    ctx->pc = 0x230578u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)65535);
    // 0x23057c: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x23057cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x230580: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x230580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x230584: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x230584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x230588: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x230588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23058c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23058Cu;
    {
        const bool branch_taken_0x23058c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23058Cu;
        // 0x230590: 0xc31821  addu        $v1, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23058c) {
            ctx->pc = 0x2305A0u;
            goto label_2305a0;
        }
    }
    ctx->pc = 0x230594u;
    // 0x230594: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x230594u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230598: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x230598u;
    {
        const bool branch_taken_0x230598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230598u;
        // 0x23059c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230598) {
            ctx->pc = 0x2305A8u;
            goto label_2305a8;
        }
    }
    ctx->pc = 0x2305A0u;
label_2305a0:
    // 0x2305a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2305a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2305a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2305a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2305a8:
    // 0x2305a8: 0xc78184e0  lwc1        $f1, -0x7B20($gp)
    ctx->pc = 0x2305a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2305ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2305acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2305b0: 0xc084a62  jal         func_212988
    ctx->pc = 0x2305B0u;
    SET_GPR_U32(ctx, 31, 0x2305B8u);
    ctx->pc = 0x2305B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2305B0u;
    // 0x2305b4: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x212988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212988u, 0x2305B0u, 0x2305B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2305B8u;
label_2305b8:
    // 0x2305b8: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x2305b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2305bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2305bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2305c0: 0xdbb00000  lqc2        $vf16, 0x0($sp)
    ctx->pc = 0x2305c0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2305c4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2305c4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2305c8: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x2305c8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2305cc: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x2305ccu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2305d0: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x2305d0u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2305d4: 0x4bf021bc  vmulax.xyzw $ACC, $vf4, $vf16x
    ctx->pc = 0x2305d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2305d8: 0x4bf028bd  vmadday.xyzw $ACC, $vf5, $vf16y
    ctx->pc = 0x2305d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2305dc: 0x4bf030be  vmaddaz.xyzw $ACC, $vf6, $vf16z
    ctx->pc = 0x2305dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2305e0: 0x4bf03c0b  vmaddw.xyzw $vf16, $vf7, $vf16w
    ctx->pc = 0x2305e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2305e4: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2305e4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2305e8: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2305e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2305ec: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2305ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2305f0: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2305f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2305f4: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x2305f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2305f8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2305f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2305fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2305FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2305FCu;
        // 0x230600: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2305FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x230604u;
    // 0x230604: 0x0  nop
    ctx->pc = 0x230604u;
    // NOP
    ctx->pc = 0x230608u;
}
