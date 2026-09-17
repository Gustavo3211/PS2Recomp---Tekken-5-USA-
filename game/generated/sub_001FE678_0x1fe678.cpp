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

// Function: sub_001FE678
// Address: 0x1fe678 - 0x1fe6c0
void sub_001FE678_0x1fe678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE678_0x1fe678");
#endif

    ctx->pc = 0x1fe678u;

    // 0x1fe678: 0x90820185  lbu         $v0, 0x185($a0)
    ctx->pc = 0x1fe678u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 389)));
    // 0x1fe67c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fe67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fe680: 0x2c430018  sltiu       $v1, $v0, 0x18
    ctx->pc = 0x1fe680u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x1fe684: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1FE684u;
    {
        const bool branch_taken_0x1fe684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE684u;
        // 0x1fe688: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe684) {
            ctx->pc = 0x1FE6C0u;
            return;
        }
    }
    ctx->pc = 0x1FE68Cu;
    // 0x1fe68c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1fe68cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1fe690: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fe690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fe694: 0x8c633820  lw          $v1, 0x3820($v1)
    ctx->pc = 0x1fe694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14368)));
    // 0x1fe698: 0x600008  jr          $v1
    ctx->pc = 0x1FE698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FE6A0u: goto label_1fe6a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE698u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1FE6A0u;
label_1fe6a0:
    // 0x1fe6a0: 0x8c8300c4  lw          $v1, 0xC4($a0)
    ctx->pc = 0x1fe6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x1fe6a4: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1fe6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1fe6a8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1fe6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1fe6ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FE6ACu;
    {
        const bool branch_taken_0x1fe6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe6ac) {
            ctx->pc = 0x1FE6C0u;
            return;
        }
    }
    ctx->pc = 0x1FE6B4u;
    // 0x1fe6b4: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x1fe6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x1fe6b8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1fe6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1fe6bc: 0xac8200cc  sw          $v0, 0xCC($a0)
    ctx->pc = 0x1fe6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 2));
    ctx->pc = 0x1fe6c0u;
}
