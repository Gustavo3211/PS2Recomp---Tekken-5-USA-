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

// Function: sub_00208630
// Address: 0x208630 - 0x208690
void sub_00208630_0x208630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208630_0x208630");
#endif

    switch (ctx->pc) {
        case 0x208640u: goto label_208640;
        default: break;
    }

    ctx->pc = 0x208630u;

    // 0x208630: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x208630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x208634: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x208634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208638: 0x8c4688d0  lw          $a2, -0x7730($v0)
    ctx->pc = 0x208638u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x20863c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x20863cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208640:
    // 0x208640: 0x8cc5069c  lw          $a1, 0x69C($a2)
    ctx->pc = 0x208640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1692)));
    // 0x208644: 0x8cc406a0  lw          $a0, 0x6A0($a2)
    ctx->pc = 0x208644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1696)));
    // 0x208648: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x208648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x20864c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x20864cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x208650: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x208650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x208654: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x208654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x208658: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x208658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20865c: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x20865cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x208660: 0x1012  mflo        $v0
    ctx->pc = 0x208660u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x208664: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x208664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x208668: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x208668u;
    {
        const bool branch_taken_0x208668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208668u;
        // 0x20866c: 0xa4c206a8  sh          $v0, 0x6A8($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 1704), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208668) {
            ctx->pc = 0x208678u;
            goto label_208678;
        }
    }
    ctx->pc = 0x208670u;
    // 0x208670: 0x5ca00001  bgtzl       $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x208670u;
    {
        const bool branch_taken_0x208670 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x208670) {
            ctx->pc = 0x208674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208670u;
            // 0x208674: 0xa4c806a8  sh          $t0, 0x6A8($a2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 6), 1704), (uint16_t)GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208678u;
            goto label_208678;
        }
    }
    ctx->pc = 0x208678u;
label_208678:
    // 0x208678: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x208678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x20867c: 0x28e20002  slti        $v0, $a3, 0x2
    ctx->pc = 0x20867cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x208680: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x208680u;
    {
        const bool branch_taken_0x208680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208680u;
        // 0x208684: 0x24c608d0  addiu       $a2, $a2, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208680) {
            ctx->pc = 0x208640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208640;
        }
    }
    ctx->pc = 0x208688u;
    // 0x208688: 0x3e00008  jr          $ra
    ctx->pc = 0x208688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208690u;
}
