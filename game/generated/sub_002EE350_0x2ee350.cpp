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

// Function: sub_002EE350
// Address: 0x2ee350 - 0x2ee390
void sub_002EE350_0x2ee350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE350_0x2ee350");
#endif

    switch (ctx->pc) {
        case 0x2ee378u: goto label_2ee378;
        default: break;
    }

    ctx->pc = 0x2ee350u;

    // 0x2ee350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ee350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ee354: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2ee354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ee358: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ee358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ee35c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ee35cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee360: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ee360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ee364: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ee364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee368: 0x10650005  beq         $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EE368u;
    {
        const bool branch_taken_0x2ee368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x2EE36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE368u;
        // 0x2ee36c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ee368) {
            ctx->pc = 0x2EE380u;
            goto label_2ee380;
        }
    }
    ctx->pc = 0x2EE370u;
    // 0x2ee370: 0xc0bb89e  jal         func_2EE278
    ctx->pc = 0x2EE370u;
    SET_GPR_U32(ctx, 31, 0x2EE378u);
    ctx->pc = 0x2EE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE278u, 0x2EE370u, 0x2EE378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EE378u;
label_2ee378:
    // 0x2ee378: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2ee378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ee37c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ee37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2ee380:
    // 0x2ee380: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ee380u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ee384: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ee384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ee388: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE388u;
        // 0x2ee38c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE390u;
}
