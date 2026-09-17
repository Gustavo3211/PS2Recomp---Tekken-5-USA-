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

// Function: sub_002FCC48
// Address: 0x2fcc48 - 0x2fccb0
void sub_002FCC48_0x2fcc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCC48_0x2fcc48");
#endif

    switch (ctx->pc) {
        case 0x2fcc54u: goto label_2fcc54;
        case 0x2fcc78u: goto label_2fcc78;
        default: break;
    }

    ctx->pc = 0x2fcc48u;

    // 0x2fcc48: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2fcc48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcc4c: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FCC4Cu;
    {
        const bool branch_taken_0x2fcc4c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC4Cu;
        // 0x2fcc50: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcc4c) {
            ctx->pc = 0x2FCC60u;
            goto label_2fcc60;
        }
    }
    ctx->pc = 0x2FCC54u;
label_2fcc54:
    // 0x2fcc54: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC54u;
        // 0x2fcc58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCC5Cu;
    // 0x2fcc5c: 0x0  nop
    ctx->pc = 0x2fcc5cu;
    // NOP
label_2fcc60:
    // 0x2fcc60: 0x81020000  lb          $v0, 0x0($t0)
    ctx->pc = 0x2fcc60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2fcc64: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FCC64u;
    {
        const bool branch_taken_0x2fcc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC64u;
        // 0x2fcc68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcc64) {
            ctx->pc = 0x2FCCA8u;
            goto label_2fcca8;
        }
    }
    ctx->pc = 0x2FCC6Cu;
    // 0x2fcc6c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2fcc6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcc70: 0x1272821  addu        $a1, $t1, $a3
    ctx->pc = 0x2fcc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x2fcc74: 0x0  nop
    ctx->pc = 0x2fcc74u;
    // NOP
label_2fcc78:
    // 0x2fcc78: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2fcc78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2fcc7c: 0x80c40000  lb          $a0, 0x0($a2)
    ctx->pc = 0x2fcc7cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fcc80: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x2fcc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2fcc84: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x2fcc84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2fcc88: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2fcc88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fcc8c: 0x1483fff1  bne         $a0, $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x2FCC8Cu;
    {
        const bool branch_taken_0x2fcc8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2FCC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC8Cu;
        // 0x2fcc90: 0x28e2000a  slti        $v0, $a3, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcc8c) {
            ctx->pc = 0x2FCC54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fcc54;
        }
    }
    ctx->pc = 0x2FCC94u;
    // 0x2fcc94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FCC94u;
    {
        const bool branch_taken_0x2fcc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fcc94) {
            ctx->pc = 0x2FCCA8u;
            goto label_2fcca8;
        }
    }
    ctx->pc = 0x2FCC9Cu;
    // 0x2fcc9c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x2fcc9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fcca0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2FCCA0u;
    {
        const bool branch_taken_0x2fcca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCCA0u;
        // 0x2fcca4: 0x1272821  addu        $a1, $t1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcca0) {
            ctx->pc = 0x2FCC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fcc78;
        }
    }
    ctx->pc = 0x2FCCA8u;
label_2fcca8:
    // 0x2fcca8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCCA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCCA8u;
        // 0x2fccac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCCA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCCB0u;
}
