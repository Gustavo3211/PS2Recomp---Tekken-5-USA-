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

// Function: sub_00512A58
// Address: 0x512a58 - 0x512a78
void sub_00512A58_0x512a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00512A58_0x512a58");
#endif

    ctx->pc = 0x512a58u;

    // 0x512a58: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x512a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x512a5c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x512a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x512a60: 0x2442c700  addiu       $v0, $v0, -0x3900
    ctx->pc = 0x512a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952704));
    // 0x512a64: 0x3c030090  lui         $v1, 0x90
    ctx->pc = 0x512a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)144 << 16));
    // 0x512a68: 0xa464f0f2  sh          $a0, -0xF0E($v1)
    ctx->pc = 0x512a68u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8FF0F2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8FF0F2u, _value); } while (0);
    // 0x512a6c: 0xa4440002  sh          $a0, 0x2($v0)
    ctx->pc = 0x512a6cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8EC702u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8EC702u, _value); } while (0);
    // 0x512a70: 0x3e00008  jr          $ra
    ctx->pc = 0x512A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x512A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x512A70u;
        // 0x512a74: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x512A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512A78u;
}
