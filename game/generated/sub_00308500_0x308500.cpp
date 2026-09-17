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

// Function: sub_00308500
// Address: 0x308500 - 0x308590
void sub_00308500_0x308500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308500_0x308500");
#endif

    switch (ctx->pc) {
        case 0x308518u: goto label_308518;
        case 0x308524u: goto label_308524;
        case 0x30853cu: goto label_30853c;
        case 0x30854cu: goto label_30854c;
        case 0x308580u: goto label_308580;
        default: break;
    }

    ctx->pc = 0x308500u;

    // 0x308500: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x308500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x308504: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x308504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x308508: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x308508u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30850c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x30850cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x308510: 0xc0b6fa2  jal         func_2DBE88
    ctx->pc = 0x308510u;
    SET_GPR_U32(ctx, 31, 0x308518u);
    ctx->pc = 0x308514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308510u;
    // 0x308514: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DBE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBE88u, 0x308510u, 0x308518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308518u;
label_308518:
    // 0x308518: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x308518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x30851c: 0xc0b2a18  jal         func_2CA860
    ctx->pc = 0x30851Cu;
    SET_GPR_U32(ctx, 31, 0x308524u);
    ctx->pc = 0x308520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30851Cu;
    // 0x308520: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA860u, 0x30851Cu, 0x308524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308524u;
label_308524:
    // 0x308524: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x308524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x308528: 0x8c4388d0  lw          $v1, -0x7730($v0)
    ctx->pc = 0x308528u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x30852c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30852cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308530: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x308530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308534: 0xc0b7050  jal         func_2DC140
    ctx->pc = 0x308534u;
    SET_GPR_U32(ctx, 31, 0x30853Cu);
    ctx->pc = 0x308538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308534u;
    // 0x308538: 0x84650042  lh          $a1, 0x42($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC140u, 0x308534u, 0x30853Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30853Cu;
label_30853c:
    // 0x30853c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x30853cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x308540: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x308540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x308544: 0xc0b7d04  jal         func_2DF410
    ctx->pc = 0x308544u;
    SET_GPR_U32(ctx, 31, 0x30854Cu);
    ctx->pc = 0x308548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308544u;
    // 0x308548: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF410u, 0x308544u, 0x30854Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30854Cu;
label_30854c:
    // 0x30854c: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x30854cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x308550: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x308550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x308554: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x308554u;
    {
        const bool branch_taken_0x308554 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x308554) {
            ctx->pc = 0x308558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308554u;
            // 0x308558: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308570u;
            goto label_308570;
        }
    }
    ctx->pc = 0x30855Cu;
    // 0x30855c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x30855cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x308560: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x308560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x308564: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x308564u;
    {
        const bool branch_taken_0x308564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x308564) {
            ctx->pc = 0x308578u;
            goto label_308578;
        }
    }
    ctx->pc = 0x30856Cu;
    // 0x30856c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x30856cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_308570:
    // 0x308570: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x308570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308574: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x308574u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_308578:
    // 0x308578: 0xc0b8a74  jal         func_2E29D0
    ctx->pc = 0x308578u;
    SET_GPR_U32(ctx, 31, 0x308580u);
    ctx->pc = 0x2E29D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E29D0u, 0x308578u, 0x308580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308580u;
label_308580:
    // 0x308580: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x308580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x308584: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x308584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x308588: 0x3e00008  jr          $ra
    ctx->pc = 0x308588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30858Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308588u;
        // 0x30858c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308590u;
}
