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

// Function: sub_0027A9E0
// Address: 0x27a9e0 - 0x27acb8
void sub_0027A9E0_0x27a9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A9E0_0x27a9e0");
#endif

    switch (ctx->pc) {
        case 0x27aa30u: goto label_27aa30;
        case 0x27aa44u: goto label_27aa44;
        case 0x27aa50u: goto label_27aa50;
        case 0x27aab0u: goto label_27aab0;
        case 0x27aabcu: goto label_27aabc;
        case 0x27ab74u: goto label_27ab74;
        case 0x27ab80u: goto label_27ab80;
        default: break;
    }

    ctx->pc = 0x27a9e0u;

    // 0x27a9e0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x27a9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x27a9e4: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x27a9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x27a9e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27a9e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9ec: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x27a9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x27a9f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27a9f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9f4: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x27a9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x27a9f8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x27a9f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a9fc: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x27a9fcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x27aa00: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x27aa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x27aa04: 0xe7ba00b0  swc1        $f26, 0xB0($sp)
    ctx->pc = 0x27aa04u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x27aa08: 0xe7b900a8  swc1        $f25, 0xA8($sp)
    ctx->pc = 0x27aa08u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x27aa0c: 0xe7b800a0  swc1        $f24, 0xA0($sp)
    ctx->pc = 0x27aa0cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x27aa10: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x27aa10u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x27aa14: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x27aa14u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x27aa18: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x27aa18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x27aa1c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x27aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x27aa20: 0x1460008b  bnez        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x27AA20u;
    {
        const bool branch_taken_0x27aa20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AA20u;
        // 0x27aa24: 0x46006586  mov.s       $f22, $f12 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aa20) {
            ctx->pc = 0x27AC50u;
            goto label_27ac50;
        }
    }
    ctx->pc = 0x27AA28u;
    // 0x27aa28: 0xc0af12c  jal         func_2BC4B0
    ctx->pc = 0x27AA28u;
    SET_GPR_U32(ctx, 31, 0x27AA30u);
    ctx->pc = 0x2BC4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC4B0u, 0x27AA28u, 0x27AA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AA30u;
label_27aa30:
    // 0x27aa30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27aa30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa34: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27aa34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa38: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27aa38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa3c: 0xc096b10  jal         func_25AC40
    ctx->pc = 0x27AA3Cu;
    SET_GPR_U32(ctx, 31, 0x27AA44u);
    ctx->pc = 0x27AA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AA3Cu;
    // 0x27aa40: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC40u, 0x27AA3Cu, 0x27AA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AA44u;
label_27aa44:
    // 0x27aa44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27aa44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa48: 0xc0af21a  jal         func_2BC868
    ctx->pc = 0x27AA48u;
    SET_GPR_U32(ctx, 31, 0x27AA50u);
    ctx->pc = 0x27AA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AA48u;
    // 0x27aa4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC868u, 0x27AA48u, 0x27AA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AA50u;
label_27aa50:
    // 0x27aa50: 0xc6060000  lwc1        $f6, 0x0($s0)
    ctx->pc = 0x27aa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x27aa54: 0x9602000e  lhu         $v0, 0xE($s0)
    ctx->pc = 0x27aa54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x27aa58: 0xc7858c38  lwc1        $f5, -0x73C8($gp)
    ctx->pc = 0x27aa58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27aa5c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x27aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x27aa60: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x27aa60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27aa64: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27aa64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x27aa68: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x27aa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27aa6c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27aa6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x27aa70: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x27aa70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27aa74: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x27aa74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27aa78: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x27aa78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x27aa7c: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x27aa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27aa80: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x27aa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27aa84: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x27aa84u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27aa88: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x27aa88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27aa8c: 0x4605a502  mul.s       $f20, $f20, $f5
    ctx->pc = 0x27aa8cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[5]);
    // 0x27aa90: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x27aa90u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x27aa94: 0xe7a60050  swc1        $f6, 0x50($sp)
    ctx->pc = 0x27aa94u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x27aa98: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x27aa98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27aa9c: 0xe7a60040  swc1        $f6, 0x40($sp)
    ctx->pc = 0x27aa9cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27aaa0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27aaa0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27aaa4: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x27aaa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x27aaa8: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x27AAA8u;
    SET_GPR_U32(ctx, 31, 0x27AAB0u);
    ctx->pc = 0x27AAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AAA8u;
    // 0x27aaac: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x27AAA8u, 0x27AAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AAB0u;
label_27aab0:
    // 0x27aab0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x27aab0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x27aab4: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x27AAB4u;
    SET_GPR_U32(ctx, 31, 0x27AABCu);
    ctx->pc = 0x27AAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AAB4u;
    // 0x27aab8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x27AAB4u, 0x27AABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AABCu;
label_27aabc:
    // 0x27aabc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27aabcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27aac0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27aac0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x27aac4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x27aac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27aac8: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x27aac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27aacc: 0x460cb032  c.eq.s      $f22, $f12
    ctx->pc = 0x27aaccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[22], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27aad0: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x27aad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27aad4: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x27aad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27aad8: 0x46141ac2  mul.s       $f11, $f3, $f20
    ctx->pc = 0x27aad8u;
    ctx->f[11] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x27aadc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x27aadcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x27aae0: 0xc7a70040  lwc1        $f7, 0x40($sp)
    ctx->pc = 0x27aae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x27aae4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x27aae4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x27aae8: 0xc7a50048  lwc1        $f5, 0x48($sp)
    ctx->pc = 0x27aae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27aaec: 0x46151282  mul.s       $f10, $f2, $f21
    ctx->pc = 0x27aaecu;
    ctx->f[10] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x27aaf0: 0xc7a60050  lwc1        $f6, 0x50($sp)
    ctx->pc = 0x27aaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x27aaf4: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x27aaf4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x27aaf8: 0xc7a40058  lwc1        $f4, 0x58($sp)
    ctx->pc = 0x27aaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27aafc: 0x46140202  mul.s       $f8, $f0, $f20
    ctx->pc = 0x27aafcu;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x27ab00: 0x46150a42  mul.s       $f9, $f1, $f21
    ctx->pc = 0x27ab00u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x27ab04: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x27ab04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x27ab08: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x27ab08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x27ab0c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x27ab0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x27ab10: 0x460a5e00  add.s       $f24, $f11, $f10
    ctx->pc = 0x27ab10u;
    ctx->f[24] = FPU_ADD_S(ctx->f[11], ctx->f[10]);
    // 0x27ab14: 0x46021e81  sub.s       $f26, $f3, $f2
    ctx->pc = 0x27ab14u;
    ctx->f[26] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x27ab18: 0x46084e41  sub.s       $f25, $f9, $f8
    ctx->pc = 0x27ab18u;
    ctx->f[25] = FPU_SUB_S(ctx->f[9], ctx->f[8]);
    // 0x27ab1c: 0x46000dc0  add.s       $f23, $f1, $f0
    ctx->pc = 0x27ab1cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27ab20: 0x461839c0  add.s       $f7, $f7, $f24
    ctx->pc = 0x27ab20u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[24]);
    // 0x27ab24: 0x461a2940  add.s       $f5, $f5, $f26
    ctx->pc = 0x27ab24u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[26]);
    // 0x27ab28: 0x46192100  add.s       $f4, $f4, $f25
    ctx->pc = 0x27ab28u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[25]);
    // 0x27ab2c: 0x46173180  add.s       $f6, $f6, $f23
    ctx->pc = 0x27ab2cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[23]);
    // 0x27ab30: 0xe7a70040  swc1        $f7, 0x40($sp)
    ctx->pc = 0x27ab30u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27ab34: 0xe7a50048  swc1        $f5, 0x48($sp)
    ctx->pc = 0x27ab34u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x27ab38: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x27ab38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x27ab3c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x27AB3Cu;
    {
        const bool branch_taken_0x27ab3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB3Cu;
        // 0x27ab40: 0xe7a60050  swc1        $f6, 0x50($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ab3c) {
            ctx->pc = 0x27AB58u;
            goto label_27ab58;
        }
    }
    ctx->pc = 0x27AB44u;
    // 0x27ab44: 0x46006086  mov.s       $f2, $f12
    ctx->pc = 0x27ab44u;
    ctx->f[2] = FPU_MOV_S(ctx->f[12]);
    // 0x27ab48: 0x46001146  mov.s       $f5, $f2
    ctx->pc = 0x27ab48u;
    ctx->f[5] = FPU_MOV_S(ctx->f[2]);
    // 0x27ab4c: 0x46001206  mov.s       $f8, $f2
    ctx->pc = 0x27ab4cu;
    ctx->f[8] = FPU_MOV_S(ctx->f[2]);
    // 0x27ab50: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x27AB50u;
    {
        const bool branch_taken_0x27ab50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB50u;
        // 0x27ab54: 0x46002806  mov.s       $f0, $f5 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ab50) {
            ctx->pc = 0x27ABD8u;
            goto label_27abd8;
        }
    }
    ctx->pc = 0x27AB58u;
label_27ab58:
    // 0x27ab58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27ab58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27ab5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27ab5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27ab60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x27ab60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27ab64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27ab68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab6c: 0xc096b10  jal         func_25AC40
    ctx->pc = 0x27AB6Cu;
    SET_GPR_U32(ctx, 31, 0x27AB74u);
    ctx->pc = 0x27AB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AB6Cu;
    // 0x27ab70: 0x460cb301  sub.s       $f12, $f22, $f12 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[22], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AC40u, 0x27AB6Cu, 0x27AB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AB74u;
label_27ab74:
    // 0x27ab74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27ab74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ab78: 0xc0af21a  jal         func_2BC868
    ctx->pc = 0x27AB78u;
    SET_GPR_U32(ctx, 31, 0x27AB80u);
    ctx->pc = 0x27AB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AB78u;
    // 0x27ab7c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC868u, 0x27AB78u, 0x27AB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AB80u;
label_27ab80:
    // 0x27ab80: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x27ab80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27ab84: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x27ab84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ab88: 0xc7a40010  lwc1        $f4, 0x10($sp)
    ctx->pc = 0x27ab88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27ab8c: 0x46141202  mul.s       $f8, $f2, $f20
    ctx->pc = 0x27ab8cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x27ab90: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x27ab90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x27ab94: 0x461501c2  mul.s       $f7, $f0, $f21
    ctx->pc = 0x27ab94u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x27ab98: 0x460220c0  add.s       $f3, $f4, $f2
    ctx->pc = 0x27ab98u;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x27ab9c: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x27ab9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x27aba0: 0x46002840  add.s       $f1, $f5, $f0
    ctx->pc = 0x27aba0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x27aba4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x27aba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x27aba8: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x27aba8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x27abac: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x27abacu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x27abb0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x27abb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x27abb4: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x27abb4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x27abb8: 0x46151982  mul.s       $f6, $f3, $f21
    ctx->pc = 0x27abb8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x27abbc: 0x46140902  mul.s       $f4, $f1, $f20
    ctx->pc = 0x27abbcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x27abc0: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x27abc0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x27abc4: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x27abc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x27abc8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x27abc8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x27abcc: 0x46074200  add.s       $f8, $f8, $f7
    ctx->pc = 0x27abccu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
    // 0x27abd0: 0x46043141  sub.s       $f5, $f6, $f4
    ctx->pc = 0x27abd0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
    // 0x27abd4: 0x46011800  add.s       $f0, $f3, $f1
    ctx->pc = 0x27abd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_27abd8:
    // 0x27abd8: 0x5640000d  bnel        $s2, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x27ABD8u;
    {
        const bool branch_taken_0x27abd8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x27abd8) {
            ctx->pc = 0x27ABDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27ABD8u;
            // 0x27abdc: 0xc7a30050  lwc1        $f3, 0x50($sp) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x27AC10u;
            goto label_27ac10;
        }
    }
    ctx->pc = 0x27ABE0u;
    // 0x27abe0: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x27abe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x27abe4: 0x4602d141  sub.s       $f5, $f26, $f2
    ctx->pc = 0x27abe4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[26], ctx->f[2]);
    // 0x27abe8: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x27abe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27abec: 0x4608c181  sub.s       $f6, $f24, $f8
    ctx->pc = 0x27abecu;
    ctx->f[6] = FPU_SUB_S(ctx->f[24], ctx->f[8]);
    // 0x27abf0: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x27abf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27abf4: 0xc604001c  lwc1        $f4, 0x1C($s0)
    ctx->pc = 0x27abf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27abf8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x27abf8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x27abfc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x27abfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ac00: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x27ac00u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x27ac04: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27AC04u;
    {
        const bool branch_taken_0x27ac04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AC04u;
        // 0x27ac08: 0xc6000008  lwc1        $f0, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ac04) {
            ctx->pc = 0x27AC34u;
            goto label_27ac34;
        }
    }
    ctx->pc = 0x27AC0Cu;
    // 0x27ac0c: 0x0  nop
    ctx->pc = 0x27ac0cu;
    // NOP
label_27ac10:
    // 0x27ac10: 0x4600b981  sub.s       $f6, $f23, $f0
    ctx->pc = 0x27ac10u;
    ctx->f[6] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
    // 0x27ac14: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x27ac14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x27ac18: 0x4605c941  sub.s       $f5, $f25, $f5
    ctx->pc = 0x27ac18u;
    ctx->f[5] = FPU_SUB_S(ctx->f[25], ctx->f[5]);
    // 0x27ac1c: 0xc6000750  lwc1        $f0, 0x750($s0)
    ctx->pc = 0x27ac1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ac20: 0xc6040758  lwc1        $f4, 0x758($s0)
    ctx->pc = 0x27ac20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27ac24: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x27ac24u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x27ac28: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x27ac28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ac2c: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x27ac2cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x27ac30: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x27ac30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27ac34:
    // 0x27ac34: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x27ac34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x27ac38: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x27ac38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x27ac3c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x27ac3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x27ac40: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x27ac40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x27ac44: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x27ac44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x27ac48: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x27AC48u;
    {
        const bool branch_taken_0x27ac48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AC48u;
        // 0x27ac4c: 0xe6000008  swc1        $f0, 0x8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ac48) {
            ctx->pc = 0x27AC84u;
            goto label_27ac84;
        }
    }
    ctx->pc = 0x27AC50u;
label_27ac50:
    // 0x27ac50: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x27ac50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x27ac54: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27AC54u;
    {
        const bool branch_taken_0x27ac54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AC54u;
        // 0x27ac58: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ac54) {
            ctx->pc = 0x27AC6Cu;
            goto label_27ac6c;
        }
    }
    ctx->pc = 0x27AC5Cu;
    // 0x27ac5c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x27ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x27ac60: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27AC60u;
    {
        const bool branch_taken_0x27ac60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27AC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AC60u;
        // 0x27ac64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ac60) {
            ctx->pc = 0x27AC6Cu;
            goto label_27ac6c;
        }
    }
    ctx->pc = 0x27AC68u;
    // 0x27ac68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27ac68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27ac6c:
    // 0x27ac6c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27AC6Cu;
    {
        const bool branch_taken_0x27ac6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ac6c) {
            ctx->pc = 0x27AC70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AC6Cu;
            // 0x27ac70: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27AC88u;
            goto label_27ac88;
        }
    }
    ctx->pc = 0x27AC74u;
    // 0x27ac74: 0xc6000750  lwc1        $f0, 0x750($s0)
    ctx->pc = 0x27ac74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27ac78: 0xc6010758  lwc1        $f1, 0x758($s0)
    ctx->pc = 0x27ac78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ac7c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x27ac7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x27ac80: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x27ac80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_27ac84:
    // 0x27ac84: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x27ac84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_27ac88:
    // 0x27ac88: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x27ac88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x27ac8c: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x27ac8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27ac90: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x27ac90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x27ac94: 0xc7ba00b0  lwc1        $f26, 0xB0($sp)
    ctx->pc = 0x27ac94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x27ac98: 0xc7b900a8  lwc1        $f25, 0xA8($sp)
    ctx->pc = 0x27ac98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x27ac9c: 0xc7b800a0  lwc1        $f24, 0xA0($sp)
    ctx->pc = 0x27ac9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x27aca0: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x27aca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x27aca4: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x27aca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27aca8: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x27aca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27acac: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x27acacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27acb0: 0x3e00008  jr          $ra
    ctx->pc = 0x27ACB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27ACB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ACB0u;
        // 0x27acb4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27ACB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27ACB8u;
}
