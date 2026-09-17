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

// Function: sub_00101608
// Address: 0x101608 - 0x101638
void sub_00101608_0x101608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101608_0x101608");
#endif

    switch (ctx->pc) {
        case 0x10161cu: goto label_10161c;
        case 0x101628u: goto label_101628;
        default: break;
    }

    ctx->pc = 0x101608u;

    // 0x101608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x101608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10160c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10160cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x101610: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x101610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x101614: 0xc040576  jal         func_1015D8
    ctx->pc = 0x101614u;
    SET_GPR_U32(ctx, 31, 0x10161Cu);
    ctx->pc = 0x101618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101614u;
    // 0x101618: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1015D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1015D8u, 0x101614u, 0x10161Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10161Cu;
label_10161c:
    // 0x10161c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10161cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101620: 0xc07c494  jal         func_1F1250
    ctx->pc = 0x101620u;
    SET_GPR_U32(ctx, 31, 0x101628u);
    ctx->pc = 0x101624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101620u;
    // 0x101624: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1250u, 0x101620u, 0x101628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101628u;
label_101628:
    // 0x101628: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x101628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10162c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10162cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x101630: 0x3e00008  jr          $ra
    ctx->pc = 0x101630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101630u;
        // 0x101634: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101638u;
}
