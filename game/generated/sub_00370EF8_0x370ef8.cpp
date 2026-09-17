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

// Function: sub_00370EF8
// Address: 0x370ef8 - 0x370f30
void sub_00370EF8_0x370ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370EF8_0x370ef8");
#endif

    ctx->pc = 0x370ef8u;

    // 0x370ef8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x370ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x370efc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370efcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370f00: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x370f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x370f04: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x370f04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x370f08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370f0c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x370F0Cu;
    {
        const bool branch_taken_0x370f0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x370F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370F0Cu;
        // 0x370f10: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370f0c) {
            ctx->pc = 0x370F20u;
            goto label_370f20;
        }
    }
    ctx->pc = 0x370F14u;
    // 0x370f14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370f18: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x370F18u;
    ctx->pc = 0x370F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370F18u;
    // 0x370f1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x370F20u;
label_370f20:
    // 0x370f20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370f24: 0x3e00008  jr          $ra
    ctx->pc = 0x370F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370F24u;
        // 0x370f28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370F2Cu;
    // 0x370f2c: 0x0  nop
    ctx->pc = 0x370f2cu;
    // NOP
    ctx->pc = 0x370f30u;
}
