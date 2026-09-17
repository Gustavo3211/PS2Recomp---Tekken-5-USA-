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

// Function: sub_001005E8
// Address: 0x1005e8 - 0x100620
void sub_001005E8_0x1005e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001005E8_0x1005e8");
#endif

    switch (ctx->pc) {
        case 0x1005f8u: goto label_1005f8;
        case 0x100600u: goto label_100600;
        case 0x100608u: goto label_100608;
        case 0x100610u: goto label_100610;
        default: break;
    }

    ctx->pc = 0x1005e8u;

    // 0x1005e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1005e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1005ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1005ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1005f0: 0xc040104  jal         func_100410
    ctx->pc = 0x1005F0u;
    SET_GPR_U32(ctx, 31, 0x1005F8u);
    ctx->pc = 0x1005F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1005F0u;
    // 0x1005f4: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100410u, 0x1005F0u, 0x1005F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1005F8u;
label_1005f8:
    // 0x1005f8: 0xc04011c  jal         func_100470
    ctx->pc = 0x1005F8u;
    SET_GPR_U32(ctx, 31, 0x100600u);
    ctx->pc = 0x100470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100470u, 0x1005F8u, 0x100600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100600u;
label_100600:
    // 0x100600: 0xc040144  jal         func_100510
    ctx->pc = 0x100600u;
    SET_GPR_U32(ctx, 31, 0x100608u);
    ctx->pc = 0x100510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100510u, 0x100600u, 0x100608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100608u;
label_100608:
    // 0x100608: 0xc040158  jal         func_100560
    ctx->pc = 0x100608u;
    SET_GPR_U32(ctx, 31, 0x100610u);
    ctx->pc = 0x100560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100560u, 0x100608u, 0x100610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100610u;
label_100610:
    // 0x100610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100614: 0x3e00008  jr          $ra
    ctx->pc = 0x100614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100614u;
        // 0x100618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10061Cu;
    // 0x10061c: 0x0  nop
    ctx->pc = 0x10061cu;
    // NOP
    ctx->pc = 0x100620u;
}
