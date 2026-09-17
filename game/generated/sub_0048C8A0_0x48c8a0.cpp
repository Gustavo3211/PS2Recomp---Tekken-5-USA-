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

// Function: sub_0048C8A0
// Address: 0x48c8a0 - 0x48c8d0
void sub_0048C8A0_0x48c8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048C8A0_0x48c8a0");
#endif

    switch (ctx->pc) {
        case 0x48c8b8u: goto label_48c8b8;
        default: break;
    }

    ctx->pc = 0x48c8a0u;

    // 0x48c8a0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48c8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48c8a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x48c8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x48c8a8: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x48c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x48c8ac: 0xa44322c0  sh          $v1, 0x22C0($v0)
    ctx->pc = 0x48c8acu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F940u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F940u, _value); } while (0);
    // 0x48c8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x48C8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48C8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C8B0u;
        // 0x48c8b4: 0xa44022c2  sh          $zero, 0x22C2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 8898), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48C8B8u;
label_48c8b8:
    // 0x48c8b8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x48c8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x48c8bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x48c8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x48c8c0: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x48c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x48c8c4: 0xa44322c0  sh          $v1, 0x22C0($v0)
    ctx->pc = 0x48c8c4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F940u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F940u, _value); } while (0);
    // 0x48c8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x48C8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48C8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C8C8u;
        // 0x48c8cc: 0xa44022c2  sh          $zero, 0x22C2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 8898), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48C8D0u;
}
