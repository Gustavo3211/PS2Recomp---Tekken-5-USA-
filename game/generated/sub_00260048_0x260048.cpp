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

// Function: sub_00260048
// Address: 0x260048 - 0x260098
void sub_00260048_0x260048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260048_0x260048");
#endif

    ctx->pc = 0x260048u;

    // 0x260048: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x260048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26004c: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x26004cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x260050: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x260050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x260054: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x260054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x260058: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x260058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x26005c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x26005cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x260060: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x260060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x260064: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x260064u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x260068: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x260068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26006c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x26006cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x260070: 0x2810  mfhi        $a1
    ctx->pc = 0x260070u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x260074: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x260074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x260078: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x260078u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x26007c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x26007cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x260080: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x260080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x260084: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x260084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x260088: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x260088u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x26008c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26008cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x260090: 0x3e00008  jr          $ra
    ctx->pc = 0x260090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260090u;
        // 0x260094: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260098u;
}
