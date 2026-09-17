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

// Function: sub_0036E328
// Address: 0x36e328 - 0x36e378
void sub_0036E328_0x36e328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036E328_0x36e328");
#endif

    switch (ctx->pc) {
        case 0x36e34cu: goto label_36e34c;
        case 0x36e364u: goto label_36e364;
        default: break;
    }

    ctx->pc = 0x36e328u;

    // 0x36e328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36e328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36e32c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36e330: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36e330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36e334: 0x245071b0  addiu       $s0, $v0, 0x71B0
    ctx->pc = 0x36e334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29104));
    // 0x36e338: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36e338u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D71B0u));
    // 0x36e33c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36E33Cu;
    {
        const bool branch_taken_0x36e33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E33Cu;
        // 0x36e340: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e33c) {
            ctx->pc = 0x36E364u;
            goto label_36e364;
        }
    }
    ctx->pc = 0x36E344u;
    // 0x36e344: 0xc0db8a8  jal         func_36E2A0
    ctx->pc = 0x36E344u;
    SET_GPR_U32(ctx, 31, 0x36E34Cu);
    ctx->pc = 0x36E2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36E2A0u, 0x36E344u, 0x36E34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E34Cu;
label_36e34c:
    // 0x36e34c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36e34cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36e350: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36e350u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36e354: 0x24a5fb20  addiu       $a1, $a1, -0x4E0
    ctx->pc = 0x36e354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966048));
    // 0x36e358: 0x24c671f0  addiu       $a2, $a2, 0x71F0
    ctx->pc = 0x36e358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29168));
    // 0x36e35c: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36E35Cu;
    SET_GPR_U32(ctx, 31, 0x36E364u);
    ctx->pc = 0x36E360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36E35Cu;
    // 0x36e360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36E35Cu, 0x36E364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36E364u;
label_36e364:
    // 0x36e364: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36e364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36e368: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36e368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36e36c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36e36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36e370: 0x3e00008  jr          $ra
    ctx->pc = 0x36E370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36E370u;
        // 0x36e374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36E370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36E378u;
}
