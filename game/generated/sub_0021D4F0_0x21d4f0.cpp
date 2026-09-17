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

// Function: sub_0021D4F0
// Address: 0x21d4f0 - 0x21d560
void sub_0021D4F0_0x21d4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D4F0_0x21d4f0");
#endif

    ctx->pc = 0x21d4f0u;

    // 0x21d4f0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x21d4f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4f4: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x21d4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x21d4f8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x21d4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x21d4fc: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x21d4fcu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21d500: 0x1812  mflo        $v1
    ctx->pc = 0x21d500u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x21d504: 0x2010  mfhi        $a0
    ctx->pc = 0x21d504u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x21d508: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x21d508u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21d50c: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x21d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x21d510: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21d510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21d514: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x21d514u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x21d518: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x21d518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21d51c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21d520: 0x1812  mflo        $v1
    ctx->pc = 0x21d520u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x21d524: 0x3010  mfhi        $a2
    ctx->pc = 0x21d524u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x21d528: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x21d528u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21d52c: 0x28640064  slti        $a0, $v1, 0x64
    ctx->pc = 0x21d52cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x21d530: 0xace60008  sw          $a2, 0x8($a3)
    ctx->pc = 0x21d530u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 6));
    // 0x21d534: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x21d534u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x21d538: 0x1012  mflo        $v0
    ctx->pc = 0x21d538u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x21d53c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21D53Cu;
    {
        const bool branch_taken_0x21d53c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D53Cu;
        // 0x21d540: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d53c) {
            ctx->pc = 0x21D558u;
            goto label_21d558;
        }
    }
    ctx->pc = 0x21D544u;
    // 0x21d544: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x21d544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x21d548: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x21d548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x21d54c: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x21d54cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x21d550: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x21d550u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x21d554: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x21d554u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
label_21d558:
    // 0x21d558: 0x3e00008  jr          $ra
    ctx->pc = 0x21D558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D560u;
}
