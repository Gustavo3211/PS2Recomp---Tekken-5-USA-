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

// Function: sub_0036A360
// Address: 0x36a360 - 0x36a3b0
void sub_0036A360_0x36a360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A360_0x36a360");
#endif

    switch (ctx->pc) {
        case 0x36a384u: goto label_36a384;
        case 0x36a39cu: goto label_36a39c;
        default: break;
    }

    ctx->pc = 0x36a360u;

    // 0x36a360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36a360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36a364: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36a364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36a368: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36a368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36a36c: 0x24506cb8  addiu       $s0, $v0, 0x6CB8
    ctx->pc = 0x36a36cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27832));
    // 0x36a370: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36a370u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6CB8u));
    // 0x36a374: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36A374u;
    {
        const bool branch_taken_0x36a374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A374u;
        // 0x36a378: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a374) {
            ctx->pc = 0x36A39Cu;
            goto label_36a39c;
        }
    }
    ctx->pc = 0x36A37Cu;
    // 0x36a37c: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36A37Cu;
    SET_GPR_U32(ctx, 31, 0x36A384u);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36A37Cu, 0x36A384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A384u;
label_36a384:
    // 0x36a384: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x36a384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x36a388: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36a388u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36a38c: 0x24a512c8  addiu       $a1, $a1, 0x12C8
    ctx->pc = 0x36a38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4808));
    // 0x36a390: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36a390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36a394: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36A394u;
    SET_GPR_U32(ctx, 31, 0x36A39Cu);
    ctx->pc = 0x36A398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A394u;
    // 0x36a398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36A394u, 0x36A39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A39Cu;
label_36a39c:
    // 0x36a39c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36a39cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a3a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36a3a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a3a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36a3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36a3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x36A3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A3A8u;
        // 0x36a3ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A3B0u;
}
