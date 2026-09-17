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

// Function: sub_002EB940
// Address: 0x2eb940 - 0x2eb988
void sub_002EB940_0x2eb940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EB940_0x2eb940");
#endif

    switch (ctx->pc) {
        case 0x2eb954u: goto label_2eb954;
        default: break;
    }

    ctx->pc = 0x2eb940u;

    // 0x2eb940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2eb940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2eb944: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2eb944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2eb948: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2eb948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2eb94c: 0xc08e6b8  jal         func_239AE0
    ctx->pc = 0x2EB94Cu;
    SET_GPR_U32(ctx, 31, 0x2EB954u);
    ctx->pc = 0x2EB950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EB94Cu;
    // 0x2eb950: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x239AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239AE0u, 0x2EB94Cu, 0x2EB954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EB954u;
label_2eb954:
    // 0x2eb954: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2eb954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2eb958: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EB958u;
    {
        const bool branch_taken_0x2eb958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eb958) {
            ctx->pc = 0x2EB95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EB958u;
            // 0x2eb95c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EB964u;
            goto label_2eb964;
        }
    }
    ctx->pc = 0x2EB960u;
    // 0x2eb960: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eb960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eb964:
    // 0x2eb964: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x2eb964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
    // 0x2eb968: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x2eb968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x2eb96c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2eb96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2eb970: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x2eb970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x2eb974: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2eb974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eb978: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2eb978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2eb97c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EB97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EB980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EB97Cu;
        // 0x2eb980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EB97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EB984u;
    // 0x2eb984: 0x0  nop
    ctx->pc = 0x2eb984u;
    // NOP
    ctx->pc = 0x2eb988u;
}
