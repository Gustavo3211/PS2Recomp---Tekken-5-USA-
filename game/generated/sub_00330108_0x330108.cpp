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

// Function: sub_00330108
// Address: 0x330108 - 0x330138
void sub_00330108_0x330108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330108_0x330108");
#endif

    switch (ctx->pc) {
        case 0x330128u: goto label_330128;
        default: break;
    }

    ctx->pc = 0x330108u;

    // 0x330108: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x330108u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33010c: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x33010cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x330110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x330110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x330114: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x330114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330118: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x330118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x33011c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33011cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x330120: 0xc0c7560  jal         func_31D580
    ctx->pc = 0x330120u;
    SET_GPR_U32(ctx, 31, 0x330128u);
    ctx->pc = 0x330124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330120u;
    // 0x330124: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D580u, 0x330120u, 0x330128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330128u;
label_330128:
    // 0x330128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x330128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33012c: 0x3e00008  jr          $ra
    ctx->pc = 0x33012Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33012Cu;
        // 0x330130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33012Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330134u;
    // 0x330134: 0x0  nop
    ctx->pc = 0x330134u;
    // NOP
    ctx->pc = 0x330138u;
}
