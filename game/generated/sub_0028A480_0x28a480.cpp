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

// Function: sub_0028A480
// Address: 0x28a480 - 0x28a4b0
void sub_0028A480_0x28a480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A480_0x28a480");
#endif

    switch (ctx->pc) {
        case 0x28a494u: goto label_28a494;
        default: break;
    }

    ctx->pc = 0x28a480u;

    // 0x28a480: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28a480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28a484: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28a484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28a488: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28a488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28a48c: 0xc0a17bc  jal         func_285EF0
    ctx->pc = 0x28A48Cu;
    SET_GPR_U32(ctx, 31, 0x28A494u);
    ctx->pc = 0x28A490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A48Cu;
    // 0x28a490: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285EF0u, 0x28A48Cu, 0x28A494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A494u;
label_28a494:
    // 0x28a494: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28a494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28a498: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x28a498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x28a49c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x28a49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x28a4a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28a4a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28a4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x28A4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A4A4u;
        // 0x28a4a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A4ACu;
    // 0x28a4ac: 0x0  nop
    ctx->pc = 0x28a4acu;
    // NOP
    ctx->pc = 0x28a4b0u;
}
