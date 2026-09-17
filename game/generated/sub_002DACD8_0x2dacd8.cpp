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

// Function: sub_002DACD8
// Address: 0x2dacd8 - 0x2dad20
void sub_002DACD8_0x2dacd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DACD8_0x2dacd8");
#endif

    switch (ctx->pc) {
        case 0x2dad00u: goto label_2dad00;
        default: break;
    }

    ctx->pc = 0x2dacd8u;

    // 0x2dacd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dacd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dacdc: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x2dacdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2dace0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dace0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dace4: 0x3c100018  lui         $s0, 0x18
    ctx->pc = 0x2dace4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)24 << 16));
    // 0x2dace8: 0x26102780  addiu       $s0, $s0, 0x2780
    ctx->pc = 0x2dace8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10112));
    // 0x2dacec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2dacecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dacf0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2dacf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dacf4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2dacf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2dacf8: 0xc089636  jal         func_2258D8
    ctx->pc = 0x2DACF8u;
    SET_GPR_U32(ctx, 31, 0x2DAD00u);
    ctx->pc = 0x2DACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DACF8u;
    // 0x2dacfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258D8u, 0x2DACF8u, 0x2DAD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DAD00u;
label_2dad00:
    // 0x2dad00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2dad00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dad04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dad04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dad08: 0xaf82bbe0  sw          $v0, -0x4420($gp)
    ctx->pc = 0x2dad08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949856), GPR_U32(ctx, 2));
    // 0x2dad0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2dad0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dad10: 0xaf90bbd4  sw          $s0, -0x442C($gp)
    ctx->pc = 0x2dad10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949844), GPR_U32(ctx, 16));
    // 0x2dad14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dad14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dad18: 0x3e00008  jr          $ra
    ctx->pc = 0x2DAD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DAD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAD18u;
        // 0x2dad1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DAD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DAD20u;
}
