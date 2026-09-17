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

// Function: sub_002DDF78
// Address: 0x2ddf78 - 0x2ddfc0
void sub_002DDF78_0x2ddf78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDF78_0x2ddf78");
#endif

    switch (ctx->pc) {
        case 0x2ddf8cu: goto label_2ddf8c;
        default: break;
    }

    ctx->pc = 0x2ddf78u;

    // 0x2ddf78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ddf78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ddf7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ddf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ddf80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ddf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ddf84: 0xc0b77ce  jal         func_2DDF38
    ctx->pc = 0x2DDF84u;
    SET_GPR_U32(ctx, 31, 0x2DDF8Cu);
    ctx->pc = 0x2DDF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDF84u;
    // 0x2ddf88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DDF38u, 0x2DDF84u, 0x2DDF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDF8Cu;
label_2ddf8c:
    // 0x2ddf8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2ddf8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddf90: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x2ddf90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2ddf94: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DDF94u;
    {
        const bool branch_taken_0x2ddf94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddf94) {
            ctx->pc = 0x2DDF98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDF94u;
            // 0x2ddf98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDFB0u;
            goto label_2ddfb0;
        }
    }
    ctx->pc = 0x2DDF9Cu;
    // 0x2ddf9c: 0x58600004  blezl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DDF9Cu;
    {
        const bool branch_taken_0x2ddf9c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2ddf9c) {
            ctx->pc = 0x2DDFA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDF9Cu;
            // 0x2ddfa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDFB0u;
            goto label_2ddfb0;
        }
    }
    ctx->pc = 0x2DDFA4u;
    // 0x2ddfa4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2ddfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ddfa8: 0xae0200d8  sw          $v0, 0xD8($s0)
    ctx->pc = 0x2ddfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 2));
    // 0x2ddfac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ddfacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ddfb0:
    // 0x2ddfb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ddfb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ddfb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDFB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDFB4u;
        // 0x2ddfb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDFB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDFBCu;
    // 0x2ddfbc: 0x0  nop
    ctx->pc = 0x2ddfbcu;
    // NOP
    ctx->pc = 0x2ddfc0u;
}
