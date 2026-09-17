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

// Function: sub_003734C8
// Address: 0x3734c8 - 0x373518
void sub_003734C8_0x3734c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003734C8_0x3734c8");
#endif

    switch (ctx->pc) {
        case 0x3734ecu: goto label_3734ec;
        case 0x373500u: goto label_373500;
        default: break;
    }

    ctx->pc = 0x3734c8u;

    // 0x3734c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3734c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3734cc: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x3734ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x3734d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3734d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3734d4: 0x24507750  addiu       $s0, $v0, 0x7750
    ctx->pc = 0x3734d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30544));
    // 0x3734d8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3734d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7750u));
    // 0x3734dc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3734DCu;
    {
        const bool branch_taken_0x3734dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3734E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3734DCu;
        // 0x3734e0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3734dc) {
            ctx->pc = 0x373500u;
            goto label_373500;
        }
    }
    ctx->pc = 0x3734E4u;
    // 0x3734e4: 0xc0dccd2  jal         func_373348
    ctx->pc = 0x3734E4u;
    SET_GPR_U32(ctx, 31, 0x3734ECu);
    ctx->pc = 0x373348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373348u, 0x3734E4u, 0x3734ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3734ECu;
label_3734ec:
    // 0x3734ec: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3734ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3734f0: 0x24a52460  addiu       $a1, $a1, 0x2460
    ctx->pc = 0x3734f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9312));
    // 0x3734f4: 0x2786cca0  addiu       $a2, $gp, -0x3360
    ctx->pc = 0x3734f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954144));
    // 0x3734f8: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x3734F8u;
    SET_GPR_U32(ctx, 31, 0x373500u);
    ctx->pc = 0x3734FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3734F8u;
    // 0x3734fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x3734F8u, 0x373500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373500u;
label_373500:
    // 0x373500: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x373500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x373504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373508: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x373508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37350c: 0x3e00008  jr          $ra
    ctx->pc = 0x37350Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37350Cu;
        // 0x373510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37350Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373514u;
    // 0x373514: 0x0  nop
    ctx->pc = 0x373514u;
    // NOP
    ctx->pc = 0x373518u;
}
