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

// Function: sub_00214FC0
// Address: 0x214fc0 - 0x214ff8
void sub_00214FC0_0x214fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214FC0_0x214fc0");
#endif

    ctx->pc = 0x214fc0u;

    // 0x214fc0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x214fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x214fc4: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x214fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x214fc8: 0x2463b708  addiu       $v1, $v1, -0x48F8
    ctx->pc = 0x214fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948616));
    // 0x214fcc: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x214fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x214fd0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x214fd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fd4: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x214fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x214fd8: 0x28a40002  slti        $a0, $a1, 0x2
    ctx->pc = 0x214fd8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x214fdc: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214FDCu;
    {
        const bool branch_taken_0x214fdc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x214FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FDCu;
        // 0x214fe0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fdc) {
            ctx->pc = 0x214FF0u;
            goto label_214ff0;
        }
    }
    ctx->pc = 0x214FE4u;
    // 0x214fe4: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x214fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x214fe8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x214fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x214fec: 0x9062ffff  lbu         $v0, -0x1($v1)
    ctx->pc = 0x214fecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
label_214ff0:
    // 0x214ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x214FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214FF8u;
}
