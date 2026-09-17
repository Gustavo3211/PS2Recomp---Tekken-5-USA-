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

// Function: sub_001F96D0
// Address: 0x1f96d0 - 0x1f9818
void sub_001F96D0_0x1f96d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F96D0_0x1f96d0");
#endif

    switch (ctx->pc) {
        case 0x1f96ecu: goto label_1f96ec;
        case 0x1f97f4u: goto label_1f97f4;
        case 0x1f9800u: goto label_1f9800;
        default: break;
    }

    ctx->pc = 0x1f96d0u;

    // 0x1f96d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f96d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f96d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f96d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f96d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f96d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f96dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f96dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f96e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f96e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f96e4: 0xc07e5a8  jal         func_1F96A0
    ctx->pc = 0x1F96E4u;
    SET_GPR_U32(ctx, 31, 0x1F96ECu);
    ctx->pc = 0x1F96E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F96E4u;
    // 0x1f96e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F96A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F96A0u, 0x1F96E4u, 0x1F96ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F96ECu;
label_1f96ec:
    // 0x1f96ec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F96ECu;
    {
        const bool branch_taken_0x1f96ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F96F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F96ECu;
        // 0x1f96f0: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f96ec) {
            ctx->pc = 0x1F9720u;
            goto label_1f9720;
        }
    }
    ctx->pc = 0x1F96F4u;
    // 0x1f96f4: 0xc78181f0  lwc1        $f1, -0x7E10($gp)
    ctx->pc = 0x1f96f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f96f8: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1f96f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f96fc: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x1f96fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1f9700: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x1f9700u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f9704: 0x9602007a  lhu         $v0, 0x7A($s0)
    ctx->pc = 0x1f9704u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 122)));
    // 0x1f9708: 0x24637fff  addiu       $v1, $v1, 0x7FFF
    ctx->pc = 0x1f9708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32767));
    // 0x1f970c: 0x24427fff  addiu       $v0, $v0, 0x7FFF
    ctx->pc = 0x1f970cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32767));
    // 0x1f9710: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x1f9710u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f9714: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1F9714u;
    {
        const bool branch_taken_0x1f9714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9714u;
        // 0x1f9718: 0xa602007a  sh          $v0, 0x7A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 122), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9714) {
            ctx->pc = 0x1F97ACu;
            goto label_1f97ac;
        }
    }
    ctx->pc = 0x1F971Cu;
    // 0x1f971c: 0x0  nop
    ctx->pc = 0x1f971cu;
    // NOP
label_1f9720:
    // 0x1f9720: 0x9603000e  lhu         $v1, 0xE($s0)
    ctx->pc = 0x1f9720u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x1f9724: 0x2484b400  addiu       $a0, $a0, -0x4C00
    ctx->pc = 0x1f9724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947840));
    // 0x1f9728: 0x9605007a  lhu         $a1, 0x7A($s0)
    ctx->pc = 0x1f9728u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 122)));
    // 0x1f972c: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x1f972cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x1f9730: 0xc78181f4  lwc1        $f1, -0x7E0C($gp)
    ctx->pc = 0x1f9730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f9734: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f9734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f9738: 0xc78281f8  lwc1        $f2, -0x7E08($gp)
    ctx->pc = 0x1f9738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f973c: 0xa603000e  sh          $v1, 0xE($s0)
    ctx->pc = 0x1f973cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f9740: 0x9482001e  lhu         $v0, 0x1E($a0)
    ctx->pc = 0x1f9740u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x1f9744: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1f9744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1f9748: 0xa605007a  sh          $a1, 0x7A($s0)
    ctx->pc = 0x1f9748u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 122), (uint16_t)GPR_U32(ctx, 5));
    // 0x1f974c: 0x8482001e  lh          $v0, 0x1E($a0)
    ctx->pc = 0x1f974cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 30)));
    // 0x1f9750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f9750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f9754: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f9754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f9758: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1f9758u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x1f975c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f975cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f9760: 0x0  nop
    ctx->pc = 0x1f9760u;
    // NOP
    // 0x1f9764: 0x0  nop
    ctx->pc = 0x1f9764u;
    // NOP
    // 0x1f9768: 0x46020083  div.s       $f2, $f0, $f2
    ctx->pc = 0x1f9768u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[2] = ctx->f[0] / ctx->f[2];
    // 0x1f976c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1f976cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f9770: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9770u;
    {
        const bool branch_taken_0x1f9770 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9770) {
            ctx->pc = 0x1F9788u;
            goto label_1f9788;
        }
    }
    ctx->pc = 0x1F9778u;
    // 0x1f9778: 0xc78081fc  lwc1        $f0, -0x7E04($gp)
    ctx->pc = 0x1f9778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f977c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F977Cu;
    {
        const bool branch_taken_0x1f977c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F977Cu;
        // 0x1f9780: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f977c) {
            ctx->pc = 0x1F97A0u;
            goto label_1f97a0;
        }
    }
    ctx->pc = 0x1F9784u;
    // 0x1f9784: 0x0  nop
    ctx->pc = 0x1f9784u;
    // NOP
label_1f9788:
    // 0x1f9788: 0xc7808200  lwc1        $f0, -0x7E00($gp)
    ctx->pc = 0x1f9788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f978c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f978cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f9790: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1F9790u;
    {
        const bool branch_taken_0x1f9790 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f9790) {
            ctx->pc = 0x1F9794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9790u;
            // 0x1f9794: 0xc6000020  lwc1        $f0, 0x20($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F97A4u;
            goto label_1f97a4;
        }
    }
    ctx->pc = 0x1F9798u;
    // 0x1f9798: 0xc7808204  lwc1        $f0, -0x7DFC($gp)
    ctx->pc = 0x1f9798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f979c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1f979cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f97a0:
    // 0x1f97a0: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1f97a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f97a4:
    // 0x1f97a4: 0xc7818208  lwc1        $f1, -0x7DF8($gp)
    ctx->pc = 0x1f97a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f97a8: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x1f97a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f97ac:
    // 0x1f97ac: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1f97acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f97b0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F97B0u;
    {
        const bool branch_taken_0x1f97b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f97b0) {
            ctx->pc = 0x1F97C8u;
            goto label_1f97c8;
        }
    }
    ctx->pc = 0x1F97B8u;
    // 0x1f97b8: 0xc780820c  lwc1        $f0, -0x7DF4($gp)
    ctx->pc = 0x1f97b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f97bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F97BCu;
    {
        const bool branch_taken_0x1f97bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F97C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97BCu;
        // 0x1f97c0: 0x46001081  sub.s       $f2, $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f97bc) {
            ctx->pc = 0x1F97E0u;
            goto label_1f97e0;
        }
    }
    ctx->pc = 0x1F97C4u;
    // 0x1f97c4: 0x0  nop
    ctx->pc = 0x1f97c4u;
    // NOP
label_1f97c8:
    // 0x1f97c8: 0xc7808210  lwc1        $f0, -0x7DF0($gp)
    ctx->pc = 0x1f97c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f97cc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1f97ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f97d0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x1F97D0u;
    {
        const bool branch_taken_0x1f97d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f97d0) {
            ctx->pc = 0x1F97D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F97D0u;
            // 0x1f97d4: 0xe6020074  swc1        $f2, 0x74($s0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F97E4u;
            goto label_1f97e4;
        }
    }
    ctx->pc = 0x1F97D8u;
    // 0x1f97d8: 0xc7808214  lwc1        $f0, -0x7DEC($gp)
    ctx->pc = 0x1f97d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f97dc: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1f97dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f97e0:
    // 0x1f97e0: 0xe6020074  swc1        $f2, 0x74($s0)
    ctx->pc = 0x1f97e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_1f97e4:
    // 0x1f97e4: 0xe6020020  swc1        $f2, 0x20($s0)
    ctx->pc = 0x1f97e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x1f97e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f97e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f97ec: 0xc07d362  jal         func_1F4D88
    ctx->pc = 0x1F97ECu;
    SET_GPR_U32(ctx, 31, 0x1F97F4u);
    ctx->pc = 0x1F97F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F97ECu;
    // 0x1f97f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4D88u, 0x1F97ECu, 0x1F97F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F97F4u;
label_1f97f4:
    // 0x1f97f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f97f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f97f8: 0xc07d362  jal         func_1F4D88
    ctx->pc = 0x1F97F8u;
    SET_GPR_U32(ctx, 31, 0x1F9800u);
    ctx->pc = 0x1F97FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F97F8u;
    // 0x1f97fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4D88u, 0x1F97F8u, 0x1F9800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9800u;
label_1f9800:
    // 0x1f9800: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9800u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9804: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f9804u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9808: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f9808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f980c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F980Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F980Cu;
        // 0x1f9810: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F980Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9814u;
    // 0x1f9814: 0x0  nop
    ctx->pc = 0x1f9814u;
    // NOP
    ctx->pc = 0x1f9818u;
}
