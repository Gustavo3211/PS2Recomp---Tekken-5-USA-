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

// Function: sub_00370DA0
// Address: 0x370da0 - 0x370df0
void sub_00370DA0_0x370da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370DA0_0x370da0");
#endif

    switch (ctx->pc) {
        case 0x370dc4u: goto label_370dc4;
        case 0x370ddcu: goto label_370ddc;
        default: break;
    }

    ctx->pc = 0x370da0u;

    // 0x370da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370da4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x370da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x370da8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x370da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x370dac: 0x24507440  addiu       $s0, $v0, 0x7440
    ctx->pc = 0x370dacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29760));
    // 0x370db0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x370db0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7440u));
    // 0x370db4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x370DB4u;
    {
        const bool branch_taken_0x370db4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x370DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370DB4u;
        // 0x370db8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370db4) {
            ctx->pc = 0x370DDCu;
            goto label_370ddc;
        }
    }
    ctx->pc = 0x370DBCu;
    // 0x370dbc: 0xc0dc206  jal         func_370818
    ctx->pc = 0x370DBCu;
    SET_GPR_U32(ctx, 31, 0x370DC4u);
    ctx->pc = 0x370818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370818u, 0x370DBCu, 0x370DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370DC4u;
label_370dc4:
    // 0x370dc4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x370dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x370dc8: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x370dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x370dcc: 0x24a50bb0  addiu       $a1, $a1, 0xBB0
    ctx->pc = 0x370dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2992));
    // 0x370dd0: 0x24c67370  addiu       $a2, $a2, 0x7370
    ctx->pc = 0x370dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29552));
    // 0x370dd4: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x370DD4u;
    SET_GPR_U32(ctx, 31, 0x370DDCu);
    ctx->pc = 0x370DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370DD4u;
    // 0x370dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x370DD4u, 0x370DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370DDCu;
label_370ddc:
    // 0x370ddc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x370ddcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370de0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x370de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370de4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x370de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x370de8: 0x3e00008  jr          $ra
    ctx->pc = 0x370DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370DE8u;
        // 0x370dec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370DF0u;
}
