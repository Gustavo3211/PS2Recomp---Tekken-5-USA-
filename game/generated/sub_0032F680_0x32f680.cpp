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

// Function: sub_0032F680
// Address: 0x32f680 - 0x32f928
void sub_0032F680_0x32f680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032F680_0x32f680");
#endif

    switch (ctx->pc) {
        case 0x32f6b4u: goto label_32f6b4;
        case 0x32f6fcu: goto label_32f6fc;
        case 0x32f868u: goto label_32f868;
        case 0x32f880u: goto label_32f880;
        case 0x32f8a4u: goto label_32f8a4;
        default: break;
    }

    ctx->pc = 0x32f680u;

label_32f680:
    // 0x32f680: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32f680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32f684: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32f684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32f688: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x32f688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f68c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32f68cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32f690: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x32f690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f694: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32f694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32f698: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32f698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f69c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32f69cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f6a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32f6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f6a4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x32f6a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x32f6a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x32f6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x32f6ac: 0xc0cbbf2  jal         func_32EFC8
    ctx->pc = 0x32F6ACu;
    SET_GPR_U32(ctx, 31, 0x32F6B4u);
    ctx->pc = 0x32F6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F6ACu;
    // 0x32f6b0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EFC8u, 0x32F6ACu, 0x32F6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F6B4u;
label_32f6b4:
    // 0x32f6b4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x32f6b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x32f6b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32f6b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f6bc: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x32f6bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32f6c0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x32F6C0u;
    {
        const bool branch_taken_0x32f6c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x32f6c0) {
            ctx->pc = 0x32F6E0u;
            goto label_32f6e0;
        }
    }
    ctx->pc = 0x32F6C8u;
    // 0x32f6c8: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x32f6c8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x32f6cc: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x32f6ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x32f6d0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x32f6d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32f6d4: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x32f6d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x32f6d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x32F6D8u;
    {
        const bool branch_taken_0x32f6d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32f6d8) {
            ctx->pc = 0x32F6E4u;
            goto label_32f6e4;
        }
    }
    ctx->pc = 0x32F6E0u;
label_32f6e0:
    // 0x32f6e0: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x32f6e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_32f6e4:
    // 0x32f6e4: 0xc7809628  lwc1        $f0, -0x69D8($gp)
    ctx->pc = 0x32f6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32f6e8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x32f6e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32f6ec: 0x4500003c  bc1f        . + 4 + (0x3C << 2)
    ctx->pc = 0x32F6ECu;
    {
        const bool branch_taken_0x32f6ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x32F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F6ECu;
        // 0x32f6f0: 0x4600a086  mov.s       $f2, $f20 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f6ec) {
            ctx->pc = 0x32F7E0u;
            goto label_32f7e0;
        }
    }
    ctx->pc = 0x32F6F4u;
    // 0x32f6f4: 0xc0d1080  jal         func_344200
    ctx->pc = 0x32F6F4u;
    SET_GPR_U32(ctx, 31, 0x32F6FCu);
    ctx->pc = 0x344200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344200u, 0x32F6F4u, 0x32F6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F6FCu;
label_32f6fc:
    // 0x32f6fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x32f6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f700: 0x30824000  andi        $v0, $a0, 0x4000
    ctx->pc = 0x32f700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x32f704: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32F704u;
    {
        const bool branch_taken_0x32f704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F704u;
        // 0x32f708: 0x30833fff  andi        $v1, $a0, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f704) {
            ctx->pc = 0x32F714u;
            goto label_32f714;
        }
    }
    ctx->pc = 0x32F70Cu;
    // 0x32f70c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32f70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32f710: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x32f710u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32f714:
    // 0x32f714: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32f714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x32f718: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x32f718u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x32f71c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x32f71cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x32f720: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x32f720u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x32f724: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x32f724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x32f728: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32f728u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32f72c: 0x46141041  sub.s       $f1, $f2, $f20
    ctx->pc = 0x32f72cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
    // 0x32f730: 0x24460340  addiu       $a2, $v0, 0x340
    ctx->pc = 0x32f730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x32f734: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x32f734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x32f738: 0x30828000  andi        $v0, $a0, 0x8000
    ctx->pc = 0x32f738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x32f73c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x32f73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32f740: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x32f740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x32f744: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x32f744u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x32f748: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x32f748u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x32f74c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x32f74cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f750: 0x0  nop
    ctx->pc = 0x32f750u;
    // NOP
    // 0x32f754: 0x0  nop
    ctx->pc = 0x32f754u;
    // NOP
    // 0x32f758: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x32f758u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
    // 0x32f75c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32f75cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32f760: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x32f760u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32f764: 0x30624000  andi        $v0, $v1, 0x4000
    ctx->pc = 0x32f764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x32f768: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32F768u;
    {
        const bool branch_taken_0x32f768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F768u;
        // 0x32f76c: 0x30643fff  andi        $a0, $v1, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f768) {
            ctx->pc = 0x32F778u;
            goto label_32f778;
        }
    }
    ctx->pc = 0x32F770u;
    // 0x32f770: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32f770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32f774: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x32f774u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_32f778:
    // 0x32f778: 0x46141842  mul.s       $f1, $f3, $f20
    ctx->pc = 0x32f778u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x32f77c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x32f77cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x32f780: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x32f780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x32f784: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x32f784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x32f788: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x32f788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32f78c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x32f78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32f790: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32f790u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x32f794: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x32f794u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x32f798: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x32f798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x32f79c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x32f79cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f7a0: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x32f7a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x32f7a4: 0x30a24000  andi        $v0, $a1, 0x4000
    ctx->pc = 0x32f7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x32f7a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32F7A8u;
    {
        const bool branch_taken_0x32f7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F7A8u;
        // 0x32f7ac: 0x30a33fff  andi        $v1, $a1, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f7a8) {
            ctx->pc = 0x32F7B8u;
            goto label_32f7b8;
        }
    }
    ctx->pc = 0x32F7B0u;
    // 0x32f7b0: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x32f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x32f7b4: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x32f7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_32f7b8:
    // 0x32f7b8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x32f7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32f7bc: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x32f7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x32f7c0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x32f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x32f7c4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x32f7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x32f7c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x32f7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32f7cc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x32f7ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x32f7d0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x32f7d0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f7d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x32F7D4u;
    {
        const bool branch_taken_0x32f7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32F7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F7D4u;
        // 0x32f7d8: 0x46020082  mul.s       $f2, $f0, $f2 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f7d4) {
            ctx->pc = 0x32F7ECu;
            goto label_32f7ec;
        }
    }
    ctx->pc = 0x32F7DCu;
    // 0x32f7dc: 0x0  nop
    ctx->pc = 0x32f7dcu;
    // NOP
label_32f7e0:
    // 0x32f7e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32f7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x32f7e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x32f7e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32f7e8: 0x46140041  sub.s       $f1, $f0, $f20
    ctx->pc = 0x32f7e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_32f7ec:
    // 0x32f7ec: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x32f7ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x32f7f0: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x32f7f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32f7f4: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x32f7f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x32f7f8: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x32f7f8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x32f7fc: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x32f7fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x32f800: 0x4be309bc  vmulax.xyzw $ACC, $vf1, $vf3x
    ctx->pc = 0x32f800u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x32f804: 0x4be41048  vmaddx.xyzw $vf1, $vf2, $vf4x
    ctx->pc = 0x32f804u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32f808: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x32f808u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32f80c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x32f80cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f810: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32f810u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f814: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32f814u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32f818: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32f818u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32f81c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x32f81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32f820: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x32f820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x32f824: 0x3e00008  jr          $ra
    ctx->pc = 0x32F824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F824u;
        // 0x32f828: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F82Cu;
    // 0x32f82c: 0x0  nop
    ctx->pc = 0x32f82cu;
    // NOP
    // 0x32f830: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x32f830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32f834: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x32f834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x32f838: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x32f838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f83c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x32f83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x32f840: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x32f840u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f844: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x32f844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f848: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x32f848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f84c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x32f84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x32f850: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x32f850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f854: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x32f854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x32f858: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x32f858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x32f85c: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x32f85cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x32f860: 0xc0cbda0  jal         func_32F680
    ctx->pc = 0x32F860u;
    SET_GPR_U32(ctx, 31, 0x32F868u);
    ctx->pc = 0x32F864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F860u;
    // 0x32f864: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F680u;
    goto label_32f680;
    ctx->pc = 0x32F868u;
label_32f868:
    // 0x32f868: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32f868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f86c: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x32f86cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32f870: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x32f870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f874: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32f874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f878: 0xc0cbda0  jal         func_32F680
    ctx->pc = 0x32F878u;
    SET_GPR_U32(ctx, 31, 0x32F880u);
    ctx->pc = 0x32F87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F878u;
    // 0x32f87c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F680u;
    goto label_32f680;
    ctx->pc = 0x32F880u;
label_32f880:
    // 0x32f880: 0x4614a000  add.s       $f0, $f20, $f20
    ctx->pc = 0x32f880u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x32f884: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x32f884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x32f888: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x32f888u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x32f88c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32f88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f890: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32f890u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f894: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32f894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f898: 0x46146301  sub.s       $f12, $f12, $f20
    ctx->pc = 0x32f898u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    // 0x32f89c: 0xc0cbda0  jal         func_32F680
    ctx->pc = 0x32F89Cu;
    SET_GPR_U32(ctx, 31, 0x32F8A4u);
    ctx->pc = 0x32F8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F89Cu;
    // 0x32f8a0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F680u;
    goto label_32f680;
    ctx->pc = 0x32F8A4u;
label_32f8a4:
    // 0x32f8a4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x32f8a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32f8a8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x32f8a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32f8ac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x32f8acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32f8b0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x32f8b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x32f8b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x32f8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x32f8b8: 0xc7b40048  lwc1        $f20, 0x48($sp)
    ctx->pc = 0x32f8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x32f8bc: 0x3e00008  jr          $ra
    ctx->pc = 0x32F8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32F8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F8BCu;
        // 0x32f8c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F8C4u;
    // 0x32f8c4: 0x0  nop
    ctx->pc = 0x32f8c4u;
    // NOP
    // 0x32f8c8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32f8c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f8cc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32f8ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32f8d0: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x32f8d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32f8d4: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x32f8d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32f8d8: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x32f8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32f8dc: 0x3e00008  jr          $ra
    ctx->pc = 0x32F8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F8DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F8E4u;
    // 0x32f8e4: 0x0  nop
    ctx->pc = 0x32f8e4u;
    // NOP
    // 0x32f8e8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32f8e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f8ec: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32f8ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32f8f0: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x32f8f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32f8f4: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x32f8f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32f8f8: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x32f8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32f8fc: 0x3e00008  jr          $ra
    ctx->pc = 0x32F8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F904u;
    // 0x32f904: 0x0  nop
    ctx->pc = 0x32f904u;
    // NOP
    // 0x32f908: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x32f908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f90c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x32f90cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32f910: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x32f910u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32f914: 0x4be2086c  vsub.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x32f914u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x32f918: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x32f918u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x32f91c: 0x3e00008  jr          $ra
    ctx->pc = 0x32F91Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32F91Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32F924u;
    // 0x32f924: 0x0  nop
    ctx->pc = 0x32f924u;
    // NOP
    ctx->pc = 0x32f928u;
}
