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

// Function: sub_0023F260
// Address: 0x23f260 - 0x23f2a8
void sub_0023F260_0x23f260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F260_0x23f260");
#endif

    switch (ctx->pc) {
        case 0x23f278u: goto label_23f278;
        default: break;
    }

    ctx->pc = 0x23f260u;

    // 0x23f260: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23f260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f264: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x23f264u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f268: 0x24a80003  addiu       $t0, $a1, 0x3
    ctx->pc = 0x23f268u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x23f26c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23F26Cu;
    {
        const bool branch_taken_0x23f26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F26Cu;
        // 0x23f270: 0x28a70000  slti        $a3, $a1, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f26c) {
            ctx->pc = 0x23F284u;
            goto label_23f284;
        }
    }
    ctx->pc = 0x23F274u;
    // 0x23f274: 0x0  nop
    ctx->pc = 0x23f274u;
    // NOP
label_23f278:
    // 0x23f278: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23f278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23f27c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x23f27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x23f280: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x23f280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_23f284:
    // 0x23f284: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x23f284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f288: 0x107100b  movn        $v0, $t0, $a3
    ctx->pc = 0x23f288u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 8));
    // 0x23f28c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x23f28cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x23f290: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x23f290u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x23f294: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23F294u;
    {
        const bool branch_taken_0x23f294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F294u;
        // 0x23f298: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f294) {
            ctx->pc = 0x23F278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f278;
        }
    }
    ctx->pc = 0x23F29Cu;
    // 0x23f29c: 0x3e00008  jr          $ra
    ctx->pc = 0x23F29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F29Cu;
        // 0x23f2a0: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F2A4u;
    // 0x23f2a4: 0x0  nop
    ctx->pc = 0x23f2a4u;
    // NOP
    ctx->pc = 0x23f2a8u;
}
