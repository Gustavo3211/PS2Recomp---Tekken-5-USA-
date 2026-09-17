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

// Function: sub_00260000
// Address: 0x260000 - 0x260048
void sub_00260000_0x260000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260000_0x260000");
#endif

    ctx->pc = 0x260000u;

    // 0x260000: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x260000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x260004: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x260004u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x260008: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x260008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26000c: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x26000cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x260010: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x260010u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x260014: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x260014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x260018: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x260018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x26001c: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x26001cu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x260020: 0x1810  mfhi        $v1
    ctx->pc = 0x260020u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x260024: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x260024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x260028: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x260028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26002c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26002cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x260030: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x260030u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x260034: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x260034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x260038: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x260038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x26003c: 0x3e00008  jr          $ra
    ctx->pc = 0x26003Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26003Cu;
        // 0x260040: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26003Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260044u;
    // 0x260044: 0x0  nop
    ctx->pc = 0x260044u;
    // NOP
    ctx->pc = 0x260048u;
}
