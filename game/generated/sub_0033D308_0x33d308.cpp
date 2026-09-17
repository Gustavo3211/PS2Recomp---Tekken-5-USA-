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

// Function: sub_0033D308
// Address: 0x33d308 - 0x33d368
void sub_0033D308_0x33d308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D308_0x33d308");
#endif

    switch (ctx->pc) {
        case 0x33d328u: goto label_33d328;
        case 0x33d358u: goto label_33d358;
        default: break;
    }

    ctx->pc = 0x33d308u;

    // 0x33d308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33d308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33d30c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x33d30cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d310: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33d310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33d314: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x33d314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x33d318: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x33d318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x33d31c: 0x21902  srl         $v1, $v0, 4
    ctx->pc = 0x33d31cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x33d320: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x33D320u;
    {
        const bool branch_taken_0x33d320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D320u;
        // 0x33d324: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d320) {
            ctx->pc = 0x33D34Cu;
            goto label_33d34c;
        }
    }
    ctx->pc = 0x33D328u;
label_33d328:
    // 0x33d328: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x33d328u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33d32c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x33d32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x33d330: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33d330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33d334: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x33d334u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x33d338: 0x0  nop
    ctx->pc = 0x33d338u;
    // NOP
    // 0x33d33c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33D33Cu;
    {
        const bool branch_taken_0x33d33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D33Cu;
        // 0x33d340: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d33c) {
            ctx->pc = 0x33D328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33d328;
        }
    }
    ctx->pc = 0x33D344u;
    // 0x33d344: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x33d344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x33d348: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x33d348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_33d34c:
    // 0x33d34c: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x33d34cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33d350: 0xc043f26  jal         func_10FC98
    ctx->pc = 0x33D350u;
    SET_GPR_U32(ctx, 31, 0x33D358u);
    ctx->pc = 0x33D354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D350u;
    // 0x33d354: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC98u, 0x33D350u, 0x33D358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D358u;
label_33d358:
    // 0x33d358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33d358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33d35c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33d35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d360: 0x3e00008  jr          $ra
    ctx->pc = 0x33D360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D360u;
        // 0x33d364: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D368u;
}
