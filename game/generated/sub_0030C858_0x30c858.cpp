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

// Function: sub_0030C858
// Address: 0x30c858 - 0x30c8b8
void sub_0030C858_0x30c858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C858_0x30c858");
#endif

    switch (ctx->pc) {
        case 0x30c874u: goto label_30c874;
        default: break;
    }

    ctx->pc = 0x30c858u;

    // 0x30c858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30c858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30c85c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30c85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30c860: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30c860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c864: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x30c864u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x30c868: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x30c868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x30c86c: 0xc0c322e  jal         func_30C8B8
    ctx->pc = 0x30C86Cu;
    SET_GPR_U32(ctx, 31, 0x30C874u);
    ctx->pc = 0x30C870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C86Cu;
    // 0x30c870: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C8B8u, 0x30C86Cu, 0x30C874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C874u;
label_30c874:
    // 0x30c874: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x30c874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c878: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x30c878u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30c87c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x30C87Cu;
    {
        const bool branch_taken_0x30c87c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x30c87c) {
            ctx->pc = 0x30C890u;
            goto label_30c890;
        }
    }
    ctx->pc = 0x30C884u;
    // 0x30c884: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30C884u;
    {
        const bool branch_taken_0x30c884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C884u;
        // 0x30c888: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c884) {
            ctx->pc = 0x30C89Cu;
            goto label_30c89c;
        }
    }
    ctx->pc = 0x30C88Cu;
    // 0x30c88c: 0x0  nop
    ctx->pc = 0x30c88cu;
    // NOP
label_30c890:
    // 0x30c890: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x30c890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30c894: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x30C894u;
    {
        const bool branch_taken_0x30c894 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x30c894) {
            ctx->pc = 0x30C898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30C894u;
            // 0x30c898: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30C89Cu;
            goto label_30c89c;
        }
    }
    ctx->pc = 0x30C89Cu;
label_30c89c:
    // 0x30c89c: 0xe6140014  swc1        $f20, 0x14($s0)
    ctx->pc = 0x30c89cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x30c8a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x30c8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30c8a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30c8a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c8a8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x30c8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30c8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x30C8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C8ACu;
        // 0x30c8b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C8B4u;
    // 0x30c8b4: 0x0  nop
    ctx->pc = 0x30c8b4u;
    // NOP
    ctx->pc = 0x30c8b8u;
}
