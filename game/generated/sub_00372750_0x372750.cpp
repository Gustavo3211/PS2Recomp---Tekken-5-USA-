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

// Function: sub_00372750
// Address: 0x372750 - 0x3727a0
void sub_00372750_0x372750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372750_0x372750");
#endif

    switch (ctx->pc) {
        case 0x372774u: goto label_372774;
        case 0x37278cu: goto label_37278c;
        default: break;
    }

    ctx->pc = 0x372750u;

    // 0x372750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x372750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x372754: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x372754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x372758: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x372758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37275c: 0x24507670  addiu       $s0, $v0, 0x7670
    ctx->pc = 0x37275cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30320));
    // 0x372760: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x372760u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7670u));
    // 0x372764: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x372764u;
    {
        const bool branch_taken_0x372764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x372768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372764u;
        // 0x372768: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x372764) {
            ctx->pc = 0x37278Cu;
            goto label_37278c;
        }
    }
    ctx->pc = 0x37276Cu;
    // 0x37276c: 0xc0dc972  jal         func_3725C8
    ctx->pc = 0x37276Cu;
    SET_GPR_U32(ctx, 31, 0x372774u);
    ctx->pc = 0x3725C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3725C8u, 0x37276Cu, 0x372774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372774u;
label_372774:
    // 0x372774: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x372774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x372778: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x372778u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x37277c: 0x24a51368  addiu       $a1, $a1, 0x1368
    ctx->pc = 0x37277cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4968));
    // 0x372780: 0x24c67660  addiu       $a2, $a2, 0x7660
    ctx->pc = 0x372780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30304));
    // 0x372784: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x372784u;
    SET_GPR_U32(ctx, 31, 0x37278Cu);
    ctx->pc = 0x372788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372784u;
    // 0x372788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x372784u, 0x37278Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37278Cu;
label_37278c:
    // 0x37278c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37278cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372790: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x372790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372794: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x372794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x372798: 0x3e00008  jr          $ra
    ctx->pc = 0x372798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372798u;
        // 0x37279c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3727A0u;
}
