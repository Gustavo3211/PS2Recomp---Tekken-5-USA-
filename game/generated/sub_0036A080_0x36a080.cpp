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

// Function: sub_0036A080
// Address: 0x36a080 - 0x36a0d0
void sub_0036A080_0x36a080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A080_0x36a080");
#endif

    switch (ctx->pc) {
        case 0x36a0a4u: goto label_36a0a4;
        case 0x36a0b8u: goto label_36a0b8;
        default: break;
    }

    ctx->pc = 0x36a080u;

    // 0x36a080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a084: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36a084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36a088: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36a08c: 0x24506c98  addiu       $s0, $v0, 0x6C98
    ctx->pc = 0x36a08cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27800));
    // 0x36a090: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36a090u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6C98u));
    // 0x36a094: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x36A094u;
    {
        const bool branch_taken_0x36a094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A094u;
        // 0x36a098: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a094) {
            ctx->pc = 0x36A0B8u;
            goto label_36a0b8;
        }
    }
    ctx->pc = 0x36A09Cu;
    // 0x36a09c: 0xc0da834  jal         func_36A0D0
    ctx->pc = 0x36A09Cu;
    SET_GPR_U32(ctx, 31, 0x36A0A4u);
    ctx->pc = 0x36A0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A0D0u, 0x36A09Cu, 0x36A0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A0A4u;
label_36a0a4:
    // 0x36a0a4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x36a0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x36a0a8: 0x24a50520  addiu       $a1, $a1, 0x520
    ctx->pc = 0x36a0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1312));
    // 0x36a0ac: 0x2786cc58  addiu       $a2, $gp, -0x33A8
    ctx->pc = 0x36a0acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954072));
    // 0x36a0b0: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36A0B0u;
    SET_GPR_U32(ctx, 31, 0x36A0B8u);
    ctx->pc = 0x36A0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A0B0u;
    // 0x36a0b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36A0B0u, 0x36A0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A0B8u;
label_36a0b8:
    // 0x36a0b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36a0b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a0bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a0bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a0c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36a0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a0c4: 0x3e00008  jr          $ra
    ctx->pc = 0x36A0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A0C4u;
        // 0x36a0c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A0C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A0CCu;
    // 0x36a0cc: 0x0  nop
    ctx->pc = 0x36a0ccu;
    // NOP
    ctx->pc = 0x36a0d0u;
}
