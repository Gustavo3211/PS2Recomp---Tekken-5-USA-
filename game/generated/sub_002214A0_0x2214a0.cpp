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

// Function: sub_002214A0
// Address: 0x2214a0 - 0x221550
void sub_002214A0_0x2214a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002214A0_0x2214a0");
#endif

    ctx->pc = 0x2214a0u;

    // 0x2214a0: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x2214a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2214a4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2214a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2214a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2214a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2214ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2214acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2214b0: 0x46001101  sub.s       $f4, $f2, $f0
    ctx->pc = 0x2214b0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2214b4: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2214b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2214b8: 0xc4a30020  lwc1        $f3, 0x20($a1)
    ctx->pc = 0x2214b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2214bc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2214bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2214c0: 0x46011942  mul.s       $f5, $f3, $f1
    ctx->pc = 0x2214c0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x2214c4: 0xc4e60000  lwc1        $f6, 0x0($a3)
    ctx->pc = 0x2214c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2214c8: 0x46002105  abs.s       $f4, $f4
    ctx->pc = 0x2214c8u;
    ctx->f[4] = FPU_ABS_S(ctx->f[4]);
    // 0x2214cc: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x2214ccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2214d0: 0x46062800  add.s       $f0, $f5, $f6
    ctx->pc = 0x2214d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x2214d4: 0x46052036  c.le.s      $f4, $f5
    ctx->pc = 0x2214d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2214d8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2214D8u;
    {
        const bool branch_taken_0x2214d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2214DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214D8u;
        // 0x2214dc: 0x46000845  abs.s       $f1, $f1 (Delay Slot)
        ctx->f[1] = FPU_ABS_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2214d8) {
            ctx->pc = 0x2214F0u;
            goto label_2214f0;
        }
    }
    ctx->pc = 0x2214E0u;
    // 0x2214e0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2214e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2214e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2214E4u;
    {
        const bool branch_taken_0x2214e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2214e4) {
            ctx->pc = 0x221500u;
            goto label_221500;
        }
    }
    ctx->pc = 0x2214ECu;
    // 0x2214ec: 0x0  nop
    ctx->pc = 0x2214ecu;
    // NOP
label_2214f0:
    // 0x2214f0: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x2214f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2214f4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2214F4u;
    {
        const bool branch_taken_0x2214f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2214F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2214F4u;
        // 0x2214f8: 0x460020c6  mov.s       $f3, $f4 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2214f4) {
            ctx->pc = 0x221510u;
            goto label_221510;
        }
    }
    ctx->pc = 0x2214FCu;
    // 0x2214fc: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x2214fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_221500:
    // 0x221500: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x221500u;
    {
        const bool branch_taken_0x221500 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x221500) {
            ctx->pc = 0x221504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x221500u;
            // 0x221504: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x221548u;
            goto label_221548;
        }
    }
    ctx->pc = 0x221508u;
    // 0x221508: 0x3e00008  jr          $ra
    ctx->pc = 0x221508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22150Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221508u;
        // 0x22150c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221510u;
label_221510:
    // 0x221510: 0x46003086  mov.s       $f2, $f6
    ctx->pc = 0x221510u;
    ctx->f[2] = FPU_MOV_S(ctx->f[6]);
    // 0x221514: 0x46002806  mov.s       $f0, $f5
    ctx->pc = 0x221514u;
    ctx->f[0] = FPU_MOV_S(ctx->f[5]);
    // 0x221518: 0x4600001a  mula.s      $f0, $f0
    ctx->pc = 0x221518u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x22151c: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x22151cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x221520: 0x46000004  c1          0x4
    ctx->pc = 0x221520u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x221524: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x221524u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x221528: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x221528u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x22152c: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x22152cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x221530: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x221530u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x221534: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x221534u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x221538: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x221538u;
    {
        const bool branch_taken_0x221538 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x22153Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221538u;
        // 0x22153c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221538) {
            ctx->pc = 0x221548u;
            goto label_221548;
        }
    }
    ctx->pc = 0x221540u;
    // 0x221540: 0x3e00008  jr          $ra
    ctx->pc = 0x221540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x221540u;
        // 0x221544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221548u;
label_221548:
    // 0x221548: 0x3e00008  jr          $ra
    ctx->pc = 0x221548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x221548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x221550u;
}
