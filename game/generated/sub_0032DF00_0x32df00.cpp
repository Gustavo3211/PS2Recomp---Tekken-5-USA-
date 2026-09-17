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

// Function: sub_0032DF00
// Address: 0x32df00 - 0x32df20
void sub_0032DF00_0x32df00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032DF00_0x32df00");
#endif

    switch (ctx->pc) {
        case 0x32df10u: goto label_32df10;
        default: break;
    }

    ctx->pc = 0x32df00u;

    // 0x32df00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32df00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32df04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32df04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32df08: 0xc0cb7c8  jal         func_32DF20
    ctx->pc = 0x32DF08u;
    SET_GPR_U32(ctx, 31, 0x32DF10u);
    ctx->pc = 0x32DF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32DF08u;
    // 0x32df0c: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF20u, 0x32DF08u, 0x32DF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32DF10u;
label_32df10:
    // 0x32df10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32df10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32df14: 0x3e00008  jr          $ra
    ctx->pc = 0x32DF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32DF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32DF14u;
        // 0x32df18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32DF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32DF1Cu;
    // 0x32df1c: 0x0  nop
    ctx->pc = 0x32df1cu;
    // NOP
    ctx->pc = 0x32df20u;
}
