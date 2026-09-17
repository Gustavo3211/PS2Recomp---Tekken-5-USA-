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

// Function: sub_0010FF50
// Address: 0x10ff50 - 0x10ffb8
void sub_0010FF50_0x10ff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FF50_0x10ff50");
#endif

    switch (ctx->pc) {
        case 0x10ff80u: goto label_10ff80;
        case 0x10ff88u: goto label_10ff88;
        case 0x10ffa0u: goto label_10ffa0;
        default: break;
    }

    ctx->pc = 0x10ff50u;

    // 0x10ff50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10ff50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10ff54: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10ff54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10ff58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10ff58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10ff5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10ff5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ff60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ff64: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x10ff64u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x10ff68: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10ff6c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10ff6cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10ff70: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FF70u;
    {
        const bool branch_taken_0x10ff70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ff70) {
            ctx->pc = 0x10FF80u;
            goto label_10ff80;
        }
    }
    ctx->pc = 0x10FF78u;
    // 0x10ff78: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x10FF78u;
    SET_GPR_U32(ctx, 31, 0x10FF80u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x10FF78u, 0x10FF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF80u;
label_10ff80:
    // 0x10ff80: 0xc043c44  jal         func_10F110
    ctx->pc = 0x10FF80u;
    SET_GPR_U32(ctx, 31, 0x10FF88u);
    ctx->pc = 0x10FF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FF80u;
    // 0x10ff84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F110u, 0x10FF80u, 0x10FF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FF88u;
label_10ff88:
    // 0x10ff88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10ff88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ff8c: 0xf  sync
    ctx->pc = 0x10ff8cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10ff90: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FF90u;
    {
        const bool branch_taken_0x10ff90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FF90u;
        // 0x10ff94: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ff90) {
            ctx->pc = 0x10FFA4u;
            goto label_10ffa4;
        }
    }
    ctx->pc = 0x10FF98u;
    // 0x10ff98: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x10FF98u;
    SET_GPR_U32(ctx, 31, 0x10FFA0u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x10FF98u, 0x10FFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10FFA0u;
label_10ffa0:
    // 0x10ffa0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10ffa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10ffa4:
    // 0x10ffa4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10ffa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ffa8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10ffa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ffac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ffacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ffb0: 0x3e00008  jr          $ra
    ctx->pc = 0x10FFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FFB0u;
        // 0x10ffb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FFB8u;
}
