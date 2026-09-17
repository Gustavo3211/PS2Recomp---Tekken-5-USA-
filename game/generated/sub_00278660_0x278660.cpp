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

// Function: sub_00278660
// Address: 0x278660 - 0x2786e8
void sub_00278660_0x278660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278660_0x278660");
#endif

    switch (ctx->pc) {
        case 0x2786b8u: goto label_2786b8;
        default: break;
    }

    ctx->pc = 0x278660u;

    // 0x278660: 0x9482003c  lhu         $v0, 0x3C($a0)
    ctx->pc = 0x278660u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x278664: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x278664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278668: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x278668u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x27866c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x27866cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x278670: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x278670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x278674: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x278674u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x278678: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x278678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x27867c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x27867cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x278680: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x278680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x278684: 0x8ca5acc8  lw          $a1, -0x5338($a1)
    ctx->pc = 0x278684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294945992)));
    // 0x278688: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x278688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x27868c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x27868cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x278690: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x278690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x278694: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x278694u;
    {
        const bool branch_taken_0x278694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278694u;
        // 0x278698: 0x8ca6000c  lw          $a2, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278694) {
            ctx->pc = 0x2786E0u;
            goto label_2786e0;
        }
    }
    ctx->pc = 0x27869Cu;
    // 0x27869c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x27869cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2786a0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2786a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2786a4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2786a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2786a8: 0x5460000d  bnel        $v1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2786A8u;
    {
        const bool branch_taken_0x2786a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2786a8) {
            ctx->pc = 0x2786ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2786A8u;
            // 0x2786ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2786E0u;
            goto label_2786e0;
        }
    }
    ctx->pc = 0x2786B0u;
    // 0x2786b0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2786b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2786b4: 0x0  nop
    ctx->pc = 0x2786b4u;
    // NOP
label_2786b8:
    // 0x2786b8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2786b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2786bc: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2786bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2786c0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x2786c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2786c4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2786C4u;
    {
        const bool branch_taken_0x2786c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2786C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786C4u;
        // 0x2786c8: 0x461021  addu        $v0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2786c4) {
            ctx->pc = 0x2786E0u;
            goto label_2786e0;
        }
    }
    ctx->pc = 0x2786CCu;
    // 0x2786cc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x2786ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2786d0: 0x0  nop
    ctx->pc = 0x2786d0u;
    // NOP
    // 0x2786d4: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2786D4u;
    {
        const bool branch_taken_0x2786d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2786d4) {
            ctx->pc = 0x2786D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2786D4u;
            // 0x2786d8: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2786B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2786b8;
        }
    }
    ctx->pc = 0x2786DCu;
    // 0x2786dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2786dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2786e0:
    // 0x2786e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2786E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2786E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786E0u;
        // 0x2786e4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2786E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2786E8u;
}
