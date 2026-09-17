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

// Function: sub_0023C7E8
// Address: 0x23c7e8 - 0x23c818
void sub_0023C7E8_0x23c7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C7E8_0x23c7e8");
#endif

    switch (ctx->pc) {
        case 0x23c800u: goto label_23c800;
        case 0x23c808u: goto label_23c808;
        default: break;
    }

    ctx->pc = 0x23c7e8u;

    // 0x23c7e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23c7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23c7ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23c7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23c7f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23c7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23c7f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23c7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23c7f8: 0xc0af082  jal         func_2BC208
    ctx->pc = 0x23C7F8u;
    SET_GPR_U32(ctx, 31, 0x23C800u);
    ctx->pc = 0x23C7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C7F8u;
    // 0x23c7fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC208u, 0x23C7F8u, 0x23C800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C800u;
label_23c800:
    // 0x23c800: 0xc0832c4  jal         func_20CB10
    ctx->pc = 0x23C800u;
    SET_GPR_U32(ctx, 31, 0x23C808u);
    ctx->pc = 0x23C804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23C800u;
    // 0x23c804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20CB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20CB10u, 0x23C800u, 0x23C808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23C808u;
label_23c808:
    // 0x23c808: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23c808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23c80c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23c80cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23c810: 0x3e00008  jr          $ra
    ctx->pc = 0x23C810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23C810u;
        // 0x23c814: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23C810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23C818u;
}
