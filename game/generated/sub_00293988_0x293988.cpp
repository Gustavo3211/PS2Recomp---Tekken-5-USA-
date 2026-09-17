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

// Function: sub_00293988
// Address: 0x293988 - 0x2939c0
void sub_00293988_0x293988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293988_0x293988");
#endif

    switch (ctx->pc) {
        case 0x2939a4u: goto label_2939a4;
        case 0x2939acu: goto label_2939ac;
        case 0x2939b4u: goto label_2939b4;
        default: break;
    }

    ctx->pc = 0x293988u;

    // 0x293988: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x293988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x29398c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29398cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x293990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x293990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293994: 0x2484e020  addiu       $a0, $a0, -0x1FE0
    ctx->pc = 0x293994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959136));
    // 0x293998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x293998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29399c: 0xc08d7b0  jal         func_235EC0
    ctx->pc = 0x29399Cu;
    SET_GPR_U32(ctx, 31, 0x2939A4u);
    ctx->pc = 0x2939A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29399Cu;
    // 0x2939a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235EC0u, 0x29399Cu, 0x2939A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2939A4u;
label_2939a4:
    // 0x2939a4: 0xc08c3ec  jal         func_230FB0
    ctx->pc = 0x2939A4u;
    SET_GPR_U32(ctx, 31, 0x2939ACu);
    ctx->pc = 0x230FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230FB0u, 0x2939A4u, 0x2939ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2939ACu;
label_2939ac:
    // 0x2939ac: 0xc07cbea  jal         func_1F2FA8
    ctx->pc = 0x2939ACu;
    SET_GPR_U32(ctx, 31, 0x2939B4u);
    ctx->pc = 0x1F2FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2FA8u, 0x2939ACu, 0x2939B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2939B4u;
label_2939b4:
    // 0x2939b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2939b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2939b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2939B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2939BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2939B8u;
        // 0x2939bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2939B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2939C0u;
}
