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

// Function: sub_002B8168
// Address: 0x2b8168 - 0x2b8258
void sub_002B8168_0x2b8168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B8168_0x2b8168");
#endif

    ctx->pc = 0x2b8168u;

    // 0x2b8168: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x2b8168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b816c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2b816cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8170: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b8170u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b8174: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2B8174u;
    {
        const bool branch_taken_0x2b8174 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B8178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8174u;
        // 0x2b8178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8174) {
            ctx->pc = 0x2B81C0u;
            goto label_2b81c0;
        }
    }
    ctx->pc = 0x2B817Cu;
    // 0x2b817c: 0xc78290a0  lwc1        $f2, -0x6F60($gp)
    ctx->pc = 0x2b817cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b8180: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2b8180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8184: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b8184u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b8188: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b8188u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b818c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2B818Cu;
    {
        const bool branch_taken_0x2b818c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b818c) {
            ctx->pc = 0x2B81C0u;
            goto label_2b81c0;
        }
    }
    ctx->pc = 0x2B8194u;
    // 0x2b8194: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x2b8194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b8198: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2b8198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b819c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b819cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b81a0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2B81A0u;
    {
        const bool branch_taken_0x2b81a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b81a0) {
            ctx->pc = 0x2B81C0u;
            goto label_2b81c0;
        }
    }
    ctx->pc = 0x2B81A8u;
    // 0x2b81a8: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2b81a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b81ac: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b81acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b81b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b81b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b81b4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B81B4u;
    {
        const bool branch_taken_0x2b81b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B81B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B81B4u;
        // 0x2b81b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b81b4) {
            ctx->pc = 0x2B81C0u;
            goto label_2b81c0;
        }
    }
    ctx->pc = 0x2B81BCu;
    // 0x2b81bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b81bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b81c0:
    // 0x2b81c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B81C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B81C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B81C8u;
    // 0x2b81c8: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x2b81c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b81cc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2b81ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b81d0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2b81d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b81d4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2b81d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2b81d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b81d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b81dc: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2B81DCu;
    {
        const bool branch_taken_0x2b81dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b81dc) {
            ctx->pc = 0x2B81E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B81DCu;
            // 0x2b81e0: 0x46000002  mul.s       $f0, $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B81FCu;
            goto label_2b81fc;
        }
    }
    ctx->pc = 0x2B81E4u;
    // 0x2b81e4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2b81e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b81e8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2b81e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2b81ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b81ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b81f0: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2B81F0u;
    {
        const bool branch_taken_0x2b81f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b81f0) {
            ctx->pc = 0x2B81F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B81F0u;
            // 0x2b81f4: 0xc4e20008  lwc1        $f2, 0x8($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8204u;
            goto label_2b8204;
        }
    }
    ctx->pc = 0x2B81F8u;
    // 0x2b81f8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b81f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2b81fc:
    // 0x2b81fc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2b81fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b8200: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x2b8200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b8204:
    // 0x2b8204: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2b8204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8208: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2b8208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b820c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2b820cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2b8210: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2b8210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b8214: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2B8214u;
    {
        const bool branch_taken_0x2b8214 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b8214) {
            ctx->pc = 0x2B8218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8214u;
            // 0x2b8218: 0x46000002  mul.s       $f0, $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8234u;
            goto label_2b8234;
        }
    }
    ctx->pc = 0x2B821Cu;
    // 0x2b821c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2b821cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b8220: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2b8220u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2b8224: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2b8224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b8228: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2B8228u;
    {
        const bool branch_taken_0x2b8228 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b8228) {
            ctx->pc = 0x2B822Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8228u;
            // 0x2b822c: 0x460c6002  mul.s       $f0, $f12, $f12 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B823Cu;
            goto label_2b823c;
        }
    }
    ctx->pc = 0x2B8230u;
    // 0x2b8230: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b8230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2b8234:
    // 0x2b8234: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b8234u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2b8238: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x2b8238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_2b823c:
    // 0x2b823c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b823cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b8240: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B8240u;
    {
        const bool branch_taken_0x2b8240 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B8244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8240u;
        // 0x2b8244: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8240) {
            ctx->pc = 0x2B824Cu;
            goto label_2b824c;
        }
    }
    ctx->pc = 0x2B8248u;
    // 0x2b8248: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b8248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b824c:
    // 0x2b824c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B824Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B824Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8254u;
    // 0x2b8254: 0x0  nop
    ctx->pc = 0x2b8254u;
    // NOP
    ctx->pc = 0x2b8258u;
}
