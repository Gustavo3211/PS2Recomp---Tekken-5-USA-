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

// Function: sub_00240B20
// Address: 0x240b20 - 0x240b48
void sub_00240B20_0x240b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240B20_0x240b20");
#endif

    ctx->pc = 0x240b20u;

    // 0x240b20: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x240b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x240b24: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x240b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x240b28: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x240b28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x240b2c: 0xac86009c  sw          $a2, 0x9C($a0)
    ctx->pc = 0x240b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 6));
    // 0x240b30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x240b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x240b34: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x240b34u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x240b38: 0x1012  mflo        $v0
    ctx->pc = 0x240b38u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x240b3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x240b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x240b40: 0x3e00008  jr          $ra
    ctx->pc = 0x240B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240B40u;
        // 0x240b44: 0xac820098  sw          $v0, 0x98($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240B48u;
}
