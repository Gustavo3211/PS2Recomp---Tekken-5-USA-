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

// Function: sub_0011A588
// Address: 0x11a588 - 0x11a5d8
void sub_0011A588_0x11a588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A588_0x11a588");
#endif

    switch (ctx->pc) {
        case 0x11a5a8u: goto label_11a5a8;
        default: break;
    }

    ctx->pc = 0x11a588u;

    // 0x11a588: 0x3c05001f  lui         $a1, 0x1F
    ctx->pc = 0x11a588u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)31 << 16));
    // 0x11a58c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x11a58cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x11a590: 0x24a2dfc0  addiu       $v0, $a1, -0x2040
    ctx->pc = 0x11a590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959040));
    // 0x11a594: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x11a594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x11a598: 0xac62e3c0  sw          $v0, -0x1C40($v1)
    ctx->pc = 0x11a598u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x1EE3C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1EE3C0u, _value); } while (0);
    // 0x11a59c: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x11a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x11a5a0: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x11a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x11a5a4: 0x0  nop
    ctx->pc = 0x11a5a4u;
    // NOP
label_11a5a8:
    // 0x11a5a8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x11a5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x11a5ac: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x11a5acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x11a5b0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x11a5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x11a5b4: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x11a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x11a5b8: 0x0  nop
    ctx->pc = 0x11a5b8u;
    // NOP
    // 0x11a5bc: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11A5BCu;
    {
        const bool branch_taken_0x11a5bc = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x11a5bc) {
            ctx->pc = 0x11A5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a5a8;
        }
    }
    ctx->pc = 0x11A5C4u;
    // 0x11a5c4: 0x24a3dfc0  addiu       $v1, $a1, -0x2040
    ctx->pc = 0x11a5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959040));
    // 0x11a5c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11a5c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a5cc: 0x3e00008  jr          $ra
    ctx->pc = 0x11A5CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A5CCu;
        // 0x11a5d0: 0xac6003f0  sw          $zero, 0x3F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A5CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A5D4u;
    // 0x11a5d4: 0x0  nop
    ctx->pc = 0x11a5d4u;
    // NOP
    ctx->pc = 0x11a5d8u;
}
