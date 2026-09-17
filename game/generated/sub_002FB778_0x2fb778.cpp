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

// Function: sub_002FB778
// Address: 0x2fb778 - 0x2fb890
void sub_002FB778_0x2fb778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB778_0x2fb778");
#endif

    switch (ctx->pc) {
        case 0x2fb820u: goto label_2fb820;
        default: break;
    }

    ctx->pc = 0x2fb778u;

    // 0x2fb778: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fb778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fb77c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fb77cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb780: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2fb780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2fb784: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fb784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb788: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2fb788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2fb78c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2fb78cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2fb790: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2fb790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2fb794: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x2FB794u;
    {
        const bool branch_taken_0x2fb794 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB794u;
        // 0x2fb798: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb794) {
            ctx->pc = 0x2FB87Cu;
            goto label_2fb87c;
        }
    }
    ctx->pc = 0x2FB79Cu;
    // 0x2fb79c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2fb79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2fb7a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fb7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fb7a4: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x2FB7A4u;
    {
        const bool branch_taken_0x2fb7a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb7a4) {
            ctx->pc = 0x2FB7A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB7A4u;
            // 0x2fb7a8: 0x8c620050  lw          $v0, 0x50($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB84Cu;
            goto label_2fb84c;
        }
    }
    ctx->pc = 0x2FB7ACu;
    // 0x2fb7ac: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x2fb7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2fb7b0: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2FB7B0u;
    {
        const bool branch_taken_0x2fb7b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fb7b0) {
            ctx->pc = 0x2FB7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FB7B0u;
            // 0x2fb7b4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FB7E0u;
            goto label_2fb7e0;
        }
    }
    ctx->pc = 0x2FB7B8u;
    // 0x2fb7b8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2fb7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fb7bc: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2fb7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fb7c0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2fb7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fb7c4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2fb7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fb7c8: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x2fb7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fb7cc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2fb7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2fb7d0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2fb7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2fb7d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FB7D4u;
    {
        const bool branch_taken_0x2fb7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB7D4u;
        // 0x2fb7d8: 0xc4400038  lwc1        $f0, 0x38($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb7d4) {
            ctx->pc = 0x2FB7F4u;
            goto label_2fb7f4;
        }
    }
    ctx->pc = 0x2FB7DCu;
    // 0x2fb7dc: 0x0  nop
    ctx->pc = 0x2fb7dcu;
    // NOP
label_2fb7e0:
    // 0x2fb7e0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2fb7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fb7e4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2fb7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fb7e8: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2fb7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fb7ec: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2fb7ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2fb7f0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2fb7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fb7f4:
    // 0x2fb7f4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2fb7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2fb7f8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2fb7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fb7fc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2fb7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fb800: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2fb800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fb804: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2fb804u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2fb808: 0x4601081e  madda.s     $f1, $f1
    ctx->pc = 0x2fb808u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1])));
    // 0x2fb80c: 0x460000dc  madd.s      $f3, $f0, $f0
    ctx->pc = 0x2fb80cu;
    ctx->f[3] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2fb810: 0x460300c4  c1          0x300C4
    ctx->pc = 0x2fb810u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x2fb814: 0xc4940068  lwc1        $f20, 0x68($a0)
    ctx->pc = 0x2fb814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fb818: 0xc08c5c8  jal         func_231720
    ctx->pc = 0x2FB818u;
    SET_GPR_U32(ctx, 31, 0x2FB820u);
    ctx->pc = 0x2FB81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB818u;
    // 0x2fb81c: 0x4603a501  sub.s       $f20, $f20, $f3 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[3]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x231720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231720u, 0x2FB818u, 0x2FB820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB820u;
label_2fb820:
    // 0x2fb820: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fb820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fb824: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x2fb824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2fb828: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2fb828u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2fb82c: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x2fb82cu;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    // 0x2fb830: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x2fb830u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2fb834: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2fb834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2fb838: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2fb838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2fb83c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fb83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2fb840: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x2fb840u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
    // 0x2fb844: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2fb844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2fb848: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2fb848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_2fb84c:
    // 0x2fb84c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2fb84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2fb850: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FB850u;
    {
        const bool branch_taken_0x2fb850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB850u;
        // 0x2fb854: 0x2404fffd  addiu       $a0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb850) {
            ctx->pc = 0x2FB878u;
            goto label_2fb878;
        }
    }
    ctx->pc = 0x2FB858u;
    // 0x2fb858: 0xc4600068  lwc1        $f0, 0x68($v1)
    ctx->pc = 0x2fb858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fb85c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fb85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2fb860: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2fb860u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2fb864: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2fb864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2fb868: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x2fb868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2fb86c: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2fb86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2fb870: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fb870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2fb874: 0xac620050  sw          $v0, 0x50($v1)
    ctx->pc = 0x2fb874u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
label_2fb878:
    // 0x2fb878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fb878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fb87c:
    // 0x2fb87c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2fb87cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fb880: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2fb880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fb884: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2fb884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fb888: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB888u;
        // 0x2fb88c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB890u;
}
