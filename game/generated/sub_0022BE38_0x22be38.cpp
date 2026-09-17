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

// Function: sub_0022BE38
// Address: 0x22be38 - 0x22be88
void sub_0022BE38_0x22be38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022BE38_0x22be38");
#endif

    switch (ctx->pc) {
        case 0x22be58u: goto label_22be58;
        default: break;
    }

    ctx->pc = 0x22be38u;

    // 0x22be38: 0x8c860058  lw          $a2, 0x58($a0)
    ctx->pc = 0x22be38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x22be3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x22be3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22be40: 0x10c2000f  beq         $a2, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22BE40u;
    {
        const bool branch_taken_0x22be40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x22be40) {
            ctx->pc = 0x22BE80u;
            goto label_22be80;
        }
    }
    ctx->pc = 0x22BE48u;
    // 0x22be48: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x22be48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x22be4c: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x22BE4Cu;
    {
        const bool branch_taken_0x22be4c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22BE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE4Cu;
        // 0x22be50: 0x8ca50054  lw          $a1, 0x54($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be4c) {
            ctx->pc = 0x22BE70u;
            goto label_22be70;
        }
    }
    ctx->pc = 0x22BE54u;
    // 0x22be54: 0x0  nop
    ctx->pc = 0x22be54u;
    // NOP
label_22be58:
    // 0x22be58: 0x8ca20060  lw          $v0, 0x60($a1)
    ctx->pc = 0x22be58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x22be5c: 0x10460005  beq         $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x22BE5Cu;
    {
        const bool branch_taken_0x22be5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x22be5c) {
            ctx->pc = 0x22BE74u;
            goto label_22be74;
        }
    }
    ctx->pc = 0x22BE64u;
    // 0x22be64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22be64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22be68: 0x1c60fffb  bgtz        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x22BE68u;
    {
        const bool branch_taken_0x22be68 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x22BE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE68u;
        // 0x22be6c: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22be68) {
            ctx->pc = 0x22BE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22be58;
        }
    }
    ctx->pc = 0x22BE70u;
label_22be70:
    // 0x22be70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22be70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22be74:
    // 0x22be74: 0x3e00008  jr          $ra
    ctx->pc = 0x22BE74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE74u;
        // 0x22be78: 0xac850058  sw          $a1, 0x58($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BE74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BE7Cu;
    // 0x22be7c: 0x0  nop
    ctx->pc = 0x22be7cu;
    // NOP
label_22be80:
    // 0x22be80: 0x3e00008  jr          $ra
    ctx->pc = 0x22BE80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22BE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22BE80u;
        // 0x22be84: 0xac800058  sw          $zero, 0x58($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22BE80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22BE88u;
}
