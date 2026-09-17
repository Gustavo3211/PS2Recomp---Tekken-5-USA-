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

// Function: sub_002EB6F0
// Address: 0x2eb6f0 - 0x2eb750
void sub_002EB6F0_0x2eb6f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB6F0_0x2eb6f0");
#endif

    switch (ctx->pc) {
        case 0x2eb700u: goto label_2eb700;
        case 0x2eb710u: goto label_2eb710;
        case 0x2eb744u: goto label_2eb744;
        default: break;
    }

    ctx->pc = 0x2eb6f0u;

    // 0x2eb6f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eb6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eb6f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eb6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eb6f8: 0xc0bbe48  jal         func_2EF920
    ctx->pc = 0x2EB6F8u;
    SET_GPR_U32(ctx, 31, 0x2EB700u);
    ctx->pc = 0x2EB6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB6F8u;
    // 0x2eb6fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EF920u, 0x2EB6F8u, 0x2EB700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB700u;
label_2eb700:
    // 0x2eb700: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2eb700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2eb704: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2eb704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2eb708: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x2EB708u;
    SET_GPR_U32(ctx, 31, 0x2EB710u);
    ctx->pc = 0x2EB70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB708u;
    // 0x2eb70c: 0x248437e0  addiu       $a0, $a0, 0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x2EB708u, 0x2EB710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB710u;
label_2eb710:
    // 0x2eb710: 0x24450050  addiu       $a1, $v0, 0x50
    ctx->pc = 0x2eb710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x2eb714: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2eb714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2eb718: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EB718u;
    {
        const bool branch_taken_0x2eb718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb718) {
            ctx->pc = 0x2EB71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB718u;
            // 0x2eb71c: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB734u;
            goto label_2eb734;
        }
    }
    ctx->pc = 0x2EB720u;
    // 0x2eb720: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2eb720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2eb724: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2eb724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2eb728: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EB728u;
    {
        const bool branch_taken_0x2eb728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2eb728) {
            ctx->pc = 0x2EB73Cu;
            goto label_2eb73c;
        }
    }
    ctx->pc = 0x2EB730u;
    // 0x2eb730: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2eb730u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2eb734:
    // 0x2eb734: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2eb734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eb738: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2eb738u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2eb73c:
    // 0x2eb73c: 0xc0a1626  jal         func_285898
    ctx->pc = 0x2EB73Cu;
    SET_GPR_U32(ctx, 31, 0x2EB744u);
    ctx->pc = 0x285898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285898u, 0x2EB73Cu, 0x2EB744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB744u;
label_2eb744:
    // 0x2eb744: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eb744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb748: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB748u;
        // 0x2eb74c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB750u;
}
