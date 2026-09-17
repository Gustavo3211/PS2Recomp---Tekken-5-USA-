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

// Function: sub_00252190
// Address: 0x252190 - 0x252258
void sub_00252190_0x252190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252190_0x252190");
#endif

    ctx->pc = 0x252190u;

    // 0x252190: 0xc4a10044  lwc1        $f1, 0x44($a1)
    ctx->pc = 0x252190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252194: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x252194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252198: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x252198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25219c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25219cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2521a0: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x2521a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x2521a4: 0xc4a20050  lwc1        $f2, 0x50($a1)
    ctx->pc = 0x2521a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2521a8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2521a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2521ac: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x2521acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x2521b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2521b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2521b4: 0x90a30058  lbu         $v1, 0x58($a1)
    ctx->pc = 0x2521b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x2521b8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2521b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2521bc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2521bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2521c0: 0x10670011  beq         $v1, $a3, . + 4 + (0x11 << 2)
    ctx->pc = 0x2521C0u;
    {
        const bool branch_taken_0x2521c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x2521C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2521C0u;
        // 0x2521c4: 0x460100c2  mul.s       $f3, $f0, $f1 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2521c0) {
            ctx->pc = 0x252208u;
            goto label_252208;
        }
    }
    ctx->pc = 0x2521C8u;
    // 0x2521c8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2521C8u;
    {
        const bool branch_taken_0x2521c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2521c8) {
            ctx->pc = 0x2521CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2521C8u;
            // 0x2521cc: 0xacc70020  sw          $a3, 0x20($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2521E8u;
            goto label_2521e8;
        }
    }
    ctx->pc = 0x2521D0u;
    // 0x2521d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2521d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2521d4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2521D4u;
    {
        const bool branch_taken_0x2521d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2521D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2521D4u;
        // 0x2521d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2521d4) {
            ctx->pc = 0x25220Cu;
            goto label_25220c;
        }
    }
    ctx->pc = 0x2521DCu;
    // 0x2521dc: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2521DCu;
    {
        const bool branch_taken_0x2521dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2521E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2521DCu;
        // 0x2521e0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2521dc) {
            ctx->pc = 0x252230u;
            goto label_252230;
        }
    }
    ctx->pc = 0x2521E4u;
    // 0x2521e4: 0xacc70020  sw          $a3, 0x20($a2)
    ctx->pc = 0x2521e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 7));
label_2521e8:
    // 0x2521e8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2521e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2521ec: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x2521ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2521f0: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2521f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2521f4: 0xe4c10010  swc1        $f1, 0x10($a2)
    ctx->pc = 0x2521f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x2521f8: 0xe4c3001c  swc1        $f3, 0x1C($a2)
    ctx->pc = 0x2521f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x2521fc: 0xe4c20014  swc1        $f2, 0x14($a2)
    ctx->pc = 0x2521fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x252200: 0x3e00008  jr          $ra
    ctx->pc = 0x252200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252200u;
        // 0x252204: 0xe4c00018  swc1        $f0, 0x18($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252208u;
label_252208:
    // 0x252208: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x252208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25220c:
    // 0x25220c: 0xacc20020  sw          $v0, 0x20($a2)
    ctx->pc = 0x25220cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 2));
    // 0x252210: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x252210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x252214: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x252214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252218: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x252218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25221c: 0xe4c3001c  swc1        $f3, 0x1C($a2)
    ctx->pc = 0x25221cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
    // 0x252220: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x252220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x252224: 0xe4c10014  swc1        $f1, 0x14($a2)
    ctx->pc = 0x252224u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x252228: 0x3e00008  jr          $ra
    ctx->pc = 0x252228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252228u;
        // 0x25222c: 0xe4c20018  swc1        $f2, 0x18($a2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252230u;
label_252230:
    // 0x252230: 0xacc20020  sw          $v0, 0x20($a2)
    ctx->pc = 0x252230u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 2));
    // 0x252234: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x252234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x252238: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x252238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25223c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x25223cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252240: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x252240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x252244: 0xe4c10014  swc1        $f1, 0x14($a2)
    ctx->pc = 0x252244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x252248: 0xe4c20018  swc1        $f2, 0x18($a2)
    ctx->pc = 0x252248u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x25224c: 0x3e00008  jr          $ra
    ctx->pc = 0x25224Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25224Cu;
        // 0x252250: 0xacc0001c  sw          $zero, 0x1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25224Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252254u;
    // 0x252254: 0x0  nop
    ctx->pc = 0x252254u;
    // NOP
    ctx->pc = 0x252258u;
}
