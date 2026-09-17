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

// Function: sub_0029FF70
// Address: 0x29ff70 - 0x29ffc0
void sub_0029FF70_0x29ff70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029FF70_0x29ff70");
#endif

    switch (ctx->pc) {
        case 0x29ff9cu: goto label_29ff9c;
        case 0x29ffacu: goto label_29ffac;
        default: break;
    }

    ctx->pc = 0x29ff70u;

    // 0x29ff70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29ff70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29ff74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29ff74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29ff78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29ff7c: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x29ff7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x29ff80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29ff80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29ff84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29ff84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff88: 0x26107720  addiu       $s0, $s0, 0x7720
    ctx->pc = 0x29ff88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30496));
    // 0x29ff8c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29ff8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29ff90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29ff94: 0xc0a7eb6  jal         func_29FAD8
    ctx->pc = 0x29FF94u;
    SET_GPR_U32(ctx, 31, 0x29FF9Cu);
    ctx->pc = 0x29FF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FF94u;
    // 0x29ff98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAD8u, 0x29FF94u, 0x29FF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FF9Cu;
label_29ff9c:
    // 0x29ff9c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x29ff9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x29ffa0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29ffa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ffa4: 0xc0a7eb6  jal         func_29FAD8
    ctx->pc = 0x29FFA4u;
    SET_GPR_U32(ctx, 31, 0x29FFACu);
    ctx->pc = 0x29FFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FFA4u;
    // 0x29ffa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAD8u, 0x29FFA4u, 0x29FFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FFACu;
label_29ffac:
    // 0x29ffac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29ffacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ffb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29ffb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29ffb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29ffb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ffb8: 0x3e00008  jr          $ra
    ctx->pc = 0x29FFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FFB8u;
        // 0x29ffbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29FFC0u;
}
