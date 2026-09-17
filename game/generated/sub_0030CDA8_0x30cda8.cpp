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

// Function: sub_0030CDA8
// Address: 0x30cda8 - 0x30cdc8
void sub_0030CDA8_0x30cda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CDA8_0x30cda8");
#endif

    ctx->pc = 0x30cda8u;

    // 0x30cda8: 0x3c02001b  lui         $v0, 0x1B
    ctx->pc = 0x30cda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27 << 16));
    // 0x30cdac: 0x2404ffdf  addiu       $a0, $zero, -0x21
    ctx->pc = 0x30cdacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x30cdb0: 0x24421450  addiu       $v0, $v0, 0x1450
    ctx->pc = 0x30cdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5200));
    // 0x30cdb4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x30cdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1B1454u));
    // 0x30cdb8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x30cdb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x30cdbc: 0x3e00008  jr          $ra
    ctx->pc = 0x30CDBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CDBCu;
        // 0x30cdc0: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CDBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CDC4u;
    // 0x30cdc4: 0x0  nop
    ctx->pc = 0x30cdc4u;
    // NOP
    ctx->pc = 0x30cdc8u;
}
