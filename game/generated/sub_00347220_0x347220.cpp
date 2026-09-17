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

// Function: sub_00347220
// Address: 0x347220 - 0x347248
void sub_00347220_0x347220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347220_0x347220");
#endif

    ctx->pc = 0x347220u;

    // 0x347220: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x347220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x347224: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x347224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x347228: 0x2442dc70  addiu       $v0, $v0, -0x2390
    ctx->pc = 0x347228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958192));
    // 0x34722c: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x34722cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x347230: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x347230u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x347234: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x347234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x347238: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x347238u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x34723c: 0x3e00008  jr          $ra
    ctx->pc = 0x34723Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34723Cu;
        // 0x347240: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34723Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x347244u;
    // 0x347244: 0x0  nop
    ctx->pc = 0x347244u;
    // NOP
    ctx->pc = 0x347248u;
}
