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

// Function: sub_002A8288
// Address: 0x2a8288 - 0x2a82b0
void sub_002A8288_0x2a8288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8288_0x2a8288");
#endif

    switch (ctx->pc) {
        case 0x2a82a0u: goto label_2a82a0;
        default: break;
    }

    ctx->pc = 0x2a8288u;

    // 0x2a8288: 0x717c2  srl         $v0, $a3, 31
    ctx->pc = 0x2a8288u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x2a828c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a828cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a8290: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2a8290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2a8294: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a8294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a8298: 0xc0aa0ac  jal         func_2A82B0
    ctx->pc = 0x2A8298u;
    SET_GPR_U32(ctx, 31, 0x2A82A0u);
    ctx->pc = 0x2A829Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8298u;
    // 0x2a829c: 0x23843  sra         $a3, $v0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A82B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A82B0u, 0x2A8298u, 0x2A82A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A82A0u;
label_2a82a0:
    // 0x2a82a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a82a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a82a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A82A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A82A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A82A4u;
        // 0x2a82a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A82A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A82ACu;
    // 0x2a82ac: 0x0  nop
    ctx->pc = 0x2a82acu;
    // NOP
    ctx->pc = 0x2a82b0u;
}
