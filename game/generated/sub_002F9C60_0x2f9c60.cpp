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

// Function: sub_002F9C60
// Address: 0x2f9c60 - 0x2f9cc8
void sub_002F9C60_0x2f9c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9C60_0x2f9c60");
#endif

    switch (ctx->pc) {
        case 0x2f9ca4u: goto label_2f9ca4;
        case 0x2f9cb0u: goto label_2f9cb0;
        default: break;
    }

    ctx->pc = 0x2f9c60u;

    // 0x2f9c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f9c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f9c64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f9c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f9c68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f9c68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9c6c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f9c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f9c70: 0x26050158  addiu       $a1, $s0, 0x158
    ctx->pc = 0x2f9c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
    // 0x2f9c74: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2f9c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f9c78: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F9C78u;
    {
        const bool branch_taken_0x2f9c78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f9c78) {
            ctx->pc = 0x2F9C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9C78u;
            // 0x2f9c7c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9C94u;
            goto label_2f9c94;
        }
    }
    ctx->pc = 0x2F9C80u;
    // 0x2f9c80: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f9c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f9c84: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2f9c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2f9c88: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F9C88u;
    {
        const bool branch_taken_0x2f9c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f9c88) {
            ctx->pc = 0x2F9C9Cu;
            goto label_2f9c9c;
        }
    }
    ctx->pc = 0x2F9C90u;
    // 0x2f9c90: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2f9c90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2f9c94:
    // 0x2f9c94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f9c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9c98: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2f9c98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2f9c9c:
    // 0x2f9c9c: 0xc0be3ce  jal         func_2F8F38
    ctx->pc = 0x2F9C9Cu;
    SET_GPR_U32(ctx, 31, 0x2F9CA4u);
    ctx->pc = 0x2F8F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8F38u, 0x2F9C9Cu, 0x2F9CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9CA4u;
label_2f9ca4:
    // 0x2f9ca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f9ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9ca8: 0xc092460  jal         func_249180
    ctx->pc = 0x2F9CA8u;
    SET_GPR_U32(ctx, 31, 0x2F9CB0u);
    ctx->pc = 0x2F9CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9CA8u;
    // 0x2f9cac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249180u, 0x2F9CA8u, 0x2F9CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9CB0u;
label_2f9cb0:
    // 0x2f9cb0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2f9cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2f9cb4: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x2f9cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x2f9cb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f9cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f9cbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f9cbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f9cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9CC0u;
        // 0x2f9cc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9CC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9CC8u;
}
