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

// Function: sub_004F92B8
// Address: 0x4f92b8 - 0x4f9328
void sub_004F92B8_0x4f92b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F92B8_0x4f92b8");
#endif

    ctx->pc = 0x4f92b8u;

    // 0x4f92b8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4f92b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f92bc: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x4f92bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4f92c0: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4f92c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f92c4: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x4f92c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f92c8: 0xe3001a  div         $zero, $a3, $v1
    ctx->pc = 0x4f92c8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x4f92cc: 0x3012  mflo        $a2
    ctx->pc = 0x4f92ccu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x4f92d0: 0x4010  mfhi        $t0
    ctx->pc = 0x4f92d0u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x4f92d4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x4f92d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x4f92d8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4f92d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4f92dc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x4f92dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x4f92e0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x4f92e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x4f92e4: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x4f92e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4f92e8: 0x85202b  sltu        $a0, $a0, $a1
    ctx->pc = 0x4f92e8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x4f92ec: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x4F92ECu;
    {
        const bool branch_taken_0x4f92ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F92F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F92ECu;
        // 0x4f92f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f92ec) {
            ctx->pc = 0x4F9320u;
            goto label_4f9320;
        }
    }
    ctx->pc = 0x4F92F4u;
    // 0x4f92f4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4F92F4u;
    {
        const bool branch_taken_0x4f92f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F92F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F92F4u;
        // 0x4f92f8: 0x3c05ffff  lui         $a1, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f92f4) {
            ctx->pc = 0x4F9320u;
            goto label_4f9320;
        }
    }
    ctx->pc = 0x4F92FCu;
    // 0x4f92fc: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x4f92fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x4f9300: 0xe51824  and         $v1, $a3, $a1
    ctx->pc = 0x4f9300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x4f9304: 0x82400  sll         $a0, $t0, 16
    ctx->pc = 0x4f9304u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x4f9308: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4f9308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4f930c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f930cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f9310: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4f9310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4f9314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4f9314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f9318: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4f9318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4f931c: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4f931cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
label_4f9320:
    // 0x4f9320: 0x3e00008  jr          $ra
    ctx->pc = 0x4F9320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F9320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F9328u;
}
