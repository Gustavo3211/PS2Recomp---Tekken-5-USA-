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

// Function: sub_0031BE28
// Address: 0x31be28 - 0x31be38
void sub_0031BE28_0x31be28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031BE28_0x31be28");
#endif

    ctx->pc = 0x31be28u;

    // 0x31be28: 0xc7809614  lwc1        $f0, -0x69EC($gp)
    ctx->pc = 0x31be28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31be2c: 0x3e00008  jr          $ra
    ctx->pc = 0x31BE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BE34u;
    // 0x31be34: 0x0  nop
    ctx->pc = 0x31be34u;
    // NOP
    ctx->pc = 0x31be38u;
}
