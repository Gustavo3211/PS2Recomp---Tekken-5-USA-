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

// Function: sub_0021A4E8
// Address: 0x21a4e8 - 0x21a528
void sub_0021A4E8_0x21a4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021A4E8_0x21a4e8");
#endif

    switch (ctx->pc) {
        case 0x21a4f0u: goto label_21a4f0;
        default: break;
    }

    ctx->pc = 0x21a4e8u;

    // 0x21a4e8: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x21A4E8u;
    {
        const bool branch_taken_0x21a4e8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x21A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A4E8u;
        // 0x21a4ec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a4e8) {
            ctx->pc = 0x21A51Cu;
            goto label_21a51c;
        }
    }
    ctx->pc = 0x21A4F0u;
label_21a4f0:
    // 0x21a4f0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x21a4f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21a4f4: 0x54460006  bnel        $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x21A4F4u;
    {
        const bool branch_taken_0x21a4f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x21a4f4) {
            ctx->pc = 0x21A4F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21A4F4u;
            // 0x21a4f8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21A510u;
            goto label_21a510;
        }
    }
    ctx->pc = 0x21A4FCu;
    // 0x21a4fc: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x21a4fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x21a500: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x21a500u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x21a504: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21a504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21a508: 0x3e00008  jr          $ra
    ctx->pc = 0x21A508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A508u;
        // 0x21a50c: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A510u;
label_21a510:
    // 0x21a510: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x21a510u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x21a514: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x21A514u;
    {
        const bool branch_taken_0x21a514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A514u;
        // 0x21a518: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a514) {
            ctx->pc = 0x21A4F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21a4f0;
        }
    }
    ctx->pc = 0x21A51Cu;
label_21a51c:
    // 0x21a51c: 0x3e00008  jr          $ra
    ctx->pc = 0x21A51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21A51Cu;
        // 0x21a520: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21A51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21A524u;
    // 0x21a524: 0x0  nop
    ctx->pc = 0x21a524u;
    // NOP
    ctx->pc = 0x21a528u;
}
