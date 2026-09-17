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

// Function: sub_0029D3B0
// Address: 0x29d3b0 - 0x29d458
void sub_0029D3B0_0x29d3b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D3B0_0x29d3b0");
#endif

    ctx->pc = 0x29d3b0u;

    // 0x29d3b0: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x29d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x29d3b4: 0x3c014302  lui         $at, 0x4302
    ctx->pc = 0x29d3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17154 << 16));
    // 0x29d3b8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x29d3b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x29d3bc: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x29D3BCu;
    {
        const bool branch_taken_0x29d3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3BCu;
        // 0x29d3c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d3bc) {
            ctx->pc = 0x29D444u;
            goto label_29d444;
        }
    }
    ctx->pc = 0x29D3C4u;
    // 0x29d3c4: 0x14a2001f  bne         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x29D3C4u;
    {
        const bool branch_taken_0x29d3c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x29D3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3C4u;
        // 0x29d3c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d3c4) {
            ctx->pc = 0x29D444u;
            goto label_29d444;
        }
    }
    ctx->pc = 0x29D3CCu;
    // 0x29d3cc: 0x10c2000e  beq         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29D3CCu;
    {
        const bool branch_taken_0x29d3cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x29D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3CCu;
        // 0x29d3d0: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d3cc) {
            ctx->pc = 0x29D408u;
            goto label_29d408;
        }
    }
    ctx->pc = 0x29D3D4u;
    // 0x29d3d4: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x29D3D4u;
    {
        const bool branch_taken_0x29d3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3D4u;
        // 0x29d3d8: 0x61040  sll         $v0, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d3d4) {
            ctx->pc = 0x29D444u;
            goto label_29d444;
        }
    }
    ctx->pc = 0x29D3DCu;
    // 0x29d3dc: 0x8c850150  lw          $a1, 0x150($a0)
    ctx->pc = 0x29d3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29d3e0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x29d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x29d3e4: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x29d3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x29d3e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29d3ec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x29d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29d3f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x29d3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29d3f4: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x29D3F4u;
    {
        const bool branch_taken_0x29d3f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x29d3f4) {
            ctx->pc = 0x29D444u;
            goto label_29d444;
        }
    }
    ctx->pc = 0x29D3FCu;
    // 0x29d3fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29D3FCu;
    {
        const bool branch_taken_0x29d3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D3FCu;
        // 0x29d400: 0xc4a200d4  lwc1        $f2, 0xD4($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d3fc) {
            ctx->pc = 0x29D410u;
            goto label_29d410;
        }
    }
    ctx->pc = 0x29D404u;
    // 0x29d404: 0x0  nop
    ctx->pc = 0x29d404u;
    // NOP
label_29d408:
    // 0x29d408: 0x8c850150  lw          $a1, 0x150($a0)
    ctx->pc = 0x29d408u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29d40c: 0xc4a200d4  lwc1        $f2, 0xD4($a1)
    ctx->pc = 0x29d40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29d410:
    // 0x29d410: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x29d410u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d414: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x29d414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29d418: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x29D418u;
    {
        const bool branch_taken_0x29d418 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29d418) {
            ctx->pc = 0x29D444u;
            goto label_29d444;
        }
    }
    ctx->pc = 0x29D420u;
    // 0x29d420: 0x3c014212  lui         $at, 0x4212
    ctx->pc = 0x29d420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16914 << 16));
    // 0x29d424: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29d424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29d428: 0x3c014342  lui         $at, 0x4342
    ctx->pc = 0x29d428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17218 << 16));
    // 0x29d42c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29d42cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29d430: 0x0  nop
    ctx->pc = 0x29d430u;
    // NOP
    // 0x29d434: 0x0  nop
    ctx->pc = 0x29d434u;
    // NOP
    // 0x29d438: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x29d438u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x29d43c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x29d43cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29d440: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x29d440u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_29d444:
    // 0x29d444: 0x14e00002  bnez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x29D444u;
    {
        const bool branch_taken_0x29d444 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D444u;
        // 0x29d448: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d444) {
            ctx->pc = 0x29D450u;
            goto label_29d450;
        }
    }
    ctx->pc = 0x29D44Cu;
    // 0x29d44c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x29d44cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_29d450:
    // 0x29d450: 0x3e00008  jr          $ra
    ctx->pc = 0x29D450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D458u;
}
