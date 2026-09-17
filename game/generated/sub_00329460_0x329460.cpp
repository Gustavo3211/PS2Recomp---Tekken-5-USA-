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

// Function: sub_00329460
// Address: 0x329460 - 0x3294c8
void sub_00329460_0x329460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00329460_0x329460");
#endif

    switch (ctx->pc) {
        case 0x329490u: goto label_329490;
        case 0x3294acu: goto label_3294ac;
        default: break;
    }

    ctx->pc = 0x329460u;

    // 0x329460: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x329460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329464: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x329464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x329468: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x329468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32946c: 0x2484f380  addiu       $a0, $a0, -0xC80
    ctx->pc = 0x32946cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964096));
    // 0x329470: 0xe7b60018  swc1        $f22, 0x18($sp)
    ctx->pc = 0x329470u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x329474: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x329474u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x329478: 0xe7b50010  swc1        $f21, 0x10($sp)
    ctx->pc = 0x329478u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x32947c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x32947cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x329480: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x329480u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x329484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x329484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x329488: 0xc0ca982  jal         func_32A608
    ctx->pc = 0x329488u;
    SET_GPR_U32(ctx, 31, 0x329490u);
    ctx->pc = 0x32948Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x329488u;
    // 0x32948c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A608u, 0x329488u, 0x329490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x329490u;
label_329490:
    // 0x329490: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x329490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x329494: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x329494u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x329498: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x329498u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x32949c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32949Cu;
    {
        const bool branch_taken_0x32949c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3294A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32949Cu;
        // 0x3294a0: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32949c) {
            ctx->pc = 0x3294ACu;
            goto label_3294ac;
        }
    }
    ctx->pc = 0x3294A4u;
    // 0x3294a4: 0xc0ca618  jal         func_329860
    ctx->pc = 0x3294A4u;
    SET_GPR_U32(ctx, 31, 0x3294ACu);
    ctx->pc = 0x329860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329860u, 0x3294A4u, 0x3294ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3294ACu;
label_3294ac:
    // 0x3294ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3294acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3294b0: 0xc7b60018  lwc1        $f22, 0x18($sp)
    ctx->pc = 0x3294b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3294b4: 0xc7b50010  lwc1        $f21, 0x10($sp)
    ctx->pc = 0x3294b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3294b8: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x3294b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3294bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3294BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3294C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3294BCu;
        // 0x3294c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3294BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3294C4u;
    // 0x3294c4: 0x0  nop
    ctx->pc = 0x3294c4u;
    // NOP
    ctx->pc = 0x3294c8u;
}
