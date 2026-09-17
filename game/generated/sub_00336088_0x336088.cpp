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

// Function: sub_00336088
// Address: 0x336088 - 0x3360c0
void sub_00336088_0x336088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336088_0x336088");
#endif

    switch (ctx->pc) {
        case 0x336098u: goto label_336098;
        default: break;
    }

    ctx->pc = 0x336088u;

    // 0x336088: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x336088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x33608c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x33608cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x336090: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x336090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x336094: 0x700024a9  por         $a0, $zero, $zero
    ctx->pc = 0x336094u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_336098:
    // 0x336098: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x336098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33609c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x33609cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x3360a0: 0x0  nop
    ctx->pc = 0x3360a0u;
    // NOP
    // 0x3360a4: 0x0  nop
    ctx->pc = 0x3360a4u;
    // NOP
    // 0x3360a8: 0x0  nop
    ctx->pc = 0x3360a8u;
    // NOP
    // 0x3360ac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3360ACu;
    {
        const bool branch_taken_0x3360ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3360B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3360ACu;
        // 0x3360b0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3360ac) {
            ctx->pc = 0x336098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336098;
        }
    }
    ctx->pc = 0x3360B4u;
    // 0x3360b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3360B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3360B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3360BCu;
    // 0x3360bc: 0x0  nop
    ctx->pc = 0x3360bcu;
    // NOP
    ctx->pc = 0x3360c0u;
}
