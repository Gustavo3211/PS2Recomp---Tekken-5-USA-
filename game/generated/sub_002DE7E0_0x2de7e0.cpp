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

// Function: sub_002DE7E0
// Address: 0x2de7e0 - 0x2de828
void sub_002DE7E0_0x2de7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE7E0_0x2de7e0");
#endif

    switch (ctx->pc) {
        case 0x2de81cu: goto label_2de81c;
        default: break;
    }

    ctx->pc = 0x2de7e0u;

    // 0x2de7e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2de7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2de7e4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x2de7e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de7e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de7ec: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2de7ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de7f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2de7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2de7f4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DE7F4u;
    {
        const bool branch_taken_0x2de7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE7F4u;
        // 0x2de7f8: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de7f4) {
            ctx->pc = 0x2DE81Cu;
            goto label_2de81c;
        }
    }
    ctx->pc = 0x2DE7FCu;
    // 0x2de7fc: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x2de7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2de800: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x2de800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x2de804: 0xe46c0044  swc1        $f12, 0x44($v1)
    ctx->pc = 0x2de804u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x2de808: 0x248437e0  addiu       $a0, $a0, 0x37E0
    ctx->pc = 0x2de808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14304));
    // 0x2de80c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2de80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x2de810: 0xac680030  sw          $t0, 0x30($v1)
    ctx->pc = 0x2de810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 8));
    // 0x2de814: 0xc0b7c74  jal         func_2DF1D0
    ctx->pc = 0x2DE814u;
    SET_GPR_U32(ctx, 31, 0x2DE81Cu);
    ctx->pc = 0x2DE818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE814u;
    // 0x2de818: 0xac620040  sw          $v0, 0x40($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D0u, 0x2DE814u, 0x2DE81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE81Cu;
label_2de81c:
    // 0x2de81c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de820: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE820u;
        // 0x2de824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE828u;
}
