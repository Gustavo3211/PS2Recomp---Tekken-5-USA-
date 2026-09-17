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

// Function: sub_0024AE00
// Address: 0x24ae00 - 0x24ae40
void sub_0024AE00_0x24ae00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024AE00_0x24ae00");
#endif

    switch (ctx->pc) {
        case 0x24ae14u: goto label_24ae14;
        case 0x24ae2cu: goto label_24ae2c;
        default: break;
    }

    ctx->pc = 0x24ae00u;

    // 0x24ae00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24ae00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24ae04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24ae04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24ae08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24ae08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24ae0c: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x24AE0Cu;
    SET_GPR_U32(ctx, 31, 0x24AE14u);
    ctx->pc = 0x24AE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24AE0Cu;
    // 0x24ae10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x24AE0Cu, 0x24AE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AE14u;
label_24ae14:
    // 0x24ae14: 0x8f83a9c8  lw          $v1, -0x5638($gp)
    ctx->pc = 0x24ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945224)));
    // 0x24ae18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24ae18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ae1c: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24AE1Cu;
    {
        const bool branch_taken_0x24ae1c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x24AE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE1Cu;
        // 0x24ae20: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ae1c) {
            ctx->pc = 0x24AE2Cu;
            goto label_24ae2c;
        }
    }
    ctx->pc = 0x24AE24u;
    // 0x24ae24: 0xc092a16  jal         func_24A858
    ctx->pc = 0x24AE24u;
    SET_GPR_U32(ctx, 31, 0x24AE2Cu);
    ctx->pc = 0x24A858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A858u, 0x24AE24u, 0x24AE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AE2Cu;
label_24ae2c:
    // 0x24ae2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24ae2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ae30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24ae30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24ae34: 0x3e00008  jr          $ra
    ctx->pc = 0x24AE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24AE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24AE34u;
        // 0x24ae38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24AE34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24AE3Cu;
    // 0x24ae3c: 0x0  nop
    ctx->pc = 0x24ae3cu;
    // NOP
    ctx->pc = 0x24ae40u;
}
