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

// Function: sub_00238118
// Address: 0x238118 - 0x238178
void sub_00238118_0x238118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238118_0x238118");
#endif

    ctx->pc = 0x238118u;

    // 0x238118: 0x84a20092  lh          $v0, 0x92($a1)
    ctx->pc = 0x238118u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 146)));
    // 0x23811c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23811cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238120: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x238120u;
    {
        const bool branch_taken_0x238120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x238124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238120u;
        // 0x238124: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238120) {
            ctx->pc = 0x238138u;
            goto label_238138;
        }
    }
    ctx->pc = 0x238128u;
    // 0x238128: 0x84a2000e  lh          $v0, 0xE($a1)
    ctx->pc = 0x238128u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x23812c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x23812cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x238130: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x238130u;
    {
        const bool branch_taken_0x238130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238130u;
        // 0x238134: 0x90a401bf  lbu         $a0, 0x1BF($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 447)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238130) {
            ctx->pc = 0x238150u;
            goto label_238150;
        }
    }
    ctx->pc = 0x238138u;
label_238138:
    // 0x238138: 0x84c20092  lh          $v0, 0x92($a2)
    ctx->pc = 0x238138u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 146)));
    // 0x23813c: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23813Cu;
    {
        const bool branch_taken_0x23813c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23813c) {
            ctx->pc = 0x238140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23813Cu;
            // 0x238140: 0x24082400  addiu       $t0, $zero, 0x2400 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9216));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23815Cu;
            goto label_23815c;
        }
    }
    ctx->pc = 0x238144u;
    // 0x238144: 0x84c2000e  lh          $v0, 0xE($a2)
    ctx->pc = 0x238144u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 14)));
    // 0x238148: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x238148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x23814c: 0x90c401bf  lbu         $a0, 0x1BF($a2)
    ctx->pc = 0x23814cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 447)));
label_238150:
    // 0x238150: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x238150u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x238154: 0x3068fffe  andi        $t0, $v1, 0xFFFE
    ctx->pc = 0x238154u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x238158: 0x1044025  or          $t0, $t0, $a0
    ctx->pc = 0x238158u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 4));
label_23815c:
    // 0x23815c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x23815cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x238160: 0xe2001a  div         $zero, $a3, $v0
    ctx->pc = 0x238160u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x238164: 0x1810  mfhi        $v1
    ctx->pc = 0x238164u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x238168: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x238168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x23816c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x23816cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x238170: 0x3e00008  jr          $ra
    ctx->pc = 0x238170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238170u;
        // 0x238174: 0xac680044  sw          $t0, 0x44($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238178u;
}
