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

// Function: sub_002670C8
// Address: 0x2670c8 - 0x267108
void sub_002670C8_0x2670c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002670C8_0x2670c8");
#endif

    switch (ctx->pc) {
        case 0x2670c8u: goto label_2670c8;
        case 0x2670ccu: goto label_2670cc;
        case 0x2670d0u: goto label_2670d0;
        case 0x2670d4u: goto label_2670d4;
        case 0x2670d8u: goto label_2670d8;
        case 0x2670dcu: goto label_2670dc;
        case 0x2670e0u: goto label_2670e0;
        case 0x2670e4u: goto label_2670e4;
        case 0x2670e8u: goto label_2670e8;
        case 0x2670ecu: goto label_2670ec;
        case 0x2670f0u: goto label_2670f0;
        case 0x2670f4u: goto label_2670f4;
        case 0x2670f8u: goto label_2670f8;
        case 0x2670fcu: goto label_2670fc;
        case 0x267100u: goto label_267100;
        case 0x267104u: goto label_267104;
        default: break;
    }

    ctx->pc = 0x2670c8u;

label_2670c8:
    // 0x2670c8: 0x8f85aa80  lw          $a1, -0x5580($gp)
    ctx->pc = 0x2670c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945408)));
label_2670cc:
    // 0x2670cc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2670ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2670d0:
    // 0x2670d0: 0x34427158  ori         $v0, $v0, 0x7158
    ctx->pc = 0x2670d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29016);
label_2670d4:
    // 0x2670d4: 0x8ca300c4  lw          $v1, 0xC4($a1)
    ctx->pc = 0x2670d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
label_2670d8:
    // 0x2670d8: 0x9464001c  lhu         $a0, 0x1C($v1)
    ctx->pc = 0x2670d8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
label_2670dc:
    // 0x2670dc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2670dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2670e0:
    // 0x2670e0: 0x2c430008  sltiu       $v1, $v0, 0x8
    ctx->pc = 0x2670e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2670e4:
    // 0x2670e4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_2670e8:
    if (ctx->pc == 0x2670E8u) {
        ctx->pc = 0x2670ECu;
        goto label_2670ec;
    }
    ctx->pc = 0x2670E4u;
    {
        const bool branch_taken_0x2670e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2670e4) {
            ctx->pc = 0x267110u;
            return;
        }
    }
    ctx->pc = 0x2670ECu;
label_2670ec:
    // 0x2670ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2670ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2670f0:
    // 0x2670f0: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2670f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
label_2670f4:
    // 0x2670f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2670f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2670f8:
    // 0x2670f8: 0x8c632b80  lw          $v1, 0x2B80($v1)
    ctx->pc = 0x2670f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11136)));
label_2670fc:
    // 0x2670fc: 0x600008  jr          $v1
label_267100:
    if (ctx->pc == 0x267100u) {
        ctx->pc = 0x267104u;
        goto label_267104;
    }
    ctx->pc = 0x2670FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2670FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x267104u;
label_267104:
    // 0x267104: 0x0  nop
    ctx->pc = 0x267104u;
    // NOP
    ctx->pc = 0x267108u;
}
