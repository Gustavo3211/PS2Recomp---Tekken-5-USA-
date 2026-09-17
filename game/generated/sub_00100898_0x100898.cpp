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

// Function: sub_00100898
// Address: 0x100898 - 0x1008c0
void sub_00100898_0x100898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100898_0x100898");
#endif

    ctx->pc = 0x100898u;

    // 0x100898: 0x3c0201bd  lui         $v0, 0x1BD
    ctx->pc = 0x100898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)445 << 16));
    // 0x10089c: 0x3c030006  lui         $v1, 0x6
    ctx->pc = 0x10089cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
    // 0x1008a0: 0x34637a40  ori         $v1, $v1, 0x7A40
    ctx->pc = 0x1008a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)31296);
    // 0x1008a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1008a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1008a8: 0x2442a1c0  addiu       $v0, $v0, -0x5E40
    ctx->pc = 0x1008a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943168));
    // 0x1008ac: 0xac43013c  sw          $v1, 0x13C($v0)
    ctx->pc = 0x1008acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x1BCA2FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA2FCu, _value); } while (0);
    // 0x1008b0: 0xac440130  sw          $a0, 0x130($v0)
    ctx->pc = 0x1008b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1BCA2F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA2F0u, _value); } while (0);
    // 0x1008b4: 0xac440134  sw          $a0, 0x134($v0)
    ctx->pc = 0x1008b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x1BCA2F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1BCA2F4u, _value); } while (0);
    // 0x1008b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1008B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1008BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1008B8u;
        // 0x1008bc: 0xac440138  sw          $a0, 0x138($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 312), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1008B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1008C0u;
}
