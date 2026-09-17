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

// Function: sub_002D0840
// Address: 0x2d0840 - 0x2d08a0
void sub_002D0840_0x2d0840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D0840_0x2d0840");
#endif

    switch (ctx->pc) {
        case 0x2d0864u: goto label_2d0864;
        case 0x2d088cu: goto label_2d088c;
        default: break;
    }

    ctx->pc = 0x2d0840u;

    // 0x2d0840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d0840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d0844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d0844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d0848: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d0848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d084c: 0x8f84cb30  lw          $a0, -0x34D0($gp)
    ctx->pc = 0x2d084cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953776)));
    // 0x2d0850: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x2d0850u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2d0854: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d0854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d0858: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d0858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d085c: 0xc043cf8  jal         func_10F3E0
    ctx->pc = 0x2D085Cu;
    SET_GPR_U32(ctx, 31, 0x2D0864u);
    ctx->pc = 0x2D0860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D085Cu;
    // 0x2d0860: 0x30b1ffff  andi        $s1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3E0u, 0x2D085Cu, 0x2D0864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0864u;
label_2d0864:
    // 0x2d0864: 0x8f82cb28  lw          $v0, -0x34D8($gp)
    ctx->pc = 0x2d0864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953768)));
    // 0x2d0868: 0x8f84cb30  lw          $a0, -0x34D0($gp)
    ctx->pc = 0x2d0868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953776)));
    // 0x2d086c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2d086cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2d0870: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2d0870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2d0874: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x2d0874u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2d0878: 0x3c010018  lui         $at, 0x18
    ctx->pc = 0x2d0878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)24 << 16));
    // 0x2d087c: 0x300821  addu        $at, $at, $s0
    ctx->pc = 0x2d087cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x2d0880: 0xa4318e00  sh          $s1, -0x7200($at)
    ctx->pc = 0x2d0880u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294938112), (uint16_t)GPR_U32(ctx, 17));
    // 0x2d0884: 0xc043cf0  jal         func_10F3C0
    ctx->pc = 0x2D0884u;
    SET_GPR_U32(ctx, 31, 0x2D088Cu);
    ctx->pc = 0x10F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F3C0u, 0x2D0884u, 0x2D088Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D088Cu;
label_2d088c:
    // 0x2d088c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d088cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0890: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d0890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d0894: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d0894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0898: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0898u;
        // 0x2d089c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D08A0u;
}
