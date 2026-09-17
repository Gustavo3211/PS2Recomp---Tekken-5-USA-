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

// Function: sub_0025A2D8
// Address: 0x25a2d8 - 0x25a310
void sub_0025A2D8_0x25a2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A2D8_0x25a2d8");
#endif

    switch (ctx->pc) {
        case 0x25a2ecu: goto label_25a2ec;
        case 0x25a300u: goto label_25a300;
        default: break;
    }

    ctx->pc = 0x25a2d8u;

    // 0x25a2d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25a2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x25a2dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25a2dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a2e0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x25a2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x25a2e4: 0xc097084  jal         func_25C210
    ctx->pc = 0x25A2E4u;
    SET_GPR_U32(ctx, 31, 0x25A2ECu);
    ctx->pc = 0x25A2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A2E4u;
    // 0x25a2e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x25A2E4u, 0x25A2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A2ECu;
label_25a2ec:
    // 0x25a2ec: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x25a2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x25a2f0: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x25a2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x25a2f4: 0xc7ad0000  lwc1        $f13, 0x0($sp)
    ctx->pc = 0x25a2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x25a2f8: 0xc0b740c  jal         func_2DD030
    ctx->pc = 0x25A2F8u;
    SET_GPR_U32(ctx, 31, 0x25A300u);
    ctx->pc = 0x25A2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A2F8u;
    // 0x25a2fc: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD030u, 0x25A2F8u, 0x25A300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A300u;
label_25a300:
    // 0x25a300: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x25a300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25a304: 0x3e00008  jr          $ra
    ctx->pc = 0x25A304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A304u;
        // 0x25a308: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A30Cu;
    // 0x25a30c: 0x0  nop
    ctx->pc = 0x25a30cu;
    // NOP
    ctx->pc = 0x25a310u;
}
