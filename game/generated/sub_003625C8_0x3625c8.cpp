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

// Function: sub_003625C8
// Address: 0x3625c8 - 0x362698
void sub_003625C8_0x3625c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003625C8_0x3625c8");
#endif

    switch (ctx->pc) {
        case 0x3625e0u: goto label_3625e0;
        case 0x3625f0u: goto label_3625f0;
        case 0x362608u: goto label_362608;
        case 0x36262cu: goto label_36262c;
        case 0x362650u: goto label_362650;
        case 0x362658u: goto label_362658;
        case 0x362670u: goto label_362670;
        default: break;
    }

    ctx->pc = 0x3625c8u;

    // 0x3625c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3625c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3625cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3625ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3625d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3625d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3625d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3625d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3625d8: 0xc0d6d30  jal         func_35B4C0
    ctx->pc = 0x3625D8u;
    SET_GPR_U32(ctx, 31, 0x3625E0u);
    ctx->pc = 0x3625DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3625D8u;
    // 0x3625dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B4C0u, 0x3625D8u, 0x3625E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3625E0u;
label_3625e0:
    // 0x3625e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3625e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3625e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3625e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3625e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3625E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3625ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3625E8u;
        // 0x3625ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3625E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3625F0u;
label_3625f0:
    // 0x3625f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3625f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3625f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3625f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3625f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3625f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3625fc: 0x80d6dbe  j           func_35B6F8
    ctx->pc = 0x3625FCu;
    ctx->pc = 0x362600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3625FCu;
    // 0x362600: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B6F8u, 0x3625FCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x362604u;
    // 0x362604: 0x0  nop
    ctx->pc = 0x362604u;
    // NOP
label_362608:
    // 0x362608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x362608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36260c: 0x2c820201  sltiu       $v0, $a0, 0x201
    ctx->pc = 0x36260cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)513) ? 1 : 0);
    // 0x362610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x362610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x362614: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x362614u;
    {
        const bool branch_taken_0x362614 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362614u;
        // 0x362618: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362614) {
            ctx->pc = 0x362638u;
            goto label_362638;
        }
    }
    ctx->pc = 0x36261Cu;
    // 0x36261c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x36261cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x362620: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x362620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x362624: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x362624u;
    SET_GPR_U32(ctx, 31, 0x36262Cu);
    ctx->pc = 0x362628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362624u;
    // 0x362628: 0x24847378  addiu       $a0, $a0, 0x7378 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x362624u, 0x36262Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36262Cu;
label_36262c:
    // 0x36262c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x36262cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x362630: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x362630u;
    {
        const bool branch_taken_0x362630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362630u;
        // 0x362634: 0x34420035  ori         $v0, $v0, 0x35 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53);
        ctx->in_delay_slot = false;
        if (branch_taken_0x362630) {
            ctx->pc = 0x362640u;
            goto label_362640;
        }
    }
    ctx->pc = 0x362638u;
label_362638:
    // 0x362638: 0xaf84c7f4  sw          $a0, -0x380C($gp)
    ctx->pc = 0x362638u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952948), GPR_U32(ctx, 4));
    // 0x36263c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36263cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_362640:
    // 0x362640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x362640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362644: 0x3e00008  jr          $ra
    ctx->pc = 0x362644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362644u;
        // 0x362648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36264Cu;
    // 0x36264c: 0x0  nop
    ctx->pc = 0x36264cu;
    // NOP
label_362650:
    // 0x362650: 0x3e00008  jr          $ra
    ctx->pc = 0x362650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362650u;
        // 0x362654: 0x8f82c7f4  lw          $v0, -0x380C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952948)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x362650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362658u;
label_362658:
    // 0x362658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x362658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36265c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36265Cu;
    {
        const bool branch_taken_0x36265c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x362660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36265Cu;
        // 0x362660: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36265c) {
            ctx->pc = 0x362680u;
            goto label_362680;
        }
    }
    ctx->pc = 0x362664u;
    // 0x362664: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x362664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x362668: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x362668u;
    SET_GPR_U32(ctx, 31, 0x362670u);
    ctx->pc = 0x36266Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x362668u;
    // 0x36266c: 0x248473c8  addiu       $a0, $a0, 0x73C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x362668u, 0x362670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x362670u;
label_362670:
    // 0x362670: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x362670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x362674: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x362674u;
    {
        const bool branch_taken_0x362674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x362674u;
        // 0x362678: 0x34420032  ori         $v0, $v0, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)50);
        ctx->in_delay_slot = false;
        if (branch_taken_0x362674) {
            ctx->pc = 0x362688u;
            goto label_362688;
        }
    }
    ctx->pc = 0x36267Cu;
    // 0x36267c: 0x0  nop
    ctx->pc = 0x36267cu;
    // NOP
label_362680:
    // 0x362680: 0xaf84c7f8  sw          $a0, -0x3808($gp)
    ctx->pc = 0x362680u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294952952), GPR_U32(ctx, 4));
    // 0x362684: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x362684u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_362688:
    // 0x362688: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x362688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36268c: 0x3e00008  jr          $ra
    ctx->pc = 0x36268Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36268Cu;
        // 0x362690: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36268Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x362694u;
    // 0x362694: 0x0  nop
    ctx->pc = 0x362694u;
    // NOP
    ctx->pc = 0x362698u;
}
