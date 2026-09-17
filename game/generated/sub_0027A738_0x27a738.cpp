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

// Function: sub_0027A738
// Address: 0x27a738 - 0x27a788
void sub_0027A738_0x27a738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A738_0x27a738");
#endif

    ctx->pc = 0x27a738u;

    // 0x27a738: 0x90820190  lbu         $v0, 0x190($a0)
    ctx->pc = 0x27a738u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 400)));
    // 0x27a73c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x27a73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27a740: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27a740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a744: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x27A744u;
    {
        const bool branch_taken_0x27a744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27A748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A744u;
        // 0x27a748: 0x8c850310  lw          $a1, 0x310($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a744) {
            ctx->pc = 0x27A780u;
            goto label_27a780;
        }
    }
    ctx->pc = 0x27A74Cu;
    // 0x27a74c: 0x94a30044  lhu         $v1, 0x44($a1)
    ctx->pc = 0x27a74cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x27a750: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x27A750u;
    {
        const bool branch_taken_0x27a750 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a750) {
            ctx->pc = 0x27A754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A750u;
            // 0x27a754: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A780u;
            goto label_27a780;
        }
    }
    ctx->pc = 0x27A758u;
    // 0x27a758: 0x94a20024  lhu         $v0, 0x24($a1)
    ctx->pc = 0x27a758u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x27a75c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x27a75cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x27a760: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27A760u;
    {
        const bool branch_taken_0x27a760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a760) {
            ctx->pc = 0x27A780u;
            goto label_27a780;
        }
    }
    ctx->pc = 0x27A768u;
    // 0x27a768: 0x94a20046  lhu         $v0, 0x46($a1)
    ctx->pc = 0x27a768u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 70)));
    // 0x27a76c: 0x84830096  lh          $v1, 0x96($a0)
    ctx->pc = 0x27a76cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 150)));
    // 0x27a770: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x27a770u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27a774: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27A774u;
    {
        const bool branch_taken_0x27a774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A774u;
        // 0x27a778: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a774) {
            ctx->pc = 0x27A780u;
            goto label_27a780;
        }
    }
    ctx->pc = 0x27A77Cu;
    // 0x27a77c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27a77cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a780:
    // 0x27a780: 0x3e00008  jr          $ra
    ctx->pc = 0x27A780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A780u;
        // 0x27a784: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A788u;
}
