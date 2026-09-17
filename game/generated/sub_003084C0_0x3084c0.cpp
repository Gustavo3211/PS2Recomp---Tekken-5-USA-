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

// Function: sub_003084C0
// Address: 0x3084c0 - 0x3084f0
void sub_003084C0_0x3084c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003084C0_0x3084c0");
#endif

    switch (ctx->pc) {
        case 0x3084c0u: goto label_3084c0;
        case 0x3084c4u: goto label_3084c4;
        case 0x3084c8u: goto label_3084c8;
        case 0x3084ccu: goto label_3084cc;
        case 0x3084d0u: goto label_3084d0;
        case 0x3084d4u: goto label_3084d4;
        case 0x3084d8u: goto label_3084d8;
        case 0x3084dcu: goto label_3084dc;
        case 0x3084e0u: goto label_3084e0;
        case 0x3084e4u: goto label_3084e4;
        case 0x3084e8u: goto label_3084e8;
        case 0x3084ecu: goto label_3084ec;
        default: break;
    }

    ctx->pc = 0x3084c0u;

label_3084c0:
    // 0x3084c0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3084c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3084c4:
    // 0x3084c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3084c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3084c8:
    // 0x3084c8: 0x2c43001c  sltiu       $v1, $v0, 0x1C
    ctx->pc = 0x3084c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
label_3084cc:
    // 0x3084cc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_3084d0:
    if (ctx->pc == 0x3084D0u) {
        ctx->pc = 0x3084D4u;
        goto label_3084d4;
    }
    ctx->pc = 0x3084CCu;
    {
        const bool branch_taken_0x3084cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3084cc) {
            ctx->pc = 0x3084F8u;
            return;
        }
    }
    ctx->pc = 0x3084D4u;
label_3084d4:
    // 0x3084d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3084d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3084d8:
    // 0x3084d8: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3084d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_3084dc:
    // 0x3084dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3084dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3084e0:
    // 0x3084e0: 0x8c632920  lw          $v1, 0x2920($v1)
    ctx->pc = 0x3084e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10528)));
label_3084e4:
    // 0x3084e4: 0x600008  jr          $v1
label_3084e8:
    if (ctx->pc == 0x3084E8u) {
        ctx->pc = 0x3084ECu;
        goto label_3084ec;
    }
    ctx->pc = 0x3084E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3084E4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3084ECu;
label_3084ec:
    // 0x3084ec: 0x0  nop
    ctx->pc = 0x3084ecu;
    // NOP
    ctx->pc = 0x3084f0u;
}
