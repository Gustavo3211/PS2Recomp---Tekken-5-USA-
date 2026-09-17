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

// Function: sub_0036E208
// Address: 0x36e208 - 0x36e268
void sub_0036E208_0x36e208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E208_0x36e208");
#endif

    switch (ctx->pc) {
        case 0x36e22cu: goto label_36e22c;
        case 0x36e244u: goto label_36e244;
        default: break;
    }

    ctx->pc = 0x36e208u;

    // 0x36e208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36e208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36e20c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36e20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36e210: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36e210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36e214: 0x24507190  addiu       $s0, $v0, 0x7190
    ctx->pc = 0x36e214u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29072));
    // 0x36e218: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36e218u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D7190u));
    // 0x36e21c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36E21Cu;
    {
        const bool branch_taken_0x36e21c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E21Cu;
        // 0x36e220: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e21c) {
            ctx->pc = 0x36E244u;
            goto label_36e244;
        }
    }
    ctx->pc = 0x36E224u;
    // 0x36e224: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36E224u;
    SET_GPR_U32(ctx, 31, 0x36E22Cu);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36E224u, 0x36E22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E22Cu;
label_36e22c:
    // 0x36e22c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36e22cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36e230: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36e230u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36e234: 0x24a5fa48  addiu       $a1, $a1, -0x5B8
    ctx->pc = 0x36e234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965832));
    // 0x36e238: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36e238u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36e23c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36E23Cu;
    SET_GPR_U32(ctx, 31, 0x36E244u);
    ctx->pc = 0x36E240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E23Cu;
    // 0x36e240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36E23Cu, 0x36E244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E244u;
label_36e244:
    // 0x36e244: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36e244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36e248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e24c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36e24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36e250: 0x3e00008  jr          $ra
    ctx->pc = 0x36E250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E250u;
        // 0x36e254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E258u;
    // 0x36e258: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x36e258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x36e25c: 0x2463eaa8  addiu       $v1, $v1, -0x1558
    ctx->pc = 0x36e25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961832));
    // 0x36e260: 0x3e00008  jr          $ra
    ctx->pc = 0x36E260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E260u;
        // 0x36e264: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E268u;
}
