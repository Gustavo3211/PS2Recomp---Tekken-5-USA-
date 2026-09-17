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

// Function: sub_0028FD30
// Address: 0x28fd30 - 0x28fd58
void sub_0028FD30_0x28fd30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FD30_0x28fd30");
#endif

    switch (ctx->pc) {
        case 0x28fd30u: goto label_28fd30;
        case 0x28fd34u: goto label_28fd34;
        case 0x28fd38u: goto label_28fd38;
        case 0x28fd3cu: goto label_28fd3c;
        case 0x28fd40u: goto label_28fd40;
        case 0x28fd44u: goto label_28fd44;
        case 0x28fd48u: goto label_28fd48;
        case 0x28fd4cu: goto label_28fd4c;
        case 0x28fd50u: goto label_28fd50;
        case 0x28fd54u: goto label_28fd54;
        default: break;
    }

    ctx->pc = 0x28fd30u;

label_28fd30:
    // 0x28fd30: 0x2c820013  sltiu       $v0, $a0, 0x13
    ctx->pc = 0x28fd30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_28fd34:
    // 0x28fd34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_28fd38:
    if (ctx->pc == 0x28FD38u) {
        ctx->pc = 0x28FD3Cu;
        goto label_28fd3c;
    }
    ctx->pc = 0x28FD34u;
    {
        const bool branch_taken_0x28fd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fd34) {
            ctx->pc = 0x28FD58u;
            return;
        }
    }
    ctx->pc = 0x28FD3Cu;
label_28fd3c:
    // 0x28fd3c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x28fd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_28fd40:
    // 0x28fd40: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x28fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_28fd44:
    // 0x28fd44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28fd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28fd48:
    // 0x28fd48: 0x8c63aaa0  lw          $v1, -0x5560($v1)
    ctx->pc = 0x28fd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294945440)));
label_28fd4c:
    // 0x28fd4c: 0x600008  jr          $v1
label_28fd50:
    if (ctx->pc == 0x28FD50u) {
        ctx->pc = 0x28FD54u;
        goto label_28fd54;
    }
    ctx->pc = 0x28FD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FD4Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x28FD54u;
label_28fd54:
    // 0x28fd54: 0x0  nop
    ctx->pc = 0x28fd54u;
    // NOP
    ctx->pc = 0x28fd58u;
}
