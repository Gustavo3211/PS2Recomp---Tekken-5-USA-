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

// Function: sub_002EAB18
// Address: 0x2eab18 - 0x2eab58
void sub_002EAB18_0x2eab18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EAB18_0x2eab18");
#endif

    switch (ctx->pc) {
        case 0x2eab2cu: goto label_2eab2c;
        default: break;
    }

    ctx->pc = 0x2eab18u;

    // 0x2eab18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eab18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eab1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eab1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eab20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2eab20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2eab24: 0xc0bb93e  jal         func_2EE4F8
    ctx->pc = 0x2EAB24u;
    SET_GPR_U32(ctx, 31, 0x2EAB2Cu);
    ctx->pc = 0x2EAB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB24u;
    // 0x2eab28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE4F8u, 0x2EAB24u, 0x2EAB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB2Cu;
label_2eab2c:
    // 0x2eab2c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2eab2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2eab30: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2eab30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2eab34: 0x244206d8  addiu       $v0, $v0, 0x6D8
    ctx->pc = 0x2eab34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1752));
    // 0x2eab38: 0x2463f988  addiu       $v1, $v1, -0x678
    ctx->pc = 0x2eab38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965640));
    // 0x2eab3c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2eab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2eab40: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2eab40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2eab44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eab44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eab48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2eab48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eab4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EAB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EAB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB4Cu;
        // 0x2eab50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EAB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EAB54u;
    // 0x2eab54: 0x0  nop
    ctx->pc = 0x2eab54u;
    // NOP
    ctx->pc = 0x2eab58u;
}
