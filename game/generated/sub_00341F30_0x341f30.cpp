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

// Function: sub_00341F30
// Address: 0x341f30 - 0x341f60
void sub_00341F30_0x341f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00341F30_0x341f30");
#endif

    switch (ctx->pc) {
        case 0x341f30u: goto label_341f30;
        case 0x341f34u: goto label_341f34;
        case 0x341f38u: goto label_341f38;
        case 0x341f3cu: goto label_341f3c;
        case 0x341f40u: goto label_341f40;
        case 0x341f44u: goto label_341f44;
        case 0x341f48u: goto label_341f48;
        case 0x341f4cu: goto label_341f4c;
        case 0x341f50u: goto label_341f50;
        case 0x341f54u: goto label_341f54;
        case 0x341f58u: goto label_341f58;
        case 0x341f5cu: goto label_341f5c;
        default: break;
    }

    ctx->pc = 0x341f30u;

label_341f30:
    // 0x341f30: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x341f30u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
label_341f34:
    // 0x341f34: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x341f34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_341f38:
    // 0x341f38: 0x2484ff70  addiu       $a0, $a0, -0x90
    ctx->pc = 0x341f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967152));
label_341f3c:
    // 0x341f3c: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x341f3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_341f40:
    // 0x341f40: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_341f44:
    if (ctx->pc == 0x341F44u) {
        ctx->pc = 0x341F48u;
        goto label_341f48;
    }
    ctx->pc = 0x341F40u;
    {
        const bool branch_taken_0x341f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x341f40) {
            ctx->pc = 0x342020u;
            return;
        }
    }
    ctx->pc = 0x341F48u;
label_341f48:
    // 0x341f48: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x341f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_341f4c:
    // 0x341f4c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x341f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_341f50:
    // 0x341f50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x341f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_341f54:
    // 0x341f54: 0x8c634840  lw          $v1, 0x4840($v1)
    ctx->pc = 0x341f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18496)));
label_341f58:
    // 0x341f58: 0x600008  jr          $v1
label_341f5c:
    if (ctx->pc == 0x341F5Cu) {
        ctx->pc = 0x341F60u;
        goto label_fallthrough_0x341f58;
    }
    ctx->pc = 0x341F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x341F58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x341f58:
    ctx->pc = 0x341F60u;
}
