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

// Function: sub_0022E0B0
// Address: 0x22e0b0 - 0x22e130
void sub_0022E0B0_0x22e0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E0B0_0x22e0b0");
#endif

    switch (ctx->pc) {
        case 0x22e0f0u: goto label_22e0f0;
        default: break;
    }

    ctx->pc = 0x22e0b0u;

    // 0x22e0b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22e0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22e0b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x22e0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e0b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22e0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22e0bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e0c0: 0x808b7b8  j           func_22DEE0
    ctx->pc = 0x22E0C0u;
    ctx->pc = 0x22E0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22E0C0u;
    // 0x22e0c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DEE0u, 0x22E0C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x22E0C8u;
    // 0x22e0c8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x22e0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22e0cc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x22e0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x22e0d0: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x22e0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x22e0d4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x22e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22e0d8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x22e0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x22e0dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22e0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22e0e0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x22e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x22e0e4: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x22e0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22e0e8: 0x10a4000e  beq         $a1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x22E0E8u;
    {
        const bool branch_taken_0x22e0e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x22e0e8) {
            ctx->pc = 0x22E124u;
            goto label_22e124;
        }
    }
    ctx->pc = 0x22E0F0u;
label_22e0f0:
    // 0x22e0f0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x22e0f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22e0f4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x22e0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x22e0f8: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x22e0f8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x22e0fc: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x22e0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x22e100: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x22e100u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x22e104: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x22e104u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x22e108: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x22e108u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x22e10c: 0x7cc30030  sq          $v1, 0x30($a2)
    ctx->pc = 0x22e10cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 3));
    // 0x22e110: 0x78a20040  lq          $v0, 0x40($a1)
    ctx->pc = 0x22e110u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x22e114: 0x24a50050  addiu       $a1, $a1, 0x50
    ctx->pc = 0x22e114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 80));
    // 0x22e118: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x22e118u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x22e11c: 0x14a4fff4  bne         $a1, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x22E11Cu;
    {
        const bool branch_taken_0x22e11c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x22E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22E11Cu;
        // 0x22e120: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e11c) {
            ctx->pc = 0x22E0F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22e0f0;
        }
    }
    ctx->pc = 0x22E124u;
label_22e124:
    // 0x22e124: 0x3e00008  jr          $ra
    ctx->pc = 0x22E124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22E124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22E12Cu;
    // 0x22e12c: 0x0  nop
    ctx->pc = 0x22e12cu;
    // NOP
    ctx->pc = 0x22e130u;
}
