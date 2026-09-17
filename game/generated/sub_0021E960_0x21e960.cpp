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

// Function: sub_0021E960
// Address: 0x21e960 - 0x21e9b0
void sub_0021E960_0x21e960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E960_0x21e960");
#endif

    switch (ctx->pc) {
        case 0x21e980u: goto label_21e980;
        default: break;
    }

    ctx->pc = 0x21e960u;

    // 0x21e960: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x21e960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x21e964: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x21e964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x21e968: 0x24436e48  addiu       $v1, $v0, 0x6E48
    ctx->pc = 0x21e968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28232));
    // 0x21e96c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x21e96cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x466E48u));
    // 0x21e970: 0x1044000c  beq         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x21E970u;
    {
        const bool branch_taken_0x21e970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x21E974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E970u;
        // 0x21e974: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e970) {
            ctx->pc = 0x21E9A4u;
            goto label_21e9a4;
        }
    }
    ctx->pc = 0x21E978u;
    // 0x21e978: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x21e978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e97c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x21e97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_21e980:
    // 0x21e980: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x21e980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x21e984: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21E984u;
    {
        const bool branch_taken_0x21e984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E984u;
        // 0x21e988: 0xa61821  addu        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e984) {
            ctx->pc = 0x21E9A4u;
            goto label_21e9a4;
        }
    }
    ctx->pc = 0x21E98Cu;
    // 0x21e98c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x21e98cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21e990: 0x0  nop
    ctx->pc = 0x21e990u;
    // NOP
    // 0x21e994: 0x0  nop
    ctx->pc = 0x21e994u;
    // NOP
    // 0x21e998: 0x0  nop
    ctx->pc = 0x21e998u;
    // NOP
    // 0x21e99c: 0x5444fff8  bnel        $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21E99Cu;
    {
        const bool branch_taken_0x21e99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x21e99c) {
            ctx->pc = 0x21E9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E99Cu;
            // 0x21e9a0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e980;
        }
    }
    ctx->pc = 0x21E9A4u;
label_21e9a4:
    // 0x21e9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x21E9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E9A4u;
        // 0x21e9a8: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E9ACu;
    // 0x21e9ac: 0x0  nop
    ctx->pc = 0x21e9acu;
    // NOP
    ctx->pc = 0x21e9b0u;
}
