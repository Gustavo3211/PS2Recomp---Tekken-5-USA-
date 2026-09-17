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

// Function: sub_002C86D0
// Address: 0x2c86d0 - 0x2c8758
void sub_002C86D0_0x2c86d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C86D0_0x2c86d0");
#endif

    ctx->pc = 0x2c86d0u;

    // 0x2c86d0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2c86d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2c86d4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2c86d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2c86d8: 0x8c4383f8  lw          $v1, -0x7C08($v0)
    ctx->pc = 0x2c86d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A83F8u));
    // 0x2c86dc: 0x24840034  addiu       $a0, $a0, 0x34
    ctx->pc = 0x2c86dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x2c86e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c86e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2c86e4: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x2c86e4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2c86e8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2c86e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2c86ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c86ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c86f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c86f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c86f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c86f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c86f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2c86f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c86fc: 0x2812  mflo        $a1
    ctx->pc = 0x2c86fcu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2c8700: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C8700u;
    {
        const bool branch_taken_0x2c8700 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8700u;
        // 0x2c8704: 0x2ca2000b  sltiu       $v0, $a1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8700) {
            ctx->pc = 0x2C8718u;
            goto label_2c8718;
        }
    }
    ctx->pc = 0x2C8708u;
    // 0x2c8708: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c8708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c870c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c870cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2c8710: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8710u;
        // 0x2c8714: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8718u;
label_2c8718:
    // 0x2c8718: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2C8718u;
    {
        const bool branch_taken_0x2c8718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8718) {
            ctx->pc = 0x2C871Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8718u;
            // 0x2c871c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8748u;
            goto label_2c8748;
        }
    }
    ctx->pc = 0x2C8720u;
    // 0x2c8720: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x2c8720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x2c8724: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c8724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c8728: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c8728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c872c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2c872cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2c8730: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c8730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2c8734: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2c8734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2c8738: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c8738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c873c: 0x24630190  addiu       $v1, $v1, 0x190
    ctx->pc = 0x2c873cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 400));
    // 0x2c8740: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8740u;
        // 0x2c8744: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8748u;
label_2c8748:
    // 0x2c8748: 0x244205dc  addiu       $v0, $v0, 0x5DC
    ctx->pc = 0x2c8748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1500));
    // 0x2c874c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C874Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C874Cu;
        // 0x2c8750: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C874Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8754u;
    // 0x2c8754: 0x0  nop
    ctx->pc = 0x2c8754u;
    // NOP
    ctx->pc = 0x2c8758u;
}
