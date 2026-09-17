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

// Function: sub_00104618
// Address: 0x104618 - 0x104690
void sub_00104618_0x104618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104618_0x104618");
#endif

    switch (ctx->pc) {
        case 0x104618u: goto label_104618;
        case 0x10461cu: goto label_10461c;
        case 0x104620u: goto label_104620;
        case 0x104624u: goto label_104624;
        case 0x104628u: goto label_104628;
        case 0x10462cu: goto label_10462c;
        case 0x104630u: goto label_104630;
        case 0x104634u: goto label_104634;
        case 0x104638u: goto label_104638;
        case 0x10463cu: goto label_10463c;
        case 0x104640u: goto label_104640;
        case 0x104644u: goto label_104644;
        case 0x104648u: goto label_104648;
        case 0x10464cu: goto label_10464c;
        case 0x104650u: goto label_104650;
        case 0x104654u: goto label_104654;
        case 0x104658u: goto label_104658;
        case 0x10465cu: goto label_10465c;
        case 0x104660u: goto label_104660;
        case 0x104664u: goto label_104664;
        case 0x104668u: goto label_104668;
        case 0x10466cu: goto label_10466c;
        case 0x104670u: goto label_104670;
        case 0x104674u: goto label_104674;
        case 0x104678u: goto label_104678;
        case 0x10467cu: goto label_10467c;
        case 0x104680u: goto label_104680;
        case 0x104684u: goto label_104684;
        case 0x104688u: goto label_104688;
        case 0x10468cu: goto label_10468c;
        default: break;
    }

    ctx->pc = 0x104618u;

label_104618:
    // 0x104618: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x104618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_10461c:
    // 0x10461c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10461cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_104620:
    // 0x104620: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x104620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_104624:
    // 0x104624: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_104628:
    if (ctx->pc == 0x104628u) {
        ctx->pc = 0x104628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104624u;
        // 0x104628: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10462Cu;
        goto label_10462c;
    }
    ctx->pc = 0x104624u;
    {
        const bool branch_taken_0x104624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x104628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104624u;
        // 0x104628: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104624) {
            ctx->pc = 0x10467Cu;
            goto label_10467c;
        }
    }
    ctx->pc = 0x10462Cu;
label_10462c:
    // 0x10462c: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x10462cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_104630:
    // 0x104630: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_104634:
    if (ctx->pc == 0x104634u) {
        ctx->pc = 0x104634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104630u;
        // 0x104634: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104638u;
        goto label_104638;
    }
    ctx->pc = 0x104630u;
    {
        const bool branch_taken_0x104630 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x104634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104630u;
        // 0x104634: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104630) {
            ctx->pc = 0x10467Cu;
            goto label_10467c;
        }
    }
    ctx->pc = 0x104638u;
label_104638:
    // 0x104638: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x104638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_10463c:
    // 0x10463c: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x10463cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_104640:
    // 0x104640: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x104640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_104644:
    // 0x104644: 0x8c47000c  lw          $a3, 0xC($v0)
    ctx->pc = 0x104644u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_104648:
    // 0x104648: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
label_10464c:
    if (ctx->pc == 0x10464Cu) {
        ctx->pc = 0x10464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104648u;
        // 0x10464c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104650u;
        goto label_104650;
    }
    ctx->pc = 0x104648u;
    {
        const bool branch_taken_0x104648 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x10464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104648u;
        // 0x10464c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104648) {
            ctx->pc = 0x104680u;
            goto label_104680;
        }
    }
    ctx->pc = 0x104650u;
label_104650:
    // 0x104650: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x104650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_104654:
    // 0x104654: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x104654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_104658:
    // 0x104658: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x104658u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10465c:
    // 0x10465c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10465cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_104660:
    // 0x104660: 0x481818  mult        $v1, $v0, $t0
    ctx->pc = 0x104660u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_104664:
    // 0x104664: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x104664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_104668:
    // 0x104668: 0xe0f809  jalr        $a3
label_10466c:
    if (ctx->pc == 0x10466Cu) {
        ctx->pc = 0x10466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104668u;
        // 0x10466c: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104670u;
        goto label_104670;
    }
    ctx->pc = 0x104668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x104670u);
        ctx->pc = 0x10466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104668u;
        // 0x10466c: 0x8c460010  lw          $a2, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104668u, 0x104670u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x104670u;
label_104670:
    // 0x104670: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x104670u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_104674:
    // 0x104674: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x104674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_104678:
    // 0x104678: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x104678u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10467c:
    // 0x10467c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10467cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_104680:
    // 0x104680: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x104680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_104684:
    // 0x104684: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_104688:
    // 0x104688: 0x3e00008  jr          $ra
label_10468c:
    if (ctx->pc == 0x10468Cu) {
        ctx->pc = 0x10468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104688u;
        // 0x10468c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x104690u;
        goto label_fallthrough_0x104688;
    }
    ctx->pc = 0x104688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104688u;
        // 0x10468c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x104688:
    ctx->pc = 0x104690u;
}
