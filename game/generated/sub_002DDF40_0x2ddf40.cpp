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

// Function: sub_002DDF40
// Address: 0x2ddf40 - 0x2ddf78
void sub_002DDF40_0x2ddf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDF40_0x2ddf40");
#endif

    switch (ctx->pc) {
        case 0x2ddf50u: goto label_2ddf50;
        default: break;
    }

    ctx->pc = 0x2ddf40u;

    // 0x2ddf40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ddf40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ddf44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ddf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ddf48: 0xc0b77ce  jal         func_2DDF38
    ctx->pc = 0x2DDF48u;
    SET_GPR_U32(ctx, 31, 0x2DDF50u);
    ctx->pc = 0x2DDF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDF38u, 0x2DDF48u, 0x2DDF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDF50u;
label_2ddf50:
    // 0x2ddf50: 0x28430006  slti        $v1, $v0, 0x6
    ctx->pc = 0x2ddf50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2ddf54: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2ddf54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ddf58: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x2ddf58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x2ddf5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ddf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddf60: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x2ddf60u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x2ddf64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ddf64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddf68: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ddf68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddf6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF6Cu;
        // 0x2ddf70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDF74u;
    // 0x2ddf74: 0x0  nop
    ctx->pc = 0x2ddf74u;
    // NOP
    ctx->pc = 0x2ddf78u;
}
