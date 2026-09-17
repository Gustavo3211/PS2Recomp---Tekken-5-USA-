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

// Function: sub_003703E0
// Address: 0x3703e0 - 0x370430
void sub_003703E0_0x3703e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003703E0_0x3703e0");
#endif

    switch (ctx->pc) {
        case 0x370404u: goto label_370404;
        case 0x37041cu: goto label_37041c;
        default: break;
    }

    ctx->pc = 0x3703e0u;

    // 0x3703e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3703e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3703e4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x3703e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x3703e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3703e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3703ec: 0x245073a0  addiu       $s0, $v0, 0x73A0
    ctx->pc = 0x3703ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29600));
    // 0x3703f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3703f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D73A0u));
    // 0x3703f4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3703F4u;
    {
        const bool branch_taken_0x3703f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3703F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3703F4u;
        // 0x3703f8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3703f4) {
            ctx->pc = 0x37041Cu;
            goto label_37041c;
        }
    }
    ctx->pc = 0x3703FCu;
    // 0x3703fc: 0xc0dc55e  jal         func_371578
    ctx->pc = 0x3703FCu;
    SET_GPR_U32(ctx, 31, 0x370404u);
    ctx->pc = 0x371578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371578u, 0x3703FCu, 0x370404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370404u;
label_370404:
    // 0x370404: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x370404u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x370408: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x370408u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x37040c: 0x24a50a50  addiu       $a1, $a1, 0xA50
    ctx->pc = 0x37040cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2640));
    // 0x370410: 0x24c67560  addiu       $a2, $a2, 0x7560
    ctx->pc = 0x370410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30048));
    // 0x370414: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x370414u;
    SET_GPR_U32(ctx, 31, 0x37041Cu);
    ctx->pc = 0x370418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370414u;
    // 0x370418: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x370414u, 0x37041Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37041Cu;
label_37041c:
    // 0x37041c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37041cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370420: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x370420u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370424: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x370424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x370428: 0x3e00008  jr          $ra
    ctx->pc = 0x370428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370428u;
        // 0x37042c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370430u;
}
