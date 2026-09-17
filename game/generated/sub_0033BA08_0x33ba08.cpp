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

// Function: sub_0033BA08
// Address: 0x33ba08 - 0x33ba50
void sub_0033BA08_0x33ba08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033BA08_0x33ba08");
#endif

    ctx->pc = 0x33ba08u;

    // 0x33ba08: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x33ba08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33ba0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33ba10: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x33ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33ba14: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x33ba14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x33ba18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x33ba18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba1c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x33ba1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x33ba20: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x33ba20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x33ba24: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x33ba24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba28: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x33ba28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x33ba2c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x33ba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ba30: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33BA30u;
    {
        const bool branch_taken_0x33ba30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x33ba30) {
            ctx->pc = 0x33BA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BA30u;
            // 0x33ba34: 0x94620008  lhu         $v0, 0x8($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BA44u;
            goto label_33ba44;
        }
    }
    ctx->pc = 0x33BA38u;
    // 0x33ba38: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x33ba38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x33ba3c: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x33ba3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x33ba40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33ba40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33ba44:
    // 0x33ba44: 0x3e00008  jr          $ra
    ctx->pc = 0x33BA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA44u;
        // 0x33ba48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BA4Cu;
    // 0x33ba4c: 0x0  nop
    ctx->pc = 0x33ba4cu;
    // NOP
    ctx->pc = 0x33ba50u;
}
