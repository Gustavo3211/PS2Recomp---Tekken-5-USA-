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

// Function: sub_0021D8E8
// Address: 0x21d8e8 - 0x21d930
void sub_0021D8E8_0x21d8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D8E8_0x21d8e8");
#endif

    ctx->pc = 0x21d8e8u;

    // 0x21d8e8: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x21d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x21d8ec: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x21d8ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x21d8f0: 0x24464520  addiu       $a2, $v0, 0x4520
    ctx->pc = 0x21d8f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 17696));
    // 0x21d8f4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x21d8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x21d8f8: 0x24c24910  addiu       $v0, $a2, 0x4910
    ctx->pc = 0x21d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 18704));
    // 0x21d8fc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x21d8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21d900: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21d900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21d904: 0x24840c80  addiu       $a0, $a0, 0xC80
    ctx->pc = 0x21d904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3200));
    // 0x21d908: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21d908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21d90c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x21d90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21d910: 0x2c42ffff  sltiu       $v0, $v0, -0x1
    ctx->pc = 0x21d910u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x21d914: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D914u;
    {
        const bool branch_taken_0x21d914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D914u;
        // 0x21d918: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d914) {
            ctx->pc = 0x21D924u;
            goto label_21d924;
        }
    }
    ctx->pc = 0x21D91Cu;
    // 0x21d91c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x21d91cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x21d920: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x21d920u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_21d924:
    // 0x21d924: 0x3e00008  jr          $ra
    ctx->pc = 0x21D924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D92Cu;
    // 0x21d92c: 0x0  nop
    ctx->pc = 0x21d92cu;
    // NOP
    ctx->pc = 0x21d930u;
}
