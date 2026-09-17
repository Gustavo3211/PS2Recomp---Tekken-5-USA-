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

// Function: sub_0025FFB8
// Address: 0x25ffb8 - 0x260000
void sub_0025FFB8_0x25ffb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FFB8_0x25ffb8");
#endif

    ctx->pc = 0x25ffb8u;

    // 0x25ffb8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x25ffb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25ffbc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25ffbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25ffc0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x25ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x25ffc4: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x25ffc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x25ffc8: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x25ffc8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x25ffcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x25ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25ffd0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x25ffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x25ffd4: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x25ffd4u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x25ffd8: 0x1810  mfhi        $v1
    ctx->pc = 0x25ffd8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x25ffdc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x25ffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25ffe0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25ffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25ffe4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25ffe8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x25ffe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x25ffec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25ffecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25fff0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x25fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x25fff4: 0x3e00008  jr          $ra
    ctx->pc = 0x25FFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FFF4u;
        // 0x25fff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FFFCu;
    // 0x25fffc: 0x0  nop
    ctx->pc = 0x25fffcu;
    // NOP
    ctx->pc = 0x260000u;
}
