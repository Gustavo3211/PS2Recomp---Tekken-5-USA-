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

// Function: sub_00266FC0
// Address: 0x266fc0 - 0x267000
void sub_00266FC0_0x266fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266FC0_0x266fc0");
#endif

    switch (ctx->pc) {
        case 0x266fc0u: goto label_266fc0;
        case 0x266fc4u: goto label_266fc4;
        case 0x266fc8u: goto label_266fc8;
        case 0x266fccu: goto label_266fcc;
        case 0x266fd0u: goto label_266fd0;
        case 0x266fd4u: goto label_266fd4;
        case 0x266fd8u: goto label_266fd8;
        case 0x266fdcu: goto label_266fdc;
        case 0x266fe0u: goto label_266fe0;
        case 0x266fe4u: goto label_266fe4;
        case 0x266fe8u: goto label_266fe8;
        case 0x266fecu: goto label_266fec;
        case 0x266ff0u: goto label_266ff0;
        case 0x266ff4u: goto label_266ff4;
        case 0x266ff8u: goto label_266ff8;
        case 0x266ffcu: goto label_266ffc;
        default: break;
    }

    ctx->pc = 0x266fc0u;

label_266fc0:
    // 0x266fc0: 0x8f85aa80  lw          $a1, -0x5580($gp)
    ctx->pc = 0x266fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
label_266fc4:
    // 0x266fc4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x266fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_266fc8:
    // 0x266fc8: 0x344277c3  ori         $v0, $v0, 0x77C3
    ctx->pc = 0x266fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30659);
label_266fcc:
    // 0x266fcc: 0x8ca300c4  lw          $v1, 0xC4($a1)
    ctx->pc = 0x266fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
label_266fd0:
    // 0x266fd0: 0x9464001c  lhu         $a0, 0x1C($v1)
    ctx->pc = 0x266fd0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
label_266fd4:
    // 0x266fd4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x266fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_266fd8:
    // 0x266fd8: 0x2c430012  sltiu       $v1, $v0, 0x12
    ctx->pc = 0x266fd8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_266fdc:
    // 0x266fdc: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_266fe0:
    if (ctx->pc == 0x266FE0u) {
        ctx->pc = 0x266FE4u;
        goto label_266fe4;
    }
    ctx->pc = 0x266FDCu;
    {
        const bool branch_taken_0x266fdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x266fdc) {
            ctx->pc = 0x267008u;
            return;
        }
    }
    ctx->pc = 0x266FE4u;
label_266fe4:
    // 0x266fe4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x266fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_266fe8:
    // 0x266fe8: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x266fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_266fec:
    // 0x266fec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x266fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_266ff0:
    // 0x266ff0: 0x8c632aa0  lw          $v1, 0x2AA0($v1)
    ctx->pc = 0x266ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10912)));
label_266ff4:
    // 0x266ff4: 0x600008  jr          $v1
label_266ff8:
    if (ctx->pc == 0x266FF8u) {
        ctx->pc = 0x266FFCu;
        goto label_266ffc;
    }
    ctx->pc = 0x266FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266FF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x266FFCu;
label_266ffc:
    // 0x266ffc: 0x0  nop
    ctx->pc = 0x266ffcu;
    // NOP
    ctx->pc = 0x267000u;
}
