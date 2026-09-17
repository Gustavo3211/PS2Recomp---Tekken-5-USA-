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

// Function: sub_0028EAC8
// Address: 0x28eac8 - 0x28eaf8
void sub_0028EAC8_0x28eac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EAC8_0x28eac8");
#endif

    switch (ctx->pc) {
        case 0x28ead8u: goto label_28ead8;
        case 0x28eaecu: goto label_28eaec;
        default: break;
    }

    ctx->pc = 0x28eac8u;

    // 0x28eac8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28eac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28eacc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28eaccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28ead0: 0xc0a3a88  jal         func_28EA20
    ctx->pc = 0x28EAD0u;
    SET_GPR_U32(ctx, 31, 0x28EAD8u);
    ctx->pc = 0x28EA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EA20u, 0x28EAD0u, 0x28EAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EAD8u;
label_28ead8:
    // 0x28ead8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28ead8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eadc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28EADCu;
    {
        const bool branch_taken_0x28eadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EADCu;
        // 0x28eae0: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eadc) {
            ctx->pc = 0x28EAECu;
            goto label_28eaec;
        }
    }
    ctx->pc = 0x28EAE4u;
    // 0x28eae4: 0xc0a30de  jal         func_28C378
    ctx->pc = 0x28EAE4u;
    SET_GPR_U32(ctx, 31, 0x28EAECu);
    ctx->pc = 0x28C378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C378u, 0x28EAE4u, 0x28EAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EAECu;
label_28eaec:
    // 0x28eaec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28eaecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28eaf0: 0x3e00008  jr          $ra
    ctx->pc = 0x28EAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EAF0u;
        // 0x28eaf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EAF8u;
}
