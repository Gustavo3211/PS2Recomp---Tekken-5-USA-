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

// Function: sub_001128C8
// Address: 0x1128c8 - 0x1128f0
void sub_001128C8_0x1128c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001128C8_0x1128c8");
#endif

    switch (ctx->pc) {
        case 0x1128d8u: goto label_1128d8;
        default: break;
    }

    ctx->pc = 0x1128c8u;

    // 0x1128c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1128c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1128cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1128ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1128d0: 0xc044892  jal         func_112248
    ctx->pc = 0x1128D0u;
    SET_GPR_U32(ctx, 31, 0x1128D8u);
    ctx->pc = 0x112248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112248u, 0x1128D0u, 0x1128D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128D8u;
label_1128d8:
    // 0x1128d8: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x1128d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x1128dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1128dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1128e0: 0xac40110c  sw          $zero, 0x110C($v0)
    ctx->pc = 0x1128e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x13110Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x13110Cu, _value); } while (0);
    // 0x1128e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1128E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1128E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128E4u;
        // 0x1128e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1128E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1128ECu;
    // 0x1128ec: 0x0  nop
    ctx->pc = 0x1128ecu;
    // NOP
    ctx->pc = 0x1128f0u;
}
