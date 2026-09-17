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

// Function: sub_00297D68
// Address: 0x297d68 - 0x297d90
void sub_00297D68_0x297d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297D68_0x297d68");
#endif

    switch (ctx->pc) {
        case 0x297d80u: goto label_297d80;
        default: break;
    }

    ctx->pc = 0x297d68u;

    // 0x297d68: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x297d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x297d6c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x297d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x297d70: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x297d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x297d74: 0x2484ff48  addiu       $a0, $a0, -0xB8
    ctx->pc = 0x297d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967112));
    // 0x297d78: 0xc048b90  jal         func_122E40
    ctx->pc = 0x297D78u;
    SET_GPR_U32(ctx, 31, 0x297D80u);
    ctx->pc = 0x297D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297D78u;
    // 0x297d7c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122E40u, 0x297D78u, 0x297D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297D80u;
label_297d80:
    // 0x297d80: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x297d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x297d84: 0x3e00008  jr          $ra
    ctx->pc = 0x297D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297D84u;
        // 0x297d88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297D8Cu;
    // 0x297d8c: 0x0  nop
    ctx->pc = 0x297d8cu;
    // NOP
    ctx->pc = 0x297d90u;
}
