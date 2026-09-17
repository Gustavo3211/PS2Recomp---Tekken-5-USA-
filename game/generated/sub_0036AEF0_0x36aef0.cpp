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

// Function: sub_0036AEF0
// Address: 0x36aef0 - 0x36af50
void sub_0036AEF0_0x36aef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036AEF0_0x36aef0");
#endif

    switch (ctx->pc) {
        case 0x36af14u: goto label_36af14;
        case 0x36af2cu: goto label_36af2c;
        default: break;
    }

    ctx->pc = 0x36aef0u;

    // 0x36aef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36aef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36aef4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36aef8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36aef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36aefc: 0x24506de8  addiu       $s0, $v0, 0x6DE8
    ctx->pc = 0x36aefcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28136));
    // 0x36af00: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36af00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6DE8u));
    // 0x36af04: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36AF04u;
    {
        const bool branch_taken_0x36af04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36AF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AF04u;
        // 0x36af08: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36af04) {
            ctx->pc = 0x36AF2Cu;
            goto label_36af2c;
        }
    }
    ctx->pc = 0x36AF0Cu;
    // 0x36af0c: 0xc0dae78  jal         func_36B9E0
    ctx->pc = 0x36AF0Cu;
    SET_GPR_U32(ctx, 31, 0x36AF14u);
    ctx->pc = 0x36B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B9E0u, 0x36AF0Cu, 0x36AF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AF14u;
label_36af14:
    // 0x36af14: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36af14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36af18: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36af18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36af1c: 0x24a5a190  addiu       $a1, $a1, -0x5E70
    ctx->pc = 0x36af1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943120));
    // 0x36af20: 0x24c66ec8  addiu       $a2, $a2, 0x6EC8
    ctx->pc = 0x36af20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28360));
    // 0x36af24: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36AF24u;
    SET_GPR_U32(ctx, 31, 0x36AF2Cu);
    ctx->pc = 0x36AF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36AF24u;
    // 0x36af28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36AF24u, 0x36AF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AF2Cu;
label_36af2c:
    // 0x36af2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36af2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36af30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36af30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36af34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36af34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36af38: 0x3e00008  jr          $ra
    ctx->pc = 0x36AF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AF38u;
        // 0x36af3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36AF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36AF40u;
    // 0x36af40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36af40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36af44: 0x3e00008  jr          $ra
    ctx->pc = 0x36AF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36AF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36AF44u;
        // 0x36af48: 0xac820150  sw          $v0, 0x150($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36AF44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36AF4Cu;
    // 0x36af4c: 0x0  nop
    ctx->pc = 0x36af4cu;
    // NOP
    ctx->pc = 0x36af50u;
}
