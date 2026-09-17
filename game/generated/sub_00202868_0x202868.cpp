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

// Function: sub_00202868
// Address: 0x202868 - 0x2028a8
void sub_00202868_0x202868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202868_0x202868");
#endif

    switch (ctx->pc) {
        case 0x20289cu: goto label_20289c;
        default: break;
    }

    ctx->pc = 0x202868u;

    // 0x202868: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x202868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20286c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x20286cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x202870: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x202870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x202874: 0x24423cf0  addiu       $v0, $v0, 0x3CF0
    ctx->pc = 0x202874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15600));
    // 0x202878: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x202878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20287c: 0x8ca70894  lw          $a3, 0x894($a1)
    ctx->pc = 0x20287cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2196)));
    // 0x202880: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x202880u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x463CF8u));
    // 0x202884: 0x8ce5001c  lw          $a1, 0x1C($a3)
    ctx->pc = 0x202884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x202888: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x202888u;
    SET_GPR_U64(ctx, 7, FAST_READ64(0x463CF0u));
    // 0x20288c: 0x24a50280  addiu       $a1, $a1, 0x280
    ctx->pc = 0x20288cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 640));
    // 0x202890: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x202890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x202894: 0xc08491e  jal         func_212478
    ctx->pc = 0x202894u;
    SET_GPR_U32(ctx, 31, 0x20289Cu);
    ctx->pc = 0x202898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202894u;
    // 0x202898: 0xffa70000  sd          $a3, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x202894u, 0x20289Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20289Cu;
label_20289c:
    // 0x20289c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20289cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2028a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2028A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2028A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2028A0u;
        // 0x2028a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2028A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2028A8u;
}
