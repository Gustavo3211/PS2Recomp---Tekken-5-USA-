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

// Function: sub_002B85B0
// Address: 0x2b85b0 - 0x2b86b0
void sub_002B85B0_0x2b85b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B85B0_0x2b85b0");
#endif

    switch (ctx->pc) {
        case 0x2b8628u: goto label_2b8628;
        case 0x2b8670u: goto label_2b8670;
        default: break;
    }

    ctx->pc = 0x2b85b0u;

    // 0x2b85b0: 0x8c870030  lw          $a3, 0x30($a0)
    ctx->pc = 0x2b85b0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2b85b4: 0x10e00019  beqz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x2B85B4u;
    {
        const bool branch_taken_0x2b85b4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B85B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B85B4u;
        // 0x2b85b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b85b4) {
            ctx->pc = 0x2B861Cu;
            goto label_2b861c;
        }
    }
    ctx->pc = 0x2B85BCu;
    // 0x2b85bc: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B85BCu;
    {
        const bool branch_taken_0x2b85bc = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2B85C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B85BCu;
        // 0x2b85c0: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b85bc) {
            ctx->pc = 0x2B85D0u;
            goto label_2b85d0;
        }
    }
    ctx->pc = 0x2B85C4u;
    // 0x2b85c4: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x2b85c4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b85c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B85C8u;
    {
        const bool branch_taken_0x2b85c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B85CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B85C8u;
        // 0x2b85cc: 0x2810  mfhi        $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ctx->hi);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b85c8) {
            ctx->pc = 0x2B85DCu;
            goto label_2b85dc;
        }
    }
    ctx->pc = 0x2B85D0u;
label_2b85d0:
    // 0x2b85d0: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x2b85d0u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b85d4: 0x1810  mfhi        $v1
    ctx->pc = 0x2b85d4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2b85d8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2b85d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b85dc:
    // 0x2b85dc: 0x4c00006  bltz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B85DCu;
    {
        const bool branch_taken_0x2b85dc = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2B85E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B85DCu;
        // 0x2b85e0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b85dc) {
            ctx->pc = 0x2B85F8u;
            goto label_2b85f8;
        }
    }
    ctx->pc = 0x2B85E4u;
    // 0x2b85e4: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x2b85e4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b85e8: 0x1010  mfhi        $v0
    ctx->pc = 0x2b85e8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2b85ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B85ECu;
    {
        const bool branch_taken_0x2b85ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B85F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B85ECu;
        // 0x2b85f0: 0xa32018  mult        $a0, $a1, $v1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b85ec) {
            ctx->pc = 0x2B8608u;
            goto label_2b8608;
        }
    }
    ctx->pc = 0x2B85F4u;
    // 0x2b85f4: 0x0  nop
    ctx->pc = 0x2b85f4u;
    // NOP
label_2b85f8:
    // 0x2b85f8: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x2b85f8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b85fc: 0x1010  mfhi        $v0
    ctx->pc = 0x2b85fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2b8600: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2b8600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b8604: 0xa32018  mult        $a0, $a1, $v1
    ctx->pc = 0x2b8604u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2b8608:
    // 0x2b8608: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2b8608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b860c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2b860cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b8610: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b8610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b8614: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b8614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b8618: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2b8618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_2b861c:
    // 0x2b861c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B861Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B861Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8624u;
    // 0x2b8624: 0x0  nop
    ctx->pc = 0x2b8624u;
    // NOP
label_2b8628:
    // 0x2b8628: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x2b8628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2b862c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B862Cu;
    {
        const bool branch_taken_0x2b862c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b862c) {
            ctx->pc = 0x2B863Cu;
            goto label_2b863c;
        }
    }
    ctx->pc = 0x2B8634u;
    // 0x2b8634: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B8634u;
    {
        const bool branch_taken_0x2b8634 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b8634) {
            ctx->pc = 0x2B8638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B8634u;
            // 0x2b8638: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8648u;
            goto label_2b8648;
        }
    }
    ctx->pc = 0x2B863Cu;
label_2b863c:
    // 0x2b863c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B863Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B863Cu;
        // 0x2b8640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B863Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8644u;
    // 0x2b8644: 0x0  nop
    ctx->pc = 0x2b8644u;
    // NOP
label_2b8648:
    // 0x2b8648: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2b8648u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b864c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2b864cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2b8650: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b8650u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8654: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x2b8654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2b8658: 0x18800012  blez        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B8658u;
    {
        const bool branch_taken_0x2b8658 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2B865Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8658u;
        // 0x2b865c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8658) {
            ctx->pc = 0x2B86A4u;
            goto label_2b86a4;
        }
    }
    ctx->pc = 0x2B8660u;
    // 0x2b8660: 0x18c00010  blez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B8660u;
    {
        const bool branch_taken_0x2b8660 = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x2b8660) {
            ctx->pc = 0x2B86A4u;
            goto label_2b86a4;
        }
    }
    ctx->pc = 0x2B8668u;
    // 0x2b8668: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x2b8668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2b866c: 0x0  nop
    ctx->pc = 0x2b866cu;
    // NOP
label_2b8670:
    // 0x2b8670: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b8670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b8674: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B8674u;
    {
        const bool branch_taken_0x2b8674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8674u;
        // 0x2b8678: 0x81080  sll         $v0, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8674) {
            ctx->pc = 0x2B8688u;
            goto label_2b8688;
        }
    }
    ctx->pc = 0x2B867Cu;
    // 0x2b867c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2b867cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2b8680: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2b8680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2b8684: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x2b8684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
label_2b8688:
    // 0x2b8688: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2b8688u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2b868c: 0x124102a  slt         $v0, $t1, $a0
    ctx->pc = 0x2b868cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2b8690: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B8690u;
    {
        const bool branch_taken_0x2b8690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8690u;
        // 0x2b8694: 0x24e70014  addiu       $a3, $a3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8690) {
            ctx->pc = 0x2B86A4u;
            goto label_2b86a4;
        }
    }
    ctx->pc = 0x2B8698u;
    // 0x2b8698: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x2b8698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2b869c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2B869Cu;
    {
        const bool branch_taken_0x2b869c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b869c) {
            ctx->pc = 0x2B86A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B869Cu;
            // 0x2b86a0: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B8670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b8670;
        }
    }
    ctx->pc = 0x2B86A4u;
label_2b86a4:
    // 0x2b86a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B86A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B86A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B86A4u;
        // 0x2b86a8: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B86A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B86ACu;
    // 0x2b86ac: 0x0  nop
    ctx->pc = 0x2b86acu;
    // NOP
    ctx->pc = 0x2b86b0u;
}
