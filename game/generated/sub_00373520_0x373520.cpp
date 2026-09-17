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

// Function: sub_00373520
// Address: 0x373520 - 0x373570
void sub_00373520_0x373520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373520_0x373520");
#endif

    switch (ctx->pc) {
        case 0x373544u: goto label_373544;
        case 0x373558u: goto label_373558;
        default: break;
    }

    ctx->pc = 0x373520u;

    // 0x373520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x373524: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x373524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x373528: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x373528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37352c: 0x24507760  addiu       $s0, $v0, 0x7760
    ctx->pc = 0x37352cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30560));
    // 0x373530: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x373530u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7760u));
    // 0x373534: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x373534u;
    {
        const bool branch_taken_0x373534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x373538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373534u;
        // 0x373538: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373534) {
            ctx->pc = 0x373558u;
            goto label_373558;
        }
    }
    ctx->pc = 0x37353Cu;
    // 0x37353c: 0xc0dccd2  jal         func_373348
    ctx->pc = 0x37353Cu;
    SET_GPR_U32(ctx, 31, 0x373544u);
    ctx->pc = 0x373348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373348u, 0x37353Cu, 0x373544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373544u;
label_373544:
    // 0x373544: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x373544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x373548: 0x24a524f0  addiu       $a1, $a1, 0x24F0
    ctx->pc = 0x373548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9456));
    // 0x37354c: 0x2786cca0  addiu       $a2, $gp, -0x3360
    ctx->pc = 0x37354cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954144));
    // 0x373550: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x373550u;
    SET_GPR_U32(ctx, 31, 0x373558u);
    ctx->pc = 0x373554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373550u;
    // 0x373554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x373550u, 0x373558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373558u;
label_373558:
    // 0x373558: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x373558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37355c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37355cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373560: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x373560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x373564: 0x3e00008  jr          $ra
    ctx->pc = 0x373564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373564u;
        // 0x373568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37356Cu;
    // 0x37356c: 0x0  nop
    ctx->pc = 0x37356cu;
    // NOP
    ctx->pc = 0x373570u;
}
