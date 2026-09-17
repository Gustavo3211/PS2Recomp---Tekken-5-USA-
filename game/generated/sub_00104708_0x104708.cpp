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

// Function: sub_00104708
// Address: 0x104708 - 0x104750
void sub_00104708_0x104708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104708_0x104708");
#endif

    switch (ctx->pc) {
        case 0x104730u: goto label_104730;
        case 0x104740u: goto label_104740;
        default: break;
    }

    ctx->pc = 0x104708u;

    // 0x104708: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x104708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10470c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x10470cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104710: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x104710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x104714: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x104714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x104718: 0x8ce40040  lw          $a0, 0x40($a3)
    ctx->pc = 0x104718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x10471c: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x10471cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x104720: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x104720u;
    {
        const bool branch_taken_0x104720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x104720) {
            ctx->pc = 0x104738u;
            goto label_104738;
        }
    }
    ctx->pc = 0x104728u;
    // 0x104728: 0xc041058  jal         func_104160
    ctx->pc = 0x104728u;
    SET_GPR_U32(ctx, 31, 0x104730u);
    ctx->pc = 0x10472Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104728u;
    // 0x10472c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104160u, 0x104728u, 0x104730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104730u;
label_104730:
    // 0x104730: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x104730u;
    {
        const bool branch_taken_0x104730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104730u;
        // 0x104734: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104730) {
            ctx->pc = 0x104744u;
            goto label_104744;
        }
    }
    ctx->pc = 0x104738u;
label_104738:
    // 0x104738: 0xc040ffc  jal         func_103FF0
    ctx->pc = 0x104738u;
    SET_GPR_U32(ctx, 31, 0x104740u);
    ctx->pc = 0x10473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104738u;
    // 0x10473c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103FF0u, 0x104738u, 0x104740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104740u;
label_104740:
    // 0x104740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x104740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_104744:
    // 0x104744: 0x3e00008  jr          $ra
    ctx->pc = 0x104744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104744u;
        // 0x104748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10474Cu;
    // 0x10474c: 0x0  nop
    ctx->pc = 0x10474cu;
    // NOP
    ctx->pc = 0x104750u;
}
