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

// Function: sub_00249130
// Address: 0x249130 - 0x249180
void sub_00249130_0x249130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249130_0x249130");
#endif

    switch (ctx->pc) {
        case 0x249140u: goto label_249140;
        case 0x249164u: goto label_249164;
        default: break;
    }

    ctx->pc = 0x249130u;

    // 0x249130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x249134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x249138: 0xc092442  jal         func_249108
    ctx->pc = 0x249138u;
    SET_GPR_U32(ctx, 31, 0x249140u);
    ctx->pc = 0x249108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249108u, 0x249138u, 0x249140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249140u;
label_249140:
    // 0x249140: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x249140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x249144: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249148: 0x3e00008  jr          $ra
    ctx->pc = 0x249148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249148u;
        // 0x24914c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249150u;
    // 0x249150: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x249154: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x249154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x249158: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x249158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24915c: 0xc092442  jal         func_249108
    ctx->pc = 0x24915Cu;
    SET_GPR_U32(ctx, 31, 0x249164u);
    ctx->pc = 0x249160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24915Cu;
    // 0x249160: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249108u, 0x24915Cu, 0x249164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249164u;
label_249164:
    // 0x249164: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x249164u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x249168: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x249168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24916c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x24916cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x249170: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249174: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x249174u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x249178: 0x3e00008  jr          $ra
    ctx->pc = 0x249178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249178u;
        // 0x24917c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249180u;
}
