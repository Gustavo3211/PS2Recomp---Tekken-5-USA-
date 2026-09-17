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

// Function: sub_00276668
// Address: 0x276668 - 0x276690
void sub_00276668_0x276668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276668_0x276668");
#endif

    ctx->pc = 0x276668u;

    // 0x276668: 0x9482003c  lhu         $v0, 0x3C($a0)
    ctx->pc = 0x276668u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x27666c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27666cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x276670: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x276670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x276674: 0x3c010017  lui         $at, 0x17
    ctx->pc = 0x276674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)23 << 16));
    // 0x276678: 0x242101c0  addiu       $at, $at, 0x1C0
    ctx->pc = 0x276678u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 448));
    // 0x27667c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x27667cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x276680: 0x904304f8  lbu         $v1, 0x4F8($v0)
    ctx->pc = 0x276680u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1272)));
    // 0x276684: 0x3e00008  jr          $ra
    ctx->pc = 0x276684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276684u;
        // 0x276688: 0xa08301bc  sb          $v1, 0x1BC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 444), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27668Cu;
    // 0x27668c: 0x0  nop
    ctx->pc = 0x27668cu;
    // NOP
    ctx->pc = 0x276690u;
}
