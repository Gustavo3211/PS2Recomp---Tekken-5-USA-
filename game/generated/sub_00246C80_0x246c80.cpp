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

// Function: sub_00246C80
// Address: 0x246c80 - 0x246cd0
void sub_00246C80_0x246c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246C80_0x246c80");
#endif

    ctx->pc = 0x246c80u;

    // 0x246c80: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x246c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x246c84: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x246c84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246c88: 0x2c860021  sltiu       $a2, $a0, 0x21
    ctx->pc = 0x246c88u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x246c8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x246c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246c90: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x246C90u;
    {
        const bool branch_taken_0x246c90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x246C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C90u;
        // 0x246c94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c90) {
            ctx->pc = 0x246CC4u;
            goto label_246cc4;
        }
    }
    ctx->pc = 0x246C98u;
    // 0x246c98: 0x50c0000a  beql        $a2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x246C98u;
    {
        const bool branch_taken_0x246c98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x246c98) {
            ctx->pc = 0x246C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246C98u;
            // 0x246c9c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246CC4u;
            goto label_246cc4;
        }
    }
    ctx->pc = 0x246CA0u;
    // 0x246ca0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x246ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x246ca4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x246ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x246ca8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x246ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x246cac: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x246cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x246cb0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x246cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x246cb4: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x246cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x246cb8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x246cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x246cbc: 0x94a5692c  lhu         $a1, 0x692C($a1)
    ctx->pc = 0x246cbcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26924)));
    // 0x246cc0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x246cc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_246cc4:
    // 0x246cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x246CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246CCCu;
    // 0x246ccc: 0x0  nop
    ctx->pc = 0x246cccu;
    // NOP
    ctx->pc = 0x246cd0u;
}
