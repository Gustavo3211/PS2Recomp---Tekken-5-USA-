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

// Function: sub_00369D78
// Address: 0x369d78 - 0x369dc8
void sub_00369D78_0x369d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00369D78_0x369d78");
#endif

    switch (ctx->pc) {
        case 0x369d9cu: goto label_369d9c;
        case 0x369db4u: goto label_369db4;
        default: break;
    }

    ctx->pc = 0x369d78u;

    // 0x369d78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x369d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x369d7c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x369d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x369d80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x369d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x369d84: 0x24506c58  addiu       $s0, $v0, 0x6C58
    ctx->pc = 0x369d84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27736));
    // 0x369d88: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x369d88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6C58u));
    // 0x369d8c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x369D8Cu;
    {
        const bool branch_taken_0x369d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x369D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369D8Cu;
        // 0x369d90: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x369d8c) {
            ctx->pc = 0x369DB4u;
            goto label_369db4;
        }
    }
    ctx->pc = 0x369D94u;
    // 0x369d94: 0xc0db7d6  jal         func_36DF58
    ctx->pc = 0x369D94u;
    SET_GPR_U32(ctx, 31, 0x369D9Cu);
    ctx->pc = 0x36DF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DF58u, 0x369D94u, 0x369D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369D9Cu;
label_369d9c:
    // 0x369d9c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x369d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x369da0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x369da0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x369da4: 0x24a55b50  addiu       $a1, $a1, 0x5B50
    ctx->pc = 0x369da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23376));
    // 0x369da8: 0x24c67180  addiu       $a2, $a2, 0x7180
    ctx->pc = 0x369da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29056));
    // 0x369dac: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x369DACu;
    SET_GPR_U32(ctx, 31, 0x369DB4u);
    ctx->pc = 0x369DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x369DACu;
    // 0x369db0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x369DACu, 0x369DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x369DB4u;
label_369db4:
    // 0x369db4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x369db4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x369db8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x369db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x369dbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x369dbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x369dc0: 0x3e00008  jr          $ra
    ctx->pc = 0x369DC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x369DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x369DC0u;
        // 0x369dc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x369DC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x369DC8u;
}
