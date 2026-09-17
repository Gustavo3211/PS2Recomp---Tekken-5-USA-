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

// Function: sub_00294D78
// Address: 0x294d78 - 0x294dc8
void sub_00294D78_0x294d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294D78_0x294d78");
#endif

    switch (ctx->pc) {
        case 0x294d98u: goto label_294d98;
        case 0x294da4u: goto label_294da4;
        default: break;
    }

    ctx->pc = 0x294d78u;

    // 0x294d78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x294d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x294d7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x294d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x294d80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x294d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294d84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x294d84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x294d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x294d8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x294d8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x294d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294d94: 0x0  nop
    ctx->pc = 0x294d94u;
    // NOP
label_294d98:
    // 0x294d98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x294d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x294d9c: 0xc0a5350  jal         func_294D40
    ctx->pc = 0x294D9Cu;
    SET_GPR_U32(ctx, 31, 0x294DA4u);
    ctx->pc = 0x294DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294D9Cu;
    // 0x294da0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D40u, 0x294D9Cu, 0x294DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294DA4u;
label_294da4:
    // 0x294da4: 0x2a020005  slti        $v0, $s0, 0x5
    ctx->pc = 0x294da4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x294da8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x294DA8u;
    {
        const bool branch_taken_0x294da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294DA8u;
        // 0x294dac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294da8) {
            ctx->pc = 0x294D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_294d98;
        }
    }
    ctx->pc = 0x294DB0u;
    // 0x294db0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294db0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294db4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x294db4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x294db8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x294db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x294dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x294DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x294DBCu;
        // 0x294dc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x294DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x294DC4u;
    // 0x294dc4: 0x0  nop
    ctx->pc = 0x294dc4u;
    // NOP
    ctx->pc = 0x294dc8u;
}
