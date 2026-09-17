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

// Function: sub_00208690
// Address: 0x208690 - 0x2086c8
void sub_00208690_0x208690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208690_0x208690");
#endif

    ctx->pc = 0x208690u;

    // 0x208690: 0x8f83c8c0  lw          $v1, -0x3740($gp)
    ctx->pc = 0x208690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953152)));
    // 0x208694: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x208694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208698: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x208698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x20869c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20869Cu;
    {
        const bool branch_taken_0x20869c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2086A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20869Cu;
        // 0x2086a0: 0x30650004  andi        $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20869c) {
            ctx->pc = 0x2086C0u;
            goto label_2086c0;
        }
    }
    ctx->pc = 0x2086A4u;
    // 0x2086a4: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2086A4u;
    {
        const bool branch_taken_0x2086a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2086A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086A4u;
        // 0x2086a8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2086a4) {
            ctx->pc = 0x2086C0u;
            goto label_2086c0;
        }
    }
    ctx->pc = 0x2086ACu;
    // 0x2086ac: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x2086acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x2086b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2086B0u;
    {
        const bool branch_taken_0x2086b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2086B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086B0u;
        // 0x2086b4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2086b0) {
            ctx->pc = 0x2086C0u;
            goto label_2086c0;
        }
    }
    ctx->pc = 0x2086B8u;
    // 0x2086b8: 0x310ba  dsrl        $v0, $v1, 2
    ctx->pc = 0x2086b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 2);
    // 0x2086bc: 0x30440004  andi        $a0, $v0, 0x4
    ctx->pc = 0x2086bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2086c0:
    // 0x2086c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2086C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2086C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086C0u;
        // 0x2086c4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2086C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2086C8u;
}
