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

// Function: sub_002F6770
// Address: 0x2f6770 - 0x2f67a8
void sub_002F6770_0x2f6770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6770_0x2f6770");
#endif

    switch (ctx->pc) {
        case 0x2f6784u: goto label_2f6784;
        default: break;
    }

    ctx->pc = 0x2f6770u;

    // 0x2f6770: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2f6770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2f6774: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f6774u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f6778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f6778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f677c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2F677Cu;
    SET_GPR_U32(ctx, 31, 0x2F6784u);
    ctx->pc = 0x2F6780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F677Cu;
    // 0x2f6780: 0x24a51840  addiu       $a1, $a1, 0x1840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2F677Cu, 0x2F6784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6784u;
label_2f6784:
    // 0x2f6784: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f6784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6788: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6788u;
    {
        const bool branch_taken_0x2f6788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6788u;
        // 0x2f678c: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6788) {
            ctx->pc = 0x2F679Cu;
            goto label_2f679c;
        }
    }
    ctx->pc = 0x2F6790u;
    // 0x2f6790: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2f6790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2f6794: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f6794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f6798: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x2f6798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_2f679c:
    // 0x2f679c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f679cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f67a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F67A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F67A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F67A0u;
        // 0x2f67a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F67A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F67A8u;
}
