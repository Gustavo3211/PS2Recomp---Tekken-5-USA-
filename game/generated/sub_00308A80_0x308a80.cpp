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

// Function: sub_00308A80
// Address: 0x308a80 - 0x308ad0
void sub_00308A80_0x308a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308A80_0x308a80");
#endif

    switch (ctx->pc) {
        case 0x308ab0u: goto label_308ab0;
        default: break;
    }

    ctx->pc = 0x308a80u;

    // 0x308a80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x308a84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x308a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x308a88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x308a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308a8c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x308a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x308a90: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x308a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x308a94: 0x442000a  bltzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x308A94u;
    {
        const bool branch_taken_0x308a94 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x308a94) {
            ctx->pc = 0x308A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308A94u;
            // 0x308a98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308AC0u;
            goto label_308ac0;
        }
    }
    ctx->pc = 0x308A9Cu;
    // 0x308a9c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x308a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x308aa0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x308AA0u;
    {
        const bool branch_taken_0x308aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308aa0) {
            ctx->pc = 0x308AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308AA0u;
            // 0x308aa4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308AC0u;
            goto label_308ac0;
        }
    }
    ctx->pc = 0x308AA8u;
    // 0x308aa8: 0xc092940  jal         func_24A500
    ctx->pc = 0x308AA8u;
    SET_GPR_U32(ctx, 31, 0x308AB0u);
    ctx->pc = 0x308AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308AA8u;
    // 0x308aac: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x308AA8u, 0x308AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308AB0u;
label_308ab0:
    // 0x308ab0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x308ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x308ab4: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x308ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x308ab8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x308ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x308abc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x308abcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_308ac0:
    // 0x308ac0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x308ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x308ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x308AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308AC4u;
        // 0x308ac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308ACCu;
    // 0x308acc: 0x0  nop
    ctx->pc = 0x308accu;
    // NOP
    ctx->pc = 0x308ad0u;
}
