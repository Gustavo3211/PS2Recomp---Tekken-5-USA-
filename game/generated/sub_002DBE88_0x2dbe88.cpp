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

// Function: sub_002DBE88
// Address: 0x2dbe88 - 0x2dbec0
void sub_002DBE88_0x2dbe88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBE88_0x2dbe88");
#endif

    switch (ctx->pc) {
        case 0x2dbe9cu: goto label_2dbe9c;
        case 0x2dbea8u: goto label_2dbea8;
        case 0x2dbeb0u: goto label_2dbeb0;
        default: break;
    }

    ctx->pc = 0x2dbe88u;

    // 0x2dbe88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dbe88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dbe8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dbe8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dbe90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2dbe90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2dbe94: 0xc0b6e58  jal         func_2DB960
    ctx->pc = 0x2DBE94u;
    SET_GPR_U32(ctx, 31, 0x2DBE9Cu);
    ctx->pc = 0x2DBE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBE94u;
    // 0x2dbe98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB960u, 0x2DBE94u, 0x2DBE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBE9Cu;
label_2dbe9c:
    // 0x2dbe9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dbe9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbea0: 0xc0b6ece  jal         func_2DBB38
    ctx->pc = 0x2DBEA0u;
    SET_GPR_U32(ctx, 31, 0x2DBEA8u);
    ctx->pc = 0x2DBEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBEA0u;
    // 0x2dbea4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBB38u, 0x2DBEA0u, 0x2DBEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBEA8u;
label_2dbea8:
    // 0x2dbea8: 0xc0b6f46  jal         func_2DBD18
    ctx->pc = 0x2DBEA8u;
    SET_GPR_U32(ctx, 31, 0x2DBEB0u);
    ctx->pc = 0x2DBEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DBEA8u;
    // 0x2dbeac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBD18u, 0x2DBEA8u, 0x2DBEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DBEB0u;
label_2dbeb0:
    // 0x2dbeb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dbeb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dbeb4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dbeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dbeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBEB8u;
        // 0x2dbebc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBEC0u;
}
