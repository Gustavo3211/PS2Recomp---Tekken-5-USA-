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

// Function: sub_00372348
// Address: 0x372348 - 0x372398
void sub_00372348_0x372348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00372348_0x372348");
#endif

    switch (ctx->pc) {
        case 0x37236cu: goto label_37236c;
        case 0x372384u: goto label_372384;
        default: break;
    }

    ctx->pc = 0x372348u;

    // 0x372348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x372348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37234c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x37234cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x372350: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x372350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x372354: 0x24507630  addiu       $s0, $v0, 0x7630
    ctx->pc = 0x372354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30256));
    // 0x372358: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x372358u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7630u));
    // 0x37235c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x37235Cu;
    {
        const bool branch_taken_0x37235c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x372360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37235Cu;
        // 0x372360: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37235c) {
            ctx->pc = 0x372384u;
            goto label_372384;
        }
    }
    ctx->pc = 0x372364u;
    // 0x372364: 0xc0dc420  jal         func_371080
    ctx->pc = 0x372364u;
    SET_GPR_U32(ctx, 31, 0x37236Cu);
    ctx->pc = 0x371080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371080u, 0x372364u, 0x37236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37236Cu;
label_37236c:
    // 0x37236c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x37236cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x372370: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x372370u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x372374: 0x24a512f0  addiu       $a1, $a1, 0x12F0
    ctx->pc = 0x372374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4848));
    // 0x372378: 0x24c67550  addiu       $a2, $a2, 0x7550
    ctx->pc = 0x372378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30032));
    // 0x37237c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x37237Cu;
    SET_GPR_U32(ctx, 31, 0x372384u);
    ctx->pc = 0x372380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37237Cu;
    // 0x372380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x37237Cu, 0x372384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372384u;
label_372384:
    // 0x372384: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x372384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x372388: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x372388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37238c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x37238cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x372390: 0x3e00008  jr          $ra
    ctx->pc = 0x372390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372390u;
        // 0x372394: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x372398u;
}
