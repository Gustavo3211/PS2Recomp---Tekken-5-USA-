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

// Function: sub_0024D540
// Address: 0x24d540 - 0x24d568
void sub_0024D540_0x24d540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D540_0x24d540");
#endif

    switch (ctx->pc) {
        case 0x24d550u: goto label_24d550;
        default: break;
    }

    ctx->pc = 0x24d540u;

    // 0x24d540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24d540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24d544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24d544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24d548: 0xc0926a0  jal         func_249A80
    ctx->pc = 0x24D548u;
    SET_GPR_U32(ctx, 31, 0x24D550u);
    ctx->pc = 0x249A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249A80u, 0x24D548u, 0x24D550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D550u;
label_24d550:
    // 0x24d550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d554: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x24d554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x24d558: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d55c: 0xac62886c  sw          $v0, -0x7794($v1)
    ctx->pc = 0x24d55cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3A886Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A886Cu, _value); } while (0);
    // 0x24d560: 0x3e00008  jr          $ra
    ctx->pc = 0x24D560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D560u;
        // 0x24d564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D568u;
}
