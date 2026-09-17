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

// Function: sub_004CE548
// Address: 0x4ce548 - 0x4cf360
void sub_004CE548_0x4ce548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CE548_0x4ce548");
#endif

    switch (ctx->pc) {
        case 0x4ce54cu: goto label_4ce54c;
        case 0x4ce560u: goto label_4ce560;
        case 0x4ce590u: goto label_4ce590;
        case 0x4ce5a0u: goto label_4ce5a0;
        case 0x4ce5e8u: goto label_4ce5e8;
        case 0x4ce74cu: goto label_4ce74c;
        case 0x4ce8ccu: goto label_4ce8cc;
        case 0x4ce918u: goto label_4ce918;
        case 0x4cea3cu: goto label_4cea3c;
        case 0x4cea88u: goto label_4cea88;
        case 0x4ceac0u: goto label_4ceac0;
        case 0x4ceba8u: goto label_4ceba8;
        case 0x4cebf8u: goto label_4cebf8;
        case 0x4cec30u: goto label_4cec30;
        case 0x4cec74u: goto label_4cec74;
        case 0x4cecacu: goto label_4cecac;
        case 0x4ced24u: goto label_4ced24;
        case 0x4ced2cu: goto label_4ced2c;
        case 0x4ced34u: goto label_4ced34;
        case 0x4cee04u: goto label_4cee04;
        case 0x4cee0cu: goto label_4cee0c;
        case 0x4cee14u: goto label_4cee14;
        case 0x4cee84u: goto label_4cee84;
        case 0x4cef88u: goto label_4cef88;
        case 0x4cefb8u: goto label_4cefb8;
        case 0x4cf0f4u: goto label_4cf0f4;
        case 0x4cf1c8u: goto label_4cf1c8;
        case 0x4cf1e0u: goto label_4cf1e0;
        case 0x4cf23cu: goto label_4cf23c;
        case 0x4cf264u: goto label_4cf264;
        case 0x4cf2d0u: goto label_4cf2d0;
        case 0x4cf30cu: goto label_4cf30c;
        default: break;
    }

    ctx->pc = 0x4ce548u;

    // 0x4ce548: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ce548u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ce54c:
    // 0x4ce54c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ce54cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ce550: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ce550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ce554: 0x3e00008  jr          $ra
    ctx->pc = 0x4CE554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CE558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE554u;
        // 0x4ce558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CE554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CE55Cu;
    // 0x4ce55c: 0x0  nop
    ctx->pc = 0x4ce55cu;
    // NOP
label_4ce560:
    // 0x4ce560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ce560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ce564: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ce564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ce568: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ce568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ce56c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ce56cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ce570: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ce570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ce574: 0x24420f88  addiu       $v0, $v0, 0xF88
    ctx->pc = 0x4ce574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3976));
    // 0x4ce578: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4ce578u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4ce57c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4ce57cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F88u));
    // 0x4ce580: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4ce580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4ce584: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4ce584u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4ce588: 0xc12b638  jal         func_4AD8E0
    ctx->pc = 0x4CE588u;
    SET_GPR_U32(ctx, 31, 0x4CE590u);
    ctx->pc = 0x4CE58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CE588u;
    // 0x4ce58c: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD8E0u, 0x4CE588u, 0x4CE590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CE590u;
label_4ce590:
    // 0x4ce590: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4CE590u;
    {
        const bool branch_taken_0x4ce590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CE594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE590u;
        // 0x4ce594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ce590) {
            ctx->pc = 0x4CE5D8u;
            goto label_4ce5d8;
        }
    }
    ctx->pc = 0x4CE598u;
    // 0x4ce598: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4CE598u;
    SET_GPR_U32(ctx, 31, 0x4CE5A0u);
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4CE598u, 0x4CE5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CE5A0u;
label_4ce5a0:
    // 0x4ce5a0: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x4ce5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x4ce5a4: 0x24040494  addiu       $a0, $zero, 0x494
    ctx->pc = 0x4ce5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1172));
    // 0x4ce5a8: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4ce5a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ce5ac: 0xa444015e  sh          $a0, 0x15E($v0)
    ctx->pc = 0x4ce5acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 350), (uint16_t)GPR_U32(ctx, 4));
    // 0x4ce5b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ce5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ce5b4: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x4ce5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x4ce5b8: 0x260301bc  addiu       $v1, $s0, 0x1BC
    ctx->pc = 0x4ce5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 444));
    // 0x4ce5bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ce5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ce5c0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4ce5c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ce5c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ce5c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ce5c8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ce5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ce5cc: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4ce5ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ce5d0: 0x813397a  j           func_4CE5E8
    ctx->pc = 0x4CE5D0u;
    ctx->pc = 0x4CE5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CE5D0u;
    // 0x4ce5d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE5E8u;
    goto label_4ce5e8;
    ctx->pc = 0x4CE5D8u;
label_4ce5d8:
    // 0x4ce5d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ce5d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ce5dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ce5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ce5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4CE5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CE5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CE5E0u;
        // 0x4ce5e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4CE5E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4CE5E8u;
label_4ce5e8:
    // 0x4ce5e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4ce5e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4ce5ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ce5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ce5f0: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4ce5f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4ce5f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ce5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ce5f8: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4ce5f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4ce5fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4ce5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4ce600: 0x3c120073  lui         $s2, 0x73
    ctx->pc = 0x4ce600u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
    // 0x4ce604: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4ce604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4ce608: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4ce608u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4ce60c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4ce60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4ce610: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4ce610u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ce614: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4ce614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4ce618: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4ce618u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4ce61c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4ce61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4ce620: 0x3c16007f  lui         $s6, 0x7F
    ctx->pc = 0x4ce620u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)127 << 16));
    // 0x4ce624: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4ce624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4ce628: 0x26b50f94  addiu       $s5, $s5, 0xF94
    ctx->pc = 0x4ce628u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3988));
    // 0x4ce62c: 0x26730f98  addiu       $s3, $s3, 0xF98
    ctx->pc = 0x4ce62cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3992));
    // 0x4ce630: 0x26d60f9c  addiu       $s6, $s6, 0xF9C
    ctx->pc = 0x4ce630u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 3996));
    // 0x4ce634: 0x86820012  lh          $v0, 0x12($s4)
    ctx->pc = 0x4ce634u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x4ce638: 0x26310fa8  addiu       $s1, $s1, 0xFA8
    ctx->pc = 0x4ce638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4008));
    // 0x4ce63c: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x4ce63cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F94u));
    // 0x4ce640: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4ce640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ce644: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4ce644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4ce648: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x4ce648u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0F98u));
    // 0x4ce64c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ce64cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ce650: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4ce650u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ce654: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ce654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ce658: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4ce658u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4ce65c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4ce65cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4ce660: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ce660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ce664: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4ce664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ce668: 0x2652d680  addiu       $s2, $s2, -0x2980
    ctx->pc = 0x4ce668u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    // 0x4ce66c: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x4ce66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x4ce670: 0x8e2c0000  lw          $t4, 0x0($s1)
    ctx->pc = 0x4ce670u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ce674: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4ce674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4ce678: 0x8ec80000  lw          $t0, 0x0($s6)
    ctx->pc = 0x4ce678u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4ce67c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ce67cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ce680: 0x86ab0000  lh          $t3, 0x0($s5)
    ctx->pc = 0x4ce680u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ce684: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4ce684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4ce688: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4ce688u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4ce68c: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4ce68cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4ce690: 0x258d000c  addiu       $t5, $t4, 0xC
    ctx->pc = 0x4ce690u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), 12));
    // 0x4ce694: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4ce694u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4ce698: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4ce698u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4ce69c: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x4ce69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x4ce6a0: 0x866a0000  lh          $t2, 0x0($s3)
    ctx->pc = 0x4ce6a0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ce6a4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4ce6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4ce6a8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ce6a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ce6ac: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4ce6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4ce6b0: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4ce6b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4ce6b4: 0xaec80000  sw          $t0, 0x0($s6)
    ctx->pc = 0x4ce6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 8));
    // 0x4ce6b8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4ce6b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4ce6bc: 0x8d820050  lw          $v0, 0x50($t4)
    ctx->pc = 0x4ce6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 80)));
    // 0x4ce6c0: 0x86c90000  lh          $t1, 0x0($s6)
    ctx->pc = 0x4ce6c0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4ce6c4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4ce6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4ce6c8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ce6c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ce6cc: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x4ce6ccu;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4ce6d0: 0x1705825  or          $t3, $t3, $s0
    ctx->pc = 0x4ce6d0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 16));
    // 0x4ce6d4: 0x6b1824  and         $v1, $v1, $t3
    ctx->pc = 0x4ce6d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 11));
    // 0x4ce6d8: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x4ce6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x4ce6dc: 0x8d820054  lw          $v0, 0x54($t4)
    ctx->pc = 0x4ce6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 84)));
    // 0x4ce6e0: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4ce6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4ce6e4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ce6e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ce6e8: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x4ce6e8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4ce6ec: 0x1505025  or          $t2, $t2, $s0
    ctx->pc = 0x4ce6ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 16));
    // 0x4ce6f0: 0xea3824  and         $a3, $a3, $t2
    ctx->pc = 0x4ce6f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 10));
    // 0x4ce6f4: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x4ce6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x4ce6f8: 0x8d820058  lw          $v0, 0x58($t4)
    ctx->pc = 0x4ce6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 88)));
    // 0x4ce6fc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4ce6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4ce700: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ce700u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ce704: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4ce704u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4ce708: 0x1304825  or          $t1, $t1, $s0
    ctx->pc = 0x4ce708u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 16));
    // 0x4ce70c: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x4ce70cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
    // 0x4ce710: 0xaec80000  sw          $t0, 0x0($s6)
    ctx->pc = 0x4ce710u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 8));
    // 0x4ce714: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x4ce714u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ce718: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4ce718u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4ce71c: 0xa5a20000  sh          $v0, 0x0($t5)
    ctx->pc = 0x4ce71cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ce720: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4ce720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ce724: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4ce724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4ce728: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4ce728u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ce72c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4ce72cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4ce730: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4ce730u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ce734: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x4ce734u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ce738: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x4ce738u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x4ce73c: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4ce73cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ce740: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4ce740u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4ce744: 0xc12a878  jal         func_4AA1E0
    ctx->pc = 0x4CE744u;
    SET_GPR_U32(ctx, 31, 0x4CE74Cu);
    ctx->pc = 0x4CE748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CE744u;
    // 0x4ce748: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA1E0u, 0x4CE744u, 0x4CE74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CE74Cu;
label_4ce74c:
    // 0x4ce74c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4ce74cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ce750: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4ce750u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4ce754: 0x24c60f88  addiu       $a2, $a2, 0xF88
    ctx->pc = 0x4ce754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3976));
    // 0x4ce758: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4ce758u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4ce75c: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x4ce75cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x4ce760: 0x25290f90  addiu       $t1, $t1, 0xF90
    ctx->pc = 0x4ce760u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3984));
    // 0x4ce764: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4ce764u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ce768: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4ce768u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4ce76c: 0x25080f8c  addiu       $t0, $t0, 0xF8C
    ctx->pc = 0x4ce76cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3980));
    // 0x4ce770: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4ce770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4ce774: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4ce774u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4ce778: 0x34a51000  ori         $a1, $a1, 0x1000
    ctx->pc = 0x4ce778u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4096);
    // 0x4ce77c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4ce77cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ce780: 0x264c2494  addiu       $t4, $s2, 0x2494
    ctx->pc = 0x4ce780u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 9364));
    // 0x4ce784: 0x264d2498  addiu       $t5, $s2, 0x2498
    ctx->pc = 0x4ce784u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 9368));
    // 0x4ce788: 0x264b249c  addiu       $t3, $s2, 0x249C
    ctx->pc = 0x4ce788u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 9372));
    // 0x4ce78c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4ce78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ce790: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4ce790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4ce794: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4ce794u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ce798: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4ce798u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4ce79c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4ce79cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ce7a0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4ce7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ce7a4: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x4ce7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x4ce7a8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4ce7a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4ce7ac: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4ce7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4ce7b0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4ce7b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ce7b4: 0x96a40000  lhu         $a0, 0x0($s5)
    ctx->pc = 0x4ce7b4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ce7b8: 0xa6840130  sh          $a0, 0x130($s4)
    ctx->pc = 0x4ce7b8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 304), (uint16_t)GPR_U32(ctx, 4));
    // 0x4ce7bc: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x4ce7bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ce7c0: 0xa6820132  sh          $v0, 0x132($s4)
    ctx->pc = 0x4ce7c0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 306), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ce7c4: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x4ce7c4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4ce7c8: 0xa6830134  sh          $v1, 0x134($s4)
    ctx->pc = 0x4ce7c8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 308), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ce7cc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4ce7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ce7d0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4ce7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ce7d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ce7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ce7d8: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4ce7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ce7dc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4ce7dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4ce7e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ce7e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ce7e4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4ce7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4ce7e8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4ce7e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4ce7ec: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ce7ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ce7f0: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x4ce7f0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ce7f4: 0x902024  and         $a0, $a0, $s0
    ctx->pc = 0x4ce7f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 16));
    // 0x4ce7f8: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4ce7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4ce7fc: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4ce7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4ce800: 0xa685011a  sh          $a1, 0x11A($s4)
    ctx->pc = 0x4ce800u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 282), (uint16_t)GPR_U32(ctx, 5));
    // 0x4ce804: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4ce804u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ce808: 0xa682011e  sh          $v0, 0x11E($s4)
    ctx->pc = 0x4ce808u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 286), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ce80c: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x4ce80cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ce810: 0xa6830122  sh          $v1, 0x122($s4)
    ctx->pc = 0x4ce810u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 290), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ce814: 0x866a0000  lh          $t2, 0x0($s3)
    ctx->pc = 0x4ce814u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ce818: 0x86a70000  lh          $a3, 0x0($s5)
    ctx->pc = 0x4ce818u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ce81c: 0x85040000  lh          $a0, 0x0($t0)
    ctx->pc = 0x4ce81cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ce820: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4ce820u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ce824: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4ce824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ce828: 0x8a2023  subu        $a0, $a0, $t2
    ctx->pc = 0x4ce828u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x4ce82c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4ce82cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ce830: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4ce830u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4ce834: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4ce834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4ce838: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4ce838u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4ce83c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ce83cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ce840: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ce840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ce844: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4ce844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4ce848: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4ce848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4ce84c: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x4ce84cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x4ce850: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4ce850u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4ce854: 0x86c40000  lh          $a0, 0x0($s6)
    ctx->pc = 0x4ce854u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4ce858: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4ce858u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ce85c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4ce85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ce860: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4ce860u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4ce864: 0x94c70000  lhu         $a3, 0x0($a2)
    ctx->pc = 0x4ce864u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ce868: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4ce868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4ce86c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ce86cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ce870: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ce870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ce874: 0x95060000  lhu         $a2, 0x0($t0)
    ctx->pc = 0x4ce874u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ce878: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4ce878u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4ce87c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4ce87cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4ce880: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4ce880u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4ce884: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4ce884u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4ce888: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x4ce888u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ce88c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ce88cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ce890: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x4ce890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ce894: 0x8da40000  lw          $a0, 0x0($t5)
    ctx->pc = 0x4ce894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ce898: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ce898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ce89c: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x4ce89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ce8a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ce8a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ce8a4: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4ce8a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4ce8a8: 0x902025  or          $a0, $a0, $s0
    ctx->pc = 0x4ce8a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x4ce8ac: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4ce8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4ce8b0: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4ce8b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4ce8b4: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4ce8b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4ce8b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ce8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ce8bc: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4ce8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4ce8c0: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x4ce8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x4ce8c4: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4CE8C4u;
    SET_GPR_U32(ctx, 31, 0x4CE8CCu);
    ctx->pc = 0x4CE8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CE8C4u;
    // 0x4ce8c8: 0xad620000  sw          $v0, 0x0($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4CE8C4u, 0x4CE8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CE8CCu;
label_4ce8cc:
    // 0x4ce8cc: 0x964224a0  lhu         $v0, 0x24A0($s2)
    ctx->pc = 0x4ce8ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 9376)));
    // 0x4ce8d0: 0x268501bc  addiu       $a1, $s4, 0x1BC
    ctx->pc = 0x4ce8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 444));
    // 0x4ce8d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4ce8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ce8d8: 0xa6820160  sh          $v0, 0x160($s4)
    ctx->pc = 0x4ce8d8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 352), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ce8dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ce8dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ce8e0: 0x964324a2  lhu         $v1, 0x24A2($s2)
    ctx->pc = 0x4ce8e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 9378)));
    // 0x4ce8e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ce8e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ce8e8: 0xa6830162  sh          $v1, 0x162($s4)
    ctx->pc = 0x4ce8e8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 354), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ce8ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ce8ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ce8f0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ce8f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ce8f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ce8f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ce8f8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ce8f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ce8fc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ce8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ce900: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ce900u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ce904: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4ce904u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ce908: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4ce908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ce90c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4ce90cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ce910: 0x8133a46  j           func_4CE918
    ctx->pc = 0x4CE910u;
    ctx->pc = 0x4CE914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CE910u;
    // 0x4ce914: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE918u;
    goto label_4ce918;
    ctx->pc = 0x4CE918u;
label_4ce918:
    // 0x4ce918: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ce918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ce91c: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4ce91cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4ce920: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ce920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ce924: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4ce924u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4ce928: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ce928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ce92c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ce92cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ce930: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ce930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ce934: 0x25ef0f94  addiu       $t7, $t7, 0xF94
    ctx->pc = 0x4ce934u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 3988));
    // 0x4ce938: 0x3c0dffff  lui         $t5, 0xFFFF
    ctx->pc = 0x4ce938u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)65535 << 16));
    // 0x4ce93c: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4ce93cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4ce940: 0x8622011a  lh          $v0, 0x11A($s1)
    ctx->pc = 0x4ce940u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 282)));
    // 0x4ce944: 0x25ce0f98  addiu       $t6, $t6, 0xF98
    ctx->pc = 0x4ce944u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 3992));
    // 0x4ce948: 0x8de50000  lw          $a1, 0x0($t7)
    ctx->pc = 0x4ce948u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0F94u));
    // 0x4ce94c: 0x26100f9c  addiu       $s0, $s0, 0xF9C
    ctx->pc = 0x4ce94cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3996));
    // 0x4ce950: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4ce950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4ce954: 0x8dc60000  lw          $a2, 0x0($t6)
    ctx->pc = 0x4ce954u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0F98u));
    // 0x4ce958: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ce958u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ce95c: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4ce95cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4ce960: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4ce960u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4ce964: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ce964u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ce968: 0xade50000  sw          $a1, 0x0($t7)
    ctx->pc = 0x4ce968u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 5));
    // 0x4ce96c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ce96cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ce970: 0x256b0f8c  addiu       $t3, $t3, 0xF8C
    ctx->pc = 0x4ce970u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3980));
    // 0x4ce974: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4ce974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4ce978: 0x8622011e  lh          $v0, 0x11E($s1)
    ctx->pc = 0x4ce978u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 286)));
    // 0x4ce97c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x4ce97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x4ce980: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4ce980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ce984: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4ce984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4ce988: 0x85ea0000  lh          $t2, 0x0($t7)
    ctx->pc = 0x4ce988u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4ce98c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4ce98cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4ce990: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ce990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ce994: 0xadc60000  sw          $a2, 0x0($t6)
    ctx->pc = 0x4ce994u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 6));
    // 0x4ce998: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ce998u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ce99c: 0x86220122  lh          $v0, 0x122($s1)
    ctx->pc = 0x4ce99cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 290)));
    // 0x4ce9a0: 0x8d6c0000  lw          $t4, 0x0($t3)
    ctx->pc = 0x4ce9a0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ce9a4: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4ce9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4ce9a8: 0x85c90000  lh          $t1, 0x0($t6)
    ctx->pc = 0x4ce9a8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ce9ac: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4ce9acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4ce9b0: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x4ce9b0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x4ce9b4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4ce9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4ce9b8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ce9b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ce9bc: 0x1836024  and         $t4, $t4, $v1
    ctx->pc = 0x4ce9bcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 3));
    // 0x4ce9c0: 0x86220130  lh          $v0, 0x130($s1)
    ctx->pc = 0x4ce9c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x4ce9c4: 0x3588ffff  ori         $t0, $t4, 0xFFFF
    ctx->pc = 0x4ce9c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x4ce9c8: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x4ce9c8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ce9cc: 0x1425023  subu        $t2, $t2, $v0
    ctx->pc = 0x4ce9ccu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x4ce9d0: 0x14d5025  or          $t2, $t2, $t5
    ctx->pc = 0x4ce9d0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 13));
    // 0x4ce9d4: 0xaa2824  and         $a1, $a1, $t2
    ctx->pc = 0x4ce9d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 10));
    // 0x4ce9d8: 0xade50000  sw          $a1, 0x0($t7)
    ctx->pc = 0x4ce9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 5));
    // 0x4ce9dc: 0x86220132  lh          $v0, 0x132($s1)
    ctx->pc = 0x4ce9dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 306)));
    // 0x4ce9e0: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4ce9e0u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4ce9e4: 0x12d4825  or          $t1, $t1, $t5
    ctx->pc = 0x4ce9e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 13));
    // 0x4ce9e8: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x4ce9e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x4ce9ec: 0xadc60000  sw          $a2, 0x0($t6)
    ctx->pc = 0x4ce9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 6));
    // 0x4ce9f0: 0x86230134  lh          $v1, 0x134($s1)
    ctx->pc = 0x4ce9f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 308)));
    // 0x4ce9f4: 0xad6c0000  sw          $t4, 0x0($t3)
    ctx->pc = 0x4ce9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 12));
    // 0x4ce9f8: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x4ce9f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4ce9fc: 0x81620001  lb          $v0, 0x1($t3)
    ctx->pc = 0x4ce9fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x4cea00: 0xed3825  or          $a3, $a3, $t5
    ctx->pc = 0x4cea00u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 13));
    // 0x4cea04: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4cea04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4cea08: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4cea08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4cea0c: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4cea0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x4cea10: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4cea10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4cea14: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4cea14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cea18: 0xad680000  sw          $t0, 0x0($t3)
    ctx->pc = 0x4cea18u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 8));
    // 0x4cea1c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4cea1cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4cea20: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4cea20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4cea24: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x4cea24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x4cea28: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x4cea28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x4cea2c: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4cea2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4cea30: 0xad680000  sw          $t0, 0x0($t3)
    ctx->pc = 0x4cea30u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 8));
    // 0x4cea34: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4CEA34u;
    SET_GPR_U32(ctx, 31, 0x4CEA3Cu);
    ctx->pc = 0x4CEA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEA34u;
    // 0x4cea38: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4CEA34u, 0x4CEA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEA3Cu;
label_4cea3c:
    // 0x4cea3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4cea3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cea40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4CEA40u;
    {
        const bool branch_taken_0x4cea40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CEA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CEA40u;
        // 0x4cea44: 0x262301bc  addiu       $v1, $s1, 0x1BC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cea40) {
            ctx->pc = 0x4CEA60u;
            goto label_4cea60;
        }
    }
    ctx->pc = 0x4CEA48u;
    // 0x4cea48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cea48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cea4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cea4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cea50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cea50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cea54: 0x8133b0c  j           func_4CEC30
    ctx->pc = 0x4CEA54u;
    ctx->pc = 0x4CEA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEA54u;
    // 0x4cea58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CEC30u;
    goto label_4cec30;
    ctx->pc = 0x4CEA5Cu;
    // 0x4cea5c: 0x0  nop
    ctx->pc = 0x4cea5cu;
    // NOP
label_4cea60:
    // 0x4cea60: 0xa620015c  sh          $zero, 0x15C($s1)
    ctx->pc = 0x4cea60u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 348), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cea64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4cea64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cea68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4cea68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cea6c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4cea6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4cea70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4cea70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cea74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4cea74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cea78: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4cea78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cea7c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4cea7cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cea80: 0x8133b0c  j           func_4CEC30
    ctx->pc = 0x4CEA80u;
    ctx->pc = 0x4CEA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEA80u;
    // 0x4cea84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CEC30u;
    goto label_4cec30;
    ctx->pc = 0x4CEA88u;
label_4cea88:
    // 0x4cea88: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4cea88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cea8c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cea8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cea90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4cea90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4cea94: 0x244501bc  addiu       $a1, $v0, 0x1BC
    ctx->pc = 0x4cea94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
    // 0x4cea98: 0xa440015e  sh          $zero, 0x15E($v0)
    ctx->pc = 0x4cea98u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cea9c: 0xa4400164  sh          $zero, 0x164($v0)
    ctx->pc = 0x4cea9cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 356), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ceaa0: 0xa4400166  sh          $zero, 0x166($v0)
    ctx->pc = 0x4ceaa0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 358), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ceaa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ceaa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ceaa8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4ceaa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ceaac: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x4ceaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x4ceab0: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x4ceab0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ceab4: 0x8133ab0  j           func_4CEAC0
    ctx->pc = 0x4CEAB4u;
    ctx->pc = 0x4CEAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEAB4u;
    // 0x4ceab8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CEAC0u;
    goto label_4ceac0;
    ctx->pc = 0x4CEABCu;
    // 0x4ceabc: 0x0  nop
    ctx->pc = 0x4ceabcu;
    // NOP
label_4ceac0:
    // 0x4ceac0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ceac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ceac4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4ceac4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ceac8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ceac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ceacc: 0x252a015e  addiu       $t2, $t1, 0x15E
    ctx->pc = 0x4ceaccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 350));
    // 0x4cead0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4cead0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4cead4: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4cead4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4cead8: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4cead8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4ceadc: 0x246d0f88  addiu       $t5, $v1, 0xF88
    ctx->pc = 0x4ceadcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 3976));
    // 0x4ceae0: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ceae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4ceae4: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x4ceae4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
    // 0x4ceae8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4ceae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4ceaec: 0x246c0fac  addiu       $t4, $v1, 0xFAC
    ctx->pc = 0x4ceaecu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 4012));
    // 0x4ceaf0: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x4ceaf0u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ceaf4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ceaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ceaf8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ceaf8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ceafc: 0x24a572f8  addiu       $a1, $a1, 0x72F8
    ctx->pc = 0x4ceafcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29432));
    // 0x4ceb00: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4ceb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ceb04: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ceb04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ceb08: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4ceb08u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4ceb0c: 0x25280166  addiu       $t0, $t1, 0x166
    ctx->pc = 0x4ceb0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 358));
    // 0x4ceb10: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ceb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ceb14: 0x252b01bc  addiu       $t3, $t1, 0x1BC
    ctx->pc = 0x4ceb14u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 444));
    // 0x4ceb18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ceb18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ceb1c: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x4ceb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
    // 0x4ceb20: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4ceb20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ceb24: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ceb24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ceb28: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4ceb28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4ceb2c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ceb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ceb30: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x4ceb30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4ceb34: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4ceb34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ceb38: 0x24a70002  addiu       $a3, $a1, 0x2
    ctx->pc = 0x4ceb38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4ceb3c: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x4ceb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x4ceb40: 0x4600011  bltz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x4CEB40u;
    {
        const bool branch_taken_0x4ceb40 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4CEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CEB40u;
        // 0x4ceb44: 0x94a60000  lhu         $a2, 0x0($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ceb40) {
            ctx->pc = 0x4CEB88u;
            goto label_4ceb88;
        }
    }
    ctx->pc = 0x4CEB48u;
    // 0x4ceb48: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x4ceb48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ceb4c: 0x30c3ffff  andi        $v1, $a2, 0xFFFF
    ctx->pc = 0x4ceb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x4ceb50: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4ceb50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4ceb54: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4CEB54u;
    {
        const bool branch_taken_0x4ceb54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CEB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CEB54u;
        // 0x4ceb58: 0xad870000  sw          $a3, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ceb54) {
            ctx->pc = 0x4CEB78u;
            goto label_4ceb78;
        }
    }
    ctx->pc = 0x4CEB5Cu;
    // 0x4ceb5c: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4ceb5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ceb60: 0x24a30004  addiu       $v1, $a1, 0x4
    ctx->pc = 0x4ceb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4ceb64: 0xa5220164  sh          $v0, 0x164($t1)
    ctx->pc = 0x4ceb64u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 356), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ceb68: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x4ceb68u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x4ceb6c: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4ceb6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ceb70: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4ceb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4ceb74: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4ceb74u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
label_4ceb78:
    // 0x4ceb78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ceb78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ceb7c: 0x8133b0c  j           func_4CEC30
    ctx->pc = 0x4CEB7Cu;
    ctx->pc = 0x4CEB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEB7Cu;
    // 0x4ceb80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CEC30u;
    goto label_4cec30;
    ctx->pc = 0x4CEB84u;
    // 0x4ceb84: 0x0  nop
    ctx->pc = 0x4ceb84u;
    // NOP
label_4ceb88:
    // 0x4ceb88: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x4ceb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x4ceb8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ceb8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ceb90: 0xa5430000  sh          $v1, 0x0($t2)
    ctx->pc = 0x4ceb90u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ceb94: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4ceb94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ceb98: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4ceb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4ceb9c: 0xa5620000  sh          $v0, 0x0($t3)
    ctx->pc = 0x4ceb9cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ceba0: 0x8133b0c  j           func_4CEC30
    ctx->pc = 0x4CEBA0u;
    ctx->pc = 0x4CEBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEBA0u;
    // 0x4ceba4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CEC30u;
    goto label_4cec30;
    ctx->pc = 0x4CEBA8u;
label_4ceba8:
    // 0x4ceba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ceba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cebac: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4cebacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cebb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4cebb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4cebb4: 0x244601bc  addiu       $a2, $v0, 0x1BC
    ctx->pc = 0x4cebb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 444));
    // 0x4cebb8: 0x2442015e  addiu       $v0, $v0, 0x15E
    ctx->pc = 0x4cebb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 350));
    // 0x4cebbc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4cebbcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cebc0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4cebc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4cebc4: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x4cebc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4cebc8: 0x4a00005  bltz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4CEBC8u;
    {
        const bool branch_taken_0x4cebc8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4CEBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4CEBC8u;
        // 0x4cebcc: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cebc8) {
            ctx->pc = 0x4CEBE0u;
            goto label_4cebe0;
        }
    }
    ctx->pc = 0x4CEBD0u;
    // 0x4cebd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cebd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cebd4: 0x8133b0c  j           func_4CEC30
    ctx->pc = 0x4CEBD4u;
    ctx->pc = 0x4CEBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEBD4u;
    // 0x4cebd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CEC30u;
    goto label_4cec30;
    ctx->pc = 0x4CEBDCu;
    // 0x4cebdc: 0x0  nop
    ctx->pc = 0x4cebdcu;
    // NOP
label_4cebe0:
    // 0x4cebe0: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4cebe0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cebe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cebe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cebe8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4cebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cebec: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4cebecu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cebf0: 0x8133b0c  j           func_4CEC30
    ctx->pc = 0x4CEBF0u;
    ctx->pc = 0x4CEBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEBF0u;
    // 0x4cebf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CEC30u;
    goto label_4cec30;
    ctx->pc = 0x4CEBF8u;
label_4cebf8:
    // 0x4cebf8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x4cebf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cebfc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cebfcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cec00: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x4cec00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x4cec04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4cec04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4cec08: 0xa465015c  sh          $a1, 0x15C($v1)
    ctx->pc = 0x4cec08u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 348), (uint16_t)GPR_U32(ctx, 5));
    // 0x4cec0c: 0x246601bc  addiu       $a2, $v1, 0x1BC
    ctx->pc = 0x4cec0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 444));
    // 0x4cec10: 0xa465015a  sh          $a1, 0x15A($v1)
    ctx->pc = 0x4cec10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 346), (uint16_t)GPR_U32(ctx, 5));
    // 0x4cec14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cec14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cec18: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4cec18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cec1c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4cec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cec20: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4cec20u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cec24: 0x8133b0c  j           func_4CEC30
    ctx->pc = 0x4CEC24u;
    ctx->pc = 0x4CEC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEC24u;
    // 0x4cec28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CEC30u;
    goto label_4cec30;
    ctx->pc = 0x4CEC2Cu;
    // 0x4cec2c: 0x0  nop
    ctx->pc = 0x4cec2cu;
    // NOP
label_4cec30:
    // 0x4cec30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4cec30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4cec34: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x4cec34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x4cec38: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4cec38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cec3c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4cec3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4cec40: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4cec40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4cec44: 0x26d10132  addiu       $s1, $s6, 0x132
    ctx->pc = 0x4cec44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 306));
    // 0x4cec48: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4cec48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4cec4c: 0x26d20134  addiu       $s2, $s6, 0x134
    ctx->pc = 0x4cec4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 308));
    // 0x4cec50: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x4cec50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x4cec54: 0x26d30130  addiu       $s3, $s6, 0x130
    ctx->pc = 0x4cec54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 304));
    // 0x4cec58: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4cec58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4cec5c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x4cec5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x4cec60: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x4cec60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x4cec64: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x4cec64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x4cec68: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x4cec68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x4cec6c: 0xc127bf2  jal         func_49EFC8
    ctx->pc = 0x4CEC6Cu;
    SET_GPR_U32(ctx, 31, 0x4CEC74u);
    ctx->pc = 0x4CEC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEC6Cu;
    // 0x4cec70: 0x3c15ffff  lui         $s5, 0xFFFF (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EFC8u, 0x4CEC6Cu, 0x4CEC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEC74u;
label_4cec74:
    // 0x4cec74: 0x96c30160  lhu         $v1, 0x160($s6)
    ctx->pc = 0x4cec74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 352)));
    // 0x4cec78: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4cec78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4cec7c: 0x2442fb20  addiu       $v0, $v0, -0x4E0
    ctx->pc = 0x4cec7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966048));
    // 0x4cec80: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4cec80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x4cec84: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x4cec84u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72FB20u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72FB20u, _value); } while (0);
    // 0x4cec88: 0x26c30010  addiu       $v1, $s6, 0x10
    ctx->pc = 0x4cec88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x4cec8c: 0x26c50014  addiu       $a1, $s6, 0x14
    ctx->pc = 0x4cec8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    // 0x4cec90: 0x24c6fb22  addiu       $a2, $a2, -0x4DE
    ctx->pc = 0x4cec90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966050));
    // 0x4cec94: 0x96c20162  lhu         $v0, 0x162($s6)
    ctx->pc = 0x4cec94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 354)));
    // 0x4cec98: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4cec98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cec9c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x4cec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x4ceca0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x4ceca0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x4ceca4: 0xc12b95c  jal         func_4AE570
    ctx->pc = 0x4CECA4u;
    SET_GPR_U32(ctx, 31, 0x4CECACu);
    ctx->pc = 0x4CECA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CECA4u;
    // 0x4ceca8: 0xa4c20000  sh          $v0, 0x0($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE570u, 0x4CECA4u, 0x4CECACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CECACu;
label_4cecac:
    // 0x4cecac: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4cecacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4cecb0: 0x245e0f94  addiu       $fp, $v0, 0xF94
    ctx->pc = 0x4cecb0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 3988));
    // 0x4cecb4: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x4cecb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cecb8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4cecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0F94u));
    // 0x4cecbc: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4cecbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4cecc0: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4cecc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x4cecc4: 0x24970f98  addiu       $s7, $a0, 0xF98
    ctx->pc = 0x4cecc4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 3992));
    // 0x4cecc8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4cecc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ceccc: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x4cecccu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0F98u));
    // 0x4cecd0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cecd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cecd4: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4cecd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4cecd8: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x4cecd8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x4cecdc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cecdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cece0: 0x24d00f9c  addiu       $s0, $a2, 0xF9C
    ctx->pc = 0x4cece0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 3996));
    // 0x4cece4: 0x26c60164  addiu       $a2, $s6, 0x164
    ctx->pc = 0x4cece4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 356));
    // 0x4cece8: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4cece8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cecec: 0x26c70018  addiu       $a3, $s6, 0x18
    ctx->pc = 0x4cececu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
    // 0x4cecf0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4cecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F9Cu));
    // 0x4cecf4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4cecf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cecf8: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4cecf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4cecfc: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x4cecfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x4ced00: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4ced00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4ced04: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x4ced04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x4ced08: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x4ced08u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
    // 0x4ced0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ced0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ced10: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4ced10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4ced14: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4ced14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4ced18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ced18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ced1c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CED1Cu;
    SET_GPR_U32(ctx, 31, 0x4CED24u);
    ctx->pc = 0x4CED20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CED1Cu;
    // 0x4ced20: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CED1Cu, 0x4CED24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CED24u;
label_4ced24:
    // 0x4ced24: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CED24u;
    SET_GPR_U32(ctx, 31, 0x4CED2Cu);
    ctx->pc = 0x4CED28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CED24u;
    // 0x4ced28: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CED24u, 0x4CED2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CED2Cu;
label_4ced2c:
    // 0x4ced2c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CED2Cu;
    SET_GPR_U32(ctx, 31, 0x4CED34u);
    ctx->pc = 0x4CED30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CED2Cu;
    // 0x4ced30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CED2Cu, 0x4CED34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CED34u;
label_4ced34:
    // 0x4ced34: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x4ced34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4ced38: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x4ced38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ced3c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4ced3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ced40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ced40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ced44: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x4ced44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4ced48: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4ced48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ced4c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4ced4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ced50: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ced50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ced54: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4ced54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4ced58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ced58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ced5c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ced5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ced60: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x4ced60u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x4ced64: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x4ced64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4ced68: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4ced68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ced6c: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4ced6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4ced70: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4ced70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4ced74: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x4ced74u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
    // 0x4ced78: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x4ced78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ced7c: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4ced7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ced80: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4ced80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4ced84: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4ced84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4ced88: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4ced88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4ced8c: 0x8ec20124  lw          $v0, 0x124($s6)
    ctx->pc = 0x4ced8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 292)));
    // 0x4ced90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ced90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ced94: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x4ced94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x4ced98: 0x8ec20128  lw          $v0, 0x128($s6)
    ctx->pc = 0x4ced98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 296)));
    // 0x4ced9c: 0x87c30000  lh          $v1, 0x0($fp)
    ctx->pc = 0x4ced9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4ceda0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4ceda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4ceda4: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x4ceda4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
    // 0x4ceda8: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4ceda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x4cedac: 0x8ec2012c  lw          $v0, 0x12C($s6)
    ctx->pc = 0x4cedacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 300)));
    // 0x4cedb0: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4cedb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4cedb4: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4cedb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4cedb8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4cedb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cedbc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4cedbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cedc0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4cedc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4cedc4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cedc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cedc8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4cedc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4cedcc: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x4cedccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4cedd0: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4cedd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cedd4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4cedd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cedd8: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4cedd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4ceddc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ceddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cede0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cede0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cede4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4cede4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4cede8: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4cede8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cedec: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4cedecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cedf0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cedf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cedf4: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4cedf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4cedf8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4cedf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4cedfc: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CEDFCu;
    SET_GPR_U32(ctx, 31, 0x4CEE04u);
    ctx->pc = 0x4CEE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEDFCu;
    // 0x4cee00: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CEDFCu, 0x4CEE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEE04u;
label_4cee04:
    // 0x4cee04: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CEE04u;
    SET_GPR_U32(ctx, 31, 0x4CEE0Cu);
    ctx->pc = 0x4CEE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEE04u;
    // 0x4cee08: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CEE04u, 0x4CEE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEE0Cu;
label_4cee0c:
    // 0x4cee0c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CEE0Cu;
    SET_GPR_U32(ctx, 31, 0x4CEE14u);
    ctx->pc = 0x4CEE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEE0Cu;
    // 0x4cee10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CEE0Cu, 0x4CEE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEE14u;
label_4cee14:
    // 0x4cee14: 0x97c20000  lhu         $v0, 0x0($fp)
    ctx->pc = 0x4cee14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4cee18: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4cee18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cee1c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4cee1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cee20: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x4cee20u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cee24: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4cee24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cee28: 0x96e20000  lhu         $v0, 0x0($s7)
    ctx->pc = 0x4cee28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cee2c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4cee2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cee30: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4cee30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cee34: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x4cee34u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cee38: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x4cee38u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4cee3c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x4cee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4cee40: 0xf53825  or          $a3, $a3, $s5
    ctx->pc = 0x4cee40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 21));
    // 0x4cee44: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x4cee44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cee48: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4cee48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4cee4c: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x4cee4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cee50: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4cee50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4cee54: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cee54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cee58: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x4cee58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x4cee5c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4cee5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4cee60: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4cee60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cee64: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4cee64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4cee68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cee68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cee6c: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x4cee6cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
    // 0x4cee70: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4cee70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cee74: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4cee74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4cee78: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4cee78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4cee7c: 0xc12a8b8  jal         func_4AA2E0
    ctx->pc = 0x4CEE7Cu;
    SET_GPR_U32(ctx, 31, 0x4CEE84u);
    ctx->pc = 0x4CEE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEE7Cu;
    // 0x4cee80: 0xae080000  sw          $t0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AA2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AA2E0u, 0x4CEE7Cu, 0x4CEE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEE84u;
label_4cee84:
    // 0x4cee84: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4cee84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4cee88: 0x8c4c0fa8  lw          $t4, 0xFA8($v0)
    ctx->pc = 0x4cee88u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x7F0FA8u));
    // 0x4cee8c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4cee8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4cee90: 0x87c40000  lh          $a0, 0x0($fp)
    ctx->pc = 0x4cee90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4cee94: 0x24b40f88  addiu       $s4, $a1, 0xF88
    ctx->pc = 0x4cee94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 3976));
    // 0x4cee98: 0x8d820050  lw          $v0, 0x50($t4)
    ctx->pc = 0x4cee98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 80)));
    // 0x4cee9c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4cee9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ceea0: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x4ceea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4ceea4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4ceea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ceea8: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x4ceea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4ceeac: 0x86e90000  lh          $t1, 0x0($s7)
    ctx->pc = 0x4ceeacu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4ceeb0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ceeb0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ceeb4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ceeb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ceeb8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4ceeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4ceebc: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x4ceebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4ceec0: 0x952025  or          $a0, $a0, $s5
    ctx->pc = 0x4ceec0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 21));
    // 0x4ceec4: 0x860b0000  lh          $t3, 0x0($s0)
    ctx->pc = 0x4ceec4u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ceec8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4ceec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4ceecc: 0x8e0a0000  lw          $t2, 0x0($s0)
    ctx->pc = 0x4ceeccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ceed0: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x4ceed0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x4ceed4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ceed4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ceed8: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4ceed8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4ceedc: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4ceedcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4ceee0: 0x25080f8c  addiu       $t0, $t0, 0xF8C
    ctx->pc = 0x4ceee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3980));
    // 0x4ceee4: 0x8d820054  lw          $v0, 0x54($t4)
    ctx->pc = 0x4ceee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 84)));
    // 0x4ceee8: 0x97c30000  lhu         $v1, 0x0($fp)
    ctx->pc = 0x4ceee8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4ceeec: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x4ceeecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4ceef0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ceef0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ceef4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ceef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ceef8: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x4ceef8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4ceefc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ceefcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cef00: 0x1354825  or          $t1, $t1, $s5
    ctx->pc = 0x4cef00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 21));
    // 0x4cef04: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x4cef04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
    // 0x4cef08: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x4cef08u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
    // 0x4cef0c: 0x8d820058  lw          $v0, 0x58($t4)
    ctx->pc = 0x4cef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 88)));
    // 0x4cef10: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x4cef10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4cef14: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cef14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cef18: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x4cef18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4cef1c: 0x1755825  or          $t3, $t3, $s5
    ctx->pc = 0x4cef1cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 21));
    // 0x4cef20: 0x14b5024  and         $t2, $t2, $t3
    ctx->pc = 0x4cef20u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 11));
    // 0x4cef24: 0xae0a0000  sw          $t2, 0x0($s0)
    ctx->pc = 0x4cef24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 10));
    // 0x4cef28: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4cef28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cef2c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4cef2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cef30: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4cef30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4cef34: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cef34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cef38: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4cef38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4cef3c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x4cef3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4cef40: 0x96e30000  lhu         $v1, 0x0($s7)
    ctx->pc = 0x4cef40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cef44: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4cef44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cef48: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4cef48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4cef4c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cef4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cef50: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4cef50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4cef54: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cef54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cef58: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4cef58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4cef5c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4cef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cef60: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4cef60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cef64: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4cef64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cef68: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4cef68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4cef6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cef6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cef70: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4cef70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4cef74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4cef74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4cef78: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4cef78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4cef7c: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x4cef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4cef80: 0xc12b6ea  jal         func_4ADBA8
    ctx->pc = 0x4CEF80u;
    SET_GPR_U32(ctx, 31, 0x4CEF88u);
    ctx->pc = 0x4CEF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEF80u;
    // 0x4cef84: 0x8ee50000  lw          $a1, 0x0($s7) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADBA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADBA8u, 0x4CEF80u, 0x4CEF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEF88u;
label_4cef88:
    // 0x4cef88: 0x96850000  lhu         $a1, 0x0($s4)
    ctx->pc = 0x4cef88u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cef8c: 0x26c60120  addiu       $a2, $s6, 0x120
    ctx->pc = 0x4cef8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 288));
    // 0x4cef90: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4cef90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cef94: 0xa6c50118  sh          $a1, 0x118($s6)
    ctx->pc = 0x4cef94u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 280), (uint16_t)GPR_U32(ctx, 5));
    // 0x4cef98: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4cef98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4cef9c: 0x24a50f8c  addiu       $a1, $a1, 0xF8C
    ctx->pc = 0x4cef9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3980));
    // 0x4cefa0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4cefa0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7F0F8Cu));
    // 0x4cefa4: 0xa6c3011c  sh          $v1, 0x11C($s6)
    ctx->pc = 0x4cefa4u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 284), (uint16_t)GPR_U32(ctx, 3));
    // 0x4cefa8: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4cefa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cefac: 0x24420444  addiu       $v0, $v0, 0x444
    ctx->pc = 0x4cefacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1092));
    // 0x4cefb0: 0xc127e84  jal         func_49FA10
    ctx->pc = 0x4CEFB0u;
    SET_GPR_U32(ctx, 31, 0x4CEFB8u);
    ctx->pc = 0x4CEFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEFB0u;
    // 0x4cefb4: 0xa4c20000  sh          $v0, 0x0($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49FA10u, 0x4CEFB0u, 0x4CEFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CEFB8u;
label_4cefb8:
    // 0x4cefb8: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x4cefb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4cefbc: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4cefbcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4cefc0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x4CEFC0u;
    {
        const bool branch_taken_0x4cefc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cefc0) {
            ctx->pc = 0x4CEFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4CEFC0u;
            // 0x4cefc4: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4CF000u;
            goto label_4cf000;
        }
    }
    ctx->pc = 0x4CEFC8u;
    // 0x4cefc8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4cefc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cefcc: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4cefccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4cefd0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4cefd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cefd4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4cefd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cefd8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4cefd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cefdc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4cefdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4cefe0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4cefe0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cefe4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4cefe4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4cefe8: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x4cefe8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4cefec: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x4cefecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4ceff0: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x4ceff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4ceff4: 0x8133cd2  j           func_4CF348
    ctx->pc = 0x4CEFF4u;
    ctx->pc = 0x4CEFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CEFF4u;
    // 0x4ceff8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CF348u;
    goto label_4cf348;
    ctx->pc = 0x4CEFFCu;
    // 0x4ceffc: 0x0  nop
    ctx->pc = 0x4ceffcu;
    // NOP
label_4cf000:
    // 0x4cf000: 0x3c0b0054  lui         $t3, 0x54
    ctx->pc = 0x4cf000u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)84 << 16));
    // 0x4cf004: 0x24590fa0  addiu       $t9, $v0, 0xFA0
    ctx->pc = 0x4cf004u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 4000));
    // 0x4cf008: 0x256b72d0  addiu       $t3, $t3, 0x72D0
    ctx->pc = 0x4cf008u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 29392));
    // 0x4cf00c: 0xaf2b0000  sw          $t3, 0x0($t9)
    ctx->pc = 0x4cf00cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 11));
    // 0x4cf010: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x4cf010u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf014: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4cf014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf018: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x4cf018u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf01c: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x4cf01cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4cf020: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x4cf020u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf024: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4cf024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cf028: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4cf028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf02c: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4cf02cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cf030: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4cf030u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4cf034: 0x24e70f90  addiu       $a3, $a3, 0xF90
    ctx->pc = 0x4cf034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3984));
    // 0x4cf038: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cf038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cf03c: 0x8fcf0000  lw          $t7, 0x0($fp)
    ctx->pc = 0x4cf03cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4cf040: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4cf040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4cf044: 0x8eed0000  lw          $t5, 0x0($s7)
    ctx->pc = 0x4cf044u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cf048: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cf048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cf04c: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x4cf04cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cf050: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4cf050u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4cf054: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cf054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cf058: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x4cf058u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x4cf05c: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x4cf05cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x4cf060: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4cf060u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cf064: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x4cf064u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x4cf068: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4cf068u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4cf06c: 0x24c60f8c  addiu       $a2, $a2, 0xF8C
    ctx->pc = 0x4cf06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3980));
    // 0x4cf070: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4cf070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4cf074: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4cf074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4cf078: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cf078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cf07c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4cf07cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4cf080: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cf080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cf084: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4cf084u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cf088: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4cf088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4cf08c: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4cf08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4cf090: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cf090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cf094: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4cf094u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4cf098: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4cf098u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cf09c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4cf09cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4cf0a0: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4cf0a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4cf0a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4cf0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4cf0a8: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x4cf0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4cf0ac: 0x24510002  addiu       $s1, $v0, 0x2
    ctx->pc = 0x4cf0acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4cf0b0: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x4cf0b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4cf0b4: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4cf0b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4cf0b8: 0x24530006  addiu       $s3, $v0, 0x6
    ctx->pc = 0x4cf0b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x4cf0bc: 0x864b0000  lh          $t3, 0x0($s2)
    ctx->pc = 0x4cf0bcu;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4cf0c0: 0x844c0000  lh          $t4, 0x0($v0)
    ctx->pc = 0x4cf0c0u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cf0c4: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4cf0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x4cf0c8: 0x1755825  or          $t3, $t3, $s5
    ctx->pc = 0x4cf0c8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 21));
    // 0x4cf0cc: 0x1a36824  and         $t5, $t5, $v1
    ctx->pc = 0x4cf0ccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & GPR_U64(ctx, 3));
    // 0x4cf0d0: 0x1956025  or          $t4, $t4, $s5
    ctx->pc = 0x4cf0d0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 21));
    // 0x4cf0d4: 0x1cb7024  and         $t6, $t6, $t3
    ctx->pc = 0x4cf0d4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 11));
    // 0x4cf0d8: 0x1ec7824  and         $t7, $t7, $t4
    ctx->pc = 0x4cf0d8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 12));
    // 0x4cf0dc: 0xaeed0000  sw          $t5, 0x0($s7)
    ctx->pc = 0x4cf0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 13));
    // 0x4cf0e0: 0xafcf0000  sw          $t7, 0x0($fp)
    ctx->pc = 0x4cf0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 15));
    // 0x4cf0e4: 0xae0e0000  sw          $t6, 0x0($s0)
    ctx->pc = 0x4cf0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 14));
    // 0x4cf0e8: 0xaf330000  sw          $s3, 0x0($t9)
    ctx->pc = 0x4cf0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 19));
    // 0x4cf0ec: 0xc12b7ee  jal         func_4ADFB8
    ctx->pc = 0x4CF0ECu;
    SET_GPR_U32(ctx, 31, 0x4CF0F4u);
    ctx->pc = 0x4CF0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF0ECu;
    // 0x4cf0f0: 0x7fb90010  sq          $t9, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADFB8u, 0x4CF0ECu, 0x4CF0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF0F4u;
label_4cf0f4:
    // 0x4cf0f4: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x4cf0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4cf0f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4cf0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cf0fc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cf0fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cf100: 0x86e60000  lh          $a2, 0x0($s7)
    ctx->pc = 0x4cf100u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cf104: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4cf104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4cf108: 0x87c30000  lh          $v1, 0x0($fp)
    ctx->pc = 0x4cf108u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4cf10c: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x4cf10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4cf110: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x4cf110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cf114: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cf114u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cf118: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x4cf118u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cf11c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4cf11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4cf120: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cf120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cf124: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4cf124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x4cf128: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4cf128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4cf12c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x4cf12cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x4cf130: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x4cf130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4cf134: 0x7bb90010  lq          $t9, 0x10($sp)
    ctx->pc = 0x4cf134u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4cf138: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4cf138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4cf13c: 0x8f280000  lw          $t0, 0x0($t9)
    ctx->pc = 0x4cf13cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4cf140: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x4cf140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4cf144: 0x97c90000  lhu         $t1, 0x0($fp)
    ctx->pc = 0x4cf144u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4cf148: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cf148u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cf14c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4cf14cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cf150: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4cf150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4cf154: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4cf154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cf158: 0xd53025  or          $a2, $a2, $s5
    ctx->pc = 0x4cf158u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    // 0x4cf15c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cf15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cf160: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4cf160u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4cf164: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4cf164u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x4cf168: 0xaee50000  sw          $a1, 0x0($s7)
    ctx->pc = 0x4cf168u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 5));
    // 0x4cf16c: 0x24c6d680  addiu       $a2, $a2, -0x2980
    ctx->pc = 0x4cf16cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x4cf170: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4cf170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4cf174: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x4cf174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4cf178: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4cf178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4cf17c: 0x96e50000  lhu         $a1, 0x0($s7)
    ctx->pc = 0x4cf17cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cf180: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x4cf180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x4cf184: 0xa4c92334  sh          $t1, 0x2334($a2)
    ctx->pc = 0x4cf184u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9012), (uint16_t)GPR_U32(ctx, 9));
    // 0x4cf188: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4cf188u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4cf18c: 0xa4c52336  sh          $a1, 0x2336($a2)
    ctx->pc = 0x4cf18cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9014), (uint16_t)GPR_U32(ctx, 5));
    // 0x4cf190: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4cf190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4cf194: 0xf53825  or          $a3, $a3, $s5
    ctx->pc = 0x4cf194u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 21));
    // 0x4cf198: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x4cf198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4cf19c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4cf19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4cf1a0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4cf1a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cf1a4: 0xa4c22338  sh          $v0, 0x2338($a2)
    ctx->pc = 0x4cf1a4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 9016), (uint16_t)GPR_U32(ctx, 2));
    // 0x4cf1a8: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4cf1a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cf1ac: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x4cf1acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x4cf1b0: 0xaf280000  sw          $t0, 0x0($t9)
    ctx->pc = 0x4cf1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 8));
    // 0x4cf1b4: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4cf1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x4cf1b8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4cf1b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4cf1bc: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4cf1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4cf1c0: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4CF1C0u;
    SET_GPR_U32(ctx, 31, 0x4CF1C8u);
    ctx->pc = 0x4CF1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF1C0u;
    // 0x4cf1c4: 0x86840000  lh          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4CF1C0u, 0x4CF1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF1C8u;
label_4cf1c8:
    // 0x4cf1c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4cf1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf1cc: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4cf1ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4cf1d0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4cf1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4cf1d4: 0x24e70f8c  addiu       $a3, $a3, 0xF8C
    ctx->pc = 0x4cf1d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3980));
    // 0x4cf1d8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4CF1D8u;
    SET_GPR_U32(ctx, 31, 0x4CF1E0u);
    ctx->pc = 0x4CF1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF1D8u;
    // 0x4cf1dc: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4CF1D8u, 0x4CF1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF1E0u;
label_4cf1e0:
    // 0x4cf1e0: 0x8fca0000  lw          $t2, 0x0($fp)
    ctx->pc = 0x4cf1e0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4cf1e4: 0x8ee90000  lw          $t1, 0x0($s7)
    ctx->pc = 0x4cf1e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cf1e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4cf1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4cf1ec: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x4cf1ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cf1f0: 0x34421777  ori         $v0, $v0, 0x1777
    ctx->pc = 0x4cf1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6007);
    // 0x4cf1f4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4cf1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4cf1f8: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4cf1f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4cf1fc: 0x34633fff  ori         $v1, $v1, 0x3FFF
    ctx->pc = 0x4cf1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16383);
    // 0x4cf200: 0x1224824  and         $t1, $t1, $v0
    ctx->pc = 0x4cf200u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x4cf204: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4cf204u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4cf208: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4cf208u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4cf20c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4cf20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4cf210: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4cf210u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4cf214: 0x24420f8c  addiu       $v0, $v0, 0xF8C
    ctx->pc = 0x4cf214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3980));
    // 0x4cf218: 0x1555024  and         $t2, $t2, $s5
    ctx->pc = 0x4cf218u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 21));
    // 0x4cf21c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x4cf21cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4cf220: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4cf220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf224: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4cf224u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4cf228: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4cf228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf22c: 0xafca0000  sw          $t2, 0x0($fp)
    ctx->pc = 0x4cf22cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 10));
    // 0x4cf230: 0xaee90000  sw          $t1, 0x0($s7)
    ctx->pc = 0x4cf230u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 9));
    // 0x4cf234: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4CF234u;
    SET_GPR_U32(ctx, 31, 0x4CF23Cu);
    ctx->pc = 0x4CF238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF234u;
    // 0x4cf238: 0xae080000  sw          $t0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4CF234u, 0x4CF23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF23Cu;
label_4cf23c:
    // 0x4cf23c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4cf23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf240: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4cf240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf244: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x4cf244u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf248: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x4cf248u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf24c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4cf24cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4cf250: 0x24c60f8c  addiu       $a2, $a2, 0xF8C
    ctx->pc = 0x4cf250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3980));
    // 0x4cf254: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4cf254u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4cf258: 0x24e70f90  addiu       $a3, $a3, 0xF90
    ctx->pc = 0x4cf258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3984));
    // 0x4cf25c: 0xc12b7ee  jal         func_4ADFB8
    ctx->pc = 0x4CF25Cu;
    SET_GPR_U32(ctx, 31, 0x4CF264u);
    ctx->pc = 0x4CF260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF25Cu;
    // 0x4cf260: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADFB8u, 0x4CF25Cu, 0x4CF264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF264u;
label_4cf264:
    // 0x4cf264: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4cf264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4cf268: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x4cf268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4cf26c: 0x97c70000  lhu         $a3, 0x0($fp)
    ctx->pc = 0x4cf26cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4cf270: 0x246a2494  addiu       $t2, $v1, 0x2494
    ctx->pc = 0x4cf270u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 9364));
    // 0x4cf274: 0x96e60000  lhu         $a2, 0x0($s7)
    ctx->pc = 0x4cf274u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4cf278: 0x2468249c  addiu       $t0, $v1, 0x249C
    ctx->pc = 0x4cf278u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 9372));
    // 0x4cf27c: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x4cf27cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4cf280: 0x24692498  addiu       $t1, $v1, 0x2498
    ctx->pc = 0x4cf280u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 9368));
    // 0x4cf284: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x4cf284u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x72FB14u));
    // 0x4cf288: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4cf288u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x72FB18u));
    // 0x4cf28c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4cf28cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4cf290: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4cf290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cf294: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4cf294u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4cf298: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4cf298u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4cf29c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4cf29cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4cf2a0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4cf2a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4cf2a4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4cf2a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4cf2a8: 0x952025  or          $a0, $a0, $s5
    ctx->pc = 0x4cf2a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 21));
    // 0x4cf2ac: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4cf2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x4cf2b0: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4cf2b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4cf2b4: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x4cf2b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x4cf2b8: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4cf2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4cf2bc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4cf2bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4cf2c0: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4cf2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4cf2c4: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4cf2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4cf2c8: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4CF2C8u;
    SET_GPR_U32(ctx, 31, 0x4CF2D0u);
    ctx->pc = 0x4CF2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF2C8u;
    // 0x4cf2cc: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4CF2C8u, 0x4CF2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF2D0u;
label_4cf2d0:
    // 0x4cf2d0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4cf2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4cf2d4: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4cf2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x4cf2d8: 0x2484fb20  addiu       $a0, $a0, -0x4E0
    ctx->pc = 0x4cf2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966048));
    // 0x4cf2dc: 0x24c6fb22  addiu       $a2, $a2, -0x4DE
    ctx->pc = 0x4cf2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966050));
    // 0x4cf2e0: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x4cf2e0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x72FB20u));
    // 0x4cf2e4: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4cf2e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x72FB22u));
    // 0x4cf2e8: 0x3c070073  lui         $a3, 0x73
    ctx->pc = 0x4cf2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
    // 0x4cf2ec: 0x24e7d680  addiu       $a3, $a3, -0x2980
    ctx->pc = 0x4cf2ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294956672));
    // 0x4cf2f0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x4cf2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4cf2f4: 0xa4e22330  sh          $v0, 0x2330($a3)
    ctx->pc = 0x4cf2f4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9B0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B0u, _value); } while (0);
    // 0x4cf2f8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4cf2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf2fc: 0xa4e5233a  sh          $a1, 0x233A($a3)
    ctx->pc = 0x4cf2fcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F9BAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9BAu, _value); } while (0);
    // 0x4cf300: 0xa4e3233c  sh          $v1, 0x233C($a3)
    ctx->pc = 0x4cf300u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9BCu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9BCu, _value); } while (0);
    // 0x4cf304: 0xc127ac8  jal         func_49EB20
    ctx->pc = 0x4CF304u;
    SET_GPR_U32(ctx, 31, 0x4CF30Cu);
    ctx->pc = 0x4CF308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF304u;
    // 0x4cf308: 0xa4e0233e  sh          $zero, 0x233E($a3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 7), 9022), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EB20u, 0x4CF304u, 0x4CF30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4CF30Cu;
label_4cf30c:
    // 0x4cf30c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4cf30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf310: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x4cf310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4cf314: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4cf314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4cf318: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4cf318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4cf31c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4cf31cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4cf320: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4cf320u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4cf324: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4cf324u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4cf328: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4cf328u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4cf32c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4cf32cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4cf330: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x4cf330u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4cf334: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x4cf334u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4cf338: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x4cf338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4cf33c: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x4cf33cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4cf340: 0x8133cd2  j           func_4CF348
    ctx->pc = 0x4CF340u;
    ctx->pc = 0x4CF344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF340u;
    // 0x4cf344: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CF348u;
    goto label_4cf348;
    ctx->pc = 0x4CF348u;
label_4cf348:
    // 0x4cf348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cf348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cf34c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4cf34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4cf350: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cf350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cf354: 0x813380c  j           func_4CE030
    ctx->pc = 0x4CF354u;
    ctx->pc = 0x4CF358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF354u;
    // 0x4cf358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CE030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CE030u, 0x4CF354u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4CF35Cu;
    // 0x4cf35c: 0x0  nop
    ctx->pc = 0x4cf35cu;
    // NOP
    ctx->pc = 0x4cf360u;
}
