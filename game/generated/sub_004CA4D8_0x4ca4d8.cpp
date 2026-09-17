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

// Function: sub_004CA4D8
// Address: 0x4ca4d8 - 0x4cafd8
void sub_004CA4D8_0x4ca4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CA4D8_0x4ca4d8");
#endif

    switch (ctx->pc) {
        case 0x4ca4e0u: goto label_4ca4e0;
        case 0x4ca718u: goto label_4ca718;
        case 0x4ca728u: goto label_4ca728;
        case 0x4ca73cu: goto label_4ca73c;
        case 0x4ca780u: goto label_4ca780;
        case 0x4ca790u: goto label_4ca790;
        case 0x4ca7a4u: goto label_4ca7a4;
        case 0x4ca7e8u: goto label_4ca7e8;
        case 0x4ca7f8u: goto label_4ca7f8;
        case 0x4ca80cu: goto label_4ca80c;
        case 0x4ca844u: goto label_4ca844;
        case 0x4ca854u: goto label_4ca854;
        case 0x4ca868u: goto label_4ca868;
        case 0x4ca8dcu: goto label_4ca8dc;
        case 0x4ca980u: goto label_4ca980;
        case 0x4ca994u: goto label_4ca994;
        case 0x4ca9c0u: goto label_4ca9c0;
        case 0x4caa10u: goto label_4caa10;
        case 0x4caab0u: goto label_4caab0;
        case 0x4cab2cu: goto label_4cab2c;
        case 0x4cab48u: goto label_4cab48;
        case 0x4cabd0u: goto label_4cabd0;
        case 0x4cac64u: goto label_4cac64;
        case 0x4cac90u: goto label_4cac90;
        case 0x4cae58u: goto label_4cae58;
        case 0x4cae68u: goto label_4cae68;
        case 0x4cae7cu: goto label_4cae7c;
        case 0x4cae9cu: goto label_4cae9c;
        case 0x4caeacu: goto label_4caeac;
        case 0x4caec0u: goto label_4caec0;
        case 0x4caee0u: goto label_4caee0;
        case 0x4caef0u: goto label_4caef0;
        case 0x4caf04u: goto label_4caf04;
        case 0x4caf8cu: goto label_4caf8c;
        case 0x4caf94u: goto label_4caf94;
        case 0x4caf9cu: goto label_4caf9c;
        default: break;
    }

    ctx->pc = 0x4ca4d8u;

    // 0x4ca4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4CA4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CA4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CA4E0u;
label_4ca4e0:
    // 0x4ca4e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ca4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4ca4e4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ca4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ca4e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ca4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ca4ec: 0x24510f60  addiu       $s1, $v0, 0xF60
    ctx->pc = 0x4ca4ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3936));
    // 0x4ca4f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ca4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ca4f4: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4ca4f4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4ca4f8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ca4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4ca4fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4ca4fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca500: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ca500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ca504: 0x2663015e  addiu       $v1, $s3, 0x15E
    ctx->pc = 0x4ca504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 350));
    // 0x4ca508: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4ca508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4ca50c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4ca50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4ca510: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4ca510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4ca514: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4ca514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4ca518: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4ca518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4ca51c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4ca51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4ca520: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4ca520u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ca524: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4ca524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4ca528: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4ca528u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ca52c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ca52cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ca530: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ca530u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ca534: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4ca534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ca538: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ca538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ca53c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ca53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ca540: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ca540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ca544: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ca544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4ca548: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ca548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ca54c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4ca54cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ca550: 0x96650164  lhu         $a1, 0x164($s3)
    ctx->pc = 0x4ca550u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 356)));
    // 0x4ca554: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4ca554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4ca558: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ca558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ca55c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ca55cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ca560: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ca560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ca564: 0x624824  and         $t1, $v1, $v0
    ctx->pc = 0x4ca564u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ca568: 0xae290000  sw          $t1, 0x0($s1)
    ctx->pc = 0x4ca568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 9));
    // 0x4ca56c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4ca56cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ca570: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4CA570u;
    {
        const bool branch_taken_0x4ca570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CA574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA570u;
        // 0x4ca574: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca570) {
            ctx->pc = 0x4CA5A8u;
            goto label_4ca5a8;
        }
    }
    ctx->pc = 0x4CA578u;
    // 0x4ca578: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ca578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ca57c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ca57cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ca580: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ca580u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ca584: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ca584u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ca588: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ca588u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ca58c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4ca58cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ca590: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4ca590u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ca594: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4ca594u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ca598: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4ca598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4ca59c: 0x8132b12  j           func_4CAC48
    ctx->pc = 0x4CA59Cu;
    ctx->pc = 0x4CA5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA59Cu;
    // 0x4ca5a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CAC48u;
    goto label_4cac48;
    ctx->pc = 0x4CA5A4u;
    // 0x4ca5a4: 0x0  nop
    ctx->pc = 0x4ca5a4u;
    // NOP
label_4ca5a8:
    // 0x4ca5a8: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ca5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ca5ac: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x4ca5acu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x4ca5b0: 0x8c460f80  lw          $a2, 0xF80($v0)
    ctx->pc = 0x4ca5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0F80u));
    // 0x4ca5b4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ca5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ca5b8: 0x24560f6c  addiu       $s6, $v0, 0xF6C
    ctx->pc = 0x4ca5b8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 3948));
    // 0x4ca5bc: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4ca5bcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4ca5c0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4ca5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ca5c4: 0x27d50f70  addiu       $s5, $fp, 0xF70
    ctx->pc = 0x4ca5c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), 3952));
    // 0x4ca5c8: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4ca5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F6Cu));
    // 0x4ca5cc: 0x26f40f74  addiu       $s4, $s7, 0xF74
    ctx->pc = 0x4ca5ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 3956));
    // 0x4ca5d0: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4ca5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4ca5d4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4ca5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ca5d8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ca5d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ca5dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ca5dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ca5e0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ca5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ca5e4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4ca5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ca5e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ca5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ca5ec: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ca5ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ca5f0: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4ca5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4ca5f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ca5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ca5f8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ca5f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ca5fc: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4ca5fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4ca600: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4ca600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x4ca604: 0x86c80000  lh          $t0, 0x0($s6)
    ctx->pc = 0x4ca604u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4ca608: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4ca608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4ca60c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ca60cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ca610: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ca610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ca614: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4ca614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4ca618: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4ca618u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4ca61c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ca61cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ca620: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x4ca620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x4ca624: 0x86a70000  lh          $a3, 0x0($s5)
    ctx->pc = 0x4ca624u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ca628: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4ca628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4ca62c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ca62cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ca630: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ca630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ca634: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4ca634u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4ca638: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4ca638u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4ca63c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ca63cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ca640: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x4ca640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4ca644: 0x86860000  lh          $a2, 0x0($s4)
    ctx->pc = 0x4ca644u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ca648: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4ca648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4ca64c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ca64cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ca650: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4ca650u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4ca654: 0x1124025  or          $t0, $t0, $s2
    ctx->pc = 0x4ca654u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 18));
    // 0x4ca658: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x4ca658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x4ca65c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4ca65cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4ca660: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x4ca660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x4ca664: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4ca664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4ca668: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ca668u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ca66c: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4ca66cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4ca670: 0xf23825  or          $a3, $a3, $s2
    ctx->pc = 0x4ca670u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 18));
    // 0x4ca674: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4ca674u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4ca678: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4ca678u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4ca67c: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x4ca67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x4ca680: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4ca680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4ca684: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ca684u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ca688: 0xc23023  subu        $a2, $a2, $v0
    ctx->pc = 0x4ca688u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4ca68c: 0xd23025  or          $a2, $a2, $s2
    ctx->pc = 0x4ca68cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 18));
    // 0x4ca690: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4ca690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4ca694: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4ca694u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4ca698: 0x866201be  lh          $v0, 0x1BE($s3)
    ctx->pc = 0x4ca698u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 446)));
    // 0x4ca69c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ca69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ca6a0: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4ca6a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4ca6a4: 0xae290000  sw          $t1, 0x0($s1)
    ctx->pc = 0x4ca6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 9));
    // 0x4ca6a8: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4ca6a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4ca6ac: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4ca6acu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ca6b0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x4ca6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x4ca6b4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ca6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ca6b8: 0x1221824  and         $v1, $t1, $v0
    ctx->pc = 0x4ca6b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4ca6bc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ca6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4ca6c0: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x4ca6c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ca6c4: 0x2c820006  sltiu       $v0, $a0, 0x6
    ctx->pc = 0x4ca6c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x4ca6c8: 0x50400039  beql        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x4CA6C8u;
    {
        const bool branch_taken_0x4ca6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca6c8) {
            ctx->pc = 0x4CA6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CA6C8u;
            // 0x4ca6cc: 0x8662011c  lh          $v0, 0x11C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CA7B0u;
            goto label_4ca7b0;
        }
    }
    ctx->pc = 0x4CA6D0u;
    // 0x4ca6d0: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x4ca6d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x4ca6d4: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x4CA6D4u;
    {
        const bool branch_taken_0x4ca6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ca6d4) {
            ctx->pc = 0x4CA6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CA6D4u;
            // 0x4ca6d8: 0x86620118  lh          $v0, 0x118($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CA748u;
            goto label_4ca748;
        }
    }
    ctx->pc = 0x4CA6DCu;
    // 0x4ca6dc: 0x86620120  lh          $v0, 0x120($s3)
    ctx->pc = 0x4ca6dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x4ca6e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ca6e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ca6e4: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4ca6e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4ca6e8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ca6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ca6ec: 0x26100f64  addiu       $s0, $s0, 0xF64
    ctx->pc = 0x4ca6ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3940));
    // 0x4ca6f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ca6f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ca6f4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ca6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4ca6f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ca6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ca6fc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4ca6fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ca700: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4ca700u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4ca704: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ca704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ca708: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ca708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ca70c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ca70cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4ca710: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4CA710u;
    SET_GPR_U32(ctx, 31, 0x4CA718u);
    ctx->pc = 0x4CA714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA710u;
    // 0x4ca714: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4CA710u, 0x4CA718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA718u;
label_4ca718:
    // 0x4ca718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ca718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca71c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ca71cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4ca720: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CA720u;
    SET_GPR_U32(ctx, 31, 0x4CA728u);
    ctx->pc = 0x4CA724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA720u;
    // 0x4ca724: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CA720u, 0x4CA728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA728u;
label_4ca728:
    // 0x4ca728: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4ca728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca72c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4ca72cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ca730: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4ca730u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca734: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4CA734u;
    SET_GPR_U32(ctx, 31, 0x4CA73Cu);
    ctx->pc = 0x4CA738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA734u;
    // 0x4ca738: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4CA734u, 0x4CA73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA73Cu;
label_4ca73c:
    // 0x4ca73c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x4CA73Cu;
    {
        const bool branch_taken_0x4ca73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CA740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA73Cu;
        // 0x4ca740: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca73c) {
            ctx->pc = 0x4CA86Cu;
            goto label_4ca86c;
        }
    }
    ctx->pc = 0x4CA744u;
    // 0x4ca744: 0x0  nop
    ctx->pc = 0x4ca744u;
    // NOP
label_4ca748:
    // 0x4ca748: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ca748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ca74c: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4ca74cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4ca750: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ca750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ca754: 0x26100f64  addiu       $s0, $s0, 0xF64
    ctx->pc = 0x4ca754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3940));
    // 0x4ca758: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ca758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ca75c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ca75cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4ca760: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ca760u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ca764: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4ca764u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ca768: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4ca768u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4ca76c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ca76cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ca770: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ca770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ca774: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ca774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4ca778: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4CA778u;
    SET_GPR_U32(ctx, 31, 0x4CA780u);
    ctx->pc = 0x4CA77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA778u;
    // 0x4ca77c: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4CA778u, 0x4CA780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA780u;
label_4ca780:
    // 0x4ca780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ca780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca784: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ca784u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4ca788: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CA788u;
    SET_GPR_U32(ctx, 31, 0x4CA790u);
    ctx->pc = 0x4CA78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA788u;
    // 0x4ca78c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CA788u, 0x4CA790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA790u;
label_4ca790:
    // 0x4ca790: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4ca790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca794: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4ca794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ca798: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4ca798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca79c: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4CA79Cu;
    SET_GPR_U32(ctx, 31, 0x4CA7A4u);
    ctx->pc = 0x4CA7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA79Cu;
    // 0x4ca7a0: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4CA79Cu, 0x4CA7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA7A4u;
label_4ca7a4:
    // 0x4ca7a4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x4CA7A4u;
    {
        const bool branch_taken_0x4ca7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CA7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA7A4u;
        // 0x4ca7a8: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca7a4) {
            ctx->pc = 0x4CA86Cu;
            goto label_4ca86c;
        }
    }
    ctx->pc = 0x4CA7ACu;
    // 0x4ca7ac: 0x0  nop
    ctx->pc = 0x4ca7acu;
    // NOP
label_4ca7b0:
    // 0x4ca7b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ca7b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ca7b4: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4ca7b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4ca7b8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ca7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ca7bc: 0x26100f64  addiu       $s0, $s0, 0xF64
    ctx->pc = 0x4ca7bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3940));
    // 0x4ca7c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ca7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ca7c4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ca7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4ca7c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ca7c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ca7cc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4ca7ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ca7d0: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4ca7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4ca7d4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ca7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ca7d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ca7d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ca7dc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ca7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4ca7e0: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4CA7E0u;
    SET_GPR_U32(ctx, 31, 0x4CA7E8u);
    ctx->pc = 0x4CA7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA7E0u;
    // 0x4ca7e4: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4CA7E0u, 0x4CA7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA7E8u;
label_4ca7e8:
    // 0x4ca7e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ca7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca7ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ca7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4ca7f0: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CA7F0u;
    SET_GPR_U32(ctx, 31, 0x4CA7F8u);
    ctx->pc = 0x4CA7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA7F0u;
    // 0x4ca7f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CA7F0u, 0x4CA7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA7F8u;
label_4ca7f8:
    // 0x4ca7f8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4ca7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca7fc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4ca7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ca800: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4ca800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca804: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4CA804u;
    SET_GPR_U32(ctx, 31, 0x4CA80Cu);
    ctx->pc = 0x4CA808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA804u;
    // 0x4ca808: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4CA804u, 0x4CA80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA80Cu;
label_4ca80c:
    // 0x4ca80c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4ca80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ca810: 0x86620118  lh          $v0, 0x118($s3)
    ctx->pc = 0x4ca810u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x4ca814: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ca814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ca818: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ca818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ca81c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ca81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ca820: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ca820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4ca824: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ca824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ca828: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4ca828u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ca82c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4ca82cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4ca830: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ca830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ca834: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ca834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ca838: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ca838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4ca83c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4CA83Cu;
    SET_GPR_U32(ctx, 31, 0x4CA844u);
    ctx->pc = 0x4CA840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA83Cu;
    // 0x4ca840: 0x86240000  lh          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4CA83Cu, 0x4CA844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA844u;
label_4ca844:
    // 0x4ca844: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ca844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca848: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ca848u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4ca84c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CA84Cu;
    SET_GPR_U32(ctx, 31, 0x4CA854u);
    ctx->pc = 0x4CA850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA84Cu;
    // 0x4ca850: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CA84Cu, 0x4CA854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA854u;
label_4ca854:
    // 0x4ca854: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4ca854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca858: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4ca858u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ca85c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4ca85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca860: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4CA860u;
    SET_GPR_U32(ctx, 31, 0x4CA868u);
    ctx->pc = 0x4CA864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA860u;
    // 0x4ca864: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4CA860u, 0x4CA868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA868u;
label_4ca868:
    // 0x4ca868: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x4ca868u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
label_4ca86c:
    // 0x4ca86c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ca86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ca870: 0x2631d680  addiu       $s1, $s1, -0x2980
    ctx->pc = 0x4ca870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956672));
    // 0x4ca874: 0x94470f6c  lhu         $a3, 0xF6C($v0)
    ctx->pc = 0x4ca874u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)FAST_READ16(0x7F0F6Cu));
    // 0x4ca878: 0x97c50f70  lhu         $a1, 0xF70($fp)
    ctx->pc = 0x4ca878u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 3952)));
    // 0x4ca87c: 0x26282494  addiu       $t0, $s1, 0x2494
    ctx->pc = 0x4ca87cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 9364));
    // 0x4ca880: 0x96e60f74  lhu         $a2, 0xF74($s7)
    ctx->pc = 0x4ca880u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 3956)));
    // 0x4ca884: 0x26292498  addiu       $t1, $s1, 0x2498
    ctx->pc = 0x4ca884u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 9368));
    // 0x4ca888: 0x262a249c  addiu       $t2, $s1, 0x249C
    ctx->pc = 0x4ca888u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 9372));
    // 0x4ca88c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4ca88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ca890: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4ca890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ca894: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4ca894u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4ca898: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4ca898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4ca89c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4ca89cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4ca8a0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4ca8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4ca8a4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4ca8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4ca8a8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4ca8a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4ca8ac: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ca8acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ca8b0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ca8b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ca8b4: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4ca8b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4ca8b8: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4ca8b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4ca8bc: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4ca8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4ca8c0: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4ca8c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4ca8c4: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4ca8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4ca8c8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4ca8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4ca8cc: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4ca8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4ca8d0: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4ca8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4ca8d4: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4CA8D4u;
    SET_GPR_U32(ctx, 31, 0x4CA8DCu);
    ctx->pc = 0x4CA8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA8D4u;
    // 0x4ca8d8: 0xad420000  sw          $v0, 0x0($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4CA8D4u, 0x4CA8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA8DCu;
label_4ca8dc:
    // 0x4ca8dc: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ca8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ca8e0: 0x24440f60  addiu       $a0, $v0, 0xF60
    ctx->pc = 0x4ca8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3936));
    // 0x4ca8e4: 0x862224a0  lh          $v0, 0x24A0($s1)
    ctx->pc = 0x4ca8e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 9376)));
    // 0x4ca8e8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4ca8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F60u));
    // 0x4ca8ec: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4ca8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4ca8f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ca8f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ca8f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ca8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ca8f8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4ca8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4ca8fc: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4ca8fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ca900: 0x2442f556  addiu       $v0, $v0, -0xAAA
    ctx->pc = 0x4ca900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964566));
    // 0x4ca904: 0x443000e  bgezl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4CA904u;
    {
        const bool branch_taken_0x4ca904 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4ca904) {
            ctx->pc = 0x4CA908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CA904u;
            // 0x4ca908: 0x26630168  addiu       $v1, $s3, 0x168 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 360));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CA940u;
            goto label_4ca940;
        }
    }
    ctx->pc = 0x4CA90Cu;
    // 0x4ca90c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ca90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca910: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ca910u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ca914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ca914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ca918: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ca918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ca91c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ca91cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ca920: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ca920u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ca924: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ca924u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ca928: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4ca928u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ca92c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4ca92cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ca930: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4ca930u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ca934: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4ca934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4ca938: 0x8132b12  j           func_4CAC48
    ctx->pc = 0x4CA938u;
    ctx->pc = 0x4CA93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA938u;
    // 0x4ca93c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CAC48u;
    goto label_4cac48;
    ctx->pc = 0x4CA940u;
label_4ca940:
    // 0x4ca940: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4ca940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca944: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4ca944u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ca948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ca948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ca94c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ca94cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ca950: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ca950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ca954: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ca954u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ca958: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ca958u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ca95c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ca95cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ca960: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ca960u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ca964: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4ca964u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ca968: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4ca968u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ca96c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4ca96cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ca970: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4ca970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4ca974: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4ca974u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ca978: 0x8132a60  j           func_4CA980
    ctx->pc = 0x4CA978u;
    ctx->pc = 0x4CA97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA978u;
    // 0x4ca97c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CA980u;
    goto label_4ca980;
    ctx->pc = 0x4CA980u;
label_4ca980:
    // 0x4ca980: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ca980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ca984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ca984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ca988: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ca988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ca98c: 0xc12e90a  jal         func_4BA428
    ctx->pc = 0x4CA98Cu;
    SET_GPR_U32(ctx, 31, 0x4CA994u);
    ctx->pc = 0x4CA990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA98Cu;
    // 0x4ca990: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4BA428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4BA428u, 0x4CA98Cu, 0x4CA994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CA994u;
label_4ca994:
    // 0x4ca994: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x4ca994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x4ca998: 0x26030168  addiu       $v1, $s0, 0x168
    ctx->pc = 0x4ca998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 360));
    // 0x4ca99c: 0xa602014a  sh          $v0, 0x14A($s0)
    ctx->pc = 0x4ca99cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ca9a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ca9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca9a4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ca9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ca9a8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4ca9a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ca9ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ca9acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ca9b0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ca9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ca9b4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4ca9b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ca9b8: 0x8132b12  j           func_4CAC48
    ctx->pc = 0x4CA9B8u;
    ctx->pc = 0x4CA9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA9B8u;
    // 0x4ca9bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CAC48u;
    goto label_4cac48;
    ctx->pc = 0x4CA9C0u;
label_4ca9c0:
    // 0x4ca9c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ca9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ca9c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ca9c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ca9c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ca9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ca9cc: 0x24460168  addiu       $a2, $v0, 0x168
    ctx->pc = 0x4ca9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x4ca9d0: 0x2442014a  addiu       $v0, $v0, 0x14A
    ctx->pc = 0x4ca9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 330));
    // 0x4ca9d4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4ca9d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ca9d8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4ca9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4ca9dc: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4ca9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ca9e0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CA9E0u;
    {
        const bool branch_taken_0x4ca9e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CA9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CA9E0u;
        // 0x4ca9e4: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ca9e0) {
            ctx->pc = 0x4CA9F8u;
            goto label_4ca9f8;
        }
    }
    ctx->pc = 0x4CA9E8u;
    // 0x4ca9e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ca9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ca9ec: 0x8132b12  j           func_4CAC48
    ctx->pc = 0x4CA9ECu;
    ctx->pc = 0x4CA9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CA9ECu;
    // 0x4ca9f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CAC48u;
    goto label_4cac48;
    ctx->pc = 0x4CA9F4u;
    // 0x4ca9f4: 0x0  nop
    ctx->pc = 0x4ca9f4u;
    // NOP
label_4ca9f8:
    // 0x4ca9f8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4ca9f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ca9fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ca9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4caa00: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4caa00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4caa04: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4caa04u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4caa08: 0x8132b12  j           func_4CAC48
    ctx->pc = 0x4CAA08u;
    ctx->pc = 0x4CAA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CAA08u;
    // 0x4caa0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CAC48u;
    goto label_4cac48;
    ctx->pc = 0x4CAA10u;
label_4caa10:
    // 0x4caa10: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x4caa10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
    // 0x4caa14: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4caa14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4caa18: 0x24c67218  addiu       $a2, $a2, 0x7218
    ctx->pc = 0x4caa18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29208));
    // 0x4caa1c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4caa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4caa20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4caa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4caa24: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4caa24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4caa28: 0xac460f7c  sw          $a2, 0xF7C($v0)
    ctx->pc = 0x4caa28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7F0F7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0F7Cu, _value); } while (0);
    // 0x4caa2c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4caa2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4caa30: 0x24a50f60  addiu       $a1, $a1, 0xF60
    ctx->pc = 0x4caa30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3936));
    // 0x4caa34: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4caa34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4caa38: 0x84e20008  lh          $v0, 0x8($a3)
    ctx->pc = 0x4caa38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4caa3c: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x4caa3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4caa40: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4caa40u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F60u));
    // 0x4caa44: 0x24e90168  addiu       $t1, $a3, 0x168
    ctx->pc = 0x4caa44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 360));
    // 0x4caa48: 0x2442ffb9  addiu       $v0, $v0, -0x47
    ctx->pc = 0x4caa48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967225));
    // 0x4caa4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4caa4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4caa50: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4caa50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4caa54: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4caa54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4caa58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4caa58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4caa5c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4caa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4caa60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4caa60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4caa64: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4caa64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4caa68: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4caa68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4caa6c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4caa6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4caa70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4caa70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4caa74: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4caa74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4caa78: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4caa78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4caa7c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4caa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4caa80: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4caa80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4caa84: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4caa84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4caa88: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4caa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4caa8c: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x4caa8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x4caa90: 0xa4ea014a  sh          $t2, 0x14A($a3)
    ctx->pc = 0x4caa90u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 330), (uint16_t)GPR_U32(ctx, 10));
    // 0x4caa94: 0xa4e3000c  sh          $v1, 0xC($a3)
    ctx->pc = 0x4caa94u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4caa98: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4caa98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4caa9c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4caa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4caaa0: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4caaa0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4caaa4: 0x8132b12  j           func_4CAC48
    ctx->pc = 0x4CAAA4u;
    ctx->pc = 0x4CAAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CAAA4u;
    // 0x4caaa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CAC48u;
    goto label_4cac48;
    ctx->pc = 0x4CAAACu;
    // 0x4caaac: 0x0  nop
    ctx->pc = 0x4caaacu;
    // NOP
label_4caab0:
    // 0x4caab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4caab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4caab4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4caab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4caab8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4caab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4caabc: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4caabcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4caac0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4caac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4caac4: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4caac4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4caac8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4caac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4caacc: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4caaccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4caad0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4caad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4caad4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4caad4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4caad8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4caad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4caadc: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x4caadcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x4caae0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4caae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4caae4: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4caae4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4caae8: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4caae8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4caaec: 0x26310f60  addiu       $s1, $s1, 0xF60
    ctx->pc = 0x4caaecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3936));
    // 0x4caaf0: 0x96620162  lhu         $v0, 0x162($s3)
    ctx->pc = 0x4caaf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 354)));
    // 0x4caaf4: 0x26520f64  addiu       $s2, $s2, 0xF64
    ctx->pc = 0x4caaf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3940));
    // 0x4caaf8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4caaf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4caafc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x4caafcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cab00: 0xa6022330  sh          $v0, 0x2330($s0)
    ctx->pc = 0x4cab00u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B0u, _value); } while (0);
    // 0x4cab04: 0x96620012  lhu         $v0, 0x12($s3)
    ctx->pc = 0x4cab04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x4cab08: 0x8c640f6c  lw          $a0, 0xF6C($v1)
    ctx->pc = 0x4cab08u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0F6Cu));
    // 0x4cab0c: 0xa6022334  sh          $v0, 0x2334($s0)
    ctx->pc = 0x4cab0cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9B4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B4u, _value); } while (0);
    // 0x4cab10: 0x96630016  lhu         $v1, 0x16($s3)
    ctx->pc = 0x4cab10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x4cab14: 0x8d050f70  lw          $a1, 0xF70($t0)
    ctx->pc = 0x4cab14u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0F70u));
    // 0x4cab18: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x4cab18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cab1c: 0xa6032336  sh          $v1, 0x2336($s0)
    ctx->pc = 0x4cab1cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9B6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B6u, _value); } while (0);
    // 0x4cab20: 0x9662001a  lhu         $v0, 0x1A($s3)
    ctx->pc = 0x4cab20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 26)));
    // 0x4cab24: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4CAB24u;
    SET_GPR_U32(ctx, 31, 0x4CAB2Cu);
    ctx->pc = 0x4CAB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CAB24u;
    // 0x4cab28: 0xa6022338  sh          $v0, 0x2338($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 9016), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4CAB24u, 0x4CAB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CAB2Cu;
label_4cab2c:
    // 0x4cab2c: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4cab2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cab30: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4cab30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cab34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4cab34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cab38: 0xa603233c  sh          $v1, 0x233C($s0)
    ctx->pc = 0x4cab38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9020), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cab3c: 0xa602233a  sh          $v0, 0x233A($s0)
    ctx->pc = 0x4cab3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9018), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cab40: 0xc127a50  jal         func_49E940
    ctx->pc = 0x4CAB40u;
    SET_GPR_U32(ctx, 31, 0x4CAB48u);
    ctx->pc = 0x4CAB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CAB40u;
    // 0x4cab44: 0xa600233e  sh          $zero, 0x233E($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 9022), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49E940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E940u, 0x4CAB40u, 0x4CAB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CAB48u;
label_4cab48:
    // 0x4cab48: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x4cab48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x4cab4c: 0x24a57218  addiu       $a1, $a1, 0x7218
    ctx->pc = 0x4cab4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29208));
    // 0x4cab50: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4cab50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4cab54: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4cab54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cab58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4cab58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cab5c: 0xac450f7c  sw          $a1, 0xF7C($v0)
    ctx->pc = 0x4cab5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x7F0F7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0F7Cu, _value); } while (0);
    // 0x4cab60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cab60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cab64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cab64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cab68: 0x86620008  lh          $v0, 0x8($s3)
    ctx->pc = 0x4cab68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4cab6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cab6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cab70: 0x2442ffb9  addiu       $v0, $v0, -0x47
    ctx->pc = 0x4cab70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967225));
    // 0x4cab74: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4cab74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cab78: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4cab78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4cab7c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cab7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cab80: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4cab80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4cab84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cab84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cab88: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4cab88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cab8c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4cab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4cab90: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x4cab90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x4cab94: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4cab94u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cab98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cab98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cab9c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4cab9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4caba0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4caba0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4caba4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4caba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4caba8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4caba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cabac: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4cabacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4cabb0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4cabb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4cabb4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4cabb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4cabb8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4cabb8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cabbc: 0xa6600168  sh          $zero, 0x168($s3)
    ctx->pc = 0x4cabbcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 360), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cabc0: 0xa663000c  sh          $v1, 0xC($s3)
    ctx->pc = 0x4cabc0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cabc4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4cabc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cabc8: 0x8132b12  j           func_4CAC48
    ctx->pc = 0x4CABC8u;
    ctx->pc = 0x4CABCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CABC8u;
    // 0x4cabcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CAC48u;
    goto label_4cac48;
    ctx->pc = 0x4CABD0u;
label_4cabd0:
    // 0x4cabd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cabd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cabd4: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4cabd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4cabd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4cabd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4cabdc: 0x24c60f60  addiu       $a2, $a2, 0xF60
    ctx->pc = 0x4cabdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3936));
    // 0x4cabe0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4cabe0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cabe4: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4cabe4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4cabe8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4cabe8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F60u));
    // 0x4cabec: 0x24e901bc  addiu       $t1, $a3, 0x1BC
    ctx->pc = 0x4cabecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 444));
    // 0x4cabf0: 0x84e201b8  lh          $v0, 0x1B8($a3)
    ctx->pc = 0x4cabf0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 440)));
    // 0x4cabf4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cabf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cabf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cabf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cabfc: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4cabfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4cac00: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cac00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cac04: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4cac04u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4cac08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cac08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cac0c: 0x84c50000  lh          $a1, 0x0($a2)
    ctx->pc = 0x4cac0cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cac10: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4cac10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4cac14: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4cac14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4cac18: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4cac18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4cac1c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4cac1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4cac20: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cac20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cac24: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4cac24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4cac28: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x4cac28u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cac2c: 0xa4e00168  sh          $zero, 0x168($a3)
    ctx->pc = 0x4cac2cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 360), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cac30: 0xa4e5014a  sh          $a1, 0x14A($a3)
    ctx->pc = 0x4cac30u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 330), (uint16_t)GPR_U32(ctx, 5));
    // 0x4cac34: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4cac34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4cac38: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4cac38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cac3c: 0xa5220000  sh          $v0, 0x0($t1)
    ctx->pc = 0x4cac3cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cac40: 0x8132b12  j           func_4CAC48
    ctx->pc = 0x4CAC40u;
    ctx->pc = 0x4CAC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CAC40u;
    // 0x4cac44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CAC48u;
    goto label_4cac48;
    ctx->pc = 0x4CAC48u;
label_4cac48:
    // 0x4cac48: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4cac48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4cac4c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cac4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cac50: 0x8c450f78  lw          $a1, 0xF78($v0)
    ctx->pc = 0x4cac50u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0F78u));
    // 0x4cac54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4cac54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4cac58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4cac58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4cac5c: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4CAC5Cu;
    SET_GPR_U32(ctx, 31, 0x4CAC64u);
    ctx->pc = 0x4CAC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CAC5Cu;
    // 0x4cac60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4CAC5Cu, 0x4CAC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CAC64u;
label_4cac64:
    // 0x4cac64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4cac64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4cac68: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CAC68u;
    {
        const bool branch_taken_0x4cac68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4CAC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CAC68u;
        // 0x4cac6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cac68) {
            ctx->pc = 0x4CAC80u;
            goto label_4cac80;
        }
    }
    ctx->pc = 0x4CAC70u;
    // 0x4cac70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cac70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cac74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4cac74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cac78: 0x8132b24  j           func_4CAC90
    ctx->pc = 0x4CAC78u;
    ctx->pc = 0x4CAC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CAC78u;
    // 0x4cac7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CAC90u;
    goto label_4cac90;
    ctx->pc = 0x4CAC80u;
label_4cac80:
    // 0x4cac80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cac80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cac84: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4cac84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cac88: 0x3e00008  jr          $ra
    ctx->pc = 0x4CAC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CAC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CAC88u;
        // 0x4cac8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CAC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CAC90u;
label_4cac90:
    // 0x4cac90: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4cac90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4cac94: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x4cac94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
    // 0x4cac98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4cac98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4cac9c: 0x24a50f7c  addiu       $a1, $a1, 0xF7C
    ctx->pc = 0x4cac9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3964));
    // 0x4caca0: 0x24c67218  addiu       $a2, $a2, 0x7218
    ctx->pc = 0x4caca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29208));
    // 0x4caca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4caca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4caca8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4caca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4cacac: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4cacacu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4cacb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4cacb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4cacb4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4cacb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cacb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4cacb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4cacbc: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4cacbcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4cacc0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4cacc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4cacc4: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4cacc4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4cacc8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4cacc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4caccc: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4cacccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4cacd0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4cacd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4cacd4: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4cacd4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4cacd8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4cacd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4cacdc: 0x26570160  addiu       $s7, $s2, 0x160
    ctx->pc = 0x4cacdcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
    // 0x4cace0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4cace0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4cace4: 0x265e0162  addiu       $fp, $s2, 0x162
    ctx->pc = 0x4cace4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 354));
    // 0x4cace8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4cace8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4cacec: 0x26470008  addiu       $a3, $s2, 0x8
    ctx->pc = 0x4cacecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x4cacf0: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x4cacf0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x7F0F7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F0F7Cu, _value); } while (0);
    // 0x4cacf4: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4cacf4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4cacf8: 0x26100f60  addiu       $s0, $s0, 0xF60
    ctx->pc = 0x4cacf8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3936));
    // 0x4cacfc: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x4cacfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
    // 0x4cad00: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4cad00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cad04: 0x24847270  addiu       $a0, $a0, 0x7270
    ctx->pc = 0x4cad04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29296));
    // 0x4cad08: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4cad08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F60u));
    // 0x4cad0c: 0x26480166  addiu       $t0, $s2, 0x166
    ctx->pc = 0x4cad0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 358));
    // 0x4cad10: 0x2442ffb9  addiu       $v0, $v0, -0x47
    ctx->pc = 0x4cad10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967225));
    // 0x4cad14: 0x26940f6c  addiu       $s4, $s4, 0xF6C
    ctx->pc = 0x4cad14u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3948));
    // 0x4cad18: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4cad18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4cad1c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cad1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cad20: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cad20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cad24: 0x26b50f70  addiu       $s5, $s5, 0xF70
    ctx->pc = 0x4cad24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3952));
    // 0x4cad28: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4cad28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4cad2c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cad2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cad30: 0x26d60f74  addiu       $s6, $s6, 0xF74
    ctx->pc = 0x4cad30u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3956));
    // 0x4cad34: 0x26310f64  addiu       $s1, $s1, 0xF64
    ctx->pc = 0x4cad34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3940));
    // 0x4cad38: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4cad38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cad3c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4cad3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4cad40: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4cad40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4cad44: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cad44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cad48: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4cad48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4cad4c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4cad4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cad50: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cad50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cad54: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4cad54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4cad58: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4cad58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4cad5c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4cad5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4cad60: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x4cad60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x4cad64: 0xa643000c  sh          $v1, 0xC($s2)
    ctx->pc = 0x4cad64u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cad68: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4cad68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4cad6c: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4cad6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cad70: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4cad70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cad74: 0x2442ffb9  addiu       $v0, $v0, -0x47
    ctx->pc = 0x4cad74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967225));
    // 0x4cad78: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4cad78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4cad7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cad7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cad80: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cad80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cad84: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4cad84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4cad88: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cad88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cad8c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4cad8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cad90: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4cad90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4cad94: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4cad94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4cad98: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cad98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cad9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4cad9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4cada0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4cada0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cada4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cada4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cada8: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4cada8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4cadac: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4cadacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4cadb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4cadb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4cadb4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4cadb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4cadb8: 0xa640015e  sh          $zero, 0x15E($s2)
    ctx->pc = 0x4cadb8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cadbc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4cadbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cadc0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4cadc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cadc4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4cadc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cadc8: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x4cadc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cadcc: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x4cadccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4cadd0: 0xa6e30000  sh          $v1, 0x0($s7)
    ctx->pc = 0x4cadd0u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cadd4: 0x24470006  addiu       $a3, $v0, 0x6
    ctx->pc = 0x4cadd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x4cadd8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4cadd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4caddc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4caddcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cade0: 0xa7c30000  sh          $v1, 0x0($fp)
    ctx->pc = 0x4cade0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cade4: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4cade4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4cade8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4cade8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cadec: 0xa6420164  sh          $v0, 0x164($s2)
    ctx->pc = 0x4cadecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 356), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cadf0: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x4cadf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x4cadf4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4cadf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cadf8: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4cadf8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cadfc: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x4cadfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x4cae00: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4cae00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cae04: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4cae04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4cae08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cae08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cae0c: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x4cae0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x4cae10: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cae10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cae14: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4cae14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4cae18: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4cae18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cae1c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4cae1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4cae20: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4cae20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4cae24: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4cae24u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4cae28: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x4cae28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4cae2c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4cae2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cae30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cae30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cae34: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x4cae34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x4cae38: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cae38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cae3c: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x4cae3cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x4cae40: 0x86420120  lh          $v0, 0x120($s2)
    ctx->pc = 0x4cae40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x4cae44: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4cae44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4cae48: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4cae48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4cae4c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4cae4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4cae50: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4CAE50u;
    SET_GPR_U32(ctx, 31, 0x4CAE58u);
    ctx->pc = 0x4CAE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CAE50u;
    // 0x4cae54: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4CAE50u, 0x4CAE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CAE58u;
label_4cae58:
    // 0x4cae58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4cae58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cae5c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4cae5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4cae60: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CAE60u;
    SET_GPR_U32(ctx, 31, 0x4CAE68u);
    ctx->pc = 0x4CAE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CAE60u;
    // 0x4cae64: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CAE60u, 0x4CAE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CAE68u;
label_4cae68:
    // 0x4cae68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4cae68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cae6c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4cae6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cae70: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4cae70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cae74: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4CAE74u;
    SET_GPR_U32(ctx, 31, 0x4CAE7Cu);
    ctx->pc = 0x4CAE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CAE74u;
    // 0x4cae78: 0x8e270000  lw          $a3, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4CAE74u, 0x4CAE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CAE7Cu;
label_4cae7c:
    // 0x4cae7c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4cae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cae80: 0x86420118  lh          $v0, 0x118($s2)
    ctx->pc = 0x4cae80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 280)));
    // 0x4cae84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cae84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cae88: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4cae88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4cae8c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cae8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cae90: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4cae90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4cae94: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4CAE94u;
    SET_GPR_U32(ctx, 31, 0x4CAE9Cu);
    ctx->pc = 0x4CAE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CAE94u;
    // 0x4cae98: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4CAE94u, 0x4CAE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CAE9Cu;
label_4cae9c:
    // 0x4cae9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4cae9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4caea0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4caea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4caea4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CAEA4u;
    SET_GPR_U32(ctx, 31, 0x4CAEACu);
    ctx->pc = 0x4CAEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CAEA4u;
    // 0x4caea8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CAEA4u, 0x4CAEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CAEACu;
label_4caeac:
    // 0x4caeac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4caeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4caeb0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4caeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4caeb4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4caeb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4caeb8: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4CAEB8u;
    SET_GPR_U32(ctx, 31, 0x4CAEC0u);
    ctx->pc = 0x4CAEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CAEB8u;
    // 0x4caebc: 0x8e270000  lw          $a3, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4CAEB8u, 0x4CAEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CAEC0u;
label_4caec0:
    // 0x4caec0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4caec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4caec4: 0x8642011c  lh          $v0, 0x11C($s2)
    ctx->pc = 0x4caec4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 284)));
    // 0x4caec8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4caec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4caecc: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4caeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4caed0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4caed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4caed4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4caed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4caed8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4CAED8u;
    SET_GPR_U32(ctx, 31, 0x4CAEE0u);
    ctx->pc = 0x4CAEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CAED8u;
    // 0x4caedc: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4CAED8u, 0x4CAEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CAEE0u;
label_4caee0:
    // 0x4caee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4caee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4caee4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4caee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4caee8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CAEE8u;
    SET_GPR_U32(ctx, 31, 0x4CAEF0u);
    ctx->pc = 0x4CAEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CAEE8u;
    // 0x4caeec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CAEE8u, 0x4CAEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CAEF0u;
label_4caef0:
    // 0x4caef0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4caef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4caef4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4caef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4caef8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4caef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4caefc: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4CAEFCu;
    SET_GPR_U32(ctx, 31, 0x4CAF04u);
    ctx->pc = 0x4CAF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CAEFCu;
    // 0x4caf00: 0x8e270000  lw          $a3, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4CAEFCu, 0x4CAF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CAF04u;
label_4caf04:
    // 0x4caf04: 0x26440124  addiu       $a0, $s2, 0x124
    ctx->pc = 0x4caf04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 292));
    // 0x4caf08: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4caf08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4caf0c: 0x26450128  addiu       $a1, $s2, 0x128
    ctx->pc = 0x4caf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 296));
    // 0x4caf10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4caf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4caf14: 0x2647012c  addiu       $a3, $s2, 0x12C
    ctx->pc = 0x4caf14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 300));
    // 0x4caf18: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4caf18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4caf1c: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4caf1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x4caf20: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4caf20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4caf24: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4caf24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4caf28: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4caf28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4caf2c: 0x24c6d680  addiu       $a2, $a2, -0x2980
    ctx->pc = 0x4caf2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x4caf30: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4caf30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4caf34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4caf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4caf38: 0x2408000c  addiu       $t0, $zero, 0xC
    ctx->pc = 0x4caf38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x4caf3c: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4caf3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4caf40: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4caf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4caf44: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4caf44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4caf48: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4caf48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4caf4c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4caf4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4caf50: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4caf50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4caf54: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4caf54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4caf58: 0x96c20000  lhu         $v0, 0x0($s6)
    ctx->pc = 0x4caf58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4caf5c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4caf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4caf60: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4caf60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4caf64: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4caf64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4caf68: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4caf68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4caf6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4caf6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4caf70: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4caf70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4caf74: 0x96e50000  lhu         $a1, 0x0($s7)
    ctx->pc = 0x4caf74u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4caf78: 0xa4c8232e  sh          $t0, 0x232E($a2)
    ctx->pc = 0x4caf78u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9006), (uint16_t)GPR_U32(ctx, 8));
    // 0x4caf7c: 0xa4c5232c  sh          $a1, 0x232C($a2)
    ctx->pc = 0x4caf7cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9004), (uint16_t)GPR_U32(ctx, 5));
    // 0x4caf80: 0x97c20000  lhu         $v0, 0x0($fp)
    ctx->pc = 0x4caf80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4caf84: 0xc13d788  jal         func_4F5E20
    ctx->pc = 0x4CAF84u;
    SET_GPR_U32(ctx, 31, 0x4CAF8Cu);
    ctx->pc = 0x4CAF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CAF84u;
    // 0x4caf88: 0xa4c223c4  sh          $v0, 0x23C4($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 9156), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5E20u, 0x4CAF84u, 0x4CAF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CAF8Cu;
label_4caf8c:
    // 0x4caf8c: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4CAF8Cu;
    SET_GPR_U32(ctx, 31, 0x4CAF94u);
    ctx->pc = 0x4CAF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CAF8Cu;
    // 0x4caf90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4CAF8Cu, 0x4CAF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CAF94u;
label_4caf94:
    // 0x4caf94: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4CAF94u;
    SET_GPR_U32(ctx, 31, 0x4CAF9Cu);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4CAF94u, 0x4CAF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CAF9Cu;
label_4caf9c:
    // 0x4caf9c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4caf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4cafa0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cafa0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cafa4: 0xa64201bc  sh          $v0, 0x1BC($s2)
    ctx->pc = 0x4cafa4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 444), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cafa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cafa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cafac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4cafacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cafb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4cafb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4cafb4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4cafb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cafb8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4cafb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cafbc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4cafbcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cafc0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4cafc0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4cafc4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4cafc4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cafc8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4cafc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4cafcc: 0x3e00008  jr          $ra
    ctx->pc = 0x4CAFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CAFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CAFCCu;
        // 0x4cafd0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CAFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CAFD4u;
    // 0x4cafd4: 0x0  nop
    ctx->pc = 0x4cafd4u;
    // NOP
    ctx->pc = 0x4cafd8u;
}
