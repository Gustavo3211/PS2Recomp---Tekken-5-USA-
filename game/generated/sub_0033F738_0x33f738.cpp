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

// Function: sub_0033F738
// Address: 0x33f738 - 0x33f760
void sub_0033F738_0x33f738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F738_0x33f738");
#endif

    ctx->pc = 0x33f738u;

    // 0x33f738: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33F738u;
    {
        const bool branch_taken_0x33f738 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F738u;
        // 0x33f73c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f738) {
            ctx->pc = 0x33F750u;
            goto label_33f750;
        }
    }
    ctx->pc = 0x33F740u;
    // 0x33f740: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x33f740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x33f744: 0x3e00008  jr          $ra
    ctx->pc = 0x33F744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F744u;
        // 0x33f748: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F74Cu;
    // 0x33f74c: 0x0  nop
    ctx->pc = 0x33f74cu;
    // NOP
label_33f750:
    // 0x33f750: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x33f750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x33f754: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33f754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33f758: 0x3e00008  jr          $ra
    ctx->pc = 0x33F758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F758u;
        // 0x33f75c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F760u;
}
