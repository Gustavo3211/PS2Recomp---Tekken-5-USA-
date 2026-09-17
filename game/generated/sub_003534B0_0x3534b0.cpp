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

// Function: sub_003534B0
// Address: 0x3534b0 - 0x35352c
void sub_003534B0_0x3534b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003534B0_0x3534b0");
#endif

    switch (ctx->pc) {
        case 0x3534c8u: goto label_3534c8;
        case 0x353500u: goto label_353500;
        default: break;
    }

    ctx->pc = 0x3534b0u;

    // 0x3534b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3534b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3534b4: 0xffbe0010  sd          $fp, 0x10($sp)
    ctx->pc = 0x3534b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
    // 0x3534b8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3534b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3534bc: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3534bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3534c0: 0x0  nop
    ctx->pc = 0x3534c0u;
    // NOP
    // 0x3534c4: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x3534c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_3534c8:
    // 0x3534c8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3534c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3534cc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3534ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3534d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3534D0u;
    {
        const bool branch_taken_0x3534d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3534d0) {
            ctx->pc = 0x3534E0u;
            goto label_3534e0;
        }
    }
    ctx->pc = 0x3534D8u;
    // 0x3534d8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3534D8u;
    {
        const bool branch_taken_0x3534d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3534d8) {
            ctx->pc = 0x353514u;
            goto label_353514;
        }
    }
    ctx->pc = 0x3534E0u;
label_3534e0:
    // 0x3534e0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3534e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3534e4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x3534e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x3534e8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3534e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3534ec: 0x2442bb48  addiu       $v0, $v0, -0x44B8
    ctx->pc = 0x3534ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949704));
    // 0x3534f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3534f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3534f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3534f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3534f8: 0xc0d403a  jal         func_3500E8
    ctx->pc = 0x3534F8u;
    SET_GPR_U32(ctx, 31, 0x353500u);
    ctx->pc = 0x3500E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3500E8u, 0x3534F8u, 0x353500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x353500u;
label_353500:
    // 0x353500: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x353500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x353504: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x353504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x353508: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x353508u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x35350c: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x35350Cu;
    {
        const bool branch_taken_0x35350c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35350c) {
            ctx->pc = 0x3534C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3534c8;
        }
    }
    ctx->pc = 0x353514u;
label_353514:
    // 0x353514: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x353514u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353518: 0xdfbe0010  ld          $fp, 0x10($sp)
    ctx->pc = 0x353518u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35351c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35351cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x353520: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x353520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x353524: 0x3e00008  jr          $ra
    ctx->pc = 0x353524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x353524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35352Cu;
}
