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

// Function: sub_00224AB0
// Address: 0x224ab0 - 0x224b40
void sub_00224AB0_0x224ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224AB0_0x224ab0");
#endif

    switch (ctx->pc) {
        case 0x224ac8u: goto label_224ac8;
        case 0x224af8u: goto label_224af8;
        default: break;
    }

    ctx->pc = 0x224ab0u;

    // 0x224ab0: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x224ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x224ab4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x224ab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ab8: 0x24476194  addiu       $a3, $v0, 0x6194
    ctx->pc = 0x224ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24980));
    // 0x224abc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x224abcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224ac0: 0x24e90008  addiu       $t1, $a3, 0x8
    ctx->pc = 0x224ac0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x224ac4: 0x0  nop
    ctx->pc = 0x224ac4u;
    // NOP
label_224ac8:
    // 0x224ac8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x224ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x224acc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x224accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x224ad0: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x224ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x224ad4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x224ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x224ad8: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x224ad8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224adc: 0x28c40002  slti        $a0, $a2, 0x2
    ctx->pc = 0x224adcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x224ae0: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x224ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x224ae4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x224ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x224ae8: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x224AE8u;
    {
        const bool branch_taken_0x224ae8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x224AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224AE8u;
        // 0x224aec: 0xaca80010  sw          $t0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ae8) {
            ctx->pc = 0x224AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_224ac8;
        }
    }
    ctx->pc = 0x224AF0u;
    // 0x224af0: 0x3e00008  jr          $ra
    ctx->pc = 0x224AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224AF8u;
label_224af8:
    // 0x224af8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x224af8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x224afc: 0x24870004  addiu       $a3, $a0, 0x4
    ctx->pc = 0x224afcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x224b00: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x224b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x224b04: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x224b04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224b08: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x224b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x224b0c: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x224B0Cu;
    {
        const bool branch_taken_0x224b0c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x224B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B0Cu;
        // 0x224b10: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224b0c) {
            ctx->pc = 0x224B34u;
            goto label_224b34;
        }
    }
    ctx->pc = 0x224B14u;
    // 0x224b14: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x224b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x224b18: 0xc72821  addu        $a1, $a2, $a3
    ctx->pc = 0x224b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x224b1c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x224b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x224b20: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x224b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x224b24: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x224b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x224b28: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x224b28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x224b2c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x224b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x224b30: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x224b30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
label_224b34:
    // 0x224b34: 0x3e00008  jr          $ra
    ctx->pc = 0x224B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224B34u;
        // 0x224b38: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224B3Cu;
    // 0x224b3c: 0x0  nop
    ctx->pc = 0x224b3cu;
    // NOP
    ctx->pc = 0x224b40u;
}
