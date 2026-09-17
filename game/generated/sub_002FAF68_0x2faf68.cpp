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

// Function: sub_002FAF68
// Address: 0x2faf68 - 0x2fafb8
void sub_002FAF68_0x2faf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FAF68_0x2faf68");
#endif

    ctx->pc = 0x2faf68u;

    // 0x2faf68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2faf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2faf6c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2faf6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2faf70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2faf70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2faf74: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x2faf74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x2faf78: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FAF78u;
    {
        const bool branch_taken_0x2faf78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF78u;
        // 0x2faf7c: 0x8c420020  lw          $v0, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf78) {
            ctx->pc = 0x2FAF88u;
            goto label_2faf88;
        }
    }
    ctx->pc = 0x2FAF80u;
    // 0x2faf80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2FAF80u;
    {
        const bool branch_taken_0x2faf80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAF80u;
        // 0x2faf84: 0x8ca50008  lw          $a1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faf80) {
            ctx->pc = 0x2FAF8Cu;
            goto label_2faf8c;
        }
    }
    ctx->pc = 0x2FAF88u;
label_2faf88:
    // 0x2faf88: 0x24450010  addiu       $a1, $v0, 0x10
    ctx->pc = 0x2faf88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2faf8c:
    // 0x2faf8c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2faf8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2faf90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2faf90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2faf94: 0xc44e0090  lwc1        $f14, 0x90($v0)
    ctx->pc = 0x2faf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2faf98: 0xc44c0088  lwc1        $f12, 0x88($v0)
    ctx->pc = 0x2faf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2faf9c: 0xc44d008c  lwc1        $f13, 0x8C($v0)
    ctx->pc = 0x2faf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2fafa0: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x2fafa0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x2fafa4: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2fafa4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2fafa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fafa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fafac: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x2fafacu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x2fafb0: 0x80beb78  j           func_2FADE0
    ctx->pc = 0x2FAFB0u;
    ctx->pc = 0x2FAFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAFB0u;
    // 0x2fafb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FADE0u, 0x2FAFB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x2FAFB8u;
}
