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

// Function: sub_0032C698
// Address: 0x32c698 - 0x32c740
void sub_0032C698_0x32c698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C698_0x32c698");
#endif

    switch (ctx->pc) {
        case 0x32c6d8u: goto label_32c6d8;
        default: break;
    }

    ctx->pc = 0x32c698u;

    // 0x32c698: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x32c698u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c69c: 0x8d04000c  lw          $a0, 0xC($t0)
    ctx->pc = 0x32c69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x32c6a0: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x32c6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x32c6a4: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x32c6a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x32c6a8: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x32C6A8u;
    {
        const bool branch_taken_0x32c6a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C6A8u;
        // 0x32c6ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c6a8) {
            ctx->pc = 0x32C738u;
            goto label_32c738;
        }
    }
    ctx->pc = 0x32C6B0u;
    // 0x32c6b0: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x32c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x32c6b4: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x32c6b4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x32c6b8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x32C6B8u;
    {
        const bool branch_taken_0x32c6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c6b8) {
            ctx->pc = 0x32C6BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C6B8u;
            // 0x32c6bc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C6C0u;
            goto label_32c6c0;
        }
    }
    ctx->pc = 0x32C6C0u;
label_32c6c0:
    // 0x32c6c0: 0xad050018  sw          $a1, 0x18($t0)
    ctx->pc = 0x32c6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 5));
    // 0x32c6c4: 0x1810  mfhi        $v1
    ctx->pc = 0x32c6c4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x32c6c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32c6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32c6cc: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x32c6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x32c6d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32C6D0u;
    {
        const bool branch_taken_0x32c6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C6D0u;
        // 0x32c6d4: 0x24690040  addiu       $t1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c6d0) {
            ctx->pc = 0x32C6E4u;
            goto label_32c6e4;
        }
    }
    ctx->pc = 0x32C6D8u;
label_32c6d8:
    // 0x32c6d8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x32c6d8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c6dc: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x32c6dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x32c6e0: 0x62480a  movz        $t1, $v1, $v0
    ctx->pc = 0x32c6e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
label_32c6e4:
    // 0x32c6e4: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x32c6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x32c6e8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x32c6ec: 0x14a2fffa  bne         $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x32C6ECu;
    {
        const bool branch_taken_0x32c6ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x32C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C6ECu;
        // 0x32c6f0: 0x24830004  addiu       $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c6ec) {
            ctx->pc = 0x32C6D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32c6d8;
        }
    }
    ctx->pc = 0x32C6F4u;
    // 0x32c6f4: 0x25030010  addiu       $v1, $t0, 0x10
    ctx->pc = 0x32c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x32c6f8: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x32C6F8u;
    {
        const bool branch_taken_0x32c6f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x32C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C6F8u;
        // 0x32c6fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c6f8) {
            ctx->pc = 0x32C738u;
            goto label_32c738;
        }
    }
    ctx->pc = 0x32C700u;
    // 0x32c700: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x32c700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x32c704: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x32c704u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x32c708: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x32C708u;
    {
        const bool branch_taken_0x32c708 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c708) {
            ctx->pc = 0x32C738u;
            goto label_32c738;
        }
    }
    ctx->pc = 0x32C710u;
    // 0x32c710: 0xad070004  sw          $a3, 0x4($t0)
    ctx->pc = 0x32c710u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 7));
    // 0x32c714: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32c714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32c718: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x32c718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x32c71c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x32c71cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x32c720: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x32c720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x32c724: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x32c724u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x32c728: 0xac66000c  sw          $a2, 0xC($v1)
    ctx->pc = 0x32c728u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 6));
    // 0x32c72c: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x32c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x32c730: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x32c730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x32c734: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x32c734u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
label_32c738:
    // 0x32c738: 0x3e00008  jr          $ra
    ctx->pc = 0x32C738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C740u;
}
