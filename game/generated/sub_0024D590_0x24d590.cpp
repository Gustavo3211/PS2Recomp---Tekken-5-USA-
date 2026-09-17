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

// Function: sub_0024D590
// Address: 0x24d590 - 0x24d600
void sub_0024D590_0x24d590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D590_0x24d590");
#endif

    switch (ctx->pc) {
        case 0x24d5c0u: goto label_24d5c0;
        default: break;
    }

    ctx->pc = 0x24d590u;

    // 0x24d590: 0x3c0205f5  lui         $v0, 0x5F5
    ctx->pc = 0x24d590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1525 << 16));
    // 0x24d594: 0x3c069999  lui         $a2, 0x9999
    ctx->pc = 0x24d594u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)39321 << 16));
    // 0x24d598: 0x3442e0ff  ori         $v0, $v0, 0xE0FF
    ctx->pc = 0x24d598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57599);
    // 0x24d59c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x24d59cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x24d5a0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x24D5A0u;
    {
        const bool branch_taken_0x24d5a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5A0u;
        // 0x24d5a4: 0x34c69999  ori         $a2, $a2, 0x9999 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)39321);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5a0) {
            ctx->pc = 0x24D5F4u;
            goto label_24d5f4;
        }
    }
    ctx->pc = 0x24D5A8u;
    // 0x24d5a8: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x24d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x24d5ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24d5acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d5b0: 0x24451ad8  addiu       $a1, $v0, 0x1AD8
    ctx->pc = 0x24d5b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6872));
    // 0x24d5b4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x24d5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x471AD8u));
    // 0x24d5b8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x24D5B8u;
    {
        const bool branch_taken_0x24d5b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5B8u;
        // 0x24d5bc: 0x2407001c  addiu       $a3, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5b8) {
            ctx->pc = 0x24D5F0u;
            goto label_24d5f0;
        }
    }
    ctx->pc = 0x24D5C0u;
label_24d5c0:
    // 0x24d5c0: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x24d5c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x24d5c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24D5C4u;
    {
        const bool branch_taken_0x24d5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5C4u;
        // 0x24d5c8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5c4) {
            ctx->pc = 0x24D5E0u;
            goto label_24d5e0;
        }
    }
    ctx->pc = 0x24D5CCu;
    // 0x24d5cc: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x24d5ccu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x24d5d0: 0x1012  mflo        $v0
    ctx->pc = 0x24d5d0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x24d5d4: 0x2010  mfhi        $a0
    ctx->pc = 0x24d5d4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x24d5d8: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x24d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x24d5dc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x24d5dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_24d5e0:
    // 0x24d5e0: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x24d5e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x24d5e4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x24d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24d5e8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x24D5E8u;
    {
        const bool branch_taken_0x24d5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5E8u;
        // 0x24d5ec: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5e8) {
            ctx->pc = 0x24D5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d5c0;
        }
    }
    ctx->pc = 0x24D5F0u;
label_24d5f0:
    // 0x24d5f0: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x24d5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_24d5f4:
    // 0x24d5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x24D5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5F4u;
        // 0x24d5f8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D5FCu;
    // 0x24d5fc: 0x0  nop
    ctx->pc = 0x24d5fcu;
    // NOP
    ctx->pc = 0x24d600u;
}
