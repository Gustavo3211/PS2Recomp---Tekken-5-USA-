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

// Function: sub_004DC5D0
// Address: 0x4dc5d0 - 0x4dc970
void sub_004DC5D0_0x4dc5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DC5D0_0x4dc5d0");
#endif

    switch (ctx->pc) {
        case 0x4dc5e0u: goto label_4dc5e0;
        case 0x4dc5e8u: goto label_4dc5e8;
        case 0x4dc600u: goto label_4dc600;
        case 0x4dc618u: goto label_4dc618;
        case 0x4dc8a0u: goto label_4dc8a0;
        case 0x4dc938u: goto label_4dc938;
        case 0x4dc94cu: goto label_4dc94c;
        case 0x4dc954u: goto label_4dc954;
        case 0x4dc95cu: goto label_4dc95c;
        default: break;
    }

    ctx->pc = 0x4dc5d0u;

    // 0x4dc5d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dc5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dc5d4: 0x81374d2  j           func_4DD348
    ctx->pc = 0x4DC5D4u;
    ctx->pc = 0x4DC5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC5D4u;
    // 0x4dc5d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DD348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DD348u, 0x4DC5D4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DC5DCu;
    // 0x4dc5dc: 0x0  nop
    ctx->pc = 0x4dc5dcu;
    // NOP
label_4dc5e0:
    // 0x4dc5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4DC5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DC5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC5E0u;
        // 0x4dc5e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC5E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DC5E8u;
label_4dc5e8:
    // 0x4dc5e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dc5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4dc5ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dc5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4dc5f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dc5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dc5f4: 0x8137180  j           func_4DC600
    ctx->pc = 0x4DC5F4u;
    ctx->pc = 0x4DC5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC5F4u;
    // 0x4dc5f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DC600u;
    goto label_4dc600;
    ctx->pc = 0x4DC5FCu;
    // 0x4dc5fc: 0x0  nop
    ctx->pc = 0x4dc5fcu;
    // NOP
label_4dc600:
    // 0x4dc600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dc600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4dc604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dc604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4dc608: 0xa48001bc  sh          $zero, 0x1BC($a0)
    ctx->pc = 0x4dc608u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 444), (uint16_t)GPR_U32(ctx, 0));
    // 0x4dc60c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dc60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dc610: 0x8137186  j           func_4DC618
    ctx->pc = 0x4DC610u;
    ctx->pc = 0x4DC614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC610u;
    // 0x4dc614: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DC618u;
    goto label_4dc618;
    ctx->pc = 0x4DC618u;
label_4dc618:
    // 0x4dc618: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4dc618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4dc61c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4dc61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4dc620: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4dc620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4dc624: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4dc624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4dc628: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4dc628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4dc62c: 0x24b41120  addiu       $s4, $a1, 0x1120
    ctx->pc = 0x4dc62cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 4384));
    // 0x4dc630: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4dc630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4dc634: 0x3c19ffff  lui         $t9, 0xFFFF
    ctx->pc = 0x4dc634u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)65535 << 16));
    // 0x4dc638: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4dc638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4dc63c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4dc63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4dc640: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4dc640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4dc644: 0x8c551140  lw          $s5, 0x1140($v0)
    ctx->pc = 0x4dc644u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x7F1140u));
    // 0x4dc648: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4dc648u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1120u));
    // 0x4dc64c: 0x86a2016a  lh          $v0, 0x16A($s5)
    ctx->pc = 0x4dc64cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 362)));
    // 0x4dc650: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dc650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dc654: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x4dc654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x4dc658: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dc658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dc65c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4dc65cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4dc660: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4dc660u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4dc664: 0x2c421518  sltiu       $v0, $v0, 0x1518
    ctx->pc = 0x4dc664u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5400) ? 1 : 0);
    // 0x4dc668: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4DC668u;
    {
        const bool branch_taken_0x4dc668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DC66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC668u;
        // 0x4dc66c: 0x80c02d  daddu       $t8, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc668) {
            ctx->pc = 0x4DC698u;
            goto label_4dc698;
        }
    }
    ctx->pc = 0x4DC670u;
    // 0x4dc670: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4dc670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4dc674: 0x2404006e  addiu       $a0, $zero, 0x6E
    ctx->pc = 0x4dc674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x4dc678: 0xa702000e  sh          $v0, 0xE($t8)
    ctx->pc = 0x4dc678u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dc67c: 0x270301b4  addiu       $v1, $t8, 0x1B4
    ctx->pc = 0x4dc67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), 436));
    // 0x4dc680: 0xa7040008  sh          $a0, 0x8($t8)
    ctx->pc = 0x4dc680u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x4dc684: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4dc684u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4dc688: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x4dc688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x4dc68c: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x4DC68Cu;
    {
        const bool branch_taken_0x4dc68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DC690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC68Cu;
        // 0x4dc690: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc68c) {
            ctx->pc = 0x4DC87Cu;
            goto label_4dc87c;
        }
    }
    ctx->pc = 0x4DC694u;
    // 0x4dc694: 0x0  nop
    ctx->pc = 0x4dc694u;
    // NOP
label_4dc698:
    // 0x4dc698: 0x870201be  lh          $v0, 0x1BE($t8)
    ctx->pc = 0x4dc698u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 446)));
    // 0x4dc69c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dc69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dc6a0: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4dc6a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4dc6a4: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4dc6a4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4dc6a8: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x4dc6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x4dc6ac: 0x2529112c  addiu       $t1, $t1, 0x112C
    ctx->pc = 0x4dc6acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4396));
    // 0x4dc6b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dc6b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dc6b4: 0x8d270000  lw          $a3, 0x0($t1)
    ctx->pc = 0x4dc6b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4dc6b8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4dc6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4dc6bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dc6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dc6c0: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4dc6c0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4dc6c4: 0x256b1130  addiu       $t3, $t3, 0x1130
    ctx->pc = 0x4dc6c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4400));
    // 0x4dc6c8: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4dc6c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4dc6cc: 0x254a1134  addiu       $t2, $t2, 0x1134
    ctx->pc = 0x4dc6ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4404));
    // 0x4dc6d0: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x4dc6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4dc6d4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4dc6d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4dc6d8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4dc6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4dc6dc: 0x8d480000  lw          $t0, 0x0($t2)
    ctx->pc = 0x4dc6dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4dc6e0: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x4dc6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x4dc6e4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4dc6e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4dc6e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dc6e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dc6ec: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4dc6ecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4dc6f0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4dc6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4dc6f4: 0x270e0010  addiu       $t6, $t8, 0x10
    ctx->pc = 0x4dc6f4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x4dc6f8: 0x270f0014  addiu       $t7, $t8, 0x14
    ctx->pc = 0x4dc6f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), 20));
    // 0x4dc6fc: 0x27100018  addiu       $s0, $t8, 0x18
    ctx->pc = 0x4dc6fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 24), 24));
    // 0x4dc700: 0x86a2011a  lh          $v0, 0x11A($s5)
    ctx->pc = 0x4dc700u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 282)));
    // 0x4dc704: 0x24110900  addiu       $s1, $zero, 0x900
    ctx->pc = 0x4dc704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2304));
    // 0x4dc708: 0x96850000  lhu         $a1, 0x0($s4)
    ctx->pc = 0x4dc708u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4dc70c: 0x24120800  addiu       $s2, $zero, 0x800
    ctx->pc = 0x4dc70cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x4dc710: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x4dc710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x4dc714: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x4dc714u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4dc718: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4dc718u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4dc71c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4dc71cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4dc720: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x4dc720u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    // 0x4dc724: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4dc724u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4dc728: 0x52c43  sra         $a1, $a1, 17
    ctx->pc = 0x4dc728u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 17));
    // 0x4dc72c: 0x86a2011e  lh          $v0, 0x11E($s5)
    ctx->pc = 0x4dc72cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 286)));
    // 0x4dc730: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x4dc730u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4dc734: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x4dc734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x4dc738: 0x24217c58  addiu       $at, $at, 0x7C58
    ctx->pc = 0x4dc738u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 31832));
    // 0x4dc73c: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x4dc73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x4dc740: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x4dc740u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4dc744: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x4dc744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x4dc748: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x4dc748u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dc74c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4dc74cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4dc750: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4dc750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4dc754: 0x84ac0000  lh          $t4, 0x0($a1)
    ctx->pc = 0x4dc754u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dc758: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4dc758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4dc75c: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x4dc75cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x4dc760: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4dc760u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4dc764: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4dc764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4dc768: 0x86a20122  lh          $v0, 0x122($s5)
    ctx->pc = 0x4dc768u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 290)));
    // 0x4dc76c: 0x791825  or          $v1, $v1, $t9
    ctx->pc = 0x4dc76cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 25));
    // 0x4dc770: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x4dc770u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4dc774: 0x84ad0000  lh          $t5, 0x0($a1)
    ctx->pc = 0x4dc774u;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4dc778: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x4dc778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x4dc77c: 0x85640000  lh          $a0, 0x0($t3)
    ctx->pc = 0x4dc77cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4dc780: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4dc780u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4dc784: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x4dc784u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
    // 0x4dc788: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4dc788u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4dc78c: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x4dc78cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    // 0x4dc790: 0x270701bc  addiu       $a3, $t8, 0x1BC
    ctx->pc = 0x4dc790u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 24), 444));
    // 0x4dc794: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x4dc794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x4dc798: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4dc798u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4dc79c: 0x992025  or          $a0, $a0, $t9
    ctx->pc = 0x4dc79cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 25));
    // 0x4dc7a0: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x4dc7a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x4dc7a4: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x4dc7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x4dc7a8: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x4dc7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x4dc7ac: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x4dc7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x4dc7b0: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4dc7b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4dc7b4: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x4dc7b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4dc7b8: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x4dc7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
    // 0x4dc7bc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4dc7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4dc7c0: 0x8dc20000  lw          $v0, 0x0($t6)
    ctx->pc = 0x4dc7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4dc7c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dc7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dc7c8: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x4dc7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x4dc7cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dc7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dc7d0: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x4dc7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x4dc7d4: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x4dc7d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4dc7d8: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x4dc7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4dc7dc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4dc7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4dc7e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dc7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dc7e4: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x4dc7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x4dc7e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dc7e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dc7ec: 0xade20000  sw          $v0, 0x0($t7)
    ctx->pc = 0x4dc7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 2));
    // 0x4dc7f0: 0x95430000  lhu         $v1, 0x0($t2)
    ctx->pc = 0x4dc7f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4dc7f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4dc7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4dc7f8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4dc7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4dc7fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dc7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dc800: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x4dc800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x4dc804: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dc804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dc808: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4dc808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4dc80c: 0x84a30002  lh          $v1, 0x2($a1)
    ctx->pc = 0x4dc80cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x4dc810: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4dc810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4dc814: 0x791825  or          $v1, $v1, $t9
    ctx->pc = 0x4dc814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 25));
    // 0x4dc818: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dc818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dc81c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4dc81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4dc820: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4dc820u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4dc824: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4dc824u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4dc828: 0x8704013a  lh          $a0, 0x13A($t8)
    ctx->pc = 0x4dc828u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 314)));
    // 0x4dc82c: 0xa703016a  sh          $v1, 0x16A($t8)
    ctx->pc = 0x4dc82cu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 362), (uint16_t)GPR_U32(ctx, 3));
    // 0x4dc830: 0x992025  or          $a0, $a0, $t9
    ctx->pc = 0x4dc830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 25));
    // 0x4dc834: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4dc834u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4dc838: 0xa7110166  sh          $s1, 0x166($t8)
    ctx->pc = 0x4dc838u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 358), (uint16_t)GPR_U32(ctx, 17));
    // 0x4dc83c: 0xa7020162  sh          $v0, 0x162($t8)
    ctx->pc = 0x4dc83cu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 354), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dc840: 0xa7120168  sh          $s2, 0x168($t8)
    ctx->pc = 0x4dc840u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 360), (uint16_t)GPR_U32(ctx, 18));
    // 0x4dc844: 0xa7000164  sh          $zero, 0x164($t8)
    ctx->pc = 0x4dc844u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 356), (uint16_t)GPR_U32(ctx, 0));
    // 0x4dc848: 0xa7000136  sh          $zero, 0x136($t8)
    ctx->pc = 0x4dc848u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 310), (uint16_t)GPR_U32(ctx, 0));
    // 0x4dc84c: 0xa7000138  sh          $zero, 0x138($t8)
    ctx->pc = 0x4dc84cu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 312), (uint16_t)GPR_U32(ctx, 0));
    // 0x4dc850: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4dc850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4dc854: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4dc854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4dc858: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4dc858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4dc85c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4dc85cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4dc860: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4dc860u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4dc864: 0xa71301c2  sh          $s3, 0x1C2($t8)
    ctx->pc = 0x4dc864u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 450), (uint16_t)GPR_U32(ctx, 19));
    // 0x4dc868: 0xa7030148  sh          $v1, 0x148($t8)
    ctx->pc = 0x4dc868u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 328), (uint16_t)GPR_U32(ctx, 3));
    // 0x4dc86c: 0xa700000e  sh          $zero, 0xE($t8)
    ctx->pc = 0x4dc86cu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x4dc870: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4dc870u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4dc874: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4dc874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4dc878: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4dc878u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
label_4dc87c:
    // 0x4dc87c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4dc87cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dc880: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4dc880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4dc884: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4dc884u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4dc888: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4dc888u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4dc88c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4dc88cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4dc890: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4dc890u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4dc894: 0x3e00008  jr          $ra
    ctx->pc = 0x4DC894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DC898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC894u;
        // 0x4dc898: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DC894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DC89Cu;
    // 0x4dc89c: 0x0  nop
    ctx->pc = 0x4dc89cu;
    // NOP
label_4dc8a0:
    // 0x4dc8a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dc8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4dc8a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4dc8a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dc8a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4dc8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4dc8ac: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4dc8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4dc8b0: 0x24461120  addiu       $a2, $v0, 0x1120
    ctx->pc = 0x4dc8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4384));
    // 0x4dc8b4: 0x24a90166  addiu       $t1, $a1, 0x166
    ctx->pc = 0x4dc8b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 358));
    // 0x4dc8b8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4dc8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F1120u));
    // 0x4dc8bc: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4dc8bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4dc8c0: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4dc8c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4dc8c4: 0x24a801bc  addiu       $t0, $a1, 0x1BC
    ctx->pc = 0x4dc8c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 444));
    // 0x4dc8c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4dc8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dc8cc: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4dc8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4dc8d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4dc8d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4dc8d4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4dc8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4dc8d8: 0x3467ffff  ori         $a3, $v1, 0xFFFF
    ctx->pc = 0x4dc8d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4dc8dc: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4dc8dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dc8e0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4dc8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4dc8e4: 0x2c420600  sltiu       $v0, $v0, 0x600
    ctx->pc = 0x4dc8e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1536) ? 1 : 0);
    // 0x4dc8e8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4DC8E8u;
    {
        const bool branch_taken_0x4dc8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DC8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DC8E8u;
        // 0x4dc8ec: 0x31c03  sra         $v1, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4dc8e8) {
            ctx->pc = 0x4DC918u;
            goto label_4dc918;
        }
    }
    ctx->pc = 0x4DC8F0u;
    // 0x4dc8f0: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x4dc8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x4dc8f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dc8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dc8f8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4dc8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4dc8fc: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x4dc8fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4dc900: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4dc900u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4dc904: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4dc904u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4dc908: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x4dc908u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4dc90c: 0x8137366  j           func_4DCD98
    ctx->pc = 0x4DC90Cu;
    ctx->pc = 0x4DC910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC90Cu;
    // 0x4dc910: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DCD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DCD98u, 0x4DC90Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DC914u;
    // 0x4dc914: 0x0  nop
    ctx->pc = 0x4dc914u;
    // NOP
label_4dc918:
    // 0x4dc918: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4dc918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4dc91c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4dc91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dc920: 0xa4a301b8  sh          $v1, 0x1B8($a1)
    ctx->pc = 0x4dc920u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 440), (uint16_t)GPR_U32(ctx, 3));
    // 0x4dc924: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4dc924u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4dc928: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4dc928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4dc92c: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4dc92cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4dc930: 0x8137366  j           func_4DCD98
    ctx->pc = 0x4DC930u;
    ctx->pc = 0x4DC934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC930u;
    // 0x4dc934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DCD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DCD98u, 0x4DC930u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DC938u;
label_4dc938:
    // 0x4dc938: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4dc938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4dc93c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4dc93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4dc940: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4dc940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4dc944: 0xc13725c  jal         func_4DC970
    ctx->pc = 0x4DC944u;
    SET_GPR_U32(ctx, 31, 0x4DC94Cu);
    ctx->pc = 0x4DC948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC944u;
    // 0x4dc948: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DC970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DC970u, 0x4DC944u, 0x4DC94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC94Cu;
label_4dc94c:
    // 0x4dc94c: 0xc13758c  jal         func_4DD630
    ctx->pc = 0x4DC94Cu;
    SET_GPR_U32(ctx, 31, 0x4DC954u);
    ctx->pc = 0x4DC950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC94Cu;
    // 0x4dc950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DD630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DD630u, 0x4DC94Cu, 0x4DC954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC954u;
label_4dc954:
    // 0x4dc954: 0xc13753c  jal         func_4DD4F0
    ctx->pc = 0x4DC954u;
    SET_GPR_U32(ctx, 31, 0x4DC95Cu);
    ctx->pc = 0x4DC958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC954u;
    // 0x4dc958: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DD4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DD4F0u, 0x4DC954u, 0x4DC95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DC95Cu;
label_4dc95c:
    // 0x4dc95c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4dc95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4dc960: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4dc960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4dc964: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4dc964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4dc968: 0x8137366  j           func_4DCD98
    ctx->pc = 0x4DC968u;
    ctx->pc = 0x4DC96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DC968u;
    // 0x4dc96c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DCD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DCD98u, 0x4DC968u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4DC970u;
}
