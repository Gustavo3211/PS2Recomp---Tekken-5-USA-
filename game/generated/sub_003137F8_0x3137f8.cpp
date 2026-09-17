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

// Function: sub_003137F8
// Address: 0x3137f8 - 0x313848
void sub_003137F8_0x3137f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003137F8_0x3137f8");
#endif

    ctx->pc = 0x3137f8u;

    // 0x3137f8: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x3137f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x3137fc: 0x24478110  addiu       $a3, $v0, -0x7EF0
    ctx->pc = 0x3137fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934800));
    // 0x313800: 0x8ce2003c  lw          $v0, 0x3C($a3)
    ctx->pc = 0x313800u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x1B814Cu));
    // 0x313804: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x313804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x313808: 0x44182b  sltu        $v1, $v0, $a0
    ctx->pc = 0x313808u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x31380c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x31380Cu;
    {
        const bool branch_taken_0x31380c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x313810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31380Cu;
        // 0x313810: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31380c) {
            ctx->pc = 0x31381Cu;
            goto label_31381c;
        }
    }
    ctx->pc = 0x313814u;
    // 0x313814: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x313814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313818: 0x2785c578  addiu       $a1, $gp, -0x3A88
    ctx->pc = 0x313818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294952312));
label_31381c:
    // 0x31381c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x31381cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x313820: 0x8ce30048  lw          $v1, 0x48($a3)
    ctx->pc = 0x313820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x313824: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x313824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x313828: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x313828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x31382c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x31382cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x313830: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x313830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x313834: 0x8ce40048  lw          $a0, 0x48($a3)
    ctx->pc = 0x313834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 72)));
    // 0x313838: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x313838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x31383c: 0x3e00008  jr          $ra
    ctx->pc = 0x31383Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31383Cu;
        // 0x313840: 0xac460008  sw          $a2, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31383Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313844u;
    // 0x313844: 0x0  nop
    ctx->pc = 0x313844u;
    // NOP
    ctx->pc = 0x313848u;
}
