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

// Function: sub_00276E48
// Address: 0x276e48 - 0x276e80
void sub_00276E48_0x276e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276E48_0x276e48");
#endif

    ctx->pc = 0x276e48u;

    // 0x276e48: 0x8f82ca60  lw          $v0, -0x35A0($gp)
    ctx->pc = 0x276e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953568)));
    // 0x276e4c: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x276e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x276e50: 0x3c070017  lui         $a3, 0x17
    ctx->pc = 0x276e50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)23 << 16));
    // 0x276e54: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x276e54u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x276e58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x276e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x276e5c: 0x24e701c0  addiu       $a3, $a3, 0x1C0
    ctx->pc = 0x276e5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 448));
    // 0x276e60: 0xaf82ca60  sw          $v0, -0x35A0($gp)
    ctx->pc = 0x276e60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953568), GPR_U32(ctx, 2));
    // 0x276e64: 0x1810  mfhi        $v1
    ctx->pc = 0x276e64u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x276e68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x276e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x276e6c: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x276e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x276e70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x276e70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276e74: 0xac6405bc  sw          $a0, 0x5BC($v1)
    ctx->pc = 0x276e74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1468), GPR_U32(ctx, 4));
    // 0x276e78: 0x3e00008  jr          $ra
    ctx->pc = 0x276E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276E78u;
        // 0x276e7c: 0xac450638  sw          $a1, 0x638($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1592), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276E80u;
}
