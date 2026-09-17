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

// Function: sub_00337DC8
// Address: 0x337dc8 - 0x337e10
void sub_00337DC8_0x337dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337DC8_0x337dc8");
#endif

    switch (ctx->pc) {
        case 0x337de0u: goto label_337de0;
        case 0x337decu: goto label_337dec;
        default: break;
    }

    ctx->pc = 0x337dc8u;

    // 0x337dc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337dcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x337dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x337dd0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x337dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x337dd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x337dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x337dd8: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x337DD8u;
    SET_GPR_U32(ctx, 31, 0x337DE0u);
    ctx->pc = 0x337DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337DD8u;
    // 0x337ddc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x337DD8u, 0x337DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337DE0u;
label_337de0:
    // 0x337de0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x337de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337de4: 0xc0cdf44  jal         func_337D10
    ctx->pc = 0x337DE4u;
    SET_GPR_U32(ctx, 31, 0x337DECu);
    ctx->pc = 0x337DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337DE4u;
    // 0x337de8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337D10u, 0x337DE4u, 0x337DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337DECu;
label_337dec:
    // 0x337dec: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x337DECu;
    {
        const bool branch_taken_0x337dec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x337DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337DECu;
        // 0x337df0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337dec) {
            ctx->pc = 0x337E00u;
            goto label_337e00;
        }
    }
    ctx->pc = 0x337DF4u;
    // 0x337df4: 0xf  sync
    ctx->pc = 0x337df4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x337df8: 0x42000038  ei
    ctx->pc = 0x337df8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x337dfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x337dfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_337e00:
    // 0x337e00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x337e00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x337e04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x337e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337e08: 0x3e00008  jr          $ra
    ctx->pc = 0x337E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E08u;
        // 0x337e0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337E10u;
}
