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

// Function: sub_00104540
// Address: 0x104540 - 0x104598
void sub_00104540_0x104540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104540_0x104540");
#endif

    ctx->pc = 0x104540u;

    // 0x104540: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x104540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x104544: 0x3e00008  jr          $ra
    ctx->pc = 0x104544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104544u;
        // 0x104548: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10454Cu;
    // 0x10454c: 0x0  nop
    ctx->pc = 0x10454cu;
    // NOP
    // 0x104550: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x104550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x104554: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x104554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x104558: 0x3e00008  jr          $ra
    ctx->pc = 0x104558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104558u;
        // 0x10455c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104560u;
    // 0x104560: 0x8c820040  lw          $v0, 0x40($a0)
    ctx->pc = 0x104560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x104564: 0xac4700b0  sw          $a3, 0xB0($v0)
    ctx->pc = 0x104564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 7));
    // 0x104568: 0xac4500a8  sw          $a1, 0xA8($v0)
    ctx->pc = 0x104568u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 5));
    // 0x10456c: 0x3e00008  jr          $ra
    ctx->pc = 0x10456Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10456Cu;
        // 0x104570: 0xac4600ac  sw          $a2, 0xAC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10456Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104574u;
    // 0x104574: 0x0  nop
    ctx->pc = 0x104574u;
    // NOP
    // 0x104578: 0x8c880040  lw          $t0, 0x40($a0)
    ctx->pc = 0x104578u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10457c: 0x8d0200a8  lw          $v0, 0xA8($t0)
    ctx->pc = 0x10457cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 168)));
    // 0x104580: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x104580u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x104584: 0x8d0300ac  lw          $v1, 0xAC($t0)
    ctx->pc = 0x104584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 172)));
    // 0x104588: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x104588u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x10458c: 0x8d0200b0  lw          $v0, 0xB0($t0)
    ctx->pc = 0x10458cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 176)));
    // 0x104590: 0x3e00008  jr          $ra
    ctx->pc = 0x104590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104590u;
        // 0x104594: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104598u;
}
