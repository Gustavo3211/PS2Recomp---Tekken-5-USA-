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

// Function: sub_00246E08
// Address: 0x246e08 - 0x246e58
void sub_00246E08_0x246e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246E08_0x246e08");
#endif

    switch (ctx->pc) {
        case 0x246e30u: goto label_246e30;
        default: break;
    }

    ctx->pc = 0x246e08u;

    // 0x246e08: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x246e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x246e0c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x246e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x246e10: 0x24426c40  addiu       $v0, $v0, 0x6C40
    ctx->pc = 0x246e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27712));
    // 0x246e14: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x246e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x246e18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x246e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x246e1c: 0xaf82c9d8  sw          $v0, -0x3628($gp)
    ctx->pc = 0x246e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953432), GPR_U32(ctx, 2));
    // 0x246e20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x246e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246e24: 0xaf83c9dc  sw          $v1, -0x3624($gp)
    ctx->pc = 0x246e24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953436), GPR_U32(ctx, 3));
    // 0x246e28: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x246e28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246e2c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x246e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_246e30:
    // 0x246e30: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x246e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x246e34: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x246e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x246e38: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x246e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x246e3c: 0x0  nop
    ctx->pc = 0x246e3cu;
    // NOP
    // 0x246e40: 0x0  nop
    ctx->pc = 0x246e40u;
    // NOP
    // 0x246e44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x246E44u;
    {
        const bool branch_taken_0x246e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E44u;
        // 0x246e48: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e44) {
            ctx->pc = 0x246E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246e30;
        }
    }
    ctx->pc = 0x246E4Cu;
    // 0x246e4c: 0x3e00008  jr          $ra
    ctx->pc = 0x246E4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246E4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246E54u;
    // 0x246e54: 0x0  nop
    ctx->pc = 0x246e54u;
    // NOP
    ctx->pc = 0x246e58u;
}
