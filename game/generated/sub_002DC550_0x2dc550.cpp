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

// Function: sub_002DC550
// Address: 0x2dc550 - 0x2dc668
void sub_002DC550_0x2dc550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC550_0x2dc550");
#endif

    switch (ctx->pc) {
        case 0x2dc57cu: goto label_2dc57c;
        case 0x2dc588u: goto label_2dc588;
        case 0x2dc5b8u: goto label_2dc5b8;
        case 0x2dc600u: goto label_2dc600;
        default: break;
    }

    ctx->pc = 0x2dc550u;

    // 0x2dc550: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dc550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dc554: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dc554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dc558: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2dc558u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc55c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc560: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2dc560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2dc564: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2dc564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2dc568: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2dc568u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc56c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2dc56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2dc570: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dc570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dc574: 0xc0863b2  jal         func_218EC8
    ctx->pc = 0x2DC574u;
    SET_GPR_U32(ctx, 31, 0x2DC57Cu);
    ctx->pc = 0x2DC578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC574u;
    // 0x2dc578: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218EC8u, 0x2DC574u, 0x2DC57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC57Cu;
label_2dc57c:
    // 0x2dc57c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2dc57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc580: 0xc0863a4  jal         func_218E90
    ctx->pc = 0x2DC580u;
    SET_GPR_U32(ctx, 31, 0x2DC588u);
    ctx->pc = 0x2DC584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC580u;
    // 0x2dc584: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218E90u, 0x2DC580u, 0x2DC588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC588u;
label_2dc588:
    // 0x2dc588: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2dc588u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc58c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2dc58cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2dc590: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2DC590u;
    {
        const bool branch_taken_0x2dc590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC590u;
        // 0x2dc594: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc590) {
            ctx->pc = 0x2DC650u;
            goto label_2dc650;
        }
    }
    ctx->pc = 0x2DC598u;
    // 0x2dc598: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2dc598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2dc59c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dc59cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc5a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2dc5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2dc5a4: 0x262a0008  addiu       $t2, $s1, 0x8
    ctx->pc = 0x2dc5a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2dc5a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2dc5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2dc5ac: 0x2424821  addu        $t1, $s2, $v0
    ctx->pc = 0x2dc5acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2dc5b0: 0x25280008  addiu       $t0, $t1, 0x8
    ctx->pc = 0x2dc5b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x2dc5b4: 0x0  nop
    ctx->pc = 0x2dc5b4u;
    // NOP
label_2dc5b8:
    // 0x2dc5b8: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x2dc5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x2dc5bc: 0x1473021  addu        $a2, $t2, $a3
    ctx->pc = 0x2dc5bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x2dc5c0: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x2dc5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2dc5c4: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x2dc5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x2dc5c8: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x2dc5c8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dc5cc: 0x1072821  addu        $a1, $t0, $a3
    ctx->pc = 0x2dc5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2dc5d0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2dc5d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2dc5d4: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x2dc5d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x2dc5d8: 0x28e30004  slti        $v1, $a3, 0x4
    ctx->pc = 0x2dc5d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2dc5dc: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2dc5dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2dc5e0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x2DC5E0u;
    {
        const bool branch_taken_0x2dc5e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC5E0u;
        // 0x2dc5e4: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc5e0) {
            ctx->pc = 0x2DC5B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc5b8;
        }
    }
    ctx->pc = 0x2DC5E8u;
    // 0x2dc5e8: 0x252c000f  addiu       $t4, $t1, 0xF
    ctx->pc = 0x2dc5e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
    // 0x2dc5ec: 0x252a000c  addiu       $t2, $t1, 0xC
    ctx->pc = 0x2dc5ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 12));
    // 0x2dc5f0: 0x262b000f  addiu       $t3, $s1, 0xF
    ctx->pc = 0x2dc5f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 15));
    // 0x2dc5f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2dc5f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc5f8: 0x2629000c  addiu       $t1, $s1, 0xC
    ctx->pc = 0x2dc5f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2dc5fc: 0x0  nop
    ctx->pc = 0x2dc5fcu;
    // NOP
label_2dc600:
    // 0x2dc600: 0x1281021  addu        $v0, $t1, $t0
    ctx->pc = 0x2dc600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x2dc604: 0x1482821  addu        $a1, $t2, $t0
    ctx->pc = 0x2dc604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x2dc608: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2dc608u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dc60c: 0x1683021  addu        $a2, $t3, $t0
    ctx->pc = 0x2dc60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x2dc610: 0x1883821  addu        $a3, $t4, $t0
    ctx->pc = 0x2dc610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
    // 0x2dc614: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2dc614u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2dc618: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x2dc618u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2dc61c: 0x29030003  slti        $v1, $t0, 0x3
    ctx->pc = 0x2dc61cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2dc620: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x2dc620u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2dc624: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2DC624u;
    {
        const bool branch_taken_0x2dc624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC624u;
        // 0x2dc628: 0xa0e20000  sb          $v0, 0x0($a3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc624) {
            ctx->pc = 0x2DC600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc600;
        }
    }
    ctx->pc = 0x2DC62Cu;
    // 0x2dc62c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2dc62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc630: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2dc630u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc634: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2dc634u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc638: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2dc638u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dc63c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dc63cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc640: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dc640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dc644: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dc644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc648: 0x80b70e4  j           func_2DC390
    ctx->pc = 0x2DC648u;
    ctx->pc = 0x2DC64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC648u;
    // 0x2dc64c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC390u;
    sub_002DC390_0x2dc390(rdram, ctx, runtime); return;
    ctx->pc = 0x2DC650u;
label_2dc650:
    // 0x2dc650: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dc650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dc654: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2dc654u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc658: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2dc658u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dc65c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dc65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc660: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC660u;
        // 0x2dc664: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC668u;
}
