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

// Function: sub_0036A408
// Address: 0x36a408 - 0x36a458
void sub_0036A408_0x36a408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A408_0x36a408");
#endif

    switch (ctx->pc) {
        case 0x36a42cu: goto label_36a42c;
        case 0x36a444u: goto label_36a444;
        default: break;
    }

    ctx->pc = 0x36a408u;

    // 0x36a408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a40c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36a40cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36a410: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36a414: 0x24506cd8  addiu       $s0, $v0, 0x6CD8
    ctx->pc = 0x36a414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27864));
    // 0x36a418: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36a418u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6CD8u));
    // 0x36a41c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36A41Cu;
    {
        const bool branch_taken_0x36a41c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A41Cu;
        // 0x36a420: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a41c) {
            ctx->pc = 0x36A444u;
            goto label_36a444;
        }
    }
    ctx->pc = 0x36A424u;
    // 0x36a424: 0xc0db7d6  jal         func_36DF58
    ctx->pc = 0x36A424u;
    SET_GPR_U32(ctx, 31, 0x36A42Cu);
    ctx->pc = 0x36DF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DF58u, 0x36A424u, 0x36A42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A42Cu;
label_36a42c:
    // 0x36a42c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x36a42cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x36a430: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36a430u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36a434: 0x24a51848  addiu       $a1, $a1, 0x1848
    ctx->pc = 0x36a434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6216));
    // 0x36a438: 0x24c67180  addiu       $a2, $a2, 0x7180
    ctx->pc = 0x36a438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29056));
    // 0x36a43c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36A43Cu;
    SET_GPR_U32(ctx, 31, 0x36A444u);
    ctx->pc = 0x36A440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A43Cu;
    // 0x36a440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36A43Cu, 0x36A444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A444u;
label_36a444:
    // 0x36a444: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36a444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a448: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a44c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36a44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a450: 0x3e00008  jr          $ra
    ctx->pc = 0x36A450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A450u;
        // 0x36a454: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A458u;
}
