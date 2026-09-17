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

// Function: sub_00213C58
// Address: 0x213c58 - 0x213c98
void sub_00213C58_0x213c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213C58_0x213c58");
#endif

    switch (ctx->pc) {
        case 0x213c68u: goto label_213c68;
        case 0x213c74u: goto label_213c74;
        case 0x213c7cu: goto label_213c7c;
        case 0x213c84u: goto label_213c84;
        case 0x213c8cu: goto label_213c8c;
        default: break;
    }

    ctx->pc = 0x213c58u;

    // 0x213c58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x213c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x213c5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x213c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x213c60: 0xc085116  jal         func_214458
    ctx->pc = 0x213C60u;
    SET_GPR_U32(ctx, 31, 0x213C68u);
    ctx->pc = 0x214458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214458u, 0x213C60u, 0x213C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213C68u;
label_213c68:
    // 0x213c68: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x213c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x213c6c: 0xc0a4e38  jal         func_2938E0
    ctx->pc = 0x213C6Cu;
    SET_GPR_U32(ctx, 31, 0x213C74u);
    ctx->pc = 0x213C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213C6Cu;
    // 0x213c70: 0x2484b710  addiu       $a0, $a0, -0x48F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2938E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2938E0u, 0x213C6Cu, 0x213C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213C74u;
label_213c74:
    // 0x213c74: 0xc0898be  jal         func_2262F8
    ctx->pc = 0x213C74u;
    SET_GPR_U32(ctx, 31, 0x213C7Cu);
    ctx->pc = 0x2262F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2262F8u, 0x213C74u, 0x213C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213C7Cu;
label_213c7c:
    // 0x213c7c: 0xc089a00  jal         func_226800
    ctx->pc = 0x213C7Cu;
    SET_GPR_U32(ctx, 31, 0x213C84u);
    ctx->pc = 0x226800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226800u, 0x213C7Cu, 0x213C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213C84u;
label_213c84:
    // 0x213c84: 0xc092964  jal         func_24A590
    ctx->pc = 0x213C84u;
    SET_GPR_U32(ctx, 31, 0x213C8Cu);
    ctx->pc = 0x24A590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A590u, 0x213C84u, 0x213C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213C8Cu;
label_213c8c:
    // 0x213c8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x213c8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213c90: 0x3e00008  jr          $ra
    ctx->pc = 0x213C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213C90u;
        // 0x213c94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213C98u;
}
