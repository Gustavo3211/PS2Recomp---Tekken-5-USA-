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

// Function: sub_002B8700
// Address: 0x2b8700 - 0x2b8830
void sub_002B8700_0x2b8700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8700_0x2b8700");
#endif

    switch (ctx->pc) {
        case 0x2b8814u: goto label_2b8814;
        default: break;
    }

    ctx->pc = 0x2b8700u;

    // 0x2b8700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b8700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b8704: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2b8704u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b8708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b870c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2b870cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2b8710: 0x50400044  beql        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x2B8710u;
    {
        const bool branch_taken_0x2b8710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b8710) {
            ctx->pc = 0x2B8714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8710u;
            // 0x2b8714: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8824u;
            goto label_2b8824;
        }
    }
    ctx->pc = 0x2B8718u;
    // 0x2b8718: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x2b8718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b871c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2b871cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b8720: 0x460061c1  sub.s       $f7, $f12, $f0
    ctx->pc = 0x2b8720u;
    ctx->f[7] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x2b8724: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x2b8724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8728: 0x46016981  sub.s       $f6, $f13, $f1
    ctx->pc = 0x2b8728u;
    ctx->f[6] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x2b872c: 0x46003806  mov.s       $f0, $f7
    ctx->pc = 0x2b872cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[7]);
    // 0x2b8730: 0x46023834  c.lt.s      $f7, $f2
    ctx->pc = 0x2b8730u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b8734: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2B8734u;
    {
        const bool branch_taken_0x2b8734 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B8738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8734u;
        // 0x2b8738: 0x46003346  mov.s       $f13, $f6 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8734) {
            ctx->pc = 0x2B8760u;
            goto label_2b8760;
        }
    }
    ctx->pc = 0x2B873Cu;
    // 0x2b873c: 0xc4650010  lwc1        $f5, 0x10($v1)
    ctx->pc = 0x2b873cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b8740: 0x0  nop
    ctx->pc = 0x2b8740u;
    // NOP
    // 0x2b8744: 0x0  nop
    ctx->pc = 0x2b8744u;
    // NOP
    // 0x2b8748: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x2b8748u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x2b874c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b874cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8750: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2b8750u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b8754: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B8754u;
    {
        const bool branch_taken_0x2b8754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8754u;
        // 0x2b8758: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8754) {
            ctx->pc = 0x2B8778u;
            goto label_2b8778;
        }
    }
    ctx->pc = 0x2B875Cu;
    // 0x2b875c: 0x0  nop
    ctx->pc = 0x2b875cu;
    // NOP
label_2b8760:
    // 0x2b8760: 0xc4650010  lwc1        $f5, 0x10($v1)
    ctx->pc = 0x2b8760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2b8764: 0x0  nop
    ctx->pc = 0x2b8764u;
    // NOP
    // 0x2b8768: 0x0  nop
    ctx->pc = 0x2b8768u;
    // NOP
    // 0x2b876c: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x2b876cu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x2b8770: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8770u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8774: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2b8774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_2b8778:
    // 0x2b8778: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2b8778u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b877c: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x2b877cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b8780: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x2B8780u;
    {
        const bool branch_taken_0x2b8780 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B8784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8780u;
        // 0x2b8784: 0xc4640014  lwc1        $f4, 0x14($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8780) {
            ctx->pc = 0x2B87A8u;
            goto label_2b87a8;
        }
    }
    ctx->pc = 0x2B8788u;
    // 0x2b8788: 0x0  nop
    ctx->pc = 0x2b8788u;
    // NOP
    // 0x2b878c: 0x0  nop
    ctx->pc = 0x2b878cu;
    // NOP
    // 0x2b8790: 0x46046803  div.s       $f0, $f13, $f4
    ctx->pc = 0x2b8790u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[0] = ctx->f[13] / ctx->f[4];
    // 0x2b8794: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8794u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8798: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2b8798u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2b879c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B879Cu;
    {
        const bool branch_taken_0x2b879c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B87A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B879Cu;
        // 0x2b87a0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b879c) {
            ctx->pc = 0x2B87BCu;
            goto label_2b87bc;
        }
    }
    ctx->pc = 0x2B87A4u;
    // 0x2b87a4: 0x0  nop
    ctx->pc = 0x2b87a4u;
    // NOP
label_2b87a8:
    // 0x2b87a8: 0x0  nop
    ctx->pc = 0x2b87a8u;
    // NOP
    // 0x2b87ac: 0x0  nop
    ctx->pc = 0x2b87acu;
    // NOP
    // 0x2b87b0: 0x46046803  div.s       $f0, $f13, $f4
    ctx->pc = 0x2b87b0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[0] = ctx->f[13] / ctx->f[4];
    // 0x2b87b4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b87b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b87b8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2b87b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2b87bc:
    // 0x2b87bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b87bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b87c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b87c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b87c4: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x2b87c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b87c8: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2b87c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b87cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b87ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b87d0: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2b87d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b87d4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2b87d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2b87d8: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x2b87d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2b87dc: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x2b87dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x2b87e0: 0x46013841  sub.s       $f1, $f7, $f1
    ctx->pc = 0x2b87e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x2b87e4: 0x0  nop
    ctx->pc = 0x2b87e4u;
    // NOP
    // 0x2b87e8: 0x0  nop
    ctx->pc = 0x2b87e8u;
    // NOP
    // 0x2b87ec: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2b87ecu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x2b87f0: 0x0  nop
    ctx->pc = 0x2b87f0u;
    // NOP
    // 0x2b87f4: 0x0  nop
    ctx->pc = 0x2b87f4u;
    // NOP
    // 0x2b87f8: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x2b87f8u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
    // 0x2b87fc: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b87fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2b8800: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x2b8800u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2b8804: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b8804u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b8808: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x2b8808u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2b880c: 0xc0ae16c  jal         func_2B85B0
    ctx->pc = 0x2B880Cu;
    SET_GPR_U32(ctx, 31, 0x2B8814u);
    ctx->pc = 0x2B85B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B85B0u, 0x2B880Cu, 0x2B8814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8814u;
label_2b8814:
    // 0x2b8814: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2b8814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b8818: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2b8818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2b881c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x2b881cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x2b8820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b8820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b8824:
    // 0x2b8824: 0x3e00008  jr          $ra
    ctx->pc = 0x2B8824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8824u;
        // 0x2b8828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B8824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B882Cu;
    // 0x2b882c: 0x0  nop
    ctx->pc = 0x2b882cu;
    // NOP
    ctx->pc = 0x2b8830u;
}
