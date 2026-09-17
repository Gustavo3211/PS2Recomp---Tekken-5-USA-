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

// Function: sub_002DDEB8
// Address: 0x2ddeb8 - 0x2ddee0
void sub_002DDEB8_0x2ddeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDEB8_0x2ddeb8");
#endif

    switch (ctx->pc) {
        case 0x2ddeb8u: goto label_2ddeb8;
        case 0x2ddebcu: goto label_2ddebc;
        case 0x2ddec0u: goto label_2ddec0;
        case 0x2ddec4u: goto label_2ddec4;
        case 0x2ddec8u: goto label_2ddec8;
        case 0x2ddeccu: goto label_2ddecc;
        case 0x2dded0u: goto label_2dded0;
        case 0x2dded4u: goto label_2dded4;
        case 0x2dded8u: goto label_2dded8;
        case 0x2ddedcu: goto label_2ddedc;
        default: break;
    }

    ctx->pc = 0x2ddeb8u;

label_2ddeb8:
    // 0x2ddeb8: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x2ddeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_2ddebc:
    // 0x2ddebc: 0x8c6337b0  lw          $v1, 0x37B0($v1)
    ctx->pc = 0x2ddebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14256)));
label_2ddec0:
    // 0x2ddec0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2ddec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_2ddec4:
    // 0x2ddec4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_2ddec8:
    if (ctx->pc == 0x2DDEC8u) {
        ctx->pc = 0x2DDEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDEC4u;
        // 0x2ddec8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DDECCu;
        goto label_2ddecc;
    }
    ctx->pc = 0x2DDEC4u;
    {
        const bool branch_taken_0x2ddec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDEC4u;
        // 0x2ddec8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddec4) {
            ctx->pc = 0x2DDF30u;
            return;
        }
    }
    ctx->pc = 0x2DDECCu;
label_2ddecc:
    // 0x2ddecc: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2ddeccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_2dded0:
    // 0x2dded0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2dded0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2dded4:
    // 0x2dded4: 0x8c63f820  lw          $v1, -0x7E0($v1)
    ctx->pc = 0x2dded4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965280)));
label_2dded8:
    // 0x2dded8: 0x600008  jr          $v1
label_2ddedc:
    if (ctx->pc == 0x2DDEDCu) {
        ctx->pc = 0x2DDEE0u;
        goto label_fallthrough_0x2dded8;
    }
    ctx->pc = 0x2DDED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDED8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x2dded8:
    ctx->pc = 0x2DDEE0u;
}
