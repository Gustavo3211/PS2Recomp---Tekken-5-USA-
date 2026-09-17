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

// Function: sub_00342430
// Address: 0x342430 - 0x342448
void sub_00342430_0x342430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342430_0x342430");
#endif

    ctx->pc = 0x342430u;

    // 0x342430: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x342430u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x342434: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x342434u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342438: 0x24632e68  addiu       $v1, $v1, 0x2E68
    ctx->pc = 0x342438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11880));
    // 0x34243c: 0x3e00008  jr          $ra
    ctx->pc = 0x34243Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34243Cu;
        // 0x342440: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34243Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342444u;
    // 0x342444: 0x0  nop
    ctx->pc = 0x342444u;
    // NOP
    ctx->pc = 0x342448u;
}
