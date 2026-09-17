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

// Function: sub_00322158
// Address: 0x322158 - 0x322180
void sub_00322158_0x322158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322158_0x322158");
#endif

    switch (ctx->pc) {
        case 0x32216cu: goto label_32216c;
        default: break;
    }

    ctx->pc = 0x322158u;

    // 0x322158: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x322158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x32215c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32215cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x322160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x322160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x322164: 0xc0c7a08  jal         func_31E820
    ctx->pc = 0x322164u;
    SET_GPR_U32(ctx, 31, 0x32216Cu);
    ctx->pc = 0x322168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322164u;
    // 0x322168: 0x2484d280  addiu       $a0, $a0, -0x2D80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E820u, 0x322164u, 0x32216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32216Cu;
label_32216c:
    // 0x32216c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32216cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x322170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322174: 0x3e00008  jr          $ra
    ctx->pc = 0x322174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322174u;
        // 0x322178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32217Cu;
    // 0x32217c: 0x0  nop
    ctx->pc = 0x32217cu;
    // NOP
    ctx->pc = 0x322180u;
}
