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

// Function: sub_00119D28
// Address: 0x119d28 - 0x119d78
void sub_00119D28_0x119d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119D28_0x119d28");
#endif

    switch (ctx->pc) {
        case 0x119d40u: goto label_119d40;
        case 0x119d4cu: goto label_119d4c;
        case 0x119d5cu: goto label_119d5c;
        default: break;
    }

    ctx->pc = 0x119d28u;

    // 0x119d28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x119d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x119d2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119d30: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x119d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119d34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x119d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x119d38: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x119D38u;
    SET_GPR_U32(ctx, 31, 0x119D40u);
    ctx->pc = 0x119D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119D38u;
    // 0x119d3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x119D38u, 0x119D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119D40u;
label_119d40:
    // 0x119d40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d44: 0xc046722  jal         func_119C88
    ctx->pc = 0x119D44u;
    SET_GPR_U32(ctx, 31, 0x119D4Cu);
    ctx->pc = 0x119D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119D44u;
    // 0x119d48: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119C88u, 0x119D44u, 0x119D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119D4Cu;
label_119d4c:
    // 0x119d4c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x119D4Cu;
    {
        const bool branch_taken_0x119d4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x119D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D4Cu;
        // 0x119d50: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119d4c) {
            ctx->pc = 0x119D5Cu;
            goto label_119d5c;
        }
    }
    ctx->pc = 0x119D54u;
    // 0x119d54: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x119D54u;
    SET_GPR_U32(ctx, 31, 0x119D5Cu);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x119D54u, 0x119D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119D5Cu;
label_119d5c:
    // 0x119d5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x119d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119d60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x119d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119d64: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119d64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119d68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119d68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119d6c: 0x3e00008  jr          $ra
    ctx->pc = 0x119D6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119D6Cu;
        // 0x119d70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119D6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119D74u;
    // 0x119d74: 0x0  nop
    ctx->pc = 0x119d74u;
    // NOP
    ctx->pc = 0x119d78u;
}
