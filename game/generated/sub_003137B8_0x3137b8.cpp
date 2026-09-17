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

// Function: sub_003137B8
// Address: 0x3137b8 - 0x3137e8
void sub_003137B8_0x3137b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003137B8_0x3137b8");
#endif

    ctx->pc = 0x3137b8u;

    // 0x3137b8: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x3137b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x3137bc: 0x24428110  addiu       $v0, $v0, -0x7EF0
    ctx->pc = 0x3137bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934800));
    // 0x3137c0: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x3137c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1B814Cu));
    // 0x3137c4: 0x8c460054  lw          $a2, 0x54($v0)
    ctx->pc = 0x3137c4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x1B8164u));
    // 0x3137c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3137c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3137cc: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x3137ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3137d0: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x3137d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x3137d4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3137d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3137d8: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x3137d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x3137dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3137DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3137E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3137DCu;
        // 0x3137e0: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3137DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3137E4u;
    // 0x3137e4: 0x0  nop
    ctx->pc = 0x3137e4u;
    // NOP
    ctx->pc = 0x3137e8u;
}
