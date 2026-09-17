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

// Function: sub_00208B98
// Address: 0x208b98 - 0x208be8
void sub_00208B98_0x208b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208B98_0x208b98");
#endif

    ctx->pc = 0x208b98u;

    // 0x208b98: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x208b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x208b9c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x208b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208ba0: 0x904483ec  lbu         $a0, -0x7C14($v0)
    ctx->pc = 0x208ba0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x3A83ECu));
    // 0x208ba4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x208ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208ba8: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x208BA8u;
    {
        const bool branch_taken_0x208ba8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x208BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BA8u;
        // 0x208bac: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208ba8) {
            ctx->pc = 0x208BDCu;
            goto label_208bdc;
        }
    }
    ctx->pc = 0x208BB0u;
    // 0x208bb0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x208BB0u;
    {
        const bool branch_taken_0x208bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BB0u;
        // 0x208bb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208bb0) {
            ctx->pc = 0x208BDCu;
            goto label_208bdc;
        }
    }
    ctx->pc = 0x208BB8u;
    // 0x208bb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x208bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x208bbc: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x208BBCu;
    {
        const bool branch_taken_0x208bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x208bbc) {
            ctx->pc = 0x208BDCu;
            goto label_208bdc;
        }
    }
    ctx->pc = 0x208BC4u;
    // 0x208bc4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x208bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x208bc8: 0x50820003  beql        $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x208BC8u;
    {
        const bool branch_taken_0x208bc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x208bc8) {
            ctx->pc = 0x208BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208BC8u;
            // 0x208bcc: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208BD8u;
            goto label_208bd8;
        }
    }
    ctx->pc = 0x208BD0u;
    // 0x208bd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x208BD0u;
    {
        const bool branch_taken_0x208bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x208bd0) {
            ctx->pc = 0x208BDCu;
            goto label_208bdc;
        }
    }
    ctx->pc = 0x208BD8u;
label_208bd8:
    // 0x208bd8: 0x8c458884  lw          $a1, -0x777C($v0)
    ctx->pc = 0x208bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936708)));
label_208bdc:
    // 0x208bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x208BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208BDCu;
        // 0x208be0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208BE4u;
    // 0x208be4: 0x0  nop
    ctx->pc = 0x208be4u;
    // NOP
    ctx->pc = 0x208be8u;
}
