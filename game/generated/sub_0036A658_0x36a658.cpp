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

// Function: sub_0036A658
// Address: 0x36a658 - 0x36a6b0
void sub_0036A658_0x36a658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A658_0x36a658");
#endif

    switch (ctx->pc) {
        case 0x36a67cu: goto label_36a67c;
        case 0x36a690u: goto label_36a690;
        default: break;
    }

    ctx->pc = 0x36a658u;

    // 0x36a658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a65c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36a660: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36a664: 0x24506d28  addiu       $s0, $v0, 0x6D28
    ctx->pc = 0x36a664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27944));
    // 0x36a668: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36a668u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6D28u));
    // 0x36a66c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36A66Cu;
    {
        const bool branch_taken_0x36a66c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A66Cu;
        // 0x36a670: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a66c) {
            ctx->pc = 0x36A690u;
            goto label_36a690;
        }
    }
    ctx->pc = 0x36A674u;
    // 0x36a674: 0xc0da950  jal         func_36A540
    ctx->pc = 0x36A674u;
    SET_GPR_U32(ctx, 31, 0x36A67Cu);
    ctx->pc = 0x36A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A540u, 0x36A674u, 0x36A67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A67Cu;
label_36a67c:
    // 0x36a67c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x36a67cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x36a680: 0x24a52738  addiu       $a1, $a1, 0x2738
    ctx->pc = 0x36a680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10040));
    // 0x36a684: 0x2786cc70  addiu       $a2, $gp, -0x3390
    ctx->pc = 0x36a684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954096));
    // 0x36a688: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36A688u;
    SET_GPR_U32(ctx, 31, 0x36A690u);
    ctx->pc = 0x36A68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A688u;
    // 0x36a68c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36A688u, 0x36A690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A690u;
label_36a690:
    // 0x36a690: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36a690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a694: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a698: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36a698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a69c: 0x3e00008  jr          $ra
    ctx->pc = 0x36A69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A69Cu;
        // 0x36a6a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A6A4u;
    // 0x36a6a4: 0x0  nop
    ctx->pc = 0x36a6a4u;
    // NOP
    // 0x36a6a8: 0x3e00008  jr          $ra
    ctx->pc = 0x36A6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A6A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A6B0u;
}
