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

// Function: sub_0036FD20
// Address: 0x36fd20 - 0x36fd70
void sub_0036FD20_0x36fd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036FD20_0x36fd20");
#endif

    switch (ctx->pc) {
        case 0x36fd44u: goto label_36fd44;
        case 0x36fd5cu: goto label_36fd5c;
        default: break;
    }

    ctx->pc = 0x36fd20u;

    // 0x36fd20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36fd20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36fd24: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36fd28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36fd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36fd2c: 0x245074e0  addiu       $s0, $v0, 0x74E0
    ctx->pc = 0x36fd2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29920));
    // 0x36fd30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36fd30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D74E0u));
    // 0x36fd34: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36FD34u;
    {
        const bool branch_taken_0x36fd34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FD34u;
        // 0x36fd38: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36fd34) {
            ctx->pc = 0x36FD5Cu;
            goto label_36fd5c;
        }
    }
    ctx->pc = 0x36FD3Cu;
    // 0x36fd3c: 0xc0dc5de  jal         func_371778
    ctx->pc = 0x36FD3Cu;
    SET_GPR_U32(ctx, 31, 0x36FD44u);
    ctx->pc = 0x371778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371778u, 0x36FD3Cu, 0x36FD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FD44u;
label_36fd44:
    // 0x36fd44: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36fd44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36fd48: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36fd48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36fd4c: 0x24a50948  addiu       $a1, $a1, 0x948
    ctx->pc = 0x36fd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2376));
    // 0x36fd50: 0x24c67500  addiu       $a2, $a2, 0x7500
    ctx->pc = 0x36fd50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29952));
    // 0x36fd54: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36FD54u;
    SET_GPR_U32(ctx, 31, 0x36FD5Cu);
    ctx->pc = 0x36FD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36FD54u;
    // 0x36fd58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36FD54u, 0x36FD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36FD5Cu;
label_36fd5c:
    // 0x36fd5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36fd5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36fd60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36fd60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36fd64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36fd64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36fd68: 0x3e00008  jr          $ra
    ctx->pc = 0x36FD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36FD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36FD68u;
        // 0x36fd6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36FD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36FD70u;
}
