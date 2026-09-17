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

// Function: sub_00246AF8
// Address: 0x246af8 - 0x246b28
void sub_00246AF8_0x246af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246AF8_0x246af8");
#endif

    switch (ctx->pc) {
        case 0x246b18u: goto label_246b18;
        default: break;
    }

    ctx->pc = 0x246af8u;

    // 0x246af8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x246af8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x246afc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x246afcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x246b00: 0x3c010047  lui         $at, 0x47
    ctx->pc = 0x246b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)71 << 16));
    // 0x246b04: 0x240821  addu        $at, $at, $a0
    ctx->pc = 0x246b04u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x246b08: 0x8c240b58  lw          $a0, 0xB58($at)
    ctx->pc = 0x246b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 2904)));
    // 0x246b0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x246b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x246b10: 0xc092958  jal         func_24A560
    ctx->pc = 0x246B10u;
    SET_GPR_U32(ctx, 31, 0x246B18u);
    ctx->pc = 0x24A560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A560u, 0x246B10u, 0x246B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B18u;
label_246b18:
    // 0x246b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x246b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x246b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x246B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B1Cu;
        // 0x246b20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246B24u;
    // 0x246b24: 0x0  nop
    ctx->pc = 0x246b24u;
    // NOP
    ctx->pc = 0x246b28u;
}
