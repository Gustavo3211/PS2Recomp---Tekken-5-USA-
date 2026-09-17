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

// Function: sub_0025FF70
// Address: 0x25ff70 - 0x25ffb8
void sub_0025FF70_0x25ff70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FF70_0x25ff70");
#endif

    ctx->pc = 0x25ff70u;

    // 0x25ff70: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x25ff70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x25ff74: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x25ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25ff78: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x25ff78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25ff7c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x25ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x25ff80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25ff80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25ff84: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x25ff84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x25ff88: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x25ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25ff8c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x25ff8cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x25ff90: 0x2810  mfhi        $a1
    ctx->pc = 0x25ff90u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x25ff94: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x25ff94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x25ff98: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x25ff98u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x25ff9c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x25ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25ffa0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25ffa4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x25ffa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x25ffa8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x25ffa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x25ffac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25ffb0: 0x3e00008  jr          $ra
    ctx->pc = 0x25FFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFB0u;
        // 0x25ffb4: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FFB8u;
}
