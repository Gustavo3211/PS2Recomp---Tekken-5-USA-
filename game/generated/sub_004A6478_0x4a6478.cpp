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

// Function: sub_004A6478
// Address: 0x4a6478 - 0x4a64b0
void sub_004A6478_0x4a6478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A6478_0x4a6478");
#endif

    switch (ctx->pc) {
        case 0x4a6490u: goto label_4a6490;
        case 0x4a6498u: goto label_4a6498;
        default: break;
    }

    ctx->pc = 0x4a6478u;

    // 0x4a6478: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a6478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4a647c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a647cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a6480: 0x8c440c40  lw          $a0, 0xC40($v0)
    ctx->pc = 0x4a6480u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0C40u));
    // 0x4a6484: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a6484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a6488: 0xc123392  jal         func_48CE48
    ctx->pc = 0x4A6488u;
    SET_GPR_U32(ctx, 31, 0x4A6490u);
    ctx->pc = 0x48CE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CE48u, 0x4A6488u, 0x4A6490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6490u;
label_4a6490:
    // 0x4a6490: 0xc140ecc  jal         func_503B30
    ctx->pc = 0x4A6490u;
    SET_GPR_U32(ctx, 31, 0x4A6498u);
    ctx->pc = 0x503B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503B30u, 0x4A6490u, 0x4A6498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A6498u;
label_4a6498:
    // 0x4a6498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a6498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a649c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4a649cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4a64a0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x4a64a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4a64a4: 0xa462d688  sh          $v0, -0x2978($v1)
    ctx->pc = 0x4a64a4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72D688u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D688u, _value); } while (0);
    // 0x4a64a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A64A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A64ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A64A8u;
        // 0x4a64ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A64A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A64B0u;
}
