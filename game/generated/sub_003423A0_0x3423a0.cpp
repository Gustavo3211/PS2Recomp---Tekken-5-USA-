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

// Function: sub_003423A0
// Address: 0x3423a0 - 0x3423d0
void sub_003423A0_0x3423a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003423A0_0x3423a0");
#endif

    switch (ctx->pc) {
        case 0x3423a0u: goto label_3423a0;
        case 0x3423a4u: goto label_3423a4;
        case 0x3423a8u: goto label_3423a8;
        case 0x3423acu: goto label_3423ac;
        case 0x3423b0u: goto label_3423b0;
        case 0x3423b4u: goto label_3423b4;
        case 0x3423b8u: goto label_3423b8;
        case 0x3423bcu: goto label_3423bc;
        case 0x3423c0u: goto label_3423c0;
        case 0x3423c4u: goto label_3423c4;
        case 0x3423c8u: goto label_3423c8;
        case 0x3423ccu: goto label_3423cc;
        default: break;
    }

    ctx->pc = 0x3423a0u;

label_3423a0:
    // 0x3423a0: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x3423a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
label_3423a4:
    // 0x3423a4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3423a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3423a8:
    // 0x3423a8: 0x2484ff7f  addiu       $a0, $a0, -0x81
    ctx->pc = 0x3423a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967167));
label_3423ac:
    // 0x3423ac: 0x2c820017  sltiu       $v0, $a0, 0x17
    ctx->pc = 0x3423acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
label_3423b0:
    // 0x3423b0: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_3423b4:
    if (ctx->pc == 0x3423B4u) {
        ctx->pc = 0x3423B8u;
        goto label_3423b8;
    }
    ctx->pc = 0x3423B0u;
    {
        const bool branch_taken_0x3423b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3423b0) {
            ctx->pc = 0x3424F0u;
            return;
        }
    }
    ctx->pc = 0x3423B8u;
label_3423b8:
    // 0x3423b8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3423b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3423bc:
    // 0x3423bc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3423bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_3423c0:
    // 0x3423c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3423c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3423c4:
    // 0x3423c4: 0x8c634860  lw          $v1, 0x4860($v1)
    ctx->pc = 0x3423c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18528)));
label_3423c8:
    // 0x3423c8: 0x600008  jr          $v1
label_3423cc:
    if (ctx->pc == 0x3423CCu) {
        ctx->pc = 0x3423D0u;
        goto label_fallthrough_0x3423c8;
    }
    ctx->pc = 0x3423C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3423C8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x3423c8:
    ctx->pc = 0x3423D0u;
}
