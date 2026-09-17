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

// Function: sub_00225D50
// Address: 0x225d50 - 0x225db0
void sub_00225D50_0x225d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225D50_0x225d50");
#endif

    switch (ctx->pc) {
        case 0x225d80u: goto label_225d80;
        case 0x225d8cu: goto label_225d8c;
        default: break;
    }

    ctx->pc = 0x225d50u;

    // 0x225d50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225d54: 0x24020099  addiu       $v0, $zero, 0x99
    ctx->pc = 0x225d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x225d58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225d5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225d60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x225d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x225d64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x225d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x225d68: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x225d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x225d6c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x225d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225d70: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x225D70u;
    {
        const bool branch_taken_0x225d70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x225D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D70u;
        // 0x225d74: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d70) {
            ctx->pc = 0x225D98u;
            goto label_225d98;
        }
    }
    ctx->pc = 0x225D78u;
    // 0x225d78: 0x24120099  addiu       $s2, $zero, 0x99
    ctx->pc = 0x225d78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
    // 0x225d7c: 0x0  nop
    ctx->pc = 0x225d7cu;
    // NOP
label_225d80:
    // 0x225d80: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x225d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x225d84: 0xc0895ee  jal         func_2257B8
    ctx->pc = 0x225D84u;
    SET_GPR_U32(ctx, 31, 0x225D8Cu);
    ctx->pc = 0x225D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225D84u;
    // 0x225d88: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2257B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2257B8u, 0x225D84u, 0x225D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D8Cu;
label_225d8c:
    // 0x225d8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x225d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x225d90: 0x1452fffb  bne         $v0, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x225D90u;
    {
        const bool branch_taken_0x225d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x225D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225D90u;
        // 0x225d94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225d90) {
            ctx->pc = 0x225D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225d80;
        }
    }
    ctx->pc = 0x225D98u;
label_225d98:
    // 0x225d98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225d98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225d9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x225d9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225da0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x225da0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225da4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x225da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x225da8: 0x3e00008  jr          $ra
    ctx->pc = 0x225DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225DA8u;
        // 0x225dac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225DB0u;
}
