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

// Function: sub_00505C28
// Address: 0x505c28 - 0x505ca0
void sub_00505C28_0x505c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00505C28_0x505c28");
#endif

    ctx->pc = 0x505c28u;

    // 0x505c28: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x505c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x505c2c: 0x2442f080  addiu       $v0, $v0, -0xF80
    ctx->pc = 0x505c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x505c30: 0x24470024  addiu       $a3, $v0, 0x24
    ctx->pc = 0x505c30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x505c34: 0x8446002a  lh          $a2, 0x2A($v0)
    ctx->pc = 0x505c34u;
    SET_GPR_S32(ctx, 6, (int16_t)FAST_READ16(0x8FF0AAu));
    // 0x505c38: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x505c38u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x8FF0A4u));
    // 0x505c3c: 0x24480026  addiu       $t0, $v0, 0x26
    ctx->pc = 0x505c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 38));
    // 0x505c40: 0x66001a  div         $zero, $v1, $a2
    ctx->pc = 0x505c40u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x505c44: 0x1812  mflo        $v1
    ctx->pc = 0x505c44u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x505c48: 0x2010  mfhi        $a0
    ctx->pc = 0x505c48u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x505c4c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x505c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x505c50: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x505c50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x505c54: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x505C54u;
    {
        const bool branch_taken_0x505c54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x505C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505C54u;
        // 0x505c58: 0x32c03  sra         $a1, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505c54) {
            ctx->pc = 0x505C68u;
            goto label_505c68;
        }
    }
    ctx->pc = 0x505C5Cu;
    // 0x505c5c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x505c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x505c60: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x505c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x505c64: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x505c64u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_505c68:
    // 0x505c68: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x505c68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x505c6c: 0xa4e50000  sh          $a1, 0x0($a3)
    ctx->pc = 0x505c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x505c70: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x505c70u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x505c74: 0x1012  mflo        $v0
    ctx->pc = 0x505c74u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x505c78: 0x1810  mfhi        $v1
    ctx->pc = 0x505c78u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x505c7c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x505c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x505c80: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x505c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x505c84: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x505C84u;
    {
        const bool branch_taken_0x505c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x505C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505C84u;
        // 0x505c88: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x505c84) {
            ctx->pc = 0x505C98u;
            goto label_505c98;
        }
    }
    ctx->pc = 0x505C8Cu;
    // 0x505c8c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x505c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x505c90: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x505c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x505c94: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x505c94u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_505c98:
    // 0x505c98: 0x3e00008  jr          $ra
    ctx->pc = 0x505C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x505C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x505C98u;
        // 0x505c9c: 0xa5050000  sh          $a1, 0x0($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x505C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x505CA0u;
}
