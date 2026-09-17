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

// Function: sub_00243578
// Address: 0x243578 - 0x2435d8
void sub_00243578_0x243578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243578_0x243578");
#endif

    switch (ctx->pc) {
        case 0x2435a0u: goto label_2435a0;
        default: break;
    }

    ctx->pc = 0x243578u;

    // 0x243578: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x243578u;
    {
        const bool branch_taken_0x243578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243578u;
        // 0x24357c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243578) {
            ctx->pc = 0x2435CCu;
            goto label_2435cc;
        }
    }
    ctx->pc = 0x243580u;
    // 0x243580: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x243580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x243584: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x243584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x243588: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x243588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24358c: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x24358Cu;
    {
        const bool branch_taken_0x24358c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x243590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24358Cu;
        // 0x243590: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24358c) {
            ctx->pc = 0x2435C8u;
            goto label_2435c8;
        }
    }
    ctx->pc = 0x243594u;
    // 0x243594: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x243594u;
    {
        const bool branch_taken_0x243594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x243594u;
        // 0x243598: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243594) {
            ctx->pc = 0x2435B0u;
            goto label_2435b0;
        }
    }
    ctx->pc = 0x24359Cu;
    // 0x24359c: 0x0  nop
    ctx->pc = 0x24359cu;
    // NOP
label_2435a0:
    // 0x2435a0: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2435a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2435a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2435A4u;
    {
        const bool branch_taken_0x2435a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2435A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2435A4u;
        // 0x2435a8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2435a4) {
            ctx->pc = 0x2435C8u;
            goto label_2435c8;
        }
    }
    ctx->pc = 0x2435ACu;
    // 0x2435ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2435acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2435b0:
    // 0x2435b0: 0x0  nop
    ctx->pc = 0x2435b0u;
    // NOP
    // 0x2435b4: 0x0  nop
    ctx->pc = 0x2435b4u;
    // NOP
    // 0x2435b8: 0x0  nop
    ctx->pc = 0x2435b8u;
    // NOP
    // 0x2435bc: 0x5445fff8  bnel        $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2435BCu;
    {
        const bool branch_taken_0x2435bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2435bc) {
            ctx->pc = 0x2435C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2435BCu;
            // 0x2435c0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2435A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2435a0;
        }
    }
    ctx->pc = 0x2435C4u;
    // 0x2435c4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2435c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2435c8:
    // 0x2435c8: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x2435c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2435cc:
    // 0x2435cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2435CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2435CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2435D4u;
    // 0x2435d4: 0x0  nop
    ctx->pc = 0x2435d4u;
    // NOP
    ctx->pc = 0x2435d8u;
}
