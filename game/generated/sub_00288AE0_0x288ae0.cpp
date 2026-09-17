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

// Function: sub_00288AE0
// Address: 0x288ae0 - 0x288b08
void sub_00288AE0_0x288ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288AE0_0x288ae0");
#endif

    switch (ctx->pc) {
        case 0x288af8u: goto label_288af8;
        default: break;
    }

    ctx->pc = 0x288ae0u;

    // 0x288ae0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x288ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x288ae4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x288ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x288ae8: 0x2442db38  addiu       $v0, $v0, -0x24C8
    ctx->pc = 0x288ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957880));
    // 0x288aec: 0x2484fcf0  addiu       $a0, $a0, -0x310
    ctx->pc = 0x288aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966512));
    // 0x288af0: 0xc048b90  jal         func_122E40
    ctx->pc = 0x288AF0u;
    SET_GPR_U32(ctx, 31, 0x288AF8u);
    ctx->pc = 0x288AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288AF0u;
    // 0x288af4: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x288AF0u, 0x288AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288AF8u;
label_288af8:
    // 0x288af8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x288af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x288afc: 0x3e00008  jr          $ra
    ctx->pc = 0x288AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288AFCu;
        // 0x288b00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288AFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288B04u;
    // 0x288b04: 0x0  nop
    ctx->pc = 0x288b04u;
    // NOP
    ctx->pc = 0x288b08u;
}
