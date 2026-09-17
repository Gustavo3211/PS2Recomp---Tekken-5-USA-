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

// Function: sub_00224BA0
// Address: 0x224ba0 - 0x224be0
void sub_00224BA0_0x224ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224BA0_0x224ba0");
#endif

    switch (ctx->pc) {
        case 0x224bd0u: goto label_224bd0;
        default: break;
    }

    ctx->pc = 0x224ba0u;

    // 0x224ba0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x224ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x224ba4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x224ba4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224ba8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x224ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x224bac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x224bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x224bb0: 0x8c4288d0  lw          $v0, -0x7730($v0)
    ctx->pc = 0x224bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936784)));
    // 0x224bb4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x224bb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x224bb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x224bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x224bbc: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x224bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 3));
    // 0x224bc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x224bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224bc4: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x224bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
    // 0x224bc8: 0xc07ce16  jal         func_1F3858
    ctx->pc = 0x224BC8u;
    SET_GPR_U32(ctx, 31, 0x224BD0u);
    ctx->pc = 0x224BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224BC8u;
    // 0x224bcc: 0xac4300bc  sw          $v1, 0xBC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F3858u, 0x224BC8u, 0x224BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224BD0u;
label_224bd0:
    // 0x224bd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x224bd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x224bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x224BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224BD4u;
        // 0x224bd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224BDCu;
    // 0x224bdc: 0x0  nop
    ctx->pc = 0x224bdcu;
    // NOP
    ctx->pc = 0x224be0u;
}
