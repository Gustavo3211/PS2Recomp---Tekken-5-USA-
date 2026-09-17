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

// Function: sub_00118368
// Address: 0x118368 - 0x1183a8
void sub_00118368_0x118368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118368_0x118368");
#endif

    switch (ctx->pc) {
        case 0x11837cu: goto label_11837c;
        case 0x118398u: goto label_118398;
        default: break;
    }

    ctx->pc = 0x118368u;

    // 0x118368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x118368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11836c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11836cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118370: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118374: 0xc046050  jal         func_118140
    ctx->pc = 0x118374u;
    SET_GPR_U32(ctx, 31, 0x11837Cu);
    ctx->pc = 0x118378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118374u;
    // 0x118378: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118140u, 0x118374u, 0x11837Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11837Cu;
label_11837c:
    // 0x11837c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11837cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118380: 0x3e00008  jr          $ra
    ctx->pc = 0x118380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118380u;
        // 0x118384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x118380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x118388u;
    // 0x118388: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x118388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11838c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11838cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x118390: 0xc046050  jal         func_118140
    ctx->pc = 0x118390u;
    SET_GPR_U32(ctx, 31, 0x118398u);
    ctx->pc = 0x118394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x118390u;
    // 0x118394: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118140u, 0x118390u, 0x118398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x118398u;
label_118398:
    // 0x118398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x118398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11839c: 0x3e00008  jr          $ra
    ctx->pc = 0x11839Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1183A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11839Cu;
        // 0x1183a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11839Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1183A4u;
    // 0x1183a4: 0x0  nop
    ctx->pc = 0x1183a4u;
    // NOP
    ctx->pc = 0x1183a8u;
}
