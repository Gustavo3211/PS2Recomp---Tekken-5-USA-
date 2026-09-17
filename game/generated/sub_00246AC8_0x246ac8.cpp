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

// Function: sub_00246AC8
// Address: 0x246ac8 - 0x246af8
void sub_00246AC8_0x246ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246AC8_0x246ac8");
#endif

    switch (ctx->pc) {
        case 0x246ae8u: goto label_246ae8;
        default: break;
    }

    ctx->pc = 0x246ac8u;

    // 0x246ac8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x246ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x246acc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x246accu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x246ad0: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x246ad0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
    // 0x246ad4: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x246ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x246ad8: 0x8c240b30  lw          $a0, 0xB30($at)
    ctx->pc = 0x246ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2864)));
    // 0x246adc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x246adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x246ae0: 0xc092934  jal         func_24A4D0
    ctx->pc = 0x246AE0u;
    SET_GPR_U32(ctx, 31, 0x246AE8u);
    ctx->pc = 0x24A4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A4D0u, 0x246AE0u, 0x246AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246AE8u;
label_246ae8:
    // 0x246ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x246ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246aec: 0x3e00008  jr          $ra
    ctx->pc = 0x246AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246AECu;
        // 0x246af0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246AF4u;
    // 0x246af4: 0x0  nop
    ctx->pc = 0x246af4u;
    // NOP
    ctx->pc = 0x246af8u;
}
