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

// Function: sub_00360818
// Address: 0x360818 - 0x360898
void sub_00360818_0x360818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00360818_0x360818");
#endif

    switch (ctx->pc) {
        case 0x360834u: goto label_360834;
        default: break;
    }

    ctx->pc = 0x360818u;

    // 0x360818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x360818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36081c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36081cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x360820: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x360820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360824: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x360824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x360828: 0x8204001f  lb          $a0, 0x1F($s0)
    ctx->pc = 0x360828u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 31)));
    // 0x36082c: 0xc0d8226  jal         func_360898
    ctx->pc = 0x36082Cu;
    SET_GPR_U32(ctx, 31, 0x360834u);
    ctx->pc = 0x360830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36082Cu;
    // 0x360830: 0x92050006  lbu         $a1, 0x6($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360898u, 0x36082Cu, 0x360834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360834u;
label_360834:
    // 0x360834: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x360834u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x360838: 0x9203001e  lbu         $v1, 0x1E($s0)
    ctx->pc = 0x360838u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 30)));
    // 0x36083c: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x36083cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x360840: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x360840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x360844: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x360844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x360848: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x360848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36084c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x36084cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x360850: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x360850u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x360854: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x360854u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x360858: 0x0  nop
    ctx->pc = 0x360858u;
    // NOP
    // 0x36085c: 0x0  nop
    ctx->pc = 0x36085cu;
    // NOP
    // 0x360860: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x360860u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x360864: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x360864u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x360868: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x360868u;
    {
        const bool branch_taken_0x360868 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x360868) {
            ctx->pc = 0x360878u;
            goto label_360878;
        }
    }
    ctx->pc = 0x360870u;
    // 0x360870: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x360870u;
    {
        const bool branch_taken_0x360870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360870u;
        // 0x360874: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x360870) {
            ctx->pc = 0x360884u;
            goto label_360884;
        }
    }
    ctx->pc = 0x360878u;
label_360878:
    // 0x360878: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x360878u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36087c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x36087Cu;
    {
        const bool branch_taken_0x36087c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x36087c) {
            ctx->pc = 0x360880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36087Cu;
            // 0x360880: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x360884u;
            goto label_360884;
        }
    }
    ctx->pc = 0x360884u;
label_360884:
    // 0x360884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x360884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360888: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x360888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36088c: 0x3e00008  jr          $ra
    ctx->pc = 0x36088Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36088Cu;
        // 0x360890: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36088Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360894u;
    // 0x360894: 0x0  nop
    ctx->pc = 0x360894u;
    // NOP
    ctx->pc = 0x360898u;
}
