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

// Function: sub_0031AA88
// Address: 0x31aa88 - 0x31aad0
void sub_0031AA88_0x31aa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AA88_0x31aa88");
#endif

    ctx->pc = 0x31aa88u;

    // 0x31aa88: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31AA88u;
    {
        const bool branch_taken_0x31aa88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x31aa88) {
            ctx->pc = 0x31AA98u;
            goto label_31aa98;
        }
    }
    ctx->pc = 0x31AA90u;
    // 0x31aa90: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x31aa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31aa94: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x31aa94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_31aa98:
    // 0x31aa98: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x31AA98u;
    {
        const bool branch_taken_0x31aa98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x31aa98) {
            ctx->pc = 0x31AAA8u;
            goto label_31aaa8;
        }
    }
    ctx->pc = 0x31AAA0u;
    // 0x31aaa0: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x31aaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31aaa4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x31aaa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_31aaa8:
    // 0x31aaa8: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x31AAA8u;
    {
        const bool branch_taken_0x31aaa8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x31aaa8) {
            ctx->pc = 0x31AAB8u;
            goto label_31aab8;
        }
    }
    ctx->pc = 0x31AAB0u;
    // 0x31aab0: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x31aab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31aab4: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x31aab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_31aab8:
    // 0x31aab8: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31AAB8u;
    {
        const bool branch_taken_0x31aab8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x31aab8) {
            ctx->pc = 0x31AAC8u;
            goto label_31aac8;
        }
    }
    ctx->pc = 0x31AAC0u;
    // 0x31aac0: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x31aac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31aac4: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x31aac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_31aac8:
    // 0x31aac8: 0x3e00008  jr          $ra
    ctx->pc = 0x31AAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31AAD0u;
}
