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

// Function: sub_00340EC0
// Address: 0x340ec0 - 0x340f00
void sub_00340EC0_0x340ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340EC0_0x340ec0");
#endif

    ctx->pc = 0x340ec0u;

    // 0x340ec0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x340ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x340ec4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x340ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x340ec8: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x340ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x340ecc: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x340eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x340ed0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x340ED0u;
    {
        const bool branch_taken_0x340ed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x340ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340ED0u;
        // 0x340ed4: 0xa4a20014  sh          $v0, 0x14($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340ed0) {
            ctx->pc = 0x340EE8u;
            goto label_340ee8;
        }
    }
    ctx->pc = 0x340ED8u;
    // 0x340ed8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x340ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340edc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x340EDCu;
    {
        const bool branch_taken_0x340edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x340EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340EDCu;
        // 0x340ee0: 0xa4a20016  sh          $v0, 0x16($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340edc) {
            ctx->pc = 0x340EECu;
            goto label_340eec;
        }
    }
    ctx->pc = 0x340EE4u;
    // 0x340ee4: 0x0  nop
    ctx->pc = 0x340ee4u;
    // NOP
label_340ee8:
    // 0x340ee8: 0xa4a00016  sh          $zero, 0x16($a1)
    ctx->pc = 0x340ee8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 22), (uint16_t)GPR_U32(ctx, 0));
label_340eec:
    // 0x340eec: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x340eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x340ef0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x340ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x340ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x340EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340EF4u;
        // 0x340ef8: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340EFCu;
    // 0x340efc: 0x0  nop
    ctx->pc = 0x340efcu;
    // NOP
    ctx->pc = 0x340f00u;
}
