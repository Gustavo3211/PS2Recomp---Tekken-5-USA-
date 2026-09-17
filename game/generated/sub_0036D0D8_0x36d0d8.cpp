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

// Function: sub_0036D0D8
// Address: 0x36d0d8 - 0x36d128
void sub_0036D0D8_0x36d0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036D0D8_0x36d0d8");
#endif

    switch (ctx->pc) {
        case 0x36d0fcu: goto label_36d0fc;
        case 0x36d114u: goto label_36d114;
        default: break;
    }

    ctx->pc = 0x36d0d8u;

    // 0x36d0d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36d0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36d0dc: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36d0e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36d0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36d0e4: 0x24507048  addiu       $s0, $v0, 0x7048
    ctx->pc = 0x36d0e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28744));
    // 0x36d0e8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7048u));
    // 0x36d0ec: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36D0ECu;
    {
        const bool branch_taken_0x36d0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D0ECu;
        // 0x36d0f0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d0ec) {
            ctx->pc = 0x36D114u;
            goto label_36d114;
        }
    }
    ctx->pc = 0x36D0F4u;
    // 0x36d0f4: 0xc0dc55e  jal         func_371578
    ctx->pc = 0x36D0F4u;
    SET_GPR_U32(ctx, 31, 0x36D0FCu);
    ctx->pc = 0x371578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371578u, 0x36D0F4u, 0x36D0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D0FCu;
label_36d0fc:
    // 0x36d0fc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36d0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36d100: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36d100u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36d104: 0x24a5df98  addiu       $a1, $a1, -0x2068
    ctx->pc = 0x36d104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959000));
    // 0x36d108: 0x24c67560  addiu       $a2, $a2, 0x7560
    ctx->pc = 0x36d108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30048));
    // 0x36d10c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36D10Cu;
    SET_GPR_U32(ctx, 31, 0x36D114u);
    ctx->pc = 0x36D110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D10Cu;
    // 0x36d110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36D10Cu, 0x36D114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D114u;
label_36d114:
    // 0x36d114: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36d114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d118: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36d118u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d11c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36d11cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36d120: 0x3e00008  jr          $ra
    ctx->pc = 0x36D120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D120u;
        // 0x36d124: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D128u;
}
