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

// Function: sub_002A5600
// Address: 0x2a5600 - 0x2a5628
void sub_002A5600_0x2a5600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5600_0x2a5600");
#endif

    switch (ctx->pc) {
        case 0x2a5618u: goto label_2a5618;
        default: break;
    }

    ctx->pc = 0x2a5600u;

    // 0x2a5600: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2a5600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2a5604: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2a5604u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2a5608: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x2a5608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x2a560c: 0x248400c0  addiu       $a0, $a0, 0xC0
    ctx->pc = 0x2a560cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x2a5610: 0xc048b90  jal         func_122E40
    ctx->pc = 0x2A5610u;
    SET_GPR_U32(ctx, 31, 0x2A5618u);
    ctx->pc = 0x2A5614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5610u;
    // 0x2a5614: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x2A5610u, 0x2A5618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5618u;
label_2a5618:
    // 0x2a5618: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a5618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a561c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A561Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A561Cu;
        // 0x2a5620: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A561Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5624u;
    // 0x2a5624: 0x0  nop
    ctx->pc = 0x2a5624u;
    // NOP
    ctx->pc = 0x2a5628u;
}
