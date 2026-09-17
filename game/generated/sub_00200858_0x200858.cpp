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

// Function: sub_00200858
// Address: 0x200858 - 0x200890
void sub_00200858_0x200858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200858_0x200858");
#endif

    switch (ctx->pc) {
        case 0x200878u: goto label_200878;
        case 0x200880u: goto label_200880;
        default: break;
    }

    ctx->pc = 0x200858u;

    // 0x200858: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20085c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20085cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x200860: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x200860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200864: 0x26050750  addiu       $a1, $s0, 0x750
    ctx->pc = 0x200864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1872));
    // 0x200868: 0x26060630  addiu       $a2, $s0, 0x630
    ctx->pc = 0x200868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
    // 0x20086c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20086cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x200870: 0xc084784  jal         func_211E10
    ctx->pc = 0x200870u;
    SET_GPR_U32(ctx, 31, 0x200878u);
    ctx->pc = 0x200874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200870u;
    // 0x200874: 0x26040640  addiu       $a0, $s0, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x200870u, 0x200878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200878u;
label_200878:
    // 0x200878: 0xc080210  jal         func_200840
    ctx->pc = 0x200878u;
    SET_GPR_U32(ctx, 31, 0x200880u);
    ctx->pc = 0x20087Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200878u;
    // 0x20087c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200840u, 0x200878u, 0x200880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200880u;
label_200880:
    // 0x200880: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x200880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200884: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x200884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x200888: 0x3e00008  jr          $ra
    ctx->pc = 0x200888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200888u;
        // 0x20088c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200890u;
}
