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

// Function: sub_00248DB8
// Address: 0x248db8 - 0x248e28
void sub_00248DB8_0x248db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248DB8_0x248db8");
#endif

    switch (ctx->pc) {
        case 0x248de0u: goto label_248de0;
        default: break;
    }

    ctx->pc = 0x248db8u;

    // 0x248db8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x248db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x248dbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x248dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x248dc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x248dc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248dc4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x248dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248dc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x248dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x248dcc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x248dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x248dd0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x248dd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248dd4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x248dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x248dd8: 0xc092240  jal         func_248900
    ctx->pc = 0x248DD8u;
    SET_GPR_U32(ctx, 31, 0x248DE0u);
    ctx->pc = 0x248DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248DD8u;
    // 0x248ddc: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248900u, 0x248DD8u, 0x248DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248DE0u;
label_248de0:
    // 0x248de0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x248de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248de4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x248de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248de8: 0x1a400007  blez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x248DE8u;
    {
        const bool branch_taken_0x248de8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x248DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248DE8u;
        // 0x248dec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248de8) {
            ctx->pc = 0x248E08u;
            goto label_248e08;
        }
    }
    ctx->pc = 0x248DF0u;
    // 0x248df0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248df0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248df4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x248df4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x248df8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x248df8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248dfc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x248dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x248e00: 0x80922de  j           func_248B78
    ctx->pc = 0x248E00u;
    ctx->pc = 0x248E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248E00u;
    // 0x248e04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248B78u, 0x248E00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x248E08u;
label_248e08:
    // 0x248e08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x248e08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x248e0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x248e0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x248e10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x248e10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x248e14: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x248e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x248e18: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x248e18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x248e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x248E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248E1Cu;
        // 0x248e20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248E24u;
    // 0x248e24: 0x0  nop
    ctx->pc = 0x248e24u;
    // NOP
    ctx->pc = 0x248e28u;
}
