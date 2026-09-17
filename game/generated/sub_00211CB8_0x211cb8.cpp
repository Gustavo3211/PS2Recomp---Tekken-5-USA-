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

// Function: sub_00211CB8
// Address: 0x211cb8 - 0x211ce8
void sub_00211CB8_0x211cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211CB8_0x211cb8");
#endif

    switch (ctx->pc) {
        case 0x211cc8u: goto label_211cc8;
        default: break;
    }

    ctx->pc = 0x211cb8u;

    // 0x211cb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x211cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x211cbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x211cc0: 0xc08215c  jal         func_208570
    ctx->pc = 0x211CC0u;
    SET_GPR_U32(ctx, 31, 0x211CC8u);
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x211CC0u, 0x211CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x211CC8u;
label_211cc8:
    // 0x211cc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x211ccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x211cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x211cd0: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x211cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x211cd4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x211cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x211cd8: 0x90224d98  lbu         $v0, 0x4D98($at)
    ctx->pc = 0x211cd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19864)));
    // 0x211cdc: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x211cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x211ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x211CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x211CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x211CE0u;
        // 0x211ce4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x211CE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x211CE8u;
}
