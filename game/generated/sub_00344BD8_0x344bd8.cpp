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

// Function: sub_00344BD8
// Address: 0x344bd8 - 0x344c08
void sub_00344BD8_0x344bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344BD8_0x344bd8");
#endif

    switch (ctx->pc) {
        case 0x344bf4u: goto label_344bf4;
        default: break;
    }

    ctx->pc = 0x344bd8u;

    // 0x344bd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344bdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x344bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x344be0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x344be0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344be4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x344be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x344be8: 0x92040045  lbu         $a0, 0x45($s0)
    ctx->pc = 0x344be8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 69)));
    // 0x344bec: 0xc043088  jal         func_10C220
    ctx->pc = 0x344BECu;
    SET_GPR_U32(ctx, 31, 0x344BF4u);
    ctx->pc = 0x344BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344BECu;
    // 0x344bf0: 0x92050044  lbu         $a1, 0x44($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C220u, 0x344BECu, 0x344BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344BF4u;
label_344bf4:
    // 0x344bf4: 0xa2020046  sb          $v0, 0x46($s0)
    ctx->pc = 0x344bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 70), (uint8_t)GPR_U32(ctx, 2));
    // 0x344bf8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x344bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x344bfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344c00: 0x3e00008  jr          $ra
    ctx->pc = 0x344C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344C00u;
        // 0x344c04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344C08u;
}
