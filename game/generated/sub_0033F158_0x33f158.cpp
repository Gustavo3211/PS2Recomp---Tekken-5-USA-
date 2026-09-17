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

// Function: sub_0033F158
// Address: 0x33f158 - 0x33f1a8
void sub_0033F158_0x33f158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F158_0x33f158");
#endif

    switch (ctx->pc) {
        case 0x33f190u: goto label_33f190;
        case 0x33f198u: goto label_33f198;
        default: break;
    }

    ctx->pc = 0x33f158u;

    // 0x33f158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33f158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33f15c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33f15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33f160: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33f160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f164: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33f164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33f168: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x33f168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x33f16c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x33f16cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x33f170: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x33f170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x33f174: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x33f174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x33f178: 0x8c424000  lw          $v0, 0x4000($v0)
    ctx->pc = 0x33f178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16384)));
    // 0x33f17c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33F17Cu;
    {
        const bool branch_taken_0x33f17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F17Cu;
        // 0x33f180: 0x2447ffff  addiu       $a3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f17c) {
            ctx->pc = 0x33F198u;
            goto label_33f198;
        }
    }
    ctx->pc = 0x33F184u;
    // 0x33f184: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33f184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f188: 0xc0cfc6a  jal         func_33F1A8
    ctx->pc = 0x33F188u;
    SET_GPR_U32(ctx, 31, 0x33F190u);
    ctx->pc = 0x33F18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F188u;
    // 0x33f18c: 0x3c087000  lui         $t0, 0x7000 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F1A8u, 0x33F188u, 0x33F190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F190u;
label_33f190:
    // 0x33f190: 0xc0cfb28  jal         func_33ECA0
    ctx->pc = 0x33F190u;
    SET_GPR_U32(ctx, 31, 0x33F198u);
    ctx->pc = 0x33F194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F190u;
    // 0x33f194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ECA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ECA0u, 0x33F190u, 0x33F198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F198u;
label_33f198:
    // 0x33f198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33f198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f19c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33f19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33f1a0: 0x3e00008  jr          $ra
    ctx->pc = 0x33F1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F1A0u;
        // 0x33f1a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F1A8u;
}
