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

// Function: sub_0036AD18
// Address: 0x36ad18 - 0x36ad68
void sub_0036AD18_0x36ad18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036AD18_0x36ad18");
#endif

    switch (ctx->pc) {
        case 0x36ad3cu: goto label_36ad3c;
        case 0x36ad50u: goto label_36ad50;
        default: break;
    }

    ctx->pc = 0x36ad18u;

    // 0x36ad18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36ad18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36ad1c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36ad20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36ad20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36ad24: 0x24506db8  addiu       $s0, $v0, 0x6DB8
    ctx->pc = 0x36ad24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28088));
    // 0x36ad28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36ad28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6DB8u));
    // 0x36ad2c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36AD2Cu;
    {
        const bool branch_taken_0x36ad2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36AD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AD2Cu;
        // 0x36ad30: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36ad2c) {
            ctx->pc = 0x36AD50u;
            goto label_36ad50;
        }
    }
    ctx->pc = 0x36AD34u;
    // 0x36ad34: 0xc0daa14  jal         func_36A850
    ctx->pc = 0x36AD34u;
    SET_GPR_U32(ctx, 31, 0x36AD3Cu);
    ctx->pc = 0x36A850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A850u, 0x36AD34u, 0x36AD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AD3Cu;
label_36ad3c:
    // 0x36ad3c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36ad3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36ad40: 0x24a599a8  addiu       $a1, $a1, -0x6658
    ctx->pc = 0x36ad40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941096));
    // 0x36ad44: 0x2786cc78  addiu       $a2, $gp, -0x3388
    ctx->pc = 0x36ad44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954104));
    // 0x36ad48: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36AD48u;
    SET_GPR_U32(ctx, 31, 0x36AD50u);
    ctx->pc = 0x36AD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AD48u;
    // 0x36ad4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36AD48u, 0x36AD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AD50u;
label_36ad50:
    // 0x36ad50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36ad50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ad54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36ad54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ad58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36ad58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36ad5c: 0x3e00008  jr          $ra
    ctx->pc = 0x36AD5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AD5Cu;
        // 0x36ad60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36AD5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36AD64u;
    // 0x36ad64: 0x0  nop
    ctx->pc = 0x36ad64u;
    // NOP
    ctx->pc = 0x36ad68u;
}
