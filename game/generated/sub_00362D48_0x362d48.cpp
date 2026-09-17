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

// Function: sub_00362D48
// Address: 0x362d48 - 0x362d78
void sub_00362D48_0x362d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362D48_0x362d48");
#endif

    ctx->pc = 0x362d48u;

    // 0x362d48: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x362d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x362d4c: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x362d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
    // 0x362d50: 0x24425d10  addiu       $v0, $v0, 0x5D10
    ctx->pc = 0x362d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23824));
    // 0x362d54: 0x24635d28  addiu       $v1, $v1, 0x5D28
    ctx->pc = 0x362d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23848));
    // 0x362d58: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x362d58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1D5D24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D5D24u, _value); } while (0);
    // 0x362d5c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x362d5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1D5D10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D5D10u, _value); } while (0);
    // 0x362d60: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x362d60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1D5D14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D5D14u, _value); } while (0);
    // 0x362d64: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x362d64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1D5D18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D5D18u, _value); } while (0);
    // 0x362d68: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x362d68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1D5D1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D5D1Cu, _value); } while (0);
    // 0x362d6c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x362d6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x1D5D20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D5D20u, _value); } while (0);
    // 0x362d70: 0x3e00008  jr          $ra
    ctx->pc = 0x362D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362D70u;
        // 0x362d74: 0xaf80c804  sw          $zero, -0x37FC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294952964), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362D78u;
}
