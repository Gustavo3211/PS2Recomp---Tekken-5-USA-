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

// Function: sub_004A6080
// Address: 0x4a6080 - 0x4a60a0
void sub_004A6080_0x4a6080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6080_0x4a6080");
#endif

    switch (ctx->pc) {
        case 0x4a6084u: goto label_4a6084;
        case 0x4a6088u: goto label_4a6088;
        case 0x4a608cu: goto label_4a608c;
        case 0x4a6098u: goto label_4a6098;
        default: break;
    }

    ctx->pc = 0x4a6080u;

    // 0x4a6080: 0x240200a0  addiu       $v0, $zero, 0xA0
    ctx->pc = 0x4a6080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_4a6084:
    // 0x4a6084: 0xa4e20002  sh          $v0, 0x2($a3)
    ctx->pc = 0x4a6084u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
label_4a6088:
    // 0x4a6088: 0x2543d680  addiu       $v1, $t2, -0x2980
    ctx->pc = 0x4a6088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956672));
label_4a608c:
    // 0x4a608c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4a608cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4a6090: 0xa46223c2  sh          $v0, 0x23C2($v1)
    ctx->pc = 0x4a6090u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9154), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a6094: 0xa46023c6  sh          $zero, 0x23C6($v1)
    ctx->pc = 0x4a6094u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 9158), (uint16_t)GPR_U32(ctx, 0));
label_4a6098:
    // 0x4a6098: 0x3e00008  jr          $ra
    ctx->pc = 0x4A6098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A6098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A60A0u;
}
