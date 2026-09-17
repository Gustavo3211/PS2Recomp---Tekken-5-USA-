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

// Function: sub_0026C8C0
// Address: 0x26c8c0 - 0x26c910
void sub_0026C8C0_0x26c8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C8C0_0x26c8c0");
#endif

    ctx->pc = 0x26c8c0u;

    // 0x26c8c0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x26c8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26c8c4: 0x94620044  lhu         $v0, 0x44($v1)
    ctx->pc = 0x26c8c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x26c8c8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26C8C8u;
    {
        const bool branch_taken_0x26c8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8C8u;
        // 0x26c8cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8c8) {
            ctx->pc = 0x26C904u;
            goto label_26c904;
        }
    }
    ctx->pc = 0x26C8D0u;
    // 0x26c8d0: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x26c8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x26c8d4: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x26c8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x26c8d8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x26c8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x26c8dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26C8DCu;
    {
        const bool branch_taken_0x26c8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8DCu;
        // 0x26c8e0: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8dc) {
            ctx->pc = 0x26C8FCu;
            goto label_26c8fc;
        }
    }
    ctx->pc = 0x26C8E4u;
    // 0x26c8e4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x26c8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x26c8e8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x26c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x26c8ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26c8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26c8f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26C8F0u;
    {
        const bool branch_taken_0x26c8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c8f0) {
            ctx->pc = 0x26C904u;
            goto label_26c904;
        }
    }
    ctx->pc = 0x26C8F8u;
    // 0x26c8f8: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x26c8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_26c8fc:
    // 0x26c8fc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x26c8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x26c900: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x26c900u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_26c904:
    // 0x26c904: 0x3e00008  jr          $ra
    ctx->pc = 0x26C904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C904u;
        // 0x26c908: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C90Cu;
    // 0x26c90c: 0x0  nop
    ctx->pc = 0x26c90cu;
    // NOP
    ctx->pc = 0x26c910u;
}
