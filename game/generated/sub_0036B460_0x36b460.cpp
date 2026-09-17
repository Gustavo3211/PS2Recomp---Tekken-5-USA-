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

// Function: sub_0036B460
// Address: 0x36b460 - 0x36b4b0
void sub_0036B460_0x36b460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B460_0x36b460");
#endif

    switch (ctx->pc) {
        case 0x36b484u: goto label_36b484;
        case 0x36b49cu: goto label_36b49c;
        default: break;
    }

    ctx->pc = 0x36b460u;

    // 0x36b460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36b460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36b464: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36b464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36b468: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36b468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36b46c: 0x24506e48  addiu       $s0, $v0, 0x6E48
    ctx->pc = 0x36b46cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28232));
    // 0x36b470: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36b470u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6E48u));
    // 0x36b474: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36B474u;
    {
        const bool branch_taken_0x36b474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B474u;
        // 0x36b478: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b474) {
            ctx->pc = 0x36B49Cu;
            goto label_36b49c;
        }
    }
    ctx->pc = 0x36B47Cu;
    // 0x36b47c: 0xc0dae78  jal         func_36B9E0
    ctx->pc = 0x36B47Cu;
    SET_GPR_U32(ctx, 31, 0x36B484u);
    ctx->pc = 0x36B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B9E0u, 0x36B47Cu, 0x36B484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B484u;
label_36b484:
    // 0x36b484: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36b484u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36b488: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36b488u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36b48c: 0x24a5b538  addiu       $a1, $a1, -0x4AC8
    ctx->pc = 0x36b48cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948152));
    // 0x36b490: 0x24c66ec8  addiu       $a2, $a2, 0x6EC8
    ctx->pc = 0x36b490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28360));
    // 0x36b494: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36B494u;
    SET_GPR_U32(ctx, 31, 0x36B49Cu);
    ctx->pc = 0x36B498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B494u;
    // 0x36b498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36B494u, 0x36B49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B49Cu;
label_36b49c:
    // 0x36b49c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36b49cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b4a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36b4a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b4a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36b4a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36b4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x36B4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B4A8u;
        // 0x36b4ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B4B0u;
}
