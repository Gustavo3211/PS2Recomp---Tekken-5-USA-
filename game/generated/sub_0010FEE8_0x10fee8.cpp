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

// Function: sub_0010FEE8
// Address: 0x10fee8 - 0x10ff50
void sub_0010FEE8_0x10fee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FEE8_0x10fee8");
#endif

    switch (ctx->pc) {
        case 0x10ff18u: goto label_10ff18;
        case 0x10ff20u: goto label_10ff20;
        case 0x10ff38u: goto label_10ff38;
        default: break;
    }

    ctx->pc = 0x10fee8u;

    // 0x10fee8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10fee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10feec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10feecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10fef0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10fef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10fef4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10fef4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10fef8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10fef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10fefc: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x10fefcu;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x10ff00: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10ff04: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10ff04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10ff08: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FF08u;
    {
        const bool branch_taken_0x10ff08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ff08) {
            ctx->pc = 0x10FF18u;
            goto label_10ff18;
        }
    }
    ctx->pc = 0x10FF10u;
    // 0x10ff10: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x10FF10u;
    SET_GPR_U32(ctx, 31, 0x10FF18u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x10FF10u, 0x10FF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF18u;
label_10ff18:
    // 0x10ff18: 0xc043c38  jal         func_10F0E0
    ctx->pc = 0x10FF18u;
    SET_GPR_U32(ctx, 31, 0x10FF20u);
    ctx->pc = 0x10FF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF18u;
    // 0x10ff1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F0E0u, 0x10FF18u, 0x10FF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF20u;
label_10ff20:
    // 0x10ff20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10ff20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff24: 0xf  sync
    ctx->pc = 0x10ff24u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10ff28: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FF28u;
    {
        const bool branch_taken_0x10ff28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF28u;
        // 0x10ff2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff28) {
            ctx->pc = 0x10FF3Cu;
            goto label_10ff3c;
        }
    }
    ctx->pc = 0x10FF30u;
    // 0x10ff30: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x10FF30u;
    SET_GPR_U32(ctx, 31, 0x10FF38u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x10FF30u, 0x10FF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF38u;
label_10ff38:
    // 0x10ff38: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10ff38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10ff3c:
    // 0x10ff3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10ff3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ff40: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10ff40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ff44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ff44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ff48: 0x3e00008  jr          $ra
    ctx->pc = 0x10FF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF48u;
        // 0x10ff4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FF50u;
}
