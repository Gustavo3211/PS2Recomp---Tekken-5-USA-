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

// Function: sub_00244370
// Address: 0x244370 - 0x244450
void sub_00244370_0x244370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244370_0x244370");
#endif

    ctx->pc = 0x244370u;

    // 0x244370: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x244370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244374: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244374u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x244378: 0xc4a50004  lwc1        $f5, 0x4($a1)
    ctx->pc = 0x244378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24437c: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x24437cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244380: 0x460500c1  sub.s       $f3, $f0, $f5
    ctx->pc = 0x244380u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x244384: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x244384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x244388: 0x46040881  sub.s       $f2, $f1, $f4
    ctx->pc = 0x244388u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x24438c: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x24438cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
    // 0x244390: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x244390u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x244394: 0x4600019c  madd.s      $f6, $f0, $f0
    ctx->pc = 0x244394u;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x244398: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x244398u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x24439c: 0xc7808854  lwc1        $f0, -0x77AC($gp)
    ctx->pc = 0x24439cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2443a0: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x2443a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2443a4: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x2443A4u;
    {
        const bool branch_taken_0x2443a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2443a4) {
            ctx->pc = 0x2443A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2443A4u;
            // 0x2443a8: 0xc4880004  lwc1        $f8, 0x4($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2443C8u;
            goto label_2443c8;
        }
    }
    ctx->pc = 0x2443ACu;
    // 0x2443ac: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2443acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2443b0: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2443b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2443b4: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x2443b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2443b8: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x2443b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2443bc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2443BCu;
    {
        const bool branch_taken_0x2443bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2443C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443BCu;
        // 0x2443c0: 0x4601081a  mula.s      $f1, $f1 (Delay Slot)
        FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2443bc) {
            ctx->pc = 0x244440u;
            goto label_244440;
        }
    }
    ctx->pc = 0x2443C4u;
    // 0x2443c4: 0x0  nop
    ctx->pc = 0x2443c4u;
    // NOP
label_2443c8:
    // 0x2443c8: 0xc4870000  lwc1        $f7, 0x0($a0)
    ctx->pc = 0x2443c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2443cc: 0x46082841  sub.s       $f1, $f5, $f8
    ctx->pc = 0x2443ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x2443d0: 0x46072001  sub.s       $f0, $f4, $f7
    ctx->pc = 0x2443d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x2443d4: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2443d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2443d8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2443d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2443dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2443dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2443e0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2443e0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2443e4: 0x0  nop
    ctx->pc = 0x2443e4u;
    // NOP
    // 0x2443e8: 0x0  nop
    ctx->pc = 0x2443e8u;
    // NOP
    // 0x2443ec: 0x46060003  div.s       $f0, $f0, $f6
    ctx->pc = 0x2443ecu;
    if (ctx->f[6] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[6];
    // 0x2443f0: 0x46090034  c.lt.s      $f0, $f9
    ctx->pc = 0x2443f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2443f4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2443F4u;
    {
        const bool branch_taken_0x2443f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2443f4) {
            ctx->pc = 0x244408u;
            goto label_244408;
        }
    }
    ctx->pc = 0x2443FCu;
    // 0x2443fc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2443FCu;
    {
        const bool branch_taken_0x2443fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443FCu;
        // 0x244400: 0x46004806  mov.s       $f0, $f9 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[9]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2443fc) {
            ctx->pc = 0x24441Cu;
            goto label_24441c;
        }
    }
    ctx->pc = 0x244404u;
    // 0x244404: 0x0  nop
    ctx->pc = 0x244404u;
    // NOP
label_244408:
    // 0x244408: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x244408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24440c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24440cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x244410: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x244410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244414: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x244414u;
    {
        const bool branch_taken_0x244414 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x244414) {
            ctx->pc = 0x244418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244414u;
            // 0x244418: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x24441Cu;
            goto label_24441c;
        }
    }
    ctx->pc = 0x24441Cu;
label_24441c:
    // 0x24441c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x24441cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x244420: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x244420u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x244424: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x244424u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x244428: 0x46022080  add.s       $f2, $f4, $f2
    ctx->pc = 0x244428u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x24442c: 0x46081801  sub.s       $f0, $f3, $f8
    ctx->pc = 0x24442cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x244430: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x244430u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x244434: 0x46071041  sub.s       $f1, $f2, $f7
    ctx->pc = 0x244434u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
    // 0x244438: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x244438u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24443c: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x24443cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
label_244440:
    // 0x244440: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x244440u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x244444: 0x46000004  c1          0x4
    ctx->pc = 0x244444u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x244448: 0x3e00008  jr          $ra
    ctx->pc = 0x244448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244448u;
        // 0x24444c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244450u;
}
