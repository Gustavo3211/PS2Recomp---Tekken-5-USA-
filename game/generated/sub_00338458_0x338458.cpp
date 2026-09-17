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

// Function: sub_00338458
// Address: 0x338458 - 0x3384a0
void sub_00338458_0x338458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338458_0x338458");
#endif

    switch (ctx->pc) {
        case 0x338470u: goto label_338470;
        default: break;
    }

    ctx->pc = 0x338458u;

    // 0x338458: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x338458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x33845c: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x33845cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x338460: 0x2462a500  addiu       $v0, $v1, -0x5B00
    ctx->pc = 0x338460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944000));
    // 0x338464: 0xaf82cbc0  sw          $v0, -0x3440($gp)
    ctx->pc = 0x338464u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953920), GPR_U32(ctx, 2));
    // 0x338468: 0x24440400  addiu       $a0, $v0, 0x400
    ctx->pc = 0x338468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x33846c: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x33846cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
label_338470:
    // 0x338470: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x338470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x338474: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x338474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x338478: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x338478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x33847c: 0x0  nop
    ctx->pc = 0x33847cu;
    // NOP
    // 0x338480: 0x0  nop
    ctx->pc = 0x338480u;
    // NOP
    // 0x338484: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x338484u;
    {
        const bool branch_taken_0x338484 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x338488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338484u;
        // 0x338488: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338484) {
            ctx->pc = 0x338470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338470;
        }
    }
    ctx->pc = 0x33848Cu;
    // 0x33848c: 0x2463a500  addiu       $v1, $v1, -0x5B00
    ctx->pc = 0x33848cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944000));
    // 0x338490: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x338490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338494: 0x3e00008  jr          $ra
    ctx->pc = 0x338494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338494u;
        // 0x338498: 0xac6003f0  sw          $zero, 0x3F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33849Cu;
    // 0x33849c: 0x0  nop
    ctx->pc = 0x33849cu;
    // NOP
    ctx->pc = 0x3384a0u;
}
