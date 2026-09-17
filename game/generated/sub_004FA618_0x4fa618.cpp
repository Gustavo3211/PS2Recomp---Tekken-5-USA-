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

// Function: sub_004FA618
// Address: 0x4fa618 - 0x4fa660
void sub_004FA618_0x4fa618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FA618_0x4fa618");
#endif

    switch (ctx->pc) {
        case 0x4fa630u: goto label_4fa630;
        case 0x4fa640u: goto label_4fa640;
        default: break;
    }

    ctx->pc = 0x4fa618u;

    // 0x4fa618: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4fa618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4fa61c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4fa61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4fa620: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x4fa620u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x4fa624: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4fa624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4fa628: 0xc13ea90  jal         func_4FAA40
    ctx->pc = 0x4FA628u;
    SET_GPR_U32(ctx, 31, 0x4FA630u);
    ctx->pc = 0x4FA62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA628u;
    // 0x4fa62c: 0x2610ce88  addiu       $s0, $s0, -0x3178 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4FAA40u, 0x4FA628u, 0x4FA630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA630u;
label_4fa630:
    // 0x4fa630: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4fa630u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fa634: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4fa634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fa638: 0xc040974  jal         func_1025D0
    ctx->pc = 0x4FA638u;
    SET_GPR_U32(ctx, 31, 0x4FA640u);
    ctx->pc = 0x4FA63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FA638u;
    // 0x4fa63c: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1025D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1025D0u, 0x4FA638u, 0x4FA640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4FA640u;
label_4fa640:
    // 0x4fa640: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4fa640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fa644: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4fa644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4fa648: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4fa648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4fa64c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4fa64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4fa650: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4fa650u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fa654: 0x3e00008  jr          $ra
    ctx->pc = 0x4FA654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FA658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FA654u;
        // 0x4fa658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FA654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FA65Cu;
    // 0x4fa65c: 0x0  nop
    ctx->pc = 0x4fa65cu;
    // NOP
    ctx->pc = 0x4fa660u;
}
