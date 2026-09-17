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

// Function: sub_00241980
// Address: 0x241980 - 0x2419e0
void sub_00241980_0x241980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241980_0x241980");
#endif

    switch (ctx->pc) {
        case 0x241994u: goto label_241994;
        case 0x2419c4u: goto label_2419c4;
        default: break;
    }

    ctx->pc = 0x241980u;

    // 0x241980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x241980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x241984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x241984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x241988: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x241988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24198c: 0xc0905a8  jal         func_2416A0
    ctx->pc = 0x24198Cu;
    SET_GPR_U32(ctx, 31, 0x241994u);
    ctx->pc = 0x241990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24198Cu;
    // 0x241990: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2416A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416A0u, 0x24198Cu, 0x241994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x241994u;
label_241994:
    // 0x241994: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x241994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x241998: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x241998u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x24199c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24199cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2419a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2419a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2419a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2419a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2419a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2419A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2419ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419A8u;
        // 0x2419ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2419A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2419B0u;
    // 0x2419b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2419b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2419b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2419b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2419b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2419b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2419bc: 0xc0905ae  jal         func_2416B8
    ctx->pc = 0x2419BCu;
    SET_GPR_U32(ctx, 31, 0x2419C4u);
    ctx->pc = 0x2419C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2419BCu;
    // 0x2419c0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2416B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2416B8u, 0x2419BCu, 0x2419C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2419C4u;
label_2419c4:
    // 0x2419c4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2419c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2419c8: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x2419c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2419cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2419ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2419d0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2419d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2419d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2419d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2419d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2419D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2419DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2419D8u;
        // 0x2419dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2419D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2419E0u;
}
