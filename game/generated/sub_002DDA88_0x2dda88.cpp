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

// Function: sub_002DDA88
// Address: 0x2dda88 - 0x2ddad0
void sub_002DDA88_0x2dda88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDA88_0x2dda88");
#endif

    switch (ctx->pc) {
        case 0x2dda9cu: goto label_2dda9c;
        default: break;
    }

    ctx->pc = 0x2dda88u;

    // 0x2dda88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dda88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dda8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dda8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dda90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2dda90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2dda94: 0xc0b42c6  jal         func_2D0B18
    ctx->pc = 0x2DDA94u;
    SET_GPR_U32(ctx, 31, 0x2DDA9Cu);
    ctx->pc = 0x2DDA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDA94u;
    // 0x2dda98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0B18u, 0x2DDA94u, 0x2DDA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA9Cu;
label_2dda9c:
    // 0x2dda9c: 0x260400b8  addiu       $a0, $s0, 0xB8
    ctx->pc = 0x2dda9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
    // 0x2ddaa0: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x2ddaa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x2ddaa4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2ddaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ddaa8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ddaa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ddaac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ddaacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ddab0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2ddab0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2ddab4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ddab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ddab8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ddab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ddabc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2ddabcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2ddac0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ddac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddac4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDAC4u;
        // 0x2ddac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDACCu;
    // 0x2ddacc: 0x0  nop
    ctx->pc = 0x2ddaccu;
    // NOP
    ctx->pc = 0x2ddad0u;
}
