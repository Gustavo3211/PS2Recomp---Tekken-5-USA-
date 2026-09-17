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

// Function: sub_002392C0
// Address: 0x2392c0 - 0x2392f8
void sub_002392C0_0x2392c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002392C0_0x2392c0");
#endif

    switch (ctx->pc) {
        case 0x2392ecu: goto label_2392ec;
        default: break;
    }

    ctx->pc = 0x2392c0u;

    // 0x2392c0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2392c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2392c4: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x2392c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x2392c8: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x2392c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x2392cc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2392ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2392d0: 0x8ca5e100  lw          $a1, -0x1F00($a1)
    ctx->pc = 0x2392d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294959360)));
    // 0x2392d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2392d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2392d8: 0x2463d3d0  addiu       $v1, $v1, -0x2C30
    ctx->pc = 0x2392d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955984));
    // 0x2392dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2392dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2392e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2392e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x15D3D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x15D3D4u, _value); } while (0);
    // 0x2392e4: 0xc08e978  jal         func_23A5E0
    ctx->pc = 0x2392E4u;
    SET_GPR_U32(ctx, 31, 0x2392ECu);
    ctx->pc = 0x2392E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2392E4u;
    // 0x2392e8: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A5E0u, 0x2392E4u, 0x2392ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2392ECu;
label_2392ec:
    // 0x2392ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2392ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2392f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2392F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2392F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2392F0u;
        // 0x2392f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2392F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2392F8u;
}
