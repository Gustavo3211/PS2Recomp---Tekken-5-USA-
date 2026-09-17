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

// Function: sub_002319E8
// Address: 0x2319e8 - 0x231a18
void sub_002319E8_0x2319e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002319E8_0x2319e8");
#endif

    switch (ctx->pc) {
        case 0x231a04u: goto label_231a04;
        default: break;
    }

    ctx->pc = 0x2319e8u;

    // 0x2319e8: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x2319e8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x2319ec: 0x46006b06  mov.s       $f12, $f13
    ctx->pc = 0x2319ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[13]);
    // 0x2319f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2319f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2319f4: 0x2784c170  addiu       $a0, $gp, -0x3E90
    ctx->pc = 0x2319f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951280));
    // 0x2319f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2319f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2319fc: 0xc0b7440  jal         func_2DD100
    ctx->pc = 0x2319FCu;
    SET_GPR_U32(ctx, 31, 0x231A04u);
    ctx->pc = 0x231A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2319FCu;
    // 0x231a00: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD100u, 0x2319FCu, 0x231A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231A04u;
label_231a04:
    // 0x231a04: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x231a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x231a08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x231a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231a0c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x231a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231a10: 0x3e00008  jr          $ra
    ctx->pc = 0x231A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A10u;
        // 0x231a14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x231A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x231A18u;
}
