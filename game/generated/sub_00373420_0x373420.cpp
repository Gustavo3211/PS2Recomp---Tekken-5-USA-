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

// Function: sub_00373420
// Address: 0x373420 - 0x373470
void sub_00373420_0x373420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00373420_0x373420");
#endif

    switch (ctx->pc) {
        case 0x373444u: goto label_373444;
        case 0x373458u: goto label_373458;
        default: break;
    }

    ctx->pc = 0x373420u;

    // 0x373420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x373420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x373424: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x373424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x373428: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x373428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37342c: 0x24507730  addiu       $s0, $v0, 0x7730
    ctx->pc = 0x37342cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30512));
    // 0x373430: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x373430u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7730u));
    // 0x373434: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x373434u;
    {
        const bool branch_taken_0x373434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x373438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373434u;
        // 0x373438: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373434) {
            ctx->pc = 0x373458u;
            goto label_373458;
        }
    }
    ctx->pc = 0x37343Cu;
    // 0x37343c: 0xc0dccd2  jal         func_373348
    ctx->pc = 0x37343Cu;
    SET_GPR_U32(ctx, 31, 0x373444u);
    ctx->pc = 0x373348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373348u, 0x37343Cu, 0x373444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373444u;
label_373444:
    // 0x373444: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x373444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x373448: 0x24a51e58  addiu       $a1, $a1, 0x1E58
    ctx->pc = 0x373448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7768));
    // 0x37344c: 0x2786cca0  addiu       $a2, $gp, -0x3360
    ctx->pc = 0x37344cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954144));
    // 0x373450: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x373450u;
    SET_GPR_U32(ctx, 31, 0x373458u);
    ctx->pc = 0x373454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373450u;
    // 0x373454: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x373450u, 0x373458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373458u;
label_373458:
    // 0x373458: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x373458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37345c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37345cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373460: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x373460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x373464: 0x3e00008  jr          $ra
    ctx->pc = 0x373464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373464u;
        // 0x373468: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37346Cu;
    // 0x37346c: 0x0  nop
    ctx->pc = 0x37346cu;
    // NOP
    ctx->pc = 0x373470u;
}
