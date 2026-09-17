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

// Function: sub_0036B9E0
// Address: 0x36b9e0 - 0x36ba40
void sub_0036B9E0_0x36b9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B9E0_0x36b9e0");
#endif

    switch (ctx->pc) {
        case 0x36ba04u: goto label_36ba04;
        case 0x36ba1cu: goto label_36ba1c;
        default: break;
    }

    ctx->pc = 0x36b9e0u;

    // 0x36b9e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36b9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36b9e4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36b9e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36b9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36b9ec: 0x24506ec8  addiu       $s0, $v0, 0x6EC8
    ctx->pc = 0x36b9ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28360));
    // 0x36b9f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6EC8u));
    // 0x36b9f4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36B9F4u;
    {
        const bool branch_taken_0x36b9f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B9F4u;
        // 0x36b9f8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b9f4) {
            ctx->pc = 0x36BA1Cu;
            goto label_36ba1c;
        }
    }
    ctx->pc = 0x36B9FCu;
    // 0x36b9fc: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36B9FCu;
    SET_GPR_U32(ctx, 31, 0x36BA04u);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36B9FCu, 0x36BA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BA04u;
label_36ba04:
    // 0x36ba04: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36ba04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36ba08: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36ba08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36ba0c: 0x24a5bc60  addiu       $a1, $a1, -0x43A0
    ctx->pc = 0x36ba0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949984));
    // 0x36ba10: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36ba10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36ba14: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36BA14u;
    SET_GPR_U32(ctx, 31, 0x36BA1Cu);
    ctx->pc = 0x36BA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36BA14u;
    // 0x36ba18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36BA14u, 0x36BA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36BA1Cu;
label_36ba1c:
    // 0x36ba1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36ba1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ba20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36ba20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ba24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36ba24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36ba28: 0x3e00008  jr          $ra
    ctx->pc = 0x36BA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BA28u;
        // 0x36ba2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BA30u;
    // 0x36ba30: 0x3e00008  jr          $ra
    ctx->pc = 0x36BA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BA38u;
    // 0x36ba38: 0x3e00008  jr          $ra
    ctx->pc = 0x36BA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36BA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36BA38u;
        // 0x36ba3c: 0x8c82013c  lw          $v0, 0x13C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36BA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36BA40u;
}
