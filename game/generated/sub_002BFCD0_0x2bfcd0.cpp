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

// Function: sub_002BFCD0
// Address: 0x2bfcd0 - 0x2bfed8
void sub_002BFCD0_0x2bfcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFCD0_0x2bfcd0");
#endif

    switch (ctx->pc) {
        case 0x2bfd50u: goto label_2bfd50;
        case 0x2bfd74u: goto label_2bfd74;
        case 0x2bfda0u: goto label_2bfda0;
        case 0x2bfde4u: goto label_2bfde4;
        case 0x2bfe28u: goto label_2bfe28;
        default: break;
    }

    ctx->pc = 0x2bfcd0u;

    // 0x2bfcd0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2bfcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2bfcd4: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2bfcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2bfcd8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2bfcd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfcdc: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2bfcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2bfce0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bfce0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfce4: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x2bfce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x2bfce8: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2bfce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2bfcec: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2bfcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2bfcf0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2bfcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2bfcf4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bfcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bfcf8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bfcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bfcfc: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x2bfcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2bfd00: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2bfd00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2bfd04: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2bfd04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2bfd08: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2bfd08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2bfd0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bfd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bfd10: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2bfd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2bfd14: 0x3c130017  lui         $s3, 0x17
    ctx->pc = 0x2bfd14u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)23 << 16));
    // 0x2bfd18: 0x26737b90  addiu       $s3, $s3, 0x7B90
    ctx->pc = 0x2bfd18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 31632));
    // 0x2bfd1c: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2bfd1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2bfd20: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2bfd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2bfd24: 0x7a620430  lq          $v0, 0x430($s3)
    ctx->pc = 0x2bfd24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 1072)));
    // 0x2bfd28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bfd28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd2c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2bfd2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bfd30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd34: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2bfd34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2bfd38: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2bfd38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd3c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2bfd3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2bfd40: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2bfd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x2bfd44: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2bfd44u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2bfd48: 0xc084814  jal         func_212050
    ctx->pc = 0x2BFD48u;
    SET_GPR_U32(ctx, 31, 0x2BFD50u);
    ctx->pc = 0x2BFD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFD48u;
    // 0x2bfd4c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x2BFD48u, 0x2BFD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFD50u;
label_2bfd50:
    // 0x2bfd50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bfd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bfd54: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2bfd54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2bfd58: 0x0  nop
    ctx->pc = 0x2bfd58u;
    // NOP
    // 0x2bfd5c: 0x0  nop
    ctx->pc = 0x2bfd5cu;
    // NOP
    // 0x2bfd60: 0x4600a556  rsqrt.s     $f21, $f20, $f0
    ctx->pc = 0x2bfd60u;
    ctx->f[21] = 1.0f / sqrtf(ctx->f[20]);
    // 0x2bfd64: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bfd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd68: 0x26850280  addiu       $a1, $s4, 0x280
    ctx->pc = 0x2bfd68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 640));
    // 0x2bfd6c: 0xc08491e  jal         func_212478
    ctx->pc = 0x2BFD6Cu;
    SET_GPR_U32(ctx, 31, 0x2BFD74u);
    ctx->pc = 0x2BFD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFD6Cu;
    // 0x2bfd70: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x2BFD6Cu, 0x2BFD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFD74u;
label_2bfd74:
    // 0x2bfd74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2bfd74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd78: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2bfd78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd7c: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x2bfd7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bfd80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bfd84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd88: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x2bfd88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2bfd8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2bfd8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bfd90: 0x16400021  bnez        $s2, . + 4 + (0x21 << 2)
    ctx->pc = 0x2BFD90u;
    {
        const bool branch_taken_0x2bfd90 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BFD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFD90u;
        // 0x2bfd94: 0xc7b40004  lwc1        $f20, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfd90) {
            ctx->pc = 0x2BFE18u;
            goto label_2bfe18;
        }
    }
    ctx->pc = 0x2BFD98u;
    // 0x2bfd98: 0xc0afbf2  jal         func_2BEFC8
    ctx->pc = 0x2BFD98u;
    SET_GPR_U32(ctx, 31, 0x2BFDA0u);
    ctx->pc = 0x2BFD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFD98u;
    // 0x2bfd9c: 0xc66c0440  lwc1        $f12, 0x440($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEFC8u, 0x2BFD98u, 0x2BFDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFDA0u;
label_2bfda0:
    // 0x2bfda0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2BFDA0u;
    {
        const bool branch_taken_0x2bfda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDA0u;
        // 0x2bfda4: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfda0) {
            ctx->pc = 0x2BFE08u;
            goto label_2bfe08;
        }
    }
    ctx->pc = 0x2BFDA8u;
    // 0x2bfda8: 0xc7829280  lwc1        $f2, -0x6D80($gp)
    ctx->pc = 0x2bfda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bfdac: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2bfdacu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2bfdb0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2bfdb0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2bfdb4: 0x46150502  mul.s       $f20, $f0, $f21
    ctx->pc = 0x2bfdb4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2bfdb8: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x2bfdb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bfdbc: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2BFDBCu;
    {
        const bool branch_taken_0x2bfdbc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2bfdbc) {
            ctx->pc = 0x2BFDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BFDBCu;
            // 0x2bfdc0: 0x4600a086  mov.s       $f2, $f20 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BFDC4u;
            goto label_2bfdc4;
        }
    }
    ctx->pc = 0x2BFDC4u;
label_2bfdc4:
    // 0x2bfdc4: 0xc6810174  lwc1        $f1, 0x174($s4)
    ctx->pc = 0x2bfdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bfdc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bfdc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bfdcc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2bfdccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bfdd0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2BFDD0u;
    {
        const bool branch_taken_0x2bfdd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BFDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDD0u;
        // 0x2bfdd4: 0x46001506  mov.s       $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfdd0) {
            ctx->pc = 0x2BFDDCu;
            goto label_2bfddc;
        }
    }
    ctx->pc = 0x2BFDD8u;
    // 0x2bfdd8: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x2bfdd8u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
label_2bfddc:
    // 0x2bfddc: 0xc04752e  jal         func_11D4B8
    ctx->pc = 0x2BFDDCu;
    SET_GPR_U32(ctx, 31, 0x2BFDE4u);
    ctx->pc = 0x2BFDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFDDCu;
    // 0x2bfde0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D4B8u, 0x2BFDDCu, 0x2BFDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFDE4u;
label_2bfde4:
    // 0x2bfde4: 0xc7839284  lwc1        $f3, -0x6D7C($gp)
    ctx->pc = 0x2bfde4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bfde8: 0xc66103a0  lwc1        $f1, 0x3A0($s3)
    ctx->pc = 0x2bfde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bfdec: 0xc7829288  lwc1        $f2, -0x6D78($gp)
    ctx->pc = 0x2bfdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bfdf0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2bfdf0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2bfdf4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bfdf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bfdf8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2bfdf8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2bfdfc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BFDFCu;
    {
        const bool branch_taken_0x2bfdfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BFE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFDFCu;
        // 0x2bfe00: 0xe66103a0  swc1        $f1, 0x3A0($s3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 928), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bfdfc) {
            ctx->pc = 0x2BFE18u;
            goto label_2bfe18;
        }
    }
    ctx->pc = 0x2BFE04u;
    // 0x2bfe04: 0x0  nop
    ctx->pc = 0x2bfe04u;
    // NOP
label_2bfe08:
    // 0x2bfe08: 0xc66003a0  lwc1        $f0, 0x3A0($s3)
    ctx->pc = 0x2bfe08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bfe0c: 0xc781928c  lwc1        $f1, -0x6D74($gp)
    ctx->pc = 0x2bfe0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294939276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bfe10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2bfe10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2bfe14: 0xe66003a0  swc1        $f0, 0x3A0($s3)
    ctx->pc = 0x2bfe14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 928), bits); }
label_2bfe18:
    // 0x2bfe18: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2bfe18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bfe1c: 0xc66c03a0  lwc1        $f12, 0x3A0($s3)
    ctx->pc = 0x2bfe1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2bfe20: 0xc096eca  jal         func_25BB28
    ctx->pc = 0x2BFE20u;
    SET_GPR_U32(ctx, 31, 0x2BFE28u);
    ctx->pc = 0x2BFE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFE20u;
    // 0x2bfe24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25BB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25BB28u, 0x2BFE20u, 0x2BFE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFE28u;
label_2bfe28:
    // 0x2bfe28: 0x268301b0  addiu       $v1, $s4, 0x1B0
    ctx->pc = 0x2bfe28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 432));
    // 0x2bfe2c: 0x7a8201e0  lq          $v0, 0x1E0($s4)
    ctx->pc = 0x2bfe2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 480)));
    // 0x2bfe30: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2bfe30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x2bfe34: 0xda080000  lqc2        $vf8, 0x0($s0)
    ctx->pc = 0x2bfe34u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bfe38: 0xda090010  lqc2        $vf9, 0x10($s0)
    ctx->pc = 0x2bfe38u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2bfe3c: 0xda0a0020  lqc2        $vf10, 0x20($s0)
    ctx->pc = 0x2bfe3cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2bfe40: 0xda0b0030  lqc2        $vf11, 0x30($s0)
    ctx->pc = 0x2bfe40u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2bfe44: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2bfe44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bfe48: 0xd8650010  lqc2        $vf5, 0x10($v1)
    ctx->pc = 0x2bfe48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2bfe4c: 0xd8660020  lqc2        $vf6, 0x20($v1)
    ctx->pc = 0x2bfe4cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2bfe50: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x2bfe50u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2bfe54: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x2bfe54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bfe58: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x2bfe58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bfe5c: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x2bfe5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bfe60: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x2bfe60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bfe64: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x2bfe64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bfe68: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x2bfe68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bfe6c: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x2bfe6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bfe70: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x2bfe70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2bfe74: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x2bfe74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bfe78: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x2bfe78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bfe7c: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x2bfe7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bfe80: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x2bfe80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2bfe84: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x2bfe84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bfe88: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x2bfe88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bfe8c: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x2bfe8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bfe90: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x2bfe90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2bfe94: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2bfe94u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bfe98: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x2bfe98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2bfe9c: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x2bfe9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2bfea0: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x2bfea0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2bfea4: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2bfea4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bfea8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2bfea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bfeac: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2bfeacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2bfeb0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2bfeb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bfeb4: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x2bfeb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2bfeb8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2bfeb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bfebc: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x2bfebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2bfec0: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2bfec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bfec4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2bfec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bfec8: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x2bfec8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x2bfecc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFECCu;
        // 0x2bfed0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFED4u;
    // 0x2bfed4: 0x0  nop
    ctx->pc = 0x2bfed4u;
    // NOP
    ctx->pc = 0x2bfed8u;
}
