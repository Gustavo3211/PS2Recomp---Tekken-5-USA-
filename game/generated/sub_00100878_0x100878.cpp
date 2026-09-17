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

// Function: sub_00100878
// Address: 0x100878 - 0x100898
void sub_00100878_0x100878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100878_0x100878");
#endif

    ctx->pc = 0x100878u;

    // 0x100878: 0x3c0201bd  lui         $v0, 0x1BD
    ctx->pc = 0x100878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)445 << 16));
    // 0x10087c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x10087cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x100880: 0x3463bac0  ori         $v1, $v1, 0xBAC0
    ctx->pc = 0x100880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47808);
    // 0x100884: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x100884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x100888: 0x2442a1c0  addiu       $v0, $v0, -0x5E40
    ctx->pc = 0x100888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    // 0x10088c: 0xac43012c  sw          $v1, 0x12C($v0)
    ctx->pc = 0x10088cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1BCA2ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA2ECu, _value); } while (0);
    // 0x100890: 0x3e00008  jr          $ra
    ctx->pc = 0x100890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100890u;
        // 0x100894: 0xac440128  sw          $a0, 0x128($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100898u;
}
