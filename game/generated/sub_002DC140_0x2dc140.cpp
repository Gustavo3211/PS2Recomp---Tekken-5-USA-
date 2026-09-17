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

// Function: sub_002DC140
// Address: 0x2dc140 - 0x2dc170
void sub_002DC140_0x2dc140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC140_0x2dc140");
#endif

    switch (ctx->pc) {
        case 0x2dc164u: goto label_2dc164;
        default: break;
    }

    ctx->pc = 0x2dc140u;

    // 0x2dc140: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2dc140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2dc144: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2dc144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc148: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x2dc148u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x2dc14c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2dc14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2dc150: 0x8cc688d0  lw          $a2, -0x7730($a2)
    ctx->pc = 0x2dc150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294936784)));
    // 0x2dc154: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dc154u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dc158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc15c: 0xc0b705c  jal         func_2DC170
    ctx->pc = 0x2DC15Cu;
    SET_GPR_U32(ctx, 31, 0x2DC164u);
    ctx->pc = 0x2DC160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC15Cu;
    // 0x2dc160: 0x24c608a8  addiu       $a2, $a2, 0x8A8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC170u, 0x2DC15Cu, 0x2DC164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC164u;
label_2dc164:
    // 0x2dc164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc168: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC168u;
        // 0x2dc16c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC170u;
}
