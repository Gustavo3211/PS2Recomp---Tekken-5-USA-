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

// Function: sub_00289EF0
// Address: 0x289ef0 - 0x289f20
void sub_00289EF0_0x289ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289EF0_0x289ef0");
#endif

    switch (ctx->pc) {
        case 0x289f04u: goto label_289f04;
        case 0x289f0cu: goto label_289f0c;
        default: break;
    }

    ctx->pc = 0x289ef0u;

    // 0x289ef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x289ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x289ef4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x289ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x289ef8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x289ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x289efc: 0xc0a17bc  jal         func_285EF0
    ctx->pc = 0x289EFCu;
    SET_GPR_U32(ctx, 31, 0x289F04u);
    ctx->pc = 0x289F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289EFCu;
    // 0x289f00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EF0u, 0x289EFCu, 0x289F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289F04u;
label_289f04:
    // 0x289f04: 0xc0a27d4  jal         func_289F50
    ctx->pc = 0x289F04u;
    SET_GPR_U32(ctx, 31, 0x289F0Cu);
    ctx->pc = 0x289F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289F04u;
    // 0x289f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289F50u, 0x289F04u, 0x289F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289F0Cu;
label_289f0c:
    // 0x289f0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x289f0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x289f10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x289f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x289f14: 0x3e00008  jr          $ra
    ctx->pc = 0x289F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F14u;
        // 0x289f18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289F1Cu;
    // 0x289f1c: 0x0  nop
    ctx->pc = 0x289f1cu;
    // NOP
    ctx->pc = 0x289f20u;
}
