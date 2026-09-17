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

// Function: sub_00246700
// Address: 0x246700 - 0x246750
void sub_00246700_0x246700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246700_0x246700");
#endif

    switch (ctx->pc) {
        case 0x246714u: goto label_246714;
        case 0x246718u: goto label_246718;
        default: break;
    }

    ctx->pc = 0x246700u;

    // 0x246700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x246700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x246704: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x246704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x246708: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x246708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24670c: 0xc0919b6  jal         func_2466D8
    ctx->pc = 0x24670Cu;
    SET_GPR_U32(ctx, 31, 0x246714u);
    ctx->pc = 0x246710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24670Cu;
    // 0x246710: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2466D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2466D8u, 0x24670Cu, 0x246714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246714u;
label_246714:
    // 0x246714: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x246714u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246718:
    // 0x246718: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x246718u;
    {
        const bool branch_taken_0x246718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246718) {
            ctx->pc = 0x24671Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246718u;
            // 0x24671c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246740u;
            goto label_246740;
        }
    }
    ctx->pc = 0x246720u;
    // 0x246720: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x246720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x246724: 0x0  nop
    ctx->pc = 0x246724u;
    // NOP
    // 0x246728: 0x0  nop
    ctx->pc = 0x246728u;
    // NOP
    // 0x24672c: 0x0  nop
    ctx->pc = 0x24672cu;
    // NOP
    // 0x246730: 0x0  nop
    ctx->pc = 0x246730u;
    // NOP
    // 0x246734: 0x5450fff8  bnel        $v0, $s0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x246734u;
    {
        const bool branch_taken_0x246734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x246734) {
            ctx->pc = 0x246738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246734u;
            // 0x246738: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_246718;
        }
    }
    ctx->pc = 0x24673Cu;
    // 0x24673c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24673cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_246740:
    // 0x246740: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x246740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246744: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x246744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x246748: 0x3e00008  jr          $ra
    ctx->pc = 0x246748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246748u;
        // 0x24674c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246750u;
}
