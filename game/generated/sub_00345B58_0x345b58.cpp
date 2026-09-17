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

// Function: sub_00345B58
// Address: 0x345b58 - 0x345b88
void sub_00345B58_0x345b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345B58_0x345b58");
#endif

    switch (ctx->pc) {
        case 0x345b58u: goto label_345b58;
        case 0x345b5cu: goto label_345b5c;
        case 0x345b60u: goto label_345b60;
        case 0x345b64u: goto label_345b64;
        case 0x345b68u: goto label_345b68;
        case 0x345b6cu: goto label_345b6c;
        case 0x345b70u: goto label_345b70;
        case 0x345b74u: goto label_345b74;
        case 0x345b78u: goto label_345b78;
        case 0x345b7cu: goto label_345b7c;
        case 0x345b80u: goto label_345b80;
        case 0x345b84u: goto label_345b84;
        default: break;
    }

    ctx->pc = 0x345b58u;

label_345b58:
    // 0x345b58: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x345b58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_345b5c:
    // 0x345b5c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x345b5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_345b60:
    // 0x345b60: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x345b60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
label_345b64:
    // 0x345b64: 0x2c82003b  sltiu       $v0, $a0, 0x3B
    ctx->pc = 0x345b64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_345b68:
    // 0x345b68: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_345b6c:
    if (ctx->pc == 0x345B6Cu) {
        ctx->pc = 0x345B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345B68u;
        // 0x345b6c: 0xa62818  mult        $a1, $a1, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x345B70u;
        goto label_345b70;
    }
    ctx->pc = 0x345B68u;
    {
        const bool branch_taken_0x345b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x345B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345B68u;
        // 0x345b6c: 0xa62818  mult        $a1, $a1, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345b68) {
            ctx->pc = 0x345BB0u;
            return;
        }
    }
    ctx->pc = 0x345B70u;
label_345b70:
    // 0x345b70: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x345b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_345b74:
    // 0x345b74: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x345b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_345b78:
    // 0x345b78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x345b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_345b7c:
    // 0x345b7c: 0x8c634ac0  lw          $v1, 0x4AC0($v1)
    ctx->pc = 0x345b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19136)));
label_345b80:
    // 0x345b80: 0x600008  jr          $v1
label_345b84:
    if (ctx->pc == 0x345B84u) {
        ctx->pc = 0x345B88u;
        goto label_fallthrough_0x345b80;
    }
    ctx->pc = 0x345B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345B80u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x345b80:
    ctx->pc = 0x345B88u;
}
