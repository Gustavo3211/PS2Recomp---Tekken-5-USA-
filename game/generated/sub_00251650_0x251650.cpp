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

// Function: sub_00251650
// Address: 0x251650 - 0x251b78
void sub_00251650_0x251650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251650_0x251650");
#endif

    switch (ctx->pc) {
        case 0x25168cu: goto label_25168c;
        case 0x25169cu: goto label_25169c;
        case 0x2516b0u: goto label_2516b0;
        case 0x251ac4u: goto label_251ac4;
        default: break;
    }

    ctx->pc = 0x251650u;

    // 0x251650: 0x8f82a530  lw          $v0, -0x5AD0($gp)
    ctx->pc = 0x251650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x251654: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x251654u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x251658: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x251658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x25165c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25165cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251660: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x251660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x251664: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x251664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x251668: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x251668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x25166c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x25166cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x251670: 0x10400135  beqz        $v0, . + 4 + (0x135 << 2)
    ctx->pc = 0x251670u;
    {
        const bool branch_taken_0x251670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251670u;
        // 0x251674: 0xffbf0060  sd          $ra, 0x60($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251670) {
            ctx->pc = 0x251B48u;
            goto label_251b48;
        }
    }
    ctx->pc = 0x251678u;
    // 0x251678: 0x8642011c  lh          $v0, 0x11C($s2)
    ctx->pc = 0x251678u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 284)));
    // 0x25167c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25167Cu;
    {
        const bool branch_taken_0x25167c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25167c) {
            ctx->pc = 0x251680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25167Cu;
            // 0x251680: 0x8e4400d8  lw          $a0, 0xD8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251690u;
            goto label_251690;
        }
    }
    ctx->pc = 0x251684u;
    // 0x251684: 0xc09458e  jal         func_251638
    ctx->pc = 0x251684u;
    SET_GPR_U32(ctx, 31, 0x25168Cu);
    ctx->pc = 0x251688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251684u;
    // 0x251688: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251638u, 0x251684u, 0x25168Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25168Cu;
label_25168c:
    // 0x25168c: 0x8e4400d8  lw          $a0, 0xD8($s2)
    ctx->pc = 0x25168cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
label_251690:
    // 0x251690: 0x26530070  addiu       $s3, $s2, 0x70
    ctx->pc = 0x251690u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x251694: 0xc08f418  jal         func_23D060
    ctx->pc = 0x251694u;
    SET_GPR_U32(ctx, 31, 0x25169Cu);
    ctx->pc = 0x251698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251694u;
    // 0x251698: 0x8e4500d4  lw          $a1, 0xD4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D060u, 0x251694u, 0x25169Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25169Cu;
label_25169c:
    // 0x25169c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x25169cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2516a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2516a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2516a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2516a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2516a8: 0xc0972c8  jal         func_25CB20
    ctx->pc = 0x2516A8u;
    SET_GPR_U32(ctx, 31, 0x2516B0u);
    ctx->pc = 0x2516ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2516A8u;
    // 0x2516ac: 0x26110008  addiu       $s1, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB20u, 0x2516A8u, 0x2516B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2516B0u;
label_2516b0:
    // 0x2516b0: 0x86440060  lh          $a0, 0x60($s2)
    ctx->pc = 0x2516b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x2516b4: 0x8e4600dc  lw          $a2, 0xDC($s2)
    ctx->pc = 0x2516b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x2516b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2516b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2516bc: 0xa6420062  sh          $v0, 0x62($s2)
    ctx->pc = 0x2516bcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 98), (uint16_t)GPR_U32(ctx, 2));
    // 0x2516c0: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x2516c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x2516c4: 0x862018  mult        $a0, $a0, $a2
    ctx->pc = 0x2516c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2516c8: 0x8e4300d0  lw          $v1, 0xD0($s2)
    ctx->pc = 0x2516c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x2516cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2516ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2516d0: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2516d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x2516d4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2516d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2516d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2516d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2516dc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2516dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2516e0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2516e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2516e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2516e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2516e8: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x2516e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2516ec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2516ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2516f0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2516f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2516f4: 0x7ca00000  sq          $zero, 0x0($a1)
    ctx->pc = 0x2516f4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 0));
    // 0x2516f8: 0x7ca00010  sq          $zero, 0x10($a1)
    ctx->pc = 0x2516f8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 0));
    // 0x2516fc: 0x7ca00020  sq          $zero, 0x20($a1)
    ctx->pc = 0x2516fcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 0));
    // 0x251700: 0xfa600030  sqc2        $vf0, 0x30($s3)
    ctx->pc = 0x251700u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x251704: 0xc7838994  lwc1        $f3, -0x766C($gp)
    ctx->pc = 0x251704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936980)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x251708: 0xae670028  sw          $a3, 0x28($s3)
    ctx->pc = 0x251708u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 7));
    // 0x25170c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x25170cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x251710: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x251710u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x251714: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x251714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251718: 0xae670014  sw          $a3, 0x14($s3)
    ctx->pc = 0x251718u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 7));
    // 0x25171c: 0xc7818998  lwc1        $f1, -0x7668($gp)
    ctx->pc = 0x25171cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251720: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x251720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251724: 0xc64200e8  lwc1        $f2, 0xE8($s2)
    ctx->pc = 0x251724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x251728: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x251728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25172c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x25172cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x251730: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x251730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251734: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x251734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x251738: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x251738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25173c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x25173cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x251740: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x251740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251744: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x251744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x251748: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x251748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x25174c: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x25174cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251750: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x251750u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x251754: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x251754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x251758: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x251758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25175c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x25175cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x251760: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x251760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x251764: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x251764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251768: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x251768u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x25176c: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x25176cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x251770: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x251770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251774: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x251774u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x251778: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x251778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x25177c: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x25177cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251780: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x251780u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x251784: 0xe6610028  swc1        $f1, 0x28($s3)
    ctx->pc = 0x251784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
    // 0x251788: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x251788u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25178c: 0xda650010  lqc2        $vf5, 0x10($s3)
    ctx->pc = 0x25178cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x251790: 0xda660020  lqc2        $vf6, 0x20($s3)
    ctx->pc = 0x251790u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x251794: 0xda670030  lqc2        $vf7, 0x30($s3)
    ctx->pc = 0x251794u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x251798: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x251798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25179c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25179cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2517a0: 0xc782899c  lwc1        $f2, -0x7664($gp)
    ctx->pc = 0x2517a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936988)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2517a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2517a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2517a8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2517A8u;
    {
        const bool branch_taken_0x2517a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2517a8) {
            ctx->pc = 0x2517ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2517A8u;
            // 0x2517ac: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2517C0u;
            goto label_2517c0;
        }
    }
    ctx->pc = 0x2517B0u;
    // 0x2517b0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2517b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2517b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2517B4u;
    {
        const bool branch_taken_0x2517b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2517B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2517B4u;
        // 0x2517b8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2517b4) {
            ctx->pc = 0x2517C4u;
            goto label_2517c4;
        }
    }
    ctx->pc = 0x2517BCu;
    // 0x2517bc: 0x0  nop
    ctx->pc = 0x2517bcu;
    // NOP
label_2517c0:
    // 0x2517c0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2517c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2517c4:
    // 0x2517c4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2517c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2517c8: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x2517c8u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2517cc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2517ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2517d0: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2517d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x2517d4: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x2517d4u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x2517d8: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x2517d8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2517dc: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x2517dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2517e0: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2517e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2517e4: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2517e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2517e8: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2517e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2517ec: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2517ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2517f0: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2517f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2517f4: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2517f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2517f8: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2517f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2517fc: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2517fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x251800: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x251800u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x251804: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x251804u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x251808: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x251808u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x25180c: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x25180cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x251810: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x251810u;
    {
        const bool branch_taken_0x251810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x251814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251810u;
        // 0x251814: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251810) {
            ctx->pc = 0x251828u;
            goto label_251828;
        }
    }
    ctx->pc = 0x251818u;
    // 0x251818: 0x4a0003bf  vwaitq
    ctx->pc = 0x251818u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25181c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25181Cu;
    {
        const bool branch_taken_0x25181c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25181Cu;
        // 0x251820: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25181c) {
            ctx->pc = 0x251830u;
            goto label_251830;
        }
    }
    ctx->pc = 0x251824u;
    // 0x251824: 0x0  nop
    ctx->pc = 0x251824u;
    // NOP
label_251828:
    // 0x251828: 0x4a0003bf  vwaitq
    ctx->pc = 0x251828u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25182c: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x25182cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_251830:
    // 0x251830: 0x4a5c0700  vaddx.z     $vf28, $vf0, $vf28x
    ctx->pc = 0x251830u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x251834: 0x4a9c0744  vsubx.y     $vf29, $vf0, $vf28x
    ctx->pc = 0x251834u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x251838: 0x4a5c0741  vaddy.z     $vf29, $vf0, $vf28y
    ctx->pc = 0x251838u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25183c: 0x4ac4e1bd  vmulay.yz   $ACC, $vf28, $vf4y
    ctx->pc = 0x25183cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x251840: 0x4ac4e90a  vmaddz.yz   $vf4, $vf29, $vf4z
    ctx->pc = 0x251840u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x251844: 0x4ac5e1bd  vmulay.yz   $ACC, $vf28, $vf5y
    ctx->pc = 0x251844u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x251848: 0x4ac5e94a  vmaddz.yz   $vf5, $vf29, $vf5z
    ctx->pc = 0x251848u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25184c: 0x4ac6e1bd  vmulay.yz   $ACC, $vf28, $vf6y
    ctx->pc = 0x25184cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x251850: 0x4ac6e98a  vmaddz.yz   $vf6, $vf29, $vf6z
    ctx->pc = 0x251850u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x251854: 0x4ac7e1bd  vmulay.yz   $ACC, $vf28, $vf7y
    ctx->pc = 0x251854u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, 0))); }
    // 0x251858: 0x4ac7e9ca  vmaddz.yz   $vf7, $vf29, $vf7z
    ctx->pc = 0x251858u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, 0); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x25185c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x25185cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251860: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x251860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251864: 0xc78289a0  lwc1        $f2, -0x7660($gp)
    ctx->pc = 0x251864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x251868: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x251868u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25186c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x25186Cu;
    {
        const bool branch_taken_0x25186c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25186c) {
            ctx->pc = 0x251870u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25186Cu;
            // 0x251870: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x251880u;
            goto label_251880;
        }
    }
    ctx->pc = 0x251874u;
    // 0x251874: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x251874u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x251878: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x251878u;
    {
        const bool branch_taken_0x251878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25187Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251878u;
        // 0x25187c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251878) {
            ctx->pc = 0x251884u;
            goto label_251884;
        }
    }
    ctx->pc = 0x251880u;
label_251880:
    // 0x251880: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x251880u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_251884:
    // 0x251884: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x251884u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x251888: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x251888u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25188c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x25188cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x251890: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x251890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x251894: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x251894u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x251898: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x251898u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25189c: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x25189cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2518a0: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x2518a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x2518a4: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x2518a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2518a8: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x2518a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2518ac: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x2518acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2518b0: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x2518b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2518b4: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x2518b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2518b8: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x2518b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2518bc: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x2518bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2518c0: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x2518c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2518c4: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x2518c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2518c8: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x2518c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x2518cc: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x2518ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2518d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2518D0u;
    {
        const bool branch_taken_0x2518d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2518D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2518D0u;
        // 0x2518d4: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2518d0) {
            ctx->pc = 0x2518E8u;
            goto label_2518e8;
        }
    }
    ctx->pc = 0x2518D8u;
    // 0x2518d8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2518d8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2518dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2518DCu;
    {
        const bool branch_taken_0x2518dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2518E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2518DCu;
        // 0x2518e0: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2518dc) {
            ctx->pc = 0x2518F0u;
            goto label_2518f0;
        }
    }
    ctx->pc = 0x2518E4u;
    // 0x2518e4: 0x0  nop
    ctx->pc = 0x2518e4u;
    // NOP
label_2518e8:
    // 0x2518e8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2518e8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2518ec: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2518ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2518f0:
    // 0x2518f0: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x2518f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2518f4: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x2518f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2518f8: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x2518f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2518fc: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x2518fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x251900: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x251900u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x251904: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x251904u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x251908: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x251908u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25190c: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x25190cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x251910: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x251910u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x251914: 0x4b47e1be  vmulaz.xz   $ACC, $vf28, $vf7z
    ctx->pc = 0x251914u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x251918: 0x4b47e9c8  vmaddx.xz   $vf7, $vf29, $vf7x
    ctx->pc = 0x251918u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x25191c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x25191cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251920: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x251920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251924: 0xc78289a4  lwc1        $f2, -0x765C($gp)
    ctx->pc = 0x251924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936996)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x251928: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x251928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25192c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x25192Cu;
    {
        const bool branch_taken_0x25192c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25192c) {
            ctx->pc = 0x251930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25192Cu;
            // 0x251930: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x251940u;
            goto label_251940;
        }
    }
    ctx->pc = 0x251934u;
    // 0x251934: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x251934u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x251938: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x251938u;
    {
        const bool branch_taken_0x251938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251938u;
        // 0x25193c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251938) {
            ctx->pc = 0x251944u;
            goto label_251944;
        }
    }
    ctx->pc = 0x251940u;
label_251940:
    // 0x251940: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x251940u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_251944:
    // 0x251944: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x251944u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x251948: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x251948u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25194c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x25194cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x251950: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x251950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x251954: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x251954u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x251958: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x251958u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25195c: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x25195cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x251960: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x251960u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x251964: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x251964u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x251968: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x251968u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25196c: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x25196cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x251970: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x251970u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x251974: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x251974u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x251978: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x251978u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25197c: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x25197cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x251980: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x251980u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x251984: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x251984u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x251988: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x251988u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x25198c: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x25198cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x251990: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x251990u;
    {
        const bool branch_taken_0x251990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x251994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251990u;
        // 0x251994: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x251990) {
            ctx->pc = 0x2519A8u;
            goto label_2519a8;
        }
    }
    ctx->pc = 0x251998u;
    // 0x251998: 0x4a0003bf  vwaitq
    ctx->pc = 0x251998u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25199c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25199Cu;
    {
        const bool branch_taken_0x25199c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2519A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25199Cu;
        // 0x2519a0: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25199c) {
            ctx->pc = 0x2519B0u;
            goto label_2519b0;
        }
    }
    ctx->pc = 0x2519A4u;
    // 0x2519a4: 0x0  nop
    ctx->pc = 0x2519a4u;
    // NOP
label_2519a8:
    // 0x2519a8: 0x4a0003bf  vwaitq
    ctx->pc = 0x2519a8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2519ac: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x2519acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_2519b0:
    // 0x2519b0: 0x4a9c0740  vaddx.y     $vf29, $vf0, $vf28x
    ctx->pc = 0x2519b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2519b4: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x2519b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2519b8: 0x4b1c0704  vsubx.x     $vf28, $vf0, $vf28x
    ctx->pc = 0x2519b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2519bc: 0x4b84e9bc  vmulax.xy   $ACC, $vf29, $vf4x
    ctx->pc = 0x2519bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x2519c0: 0x4b84e109  vmaddy.xy   $vf4, $vf28, $vf4y
    ctx->pc = 0x2519c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2519c4: 0x4b85e9bc  vmulax.xy   $ACC, $vf29, $vf5x
    ctx->pc = 0x2519c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x2519c8: 0x4b85e149  vmaddy.xy   $vf5, $vf28, $vf5y
    ctx->pc = 0x2519c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2519cc: 0x4b86e9bc  vmulax.xy   $ACC, $vf29, $vf6x
    ctx->pc = 0x2519ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x2519d0: 0x4b86e189  vmaddy.xy   $vf6, $vf28, $vf6y
    ctx->pc = 0x2519d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2519d4: 0x4b87e9bc  vmulax.xy   $ACC, $vf29, $vf7x
    ctx->pc = 0x2519d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, -1))); }
    // 0x2519d8: 0x4b87e1c9  vmaddy.xy   $vf7, $vf28, $vf7y
    ctx->pc = 0x2519d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2519dc: 0xd8b00000  lqc2        $vf16, 0x0($a1)
    ctx->pc = 0x2519dcu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2519e0: 0x4bd039e8  vadd.xyz    $vf7, $vf7, $vf16
    ctx->pc = 0x2519e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[16]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2519e4: 0xfa640000  sqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2519e4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2519e8: 0xfa650010  sqc2        $vf5, 0x10($s3)
    ctx->pc = 0x2519e8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2519ec: 0xfa660020  sqc2        $vf6, 0x20($s3)
    ctx->pc = 0x2519ecu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2519f0: 0xfa670030  sqc2        $vf7, 0x30($s3)
    ctx->pc = 0x2519f0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2519f4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2519f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2519f8: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x2519f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2519fc: 0xda480000  lqc2        $vf8, 0x0($s2)
    ctx->pc = 0x2519fcu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x251a00: 0xda490010  lqc2        $vf9, 0x10($s2)
    ctx->pc = 0x251a00u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x251a04: 0xda4a0020  lqc2        $vf10, 0x20($s2)
    ctx->pc = 0x251a04u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x251a08: 0xda4b0030  lqc2        $vf11, 0x30($s2)
    ctx->pc = 0x251a08u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x251a0c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x251a0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x251a10: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x251a10u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x251a14: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x251a14u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x251a18: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x251a18u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x251a1c: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x251a1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x251a20: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x251a20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x251a24: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x251a24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x251a28: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x251a28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x251a2c: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x251a2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x251a30: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x251a30u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x251a34: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x251a34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x251a38: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x251a38u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x251a3c: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x251a3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x251a40: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x251a40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x251a44: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x251a44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x251a48: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x251a48u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x251a4c: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x251a4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x251a50: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x251a50u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x251a54: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x251a54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x251a58: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x251a58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x251a5c: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x251a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x251a60: 0xf8450010  sqc2        $vf5, 0x10($v0)
    ctx->pc = 0x251a60u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x251a64: 0xf8460020  sqc2        $vf6, 0x20($v0)
    ctx->pc = 0x251a64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x251a68: 0xf8470030  sqc2        $vf7, 0x30($v0)
    ctx->pc = 0x251a68u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x251a6c: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x251a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x251a70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x251a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x251a74: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x251A74u;
    {
        const bool branch_taken_0x251a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x251A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A74u;
        // 0x251a78: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a74) {
            ctx->pc = 0x251AB0u;
            goto label_251ab0;
        }
    }
    ctx->pc = 0x251A7Cu;
    // 0x251a7c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x251a7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x251a80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x251A80u;
    {
        const bool branch_taken_0x251a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A80u;
        // 0x251a84: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a80) {
            ctx->pc = 0x251AA0u;
            goto label_251aa0;
        }
    }
    ctx->pc = 0x251A88u;
    // 0x251a88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x251a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x251a8c: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x251A8Cu;
    {
        const bool branch_taken_0x251a8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x251a8c) {
            ctx->pc = 0x251A90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251A8Cu;
            // 0x251a90: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251AB4u;
            goto label_251ab4;
        }
    }
    ctx->pc = 0x251A94u;
    // 0x251a94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x251A94u;
    {
        const bool branch_taken_0x251a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251A94u;
        // 0x251a98: 0x864500bc  lh          $a1, 0xBC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251a94) {
            ctx->pc = 0x251AB8u;
            goto label_251ab8;
        }
    }
    ctx->pc = 0x251A9Cu;
    // 0x251a9c: 0x0  nop
    ctx->pc = 0x251a9cu;
    // NOP
label_251aa0:
    // 0x251aa0: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x251AA0u;
    {
        const bool branch_taken_0x251aa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x251aa0) {
            ctx->pc = 0x251AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251AA0u;
            // 0x251aa4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251AB4u;
            goto label_251ab4;
        }
    }
    ctx->pc = 0x251AA8u;
    // 0x251aa8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x251AA8u;
    {
        const bool branch_taken_0x251aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AA8u;
        // 0x251aac: 0x864500bc  lh          $a1, 0xBC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251aa8) {
            ctx->pc = 0x251AB8u;
            goto label_251ab8;
        }
    }
    ctx->pc = 0x251AB0u;
label_251ab0:
    // 0x251ab0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x251ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_251ab4:
    // 0x251ab4: 0x864500bc  lh          $a1, 0xBC($s2)
    ctx->pc = 0x251ab4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 188)));
label_251ab8:
    // 0x251ab8: 0x864600cc  lh          $a2, 0xCC($s2)
    ctx->pc = 0x251ab8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x251abc: 0xc090a16  jal         func_242858
    ctx->pc = 0x251ABCu;
    SET_GPR_U32(ctx, 31, 0x251AC4u);
    ctx->pc = 0x251AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251ABCu;
    // 0x251ac0: 0x864700be  lh          $a3, 0xBE($s2) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 190)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242858u, 0x251ABCu, 0x251AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251AC4u;
label_251ac4:
    // 0x251ac4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x251ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251ac8: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x251AC8u;
    {
        const bool branch_taken_0x251ac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x251ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251AC8u;
        // 0x251acc: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ac8) {
            ctx->pc = 0x251B04u;
            goto label_251b04;
        }
    }
    ctx->pc = 0x251AD0u;
    // 0x251ad0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x251ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x251ad4: 0xac930018  sw          $s3, 0x18($a0)
    ctx->pc = 0x251ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 19));
    // 0x251ad8: 0x34430001  ori         $v1, $v0, 0x1
    ctx->pc = 0x251ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x251adc: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x251adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x251ae0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x251ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x251ae4: 0xc78289a8  lwc1        $f2, -0x7658($gp)
    ctx->pc = 0x251ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x251ae8: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x251ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x251aec: 0xc64100e4  lwc1        $f1, 0xE4($s2)
    ctx->pc = 0x251aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x251af0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x251af0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x251af4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x251af4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x251af8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x251af8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x251afc: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x251afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x251b00: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x251b00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_251b04:
    // 0x251b04: 0x8c6288ac  lw          $v0, -0x7754($v1)
    ctx->pc = 0x251b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936748)));
    // 0x251b08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x251B08u;
    {
        const bool branch_taken_0x251b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B08u;
        // 0x251b0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b08) {
            ctx->pc = 0x251B20u;
            goto label_251b20;
        }
    }
    ctx->pc = 0x251B10u;
    // 0x251b10: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x251b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x251b14: 0x8c4323b4  lw          $v1, 0x23B4($v0)
    ctx->pc = 0x251b14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x251b18: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x251b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x251b1c: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x251b1cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_251b20:
    // 0x251b20: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x251B20u;
    {
        const bool branch_taken_0x251b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x251b20) {
            ctx->pc = 0x251B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251B20u;
            // 0x251b24: 0x86420060  lh          $v0, 0x60($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251B38u;
            goto label_251b38;
        }
    }
    ctx->pc = 0x251B28u;
    // 0x251b28: 0x96420060  lhu         $v0, 0x60($s2)
    ctx->pc = 0x251b28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x251b2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x251b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x251b30: 0xa6420060  sh          $v0, 0x60($s2)
    ctx->pc = 0x251b30u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 96), (uint16_t)GPR_U32(ctx, 2));
    // 0x251b34: 0x86420060  lh          $v0, 0x60($s2)
    ctx->pc = 0x251b34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
label_251b38:
    // 0x251b38: 0x86430062  lh          $v1, 0x62($s2)
    ctx->pc = 0x251b38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 98)));
    // 0x251b3c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x251b3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x251b40: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x251B40u;
    {
        const bool branch_taken_0x251b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B40u;
        // 0x251b44: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b40) {
            ctx->pc = 0x251B5Cu;
            goto label_251b5c;
        }
    }
    ctx->pc = 0x251B48u;
label_251b48:
    // 0x251b48: 0x8e420118  lw          $v0, 0x118($s2)
    ctx->pc = 0x251b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 280)));
    // 0x251b4c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x251b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x251b50: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x251b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x251b54: 0xae420118  sw          $v0, 0x118($s2)
    ctx->pc = 0x251b54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 280), GPR_U32(ctx, 2));
    // 0x251b58: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x251b58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_251b5c:
    // 0x251b5c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x251b5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x251b60: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x251b60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x251b64: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x251b64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x251b68: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x251b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x251b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x251B6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251B6Cu;
        // 0x251b70: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251B6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251B74u;
    // 0x251b74: 0x0  nop
    ctx->pc = 0x251b74u;
    // NOP
    ctx->pc = 0x251b78u;
}
