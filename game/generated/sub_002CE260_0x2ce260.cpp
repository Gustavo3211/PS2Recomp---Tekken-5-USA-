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

// Function: sub_002CE260
// Address: 0x2ce260 - 0x2ce290
void sub_002CE260_0x2ce260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE260_0x2ce260");
#endif

    switch (ctx->pc) {
        case 0x2ce274u: goto label_2ce274;
        default: break;
    }

    ctx->pc = 0x2ce260u;

    // 0x2ce260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ce260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ce264: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ce264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ce268: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ce268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ce26c: 0xc0b2e1c  jal         func_2CB870
    ctx->pc = 0x2CE26Cu;
    SET_GPR_U32(ctx, 31, 0x2CE274u);
    ctx->pc = 0x2CE270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CE26Cu;
    // 0x2ce270: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB870u, 0x2CE26Cu, 0x2CE274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CE274u;
label_2ce274:
    // 0x2ce274: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2ce274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2ce278: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ce278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ce27c: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2ce27cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2ce280: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ce280u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce284: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CE284u;
        // 0x2ce288: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CE284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CE28Cu;
    // 0x2ce28c: 0x0  nop
    ctx->pc = 0x2ce28cu;
    // NOP
    ctx->pc = 0x2ce290u;
}
