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

// Function: sub_00344128
// Address: 0x344128 - 0x344200
void sub_00344128_0x344128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344128_0x344128");
#endif

    switch (ctx->pc) {
        case 0x344174u: goto label_344174;
        case 0x3441b8u: goto label_3441b8;
        case 0x3441e4u: goto label_3441e4;
        default: break;
    }

    ctx->pc = 0x344128u;

    // 0x344128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x344128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34412c: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x34412cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x344130: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x344130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x344134: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x344134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x344138: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x344138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x34413c: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x34413cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x344140: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x344140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x344144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x344148: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x344148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x34414c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x34414cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x344150: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x344150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x344154: 0x46006045  abs.s       $f1, $f12
    ctx->pc = 0x344154u;
    ctx->f[1] = FPU_ABS_S(ctx->f[12]);
    // 0x344158: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x344158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x34415c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x34415cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344160: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x344160u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x344164: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x344164u;
    {
        const bool branch_taken_0x344164 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x344168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344164u;
        // 0x344168: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x344164) {
            ctx->pc = 0x344180u;
            goto label_344180;
        }
    }
    ctx->pc = 0x34416Cu;
    // 0x34416c: 0xc0d101c  jal         func_344070
    ctx->pc = 0x34416Cu;
    SET_GPR_U32(ctx, 31, 0x344174u);
    ctx->pc = 0x344070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344070u, 0x34416Cu, 0x344174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344174u;
label_344174:
    // 0x344174: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x344174u;
    {
        const bool branch_taken_0x344174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344174u;
        // 0x344178: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x344174) {
            ctx->pc = 0x3441F0u;
            goto label_3441f0;
        }
    }
    ctx->pc = 0x34417Cu;
    // 0x34417c: 0x0  nop
    ctx->pc = 0x34417cu;
    // NOP
label_344180:
    // 0x344180: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x344180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x344184: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x344184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344188: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x344188u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34418c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x34418Cu;
    {
        const bool branch_taken_0x34418c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x34418c) {
            ctx->pc = 0x3441C8u;
            goto label_3441c8;
        }
    }
    ctx->pc = 0x344194u;
    // 0x344194: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x344194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x344198: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x344198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x34419c: 0x460c0800  add.s       $f0, $f1, $f12
    ctx->pc = 0x34419cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
    // 0x3441a0: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x3441a0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x3441a4: 0x0  nop
    ctx->pc = 0x3441a4u;
    // NOP
    // 0x3441a8: 0x0  nop
    ctx->pc = 0x3441a8u;
    // NOP
    // 0x3441ac: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x3441acu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x3441b0: 0xc0d101c  jal         func_344070
    ctx->pc = 0x3441B0u;
    SET_GPR_U32(ctx, 31, 0x3441B8u);
    ctx->pc = 0x344070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344070u, 0x3441B0u, 0x3441B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3441B8u;
label_3441b8:
    // 0x3441b8: 0xc781965c  lwc1        $f1, -0x69A4($gp)
    ctx->pc = 0x3441b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3441bc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3441BCu;
    {
        const bool branch_taken_0x3441bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3441C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3441BCu;
        // 0x3441c0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3441bc) {
            ctx->pc = 0x3441ECu;
            goto label_3441ec;
        }
    }
    ctx->pc = 0x3441C4u;
    // 0x3441c4: 0x0  nop
    ctx->pc = 0x3441c4u;
    // NOP
label_3441c8:
    // 0x3441c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3441c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3441cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3441ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3441d0: 0x0  nop
    ctx->pc = 0x3441d0u;
    // NOP
    // 0x3441d4: 0x0  nop
    ctx->pc = 0x3441d4u;
    // NOP
    // 0x3441d8: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x3441d8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x3441dc: 0xc0d101c  jal         func_344070
    ctx->pc = 0x3441DCu;
    SET_GPR_U32(ctx, 31, 0x3441E4u);
    ctx->pc = 0x344070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344070u, 0x3441DCu, 0x3441E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3441E4u;
label_3441e4:
    // 0x3441e4: 0xc7819660  lwc1        $f1, -0x69A0($gp)
    ctx->pc = 0x3441e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3441e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3441e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3441ec:
    // 0x3441ec: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3441ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3441f0:
    // 0x3441f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3441f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3441f4: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x3441f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3441f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3441F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3441FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3441F8u;
        // 0x3441fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3441F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344200u;
}
