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

// Function: sub_003285C8
// Address: 0x3285c8 - 0x328688
void sub_003285C8_0x3285c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003285C8_0x3285c8");
#endif

    switch (ctx->pc) {
        case 0x328600u: goto label_328600;
        case 0x328618u: goto label_328618;
        case 0x32862cu: goto label_32862c;
        case 0x32863cu: goto label_32863c;
        case 0x328654u: goto label_328654;
        default: break;
    }

    ctx->pc = 0x3285c8u;

    // 0x3285c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3285c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3285cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3285ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3285d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3285d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3285d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3285d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3285d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3285d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3285dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3285dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3285e0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3285e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3285e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3285e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3285e8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3285e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3285ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3285ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3285f0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3285f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3285f4: 0xae53002c  sw          $s3, 0x2C($s2)
    ctx->pc = 0x3285f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 19));
    // 0x3285f8: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x3285F8u;
    {
        const bool branch_taken_0x3285f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3285FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3285F8u;
        // 0x3285fc: 0x8e510030  lw          $s1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3285f8) {
            ctx->pc = 0x328660u;
            goto label_328660;
        }
    }
    ctx->pc = 0x328600u;
label_328600:
    // 0x328600: 0xce0000a0  pref        0x00, 0xA0($s0)
    ctx->pc = 0x328600u;
    // PREF instruction (ignored)
    // 0x328604: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x328604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328608: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x328608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32860c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32860cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328610: 0xc0ca1a2  jal         func_328688
    ctx->pc = 0x328610u;
    SET_GPR_U32(ctx, 31, 0x328618u);
    ctx->pc = 0x328614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328610u;
    // 0x328614: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328688u, 0x328610u, 0x328618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328618u;
label_328618:
    // 0x328618: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x328618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32861c: 0x26070030  addiu       $a3, $s0, 0x30
    ctx->pc = 0x32861cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x328620: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x328620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328624: 0xc0ca1a8  jal         func_3286A0
    ctx->pc = 0x328624u;
    SET_GPR_U32(ctx, 31, 0x32862Cu);
    ctx->pc = 0x328628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328624u;
    // 0x328628: 0x26060020  addiu       $a2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3286A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3286A0u, 0x328624u, 0x32862Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32862Cu;
label_32862c:
    // 0x32862c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32862cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328630: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x328630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328634: 0xc0ca2ac  jal         func_328AB0
    ctx->pc = 0x328634u;
    SET_GPR_U32(ctx, 31, 0x32863Cu);
    ctx->pc = 0x328638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328634u;
    // 0x328638: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328AB0u, 0x328634u, 0x32863Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32863Cu;
label_32863c:
    // 0x32863c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32863cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328640: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x328640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328644: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x328644u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x328648: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x328648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x32864c: 0xc0ca1ae  jal         func_3286B8
    ctx->pc = 0x32864Cu;
    SET_GPR_U32(ctx, 31, 0x328654u);
    ctx->pc = 0x328650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32864Cu;
    // 0x328650: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3286B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3286B8u, 0x32864Cu, 0x328654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x328654u;
label_328654:
    // 0x328654: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x328654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x328658: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x328658u;
    {
        const bool branch_taken_0x328658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x328658) {
            ctx->pc = 0x328600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_328600;
        }
    }
    ctx->pc = 0x328660u;
label_328660:
    // 0x328660: 0xae510030  sw          $s1, 0x30($s2)
    ctx->pc = 0x328660u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 17));
    // 0x328664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x328664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328668: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x328668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32866c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32866cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328670: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x328670u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x328674: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x328674u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x328678: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x328678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32867c: 0x3e00008  jr          $ra
    ctx->pc = 0x32867Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32867Cu;
        // 0x328680: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32867Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x328684u;
    // 0x328684: 0x0  nop
    ctx->pc = 0x328684u;
    // NOP
    ctx->pc = 0x328688u;
}
