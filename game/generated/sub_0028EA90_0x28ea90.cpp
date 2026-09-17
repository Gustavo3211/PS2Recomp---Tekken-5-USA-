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

// Function: sub_0028EA90
// Address: 0x28ea90 - 0x28eac8
void sub_0028EA90_0x28ea90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EA90_0x28ea90");
#endif

    switch (ctx->pc) {
        case 0x28eaa4u: goto label_28eaa4;
        case 0x28eab8u: goto label_28eab8;
        default: break;
    }

    ctx->pc = 0x28ea90u;

    // 0x28ea90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ea90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28ea94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28ea94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28ea98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28ea98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28ea9c: 0xc0a3a88  jal         func_28EA20
    ctx->pc = 0x28EA9Cu;
    SET_GPR_U32(ctx, 31, 0x28EAA4u);
    ctx->pc = 0x28EAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EA9Cu;
    // 0x28eaa0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EA20u, 0x28EA9Cu, 0x28EAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EAA4u;
label_28eaa4:
    // 0x28eaa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28eaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eaa8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28EAA8u;
    {
        const bool branch_taken_0x28eaa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EAA8u;
        // 0x28eaac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eaa8) {
            ctx->pc = 0x28EAB8u;
            goto label_28eab8;
        }
    }
    ctx->pc = 0x28EAB0u;
    // 0x28eab0: 0xc0a30de  jal         func_28C378
    ctx->pc = 0x28EAB0u;
    SET_GPR_U32(ctx, 31, 0x28EAB8u);
    ctx->pc = 0x28C378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C378u, 0x28EAB0u, 0x28EAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EAB8u;
label_28eab8:
    // 0x28eab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28eab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28eabc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28eabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28eac0: 0x3e00008  jr          $ra
    ctx->pc = 0x28EAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EAC0u;
        // 0x28eac4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EAC8u;
}
