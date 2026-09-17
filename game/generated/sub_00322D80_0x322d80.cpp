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

// Function: sub_00322D80
// Address: 0x322d80 - 0x322dc8
void sub_00322D80_0x322d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322D80_0x322d80");
#endif

    switch (ctx->pc) {
        case 0x322dacu: goto label_322dac;
        default: break;
    }

    ctx->pc = 0x322d80u;

    // 0x322d80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x322d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x322d84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x322d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x322d88: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x322d88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x322d8c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x322d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x322d90: 0x26310400  addiu       $s1, $s1, 0x400
    ctx->pc = 0x322d90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
    // 0x322d94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x322d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x322d98: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x322d98u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x400414u));
    // 0x322d9c: 0xac90001c  sw          $s0, 0x1C($a0)
    ctx->pc = 0x322d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 16));
    // 0x322da0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x322da0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322da4: 0xc0c8b72  jal         func_322DC8
    ctx->pc = 0x322DA4u;
    SET_GPR_U32(ctx, 31, 0x322DACu);
    ctx->pc = 0x322DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322DA4u;
    // 0x322da8: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322DC8u, 0x322DA4u, 0x322DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322DACu;
label_322dac:
    // 0x322dac: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x322dacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x322db0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x322db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322db4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x322db4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322db8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x322db8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x322dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x322DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DBCu;
        // 0x322dc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322DC4u;
    // 0x322dc4: 0x0  nop
    ctx->pc = 0x322dc4u;
    // NOP
    ctx->pc = 0x322dc8u;
}
