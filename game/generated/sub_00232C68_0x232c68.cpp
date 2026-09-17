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

// Function: sub_00232C68
// Address: 0x232c68 - 0x232cc0
void sub_00232C68_0x232c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232C68_0x232c68");
#endif

    switch (ctx->pc) {
        case 0x232c98u: goto label_232c98;
        default: break;
    }

    ctx->pc = 0x232c68u;

    // 0x232c68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x232c6c: 0xc781858c  lwc1        $f1, -0x7A74($gp)
    ctx->pc = 0x232c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x232c70: 0xe7b50010  swc1        $f21, 0x10($sp)
    ctx->pc = 0x232c70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x232c74: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x232c74u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x232c78: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x232c78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x232c7c: 0x46157501  sub.s       $f20, $f14, $f21
    ctx->pc = 0x232c7cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[14], ctx->f[21]);
    // 0x232c80: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x232c80u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x232c84: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x232c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x232c88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x232c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x232c8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x232c90: 0xc04746c  jal         func_11D1B0
    ctx->pc = 0x232C90u;
    SET_GPR_U32(ctx, 31, 0x232C98u);
    ctx->pc = 0x232C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232C90u;
    // 0x232c94: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D1B0u, 0x232C90u, 0x232C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232C98u;
label_232c98:
    // 0x232c98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x232c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x232c9c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x232c9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x232ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232ca4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x232ca4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x232ca8: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x232ca8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x232cac: 0x4615a000  add.s       $f0, $f20, $f21
    ctx->pc = 0x232cacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x232cb0: 0xc7b50010  lwc1        $f21, 0x10($sp)
    ctx->pc = 0x232cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x232cb4: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x232cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x232cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x232CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232CB8u;
        // 0x232cbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232CC0u;
}
