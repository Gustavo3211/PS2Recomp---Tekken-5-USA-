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

// Function: sub_0032C890
// Address: 0x32c890 - 0x32c910
void sub_0032C890_0x32c890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032C890_0x32c890");
#endif

    switch (ctx->pc) {
        case 0x32c8c8u: goto label_32c8c8;
        default: break;
    }

    ctx->pc = 0x32c890u;

    // 0x32c890: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x32c890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x32c894: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x32c894u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c898: 0xa2001b  divu        $zero, $a1, $v0
    ctx->pc = 0x32c898u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x32c89c: 0xacc50018  sw          $a1, 0x18($a2)
    ctx->pc = 0x32c89cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 5));
    // 0x32c8a0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x32C8A0u;
    {
        const bool branch_taken_0x32c8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c8a0) {
            ctx->pc = 0x32C8A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C8A0u;
            // 0x32c8a4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C8A8u;
            goto label_32c8a8;
        }
    }
    ctx->pc = 0x32C8A8u;
label_32c8a8:
    // 0x32c8a8: 0x1810  mfhi        $v1
    ctx->pc = 0x32c8a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x32c8ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32c8acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x32c8b0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x32c8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x32c8b4: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x32c8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x32c8b8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x32c8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x32c8bc: 0x50a3000c  beql        $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x32C8BCu;
    {
        const bool branch_taken_0x32c8bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x32c8bc) {
            ctx->pc = 0x32C8C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C8BCu;
            // 0x32c8c0: 0x24c30010  addiu       $v1, $a2, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C8F0u;
            goto label_32c8f0;
        }
    }
    ctx->pc = 0x32C8C4u;
    // 0x32c8c4: 0x0  nop
    ctx->pc = 0x32c8c4u;
    // NOP
label_32c8c8:
    // 0x32c8c8: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x32c8c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x32c8cc: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x32C8CCu;
    {
        const bool branch_taken_0x32c8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32c8cc) {
            ctx->pc = 0x32C8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32C8CCu;
            // 0x32c8d0: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32C8D8u;
            goto label_32c8d8;
        }
    }
    ctx->pc = 0x32C8D4u;
    // 0x32c8d4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x32c8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_32c8d8:
    // 0x32c8d8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x32c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x32c8dc: 0x0  nop
    ctx->pc = 0x32c8dcu;
    // NOP
    // 0x32c8e0: 0x0  nop
    ctx->pc = 0x32c8e0u;
    // NOP
    // 0x32c8e4: 0x14a2fff8  bne         $a1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x32C8E4u;
    {
        const bool branch_taken_0x32c8e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x32C8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C8E4u;
        // 0x32c8e8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c8e4) {
            ctx->pc = 0x32C8C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32c8c8;
        }
    }
    ctx->pc = 0x32C8ECu;
    // 0x32c8ec: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x32c8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_32c8f0:
    // 0x32c8f0: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x32c8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x32c8f4: 0x3200a  movz        $a0, $zero, $v1
    ctx->pc = 0x32c8f4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x32c8f8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x32c8f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c8fc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x32C8FCu;
    {
        const bool branch_taken_0x32c8fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C8FCu;
        // 0x32c900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c8fc) {
            ctx->pc = 0x32C908u;
            goto label_32c908;
        }
    }
    ctx->pc = 0x32C904u;
    // 0x32c904: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x32c904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_32c908:
    // 0x32c908: 0x3e00008  jr          $ra
    ctx->pc = 0x32C908u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C908u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C910u;
}
