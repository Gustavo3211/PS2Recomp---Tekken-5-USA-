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

// Function: sub_003707E0
// Address: 0x3707e0 - 0x370818
void sub_003707E0_0x3707e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003707E0_0x3707e0");
#endif

    ctx->pc = 0x3707e0u;

    // 0x3707e0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3707e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3707e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3707e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3707e8: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x3707e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x3707ec: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3707ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3707f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3707f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3707f4: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3707F4u;
    {
        const bool branch_taken_0x3707f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3707F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3707F4u;
        // 0x3707f8: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3707f4) {
            ctx->pc = 0x370808u;
            goto label_370808;
        }
    }
    ctx->pc = 0x3707FCu;
    // 0x3707fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3707fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370800: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x370800u;
    ctx->pc = 0x370804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370800u;
    // 0x370804: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x370808u;
label_370808:
    // 0x370808: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37080c: 0x3e00008  jr          $ra
    ctx->pc = 0x37080Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37080Cu;
        // 0x370810: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37080Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370814u;
    // 0x370814: 0x0  nop
    ctx->pc = 0x370814u;
    // NOP
    ctx->pc = 0x370818u;
}
