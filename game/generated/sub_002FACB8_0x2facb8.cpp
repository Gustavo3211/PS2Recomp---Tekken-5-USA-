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

// Function: sub_002FACB8
// Address: 0x2facb8 - 0x2fad00
void sub_002FACB8_0x2facb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FACB8_0x2facb8");
#endif

    ctx->pc = 0x2facb8u;

    // 0x2facb8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2facb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2facbc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FACBCu;
    {
        const bool branch_taken_0x2facbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2facbc) {
            ctx->pc = 0x2FACD0u;
            goto label_2facd0;
        }
    }
    ctx->pc = 0x2FACC4u;
    // 0x2facc4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2facc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2facc8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2facc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2faccc: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2facccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_2facd0:
    // 0x2facd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FACD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FACD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FACD8u;
    // 0x2facd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2facd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2facdc: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2facdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2face0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2face0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2face4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2face4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2face8: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x2face8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2facec: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2facecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2facf0: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2facf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2facf4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2facf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2facf8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FACF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FACF8u;
        // 0x2facfc: 0xe4410010  swc1        $f1, 0x10($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FACF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAD00u;
}
