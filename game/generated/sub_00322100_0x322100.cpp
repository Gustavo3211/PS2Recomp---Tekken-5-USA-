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

// Function: sub_00322100
// Address: 0x322100 - 0x322130
void sub_00322100_0x322100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322100_0x322100");
#endif

    switch (ctx->pc) {
        case 0x322110u: goto label_322110;
        case 0x32211cu: goto label_32211c;
        default: break;
    }

    ctx->pc = 0x322100u;

    // 0x322100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x322100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x322104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x322104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x322108: 0xc0ceeb8  jal         func_33BAE0
    ctx->pc = 0x322108u;
    SET_GPR_U32(ctx, 31, 0x322110u);
    ctx->pc = 0x32210Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322108u;
    // 0x32210c: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33BAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BAE0u, 0x322108u, 0x322110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322110u;
label_322110:
    // 0x322110: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x322110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x322114: 0xc0c79e0  jal         func_31E780
    ctx->pc = 0x322114u;
    SET_GPR_U32(ctx, 31, 0x32211Cu);
    ctx->pc = 0x322118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322114u;
    // 0x322118: 0x2484d280  addiu       $a0, $a0, -0x2D80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E780u, 0x322114u, 0x32211Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32211Cu;
label_32211c:
    // 0x32211c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32211cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x322120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322124: 0x3e00008  jr          $ra
    ctx->pc = 0x322124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322124u;
        // 0x322128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32212Cu;
    // 0x32212c: 0x0  nop
    ctx->pc = 0x32212cu;
    // NOP
    ctx->pc = 0x322130u;
}
