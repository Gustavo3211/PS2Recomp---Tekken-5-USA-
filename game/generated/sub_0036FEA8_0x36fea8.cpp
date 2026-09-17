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

// Function: sub_0036FEA8
// Address: 0x36fea8 - 0x36fef8
void sub_0036FEA8_0x36fea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FEA8_0x36fea8");
#endif

    switch (ctx->pc) {
        case 0x36feccu: goto label_36fecc;
        case 0x36fee4u: goto label_36fee4;
        default: break;
    }

    ctx->pc = 0x36fea8u;

    // 0x36fea8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36fea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36feac: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36feacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36feb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36feb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36feb4: 0x245072f0  addiu       $s0, $v0, 0x72F0
    ctx->pc = 0x36feb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29424));
    // 0x36feb8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36feb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D72F0u));
    // 0x36febc: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36FEBCu;
    {
        const bool branch_taken_0x36febc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FEBCu;
        // 0x36fec0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36febc) {
            ctx->pc = 0x36FEE4u;
            goto label_36fee4;
        }
    }
    ctx->pc = 0x36FEC4u;
    // 0x36fec4: 0xc0dc55e  jal         func_371578
    ctx->pc = 0x36FEC4u;
    SET_GPR_U32(ctx, 31, 0x36FECCu);
    ctx->pc = 0x371578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371578u, 0x36FEC4u, 0x36FECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FECCu;
label_36fecc:
    // 0x36fecc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36feccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36fed0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36fed0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36fed4: 0x24a50978  addiu       $a1, $a1, 0x978
    ctx->pc = 0x36fed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2424));
    // 0x36fed8: 0x24c67560  addiu       $a2, $a2, 0x7560
    ctx->pc = 0x36fed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30048));
    // 0x36fedc: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36FEDCu;
    SET_GPR_U32(ctx, 31, 0x36FEE4u);
    ctx->pc = 0x36FEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FEDCu;
    // 0x36fee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36FEDCu, 0x36FEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FEE4u;
label_36fee4:
    // 0x36fee4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36fee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fee8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36fee8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36feec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36feecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36fef0: 0x3e00008  jr          $ra
    ctx->pc = 0x36FEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FEF0u;
        // 0x36fef4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FEF8u;
}
