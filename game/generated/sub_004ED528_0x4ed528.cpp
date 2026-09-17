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

// Function: sub_004ED528
// Address: 0x4ed528 - 0x4edf30
void sub_004ED528_0x4ed528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED528_0x4ed528");
#endif

    switch (ctx->pc) {
        case 0x4ed560u: goto label_4ed560;
        case 0x4ed57cu: goto label_4ed57c;
        case 0x4eda64u: goto label_4eda64;
        case 0x4edac0u: goto label_4edac0;
        case 0x4edcb0u: goto label_4edcb0;
        case 0x4edde0u: goto label_4edde0;
        case 0x4ede00u: goto label_4ede00;
        case 0x4ede20u: goto label_4ede20;
        case 0x4ede64u: goto label_4ede64;
        case 0x4ede84u: goto label_4ede84;
        case 0x4edea4u: goto label_4edea4;
        case 0x4edeecu: goto label_4edeec;
        default: break;
    }

    ctx->pc = 0x4ed528u;

    // 0x4ed528: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4ed528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4ed52c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4ed52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4ed530: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x4ed530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x4ed534: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x4ed534u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed538: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4ed538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4ed53c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4ed53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4ed540: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x4ed540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x4ed544: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4ed544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4ed548: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x4ed548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x4ed54c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x4ed54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x4ed550: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x4ed550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x4ed554: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x4ed554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x4ed558: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4ED558u;
    SET_GPR_U32(ctx, 31, 0x4ED560u);
    ctx->pc = 0x4ED55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED558u;
    // 0x4ed55c: 0x26f001b4  addiu       $s0, $s7, 0x1B4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 436));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4ED558u, 0x4ED560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED560u;
label_4ed560:
    // 0x4ed560: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4ed560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4ed564: 0xac62120c  sw          $v0, 0x120C($v1)
    ctx->pc = 0x4ed564u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F120Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F120Cu, _value); } while (0);
    // 0x4ed568: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4ed568u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ed56c: 0x440006f  bltz        $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x4ED56Cu;
    {
        const bool branch_taken_0x4ed56c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4ED570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED56Cu;
        // 0x4ed570: 0x26ef0140  addiu       $t7, $s7, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 23), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed56c) {
            ctx->pc = 0x4ED72Cu;
            goto label_4ed72c;
        }
    }
    ctx->pc = 0x4ED574u;
    // 0x4ed574: 0xc12b642  jal         func_4AD908
    ctx->pc = 0x4ED574u;
    SET_GPR_U32(ctx, 31, 0x4ED57Cu);
    ctx->pc = 0x4ED578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED574u;
    // 0x4ed578: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD908u, 0x4ED574u, 0x4ED57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ED57Cu;
label_4ed57c:
    // 0x4ed57c: 0xa6e0015e  sh          $zero, 0x15E($s7)
    ctx->pc = 0x4ed57cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 350), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ed580: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ed580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ed584: 0x86e301be  lh          $v1, 0x1BE($s7)
    ctx->pc = 0x4ed584u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 446)));
    // 0x4ed588: 0x24a511e8  addiu       $a1, $a1, 0x11E8
    ctx->pc = 0x4ed588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4584));
    // 0x4ed58c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4ed58cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4ed590: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4ed590u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F11E8u));
    // 0x4ed594: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4ed594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4ed598: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4ed598u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4ed59c: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4ed59cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4ed5a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ed5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ed5a4: 0x256b11ec  addiu       $t3, $t3, 0x11EC
    ctx->pc = 0x4ed5a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4588));
    // 0x4ed5a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ed5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ed5ac: 0x8d660000  lw          $a2, 0x0($t3)
    ctx->pc = 0x4ed5acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ed5b0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4ed5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4ed5b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ed5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ed5b8: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4ed5b8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4ed5bc: 0x25ce11f4  addiu       $t6, $t6, 0x11F4
    ctx->pc = 0x4ed5bcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4596));
    // 0x4ed5c0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4ed5c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ed5c4: 0x25ad11f8  addiu       $t5, $t5, 0x11F8
    ctx->pc = 0x4ed5c4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4600));
    // 0x4ed5c8: 0x8dc80000  lw          $t0, 0x0($t6)
    ctx->pc = 0x4ed5c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ed5cc: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x4ed5ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x4ed5d0: 0x3063000e  andi        $v1, $v1, 0xE
    ctx->pc = 0x4ed5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)14);
    // 0x4ed5d4: 0x8daa0000  lw          $t2, 0x0($t5)
    ctx->pc = 0x4ed5d4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ed5d8: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4ed5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4ed5dc: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4ed5dcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4ed5e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ed5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ed5e4: 0x258c11fc  addiu       $t4, $t4, 0x11FC
    ctx->pc = 0x4ed5e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4604));
    // 0x4ed5e8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4ed5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4ed5ec: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x4ed5ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ed5f0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4ed5f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4ed5f4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4ed5f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4ed5f8: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4ed5f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ed5fc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4ed5fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x4ed600: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x4ed600u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x4ed604: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4ed604u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4ed608: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4ed608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4ed60c: 0x26ef0140  addiu       $t7, $s7, 0x140
    ctx->pc = 0x4ed60cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 23), 320));
    // 0x4ed610: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4ed610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4ed614: 0x85660000  lh          $a2, 0x0($t3)
    ctx->pc = 0x4ed614u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ed618: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4ed618u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4ed61c: 0x8d870000  lw          $a3, 0x0($t4)
    ctx->pc = 0x4ed61cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ed620: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4ed620u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4ed624: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ed624u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ed628: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4ed628u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4ed62c: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4ed62cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ed630: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4ed630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4ed634: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4ed634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4ed638: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4ed638u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4ed63c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x4ed63cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x4ed640: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4ed640u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ed644: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ed644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ed648: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4ed648u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4ed64c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ed64cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ed650: 0x3c0b0054  lui         $t3, 0x54
    ctx->pc = 0x4ed650u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)84 << 16));
    // 0x4ed654: 0x256b7fb8  addiu       $t3, $t3, 0x7FB8
    ctx->pc = 0x4ed654u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32696));
    // 0x4ed658: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x4ed658u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x4ed65c: 0x85630000  lh          $v1, 0x0($t3)
    ctx->pc = 0x4ed65cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ed660: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x4ed660u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x4ed664: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x4ed664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x4ed668: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4ed668u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4ed66c: 0xadc80000  sw          $t0, 0x0($t6)
    ctx->pc = 0x4ed66cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 8));
    // 0x4ed670: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4ed670u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4ed674: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4ed674u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ed678: 0x85c40000  lh          $a0, 0x0($t6)
    ctx->pc = 0x4ed678u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ed67c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4ed67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4ed680: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x4ed680u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x4ed684: 0xadaa0000  sw          $t2, 0x0($t5)
    ctx->pc = 0x4ed684u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 10));
    // 0x4ed688: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4ed688u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4ed68c: 0x85620002  lh          $v0, 0x2($t3)
    ctx->pc = 0x4ed68cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x4ed690: 0x85a50000  lh          $a1, 0x0($t5)
    ctx->pc = 0x4ed690u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ed694: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4ed694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4ed698: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4ed698u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4ed69c: 0xad870000  sw          $a3, 0x0($t4)
    ctx->pc = 0x4ed69cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
    // 0x4ed6a0: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4ed6a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4ed6a4: 0x8de30000  lw          $v1, 0x0($t7)
    ctx->pc = 0x4ed6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4ed6a8: 0x85860000  lh          $a2, 0x0($t4)
    ctx->pc = 0x4ed6a8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ed6ac: 0x8c630140  lw          $v1, 0x140($v1)
    ctx->pc = 0x4ed6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x4ed6b0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x4ed6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4ed6b4: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4ed6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4ed6b8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ed6b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ed6bc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4ed6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4ed6c0: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x4ed6c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
    // 0x4ed6c4: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x4ed6c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x4ed6c8: 0xadc80000  sw          $t0, 0x0($t6)
    ctx->pc = 0x4ed6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 8));
    // 0x4ed6cc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x4ed6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x4ed6d0: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4ed6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4ed6d4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ed6d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ed6d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4ed6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4ed6dc: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x4ed6dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x4ed6e0: 0x1455024  and         $t2, $t2, $a1
    ctx->pc = 0x4ed6e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
    // 0x4ed6e4: 0xadaa0000  sw          $t2, 0x0($t5)
    ctx->pc = 0x4ed6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 10));
    // 0x4ed6e8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x4ed6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x4ed6ec: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x4ed6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x4ed6f0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ed6f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ed6f4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4ed6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4ed6f8: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4ed6f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4ed6fc: 0xe63824  and         $a3, $a3, $a2
    ctx->pc = 0x4ed6fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x4ed700: 0xad870000  sw          $a3, 0x0($t4)
    ctx->pc = 0x4ed700u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
    // 0x4ed704: 0x95c20000  lhu         $v0, 0x0($t6)
    ctx->pc = 0x4ed704u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ed708: 0xa6e2011a  sh          $v0, 0x11A($s7)
    ctx->pc = 0x4ed708u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 282), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ed70c: 0x95a30000  lhu         $v1, 0x0($t5)
    ctx->pc = 0x4ed70cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ed710: 0xa6e3011e  sh          $v1, 0x11E($s7)
    ctx->pc = 0x4ed710u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 286), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ed714: 0x95840000  lhu         $a0, 0x0($t4)
    ctx->pc = 0x4ed714u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ed718: 0xa6e001b6  sh          $zero, 0x1B6($s7)
    ctx->pc = 0x4ed718u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ed71c: 0xa6e40122  sh          $a0, 0x122($s7)
    ctx->pc = 0x4ed71cu;
    WRITE16(ADD32(GPR_U32(ctx, 23), 290), (uint16_t)GPR_U32(ctx, 4));
    // 0x4ed720: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ed720u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ed724: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x4ed724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x4ed728: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4ed728u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_4ed72c:
    // 0x4ed72c: 0x8de30000  lw          $v1, 0x0($t7)
    ctx->pc = 0x4ed72cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4ed730: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4ed730u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4ed734: 0xae831208  sw          $v1, 0x1208($s4)
    ctx->pc = 0x4ed734u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F1208u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1208u, _value); } while (0);
    // 0x4ed738: 0x846201b4  lh          $v0, 0x1B4($v1)
    ctx->pc = 0x4ed738u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 436)));
    // 0x4ed73c: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4ED73Cu;
    {
        const bool branch_taken_0x4ed73c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4ED740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED73Cu;
        // 0x4ed740: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed73c) {
            ctx->pc = 0x4ED778u;
            goto label_4ed778;
        }
    }
    ctx->pc = 0x4ED744u;
    // 0x4ed744: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x4ed744u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4ed748: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4ed748u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ed74c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4ed74cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ed750: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4ed750u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ed754: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4ed754u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ed758: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4ed758u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ed75c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4ed75cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4ed760: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4ed760u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4ed764: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x4ed764u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4ed768: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x4ed768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4ed76c: 0x813bcb2  j           func_4EF2C8
    ctx->pc = 0x4ED76Cu;
    ctx->pc = 0x4ED770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED76Cu;
    // 0x4ed770: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2C8u;
    sub_004EF2C8_0x4ef2c8(rdram, ctx, runtime); return;
    ctx->pc = 0x4ED774u;
    // 0x4ed774: 0x0  nop
    ctx->pc = 0x4ed774u;
    // NOP
label_4ed778:
    // 0x4ed778: 0x84620160  lh          $v0, 0x160($v1)
    ctx->pc = 0x4ed778u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 352)));
    // 0x4ed77c: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4ED77Cu;
    {
        const bool branch_taken_0x4ed77c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4ED780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED77Cu;
        // 0x4ed780: 0x3c05007f  lui         $a1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed77c) {
            ctx->pc = 0x4ED7B8u;
            goto label_4ed7b8;
        }
    }
    ctx->pc = 0x4ED784u;
    // 0x4ed784: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4ed784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed788: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x4ed788u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4ed78c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4ed78cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ed790: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4ed790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ed794: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4ed794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ed798: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4ed798u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ed79c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4ed79cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ed7a0: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4ed7a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4ed7a4: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4ed7a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4ed7a8: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x4ed7a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4ed7ac: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x4ed7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4ed7b0: 0x813bcb2  j           func_4EF2C8
    ctx->pc = 0x4ED7B0u;
    ctx->pc = 0x4ED7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED7B0u;
    // 0x4ed7b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2C8u;
    sub_004EF2C8_0x4ef2c8(rdram, ctx, runtime); return;
    ctx->pc = 0x4ED7B8u;
label_4ed7b8:
    // 0x4ed7b8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4ed7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4ed7bc: 0x24a411e8  addiu       $a0, $a1, 0x11E8
    ctx->pc = 0x4ed7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4584));
    // 0x4ed7c0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x4ed7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4ed7c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4ed7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ed7c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ed7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ed7cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ed7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ed7d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4ed7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4ed7d4: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x4ed7d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ed7d8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4ED7D8u;
    {
        const bool branch_taken_0x4ed7d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ED7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED7D8u;
        // 0x4ed7dc: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed7d8) {
            ctx->pc = 0x4ED7F0u;
            goto label_4ed7f0;
        }
    }
    ctx->pc = 0x4ED7E0u;
    // 0x4ed7e0: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x4ed7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x4ed7e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4ED7E4u;
    {
        const bool branch_taken_0x4ed7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ED7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED7E4u;
        // 0x4ed7e8: 0x244b8108  addiu       $t3, $v0, -0x7EF8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed7e4) {
            ctx->pc = 0x4ED7F8u;
            goto label_4ed7f8;
        }
    }
    ctx->pc = 0x4ED7ECu;
    // 0x4ed7ec: 0x0  nop
    ctx->pc = 0x4ed7ecu;
    // NOP
label_4ed7f0:
    // 0x4ed7f0: 0x244b8118  addiu       $t3, $v0, -0x7EE8
    ctx->pc = 0x4ed7f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934808));
    // 0x4ed7f4: 0x24a411e8  addiu       $a0, $a1, 0x11E8
    ctx->pc = 0x4ed7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4584));
label_4ed7f8:
    // 0x4ed7f8: 0x26e6015e  addiu       $a2, $s7, 0x15E
    ctx->pc = 0x4ed7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 350));
    // 0x4ed7fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4ed7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ed800: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4ed800u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4ed804: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4ed804u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4ed808: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4ed808u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4ed80c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ed80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ed810: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4ed810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4ed814: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ed814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ed818: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4ed818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4ed81c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ed81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ed820: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4ed820u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ed824: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x4ed824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x4ed828: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4ed828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4ed82c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ed82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ed830: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4ed830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4ed834: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4ed834u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ed838: 0x2c420600  sltiu       $v0, $v0, 0x600
    ctx->pc = 0x4ed838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1536) ? 1 : 0);
    // 0x4ed83c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4ED83Cu;
    {
        const bool branch_taken_0x4ed83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ED840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED83Cu;
        // 0x4ed840: 0x24e911ec  addiu       $t1, $a3, 0x11EC (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4588));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed83c) {
            ctx->pc = 0x4ED850u;
            goto label_4ed850;
        }
    }
    ctx->pc = 0x4ED844u;
    // 0x4ed844: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4ed844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ed848: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4ED848u;
    {
        const bool branch_taken_0x4ed848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ED84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED848u;
        // 0x4ed84c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed848) {
            ctx->pc = 0x4ED858u;
            goto label_4ed858;
        }
    }
    ctx->pc = 0x4ED850u;
label_4ed850:
    // 0x4ed850: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4ed850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ed854: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4ed854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_4ed858:
    // 0x4ed858: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4ed858u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4ed85c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4ed85cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4ed860: 0x248411ec  addiu       $a0, $a0, 0x11EC
    ctx->pc = 0x4ed860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4588));
    // 0x4ed864: 0x3c1effff  lui         $fp, 0xFFFF
    ctx->pc = 0x4ed864u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65535 << 16));
    // 0x4ed868: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4ed868u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F11ECu));
    // 0x4ed86c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4ed86cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed870: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4ed870u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F11ECu));
    // 0x4ed874: 0x24ae11e8  addiu       $t6, $a1, 0x11E8
    ctx->pc = 0x4ed874u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 4584));
    // 0x4ed878: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x4ed878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x4ed87c: 0x95c30000  lhu         $v1, 0x0($t6)
    ctx->pc = 0x4ed87cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ed880: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ed880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ed884: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ed884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ed888: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ed888u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ed88c: 0x8dc50000  lw          $a1, 0x0($t6)
    ctx->pc = 0x4ed88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ed890: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4ed890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x4ed894: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4ed894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4ed898: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ed898u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ed89c: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4ed89cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4ed8a0: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4ed8a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ed8a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ed8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ed8a8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ed8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ed8ac: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4ed8acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4ed8b0: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x4ed8b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x4ed8b4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4ed8b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4ed8b8: 0xadc50000  sw          $a1, 0x0($t6)
    ctx->pc = 0x4ed8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 5));
    // 0x4ed8bc: 0x95c30000  lhu         $v1, 0x0($t6)
    ctx->pc = 0x4ed8bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ed8c0: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x4ed8c0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ed8c4: 0x95c20000  lhu         $v0, 0x0($t6)
    ctx->pc = 0x4ed8c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ed8c8: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x4ed8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ed8cc: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x4ed8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x4ed8d0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ed8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ed8d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ed8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ed8d8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ed8d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ed8dc: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4ed8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x4ed8e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ed8e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ed8e4: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x4ed8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x4ed8e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ed8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ed8ec: 0x95c20000  lhu         $v0, 0x0($t6)
    ctx->pc = 0x4ed8ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ed8f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ed8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ed8f4: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x4ed8f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x4ed8f8: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4ed8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x4ed8fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ed8fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ed900: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x4ed900u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x4ed904: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ed904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ed908: 0x95c20000  lhu         $v0, 0x0($t6)
    ctx->pc = 0x4ed908u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ed90c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x4ed90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x4ed910: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4ed910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x4ed914: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ed914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ed918: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x4ed918u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x4ed91c: 0x95c20000  lhu         $v0, 0x0($t6)
    ctx->pc = 0x4ed91cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ed920: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ed920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ed924: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4ed924u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4ed928: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4ed928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4ed92c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x4ed92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x4ed930: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4ed930u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4ed934: 0xa6e3000c  sh          $v1, 0xC($s7)
    ctx->pc = 0x4ed934u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ed938: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4ed938u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ed93c: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x4ed93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ed940: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4ed940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x4ed944: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ed944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ed948: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ed948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ed94c: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x4ed94cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x4ed950: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ed950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ed954: 0x95c20000  lhu         $v0, 0x0($t6)
    ctx->pc = 0x4ed954u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ed958: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4ed958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4ed95c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ed95cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ed960: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ed960u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ed964: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4ed964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x4ed968: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x4ed968u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ed96c: 0xadc60000  sw          $a2, 0x0($t6)
    ctx->pc = 0x4ed96cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 6));
    // 0x4ed970: 0x85c20000  lh          $v0, 0x0($t6)
    ctx->pc = 0x4ed970u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ed974: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4ED974u;
    {
        const bool branch_taken_0x4ed974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ED978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ED974u;
        // 0x4ed978: 0x3c10007f  lui         $s0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ed974) {
            ctx->pc = 0x4ED9B0u;
            goto label_4ed9b0;
        }
    }
    ctx->pc = 0x4ED97Cu;
    // 0x4ed97c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4ed97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed980: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x4ed980u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4ed984: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4ed984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ed988: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4ed988u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ed98c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4ed98cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ed990: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4ed990u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ed994: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4ed994u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4ed998: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4ed998u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4ed99c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4ed99cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4ed9a0: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x4ed9a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4ed9a4: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x4ed9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4ed9a8: 0x813bcb8  j           func_4EF2E0
    ctx->pc = 0x4ED9A8u;
    ctx->pc = 0x4ED9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED9A8u;
    // 0x4ed9ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EF2E0u;
    sub_004EF2E0_0x4ef2e0(rdram, ctx, runtime); return;
    ctx->pc = 0x4ED9B0u;
label_4ed9b0:
    // 0x4ed9b0: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4ed9b0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4ed9b4: 0x261011fc  addiu       $s0, $s0, 0x11FC
    ctx->pc = 0x4ed9b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4604));
    // 0x4ed9b8: 0x263111f8  addiu       $s1, $s1, 0x11F8
    ctx->pc = 0x4ed9b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4600));
    // 0x4ed9bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ed9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ed9c0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4ed9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4ed9c4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4ed9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F11F8u));
    // 0x4ed9c8: 0x34420500  ori         $v0, $v0, 0x500
    ctx->pc = 0x4ed9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1280);
    // 0x4ed9cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ed9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ed9d0: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4ed9d0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4ed9d4: 0x265211f4  addiu       $s2, $s2, 0x11F4
    ctx->pc = 0x4ed9d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4596));
    // 0x4ed9d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ed9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ed9dc: 0x9e2024  and         $a0, $a0, $fp
    ctx->pc = 0x4ed9dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 30));
    // 0x4ed9e0: 0x26941208  addiu       $s4, $s4, 0x1208
    ctx->pc = 0x4ed9e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4616));
    // 0x4ed9e4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4ed9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4ed9e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ed9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ed9ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ed9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ed9f0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ed9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ed9f4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x4ed9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x4ed9f8: 0x244211ec  addiu       $v0, $v0, 0x11EC
    ctx->pc = 0x4ed9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4588));
    // 0x4ed9fc: 0x26e80018  addiu       $t0, $s7, 0x18
    ctx->pc = 0x4ed9fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
    // 0x4eda00: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4eda00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4eda04: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x4eda04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4eda08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4eda08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eda0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4eda0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11ECu));
    // 0x4eda10: 0x26f50010  addiu       $s5, $s7, 0x10
    ctx->pc = 0x4eda10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x4eda14: 0x84e20022  lh          $v0, 0x22($a3)
    ctx->pc = 0x4eda14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 34)));
    // 0x4eda18: 0x26f60014  addiu       $s6, $s7, 0x14
    ctx->pc = 0x4eda18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 20));
    // 0x4eda1c: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x4eda1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x4eda20: 0x26e80118  addiu       $t0, $s7, 0x118
    ctx->pc = 0x4eda20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 280));
    // 0x4eda24: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4eda24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x4eda28: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x4eda28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x4eda2c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4eda2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4eda30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eda30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eda34: 0xadc60000  sw          $a2, 0x0($t6)
    ctx->pc = 0x4eda34u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 6));
    // 0x4eda38: 0x3c130073  lui         $s3, 0x73
    ctx->pc = 0x4eda38u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)115 << 16));
    // 0x4eda3c: 0x2673d680  addiu       $s3, $s3, -0x2980
    ctx->pc = 0x4eda3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294956672));
    // 0x4eda40: 0x84e20024  lh          $v0, 0x24($a3)
    ctx->pc = 0x4eda40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x4eda44: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4eda44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x4eda48: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4eda48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4eda4c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4eda4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4eda50: 0x244211ec  addiu       $v0, $v0, 0x11EC
    ctx->pc = 0x4eda50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4588));
    // 0x4eda54: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x4eda54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eda58: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4eda58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F11ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F11ECu, _value); } while (0);
    // 0x4eda5c: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4EDA5Cu;
    SET_GPR_U32(ctx, 31, 0x4EDA64u);
    ctx->pc = 0x4EDA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EDA5Cu;
    // 0x4eda60: 0x7fae0010  sq          $t6, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4EDA5Cu, 0x4EDA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EDA64u;
label_4eda64:
    // 0x4eda64: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x4eda64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4eda68: 0x7bae0010  lq          $t6, 0x10($sp)
    ctx->pc = 0x4eda68u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4eda6c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4eda6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4eda70: 0x84e20026  lh          $v0, 0x26($a3)
    ctx->pc = 0x4eda70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 38)));
    // 0x4eda74: 0x248411ec  addiu       $a0, $a0, 0x11EC
    ctx->pc = 0x4eda74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4588));
    // 0x4eda78: 0x8dc60000  lw          $a2, 0x0($t6)
    ctx->pc = 0x4eda78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4eda7c: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4eda7cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4eda80: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4eda80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x4eda84: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4eda84u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F11ECu));
    // 0x4eda88: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4eda88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4eda8c: 0x250811ec  addiu       $t0, $t0, 0x11EC
    ctx->pc = 0x4eda8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4588));
    // 0x4eda90: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4eda90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4eda94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4eda94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4eda98: 0xadc60000  sw          $a2, 0x0($t6)
    ctx->pc = 0x4eda98u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 6));
    // 0x4eda9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4eda9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4edaa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4edaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4edaa4: 0x84e20028  lh          $v0, 0x28($a3)
    ctx->pc = 0x4edaa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x4edaa8: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4edaa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x4edaac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4edaacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4edab0: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4edab0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4edab4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x4edab4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4edab8: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4EDAB8u;
    SET_GPR_U32(ctx, 31, 0x4EDAC0u);
    ctx->pc = 0x4EDABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EDAB8u;
    // 0x4edabc: 0x7fae0010  sq          $t6, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4EDAB8u, 0x4EDAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EDAC0u;
label_4edac0:
    // 0x4edac0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4edac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4edac4: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x4edac4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4edac8: 0x266d2494  addiu       $t5, $s3, 0x2494
    ctx->pc = 0x4edac8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 19), 9364));
    // 0x4edacc: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4edaccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4edad0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4edad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4edad4: 0x8d220010  lw          $v0, 0x10($t1)
    ctx->pc = 0x4edad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x4edad8: 0x266b2498  addiu       $t3, $s3, 0x2498
    ctx->pc = 0x4edad8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 9368));
    // 0x4edadc: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x4edadcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4edae0: 0x266c249c  addiu       $t4, $s3, 0x249C
    ctx->pc = 0x4edae0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 9372));
    // 0x4edae4: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x4edae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x4edae8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4edae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4edaec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4edaecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4edaf0: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x4edaf0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4edaf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4edaf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4edaf8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4edaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4edafc: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x4edafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x4edb00: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4edb00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4edb04: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4edb04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4edb08: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4edb08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4edb0c: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4edb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4edb10: 0x8d220014  lw          $v0, 0x14($t1)
    ctx->pc = 0x4edb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x4edb14: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4edb14u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4edb18: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x4edb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x4edb1c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4edb1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4edb20: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4edb20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4edb24: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4edb24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4edb28: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4edb28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4edb2c: 0xfe3825  or          $a3, $a3, $fp
    ctx->pc = 0x4edb2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 30));
    // 0x4edb30: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4edb30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4edb34: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4edb34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4edb38: 0x8d220018  lw          $v0, 0x18($t1)
    ctx->pc = 0x4edb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x4edb3c: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x4edb3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x4edb40: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4edb40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4edb44: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x4edb44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4edb48: 0x11e4025  or          $t0, $t0, $fp
    ctx->pc = 0x4edb48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 30));
    // 0x4edb4c: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x4edb4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x4edb50: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4edb50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4edb54: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4edb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4edb58: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4edb58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x4edb5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4edb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4edb60: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4edb60u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4edb64: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4edb64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4edb68: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4edb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4edb6c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4edb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4edb70: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4edb70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x4edb74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4edb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4edb78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4edb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4edb7c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4edb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x4edb80: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4edb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4edb84: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4edb84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4edb88: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4edb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4edb8c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4edb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4edb90: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4edb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x4edb94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4edb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4edb98: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4edb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4edb9c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4edb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4edba0: 0x86e3011a  lh          $v1, 0x11A($s7)
    ctx->pc = 0x4edba0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 282)));
    // 0x4edba4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4edba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4edba8: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x4edba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x4edbac: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x4edbacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4edbb0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4edbb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4edbb4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4edbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4edbb8: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4edbb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4edbbc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4edbbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4edbc0: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4edbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4edbc4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4edbc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4edbc8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4edbc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4edbcc: 0x86e2011e  lh          $v0, 0x11E($s7)
    ctx->pc = 0x4edbccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 286)));
    // 0x4edbd0: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4edbd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4edbd4: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4edbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x4edbd8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4edbd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4edbdc: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4edbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4edbe0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4edbe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4edbe4: 0x86e20122  lh          $v0, 0x122($s7)
    ctx->pc = 0x4edbe4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 290)));
    // 0x4edbe8: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4edbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x4edbec: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4edbecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4edbf0: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4edbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4edbf4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4edbf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4edbf8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4edbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4edbfc: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x4edbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x4edc00: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4edc00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4edc04: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4edc04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4edc08: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x4edc08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x4edc0c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4edc0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4edc10: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4edc10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4edc14: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4edc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4edc18: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4edc18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4edc1c: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x4edc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x4edc20: 0x8da70000  lw          $a3, 0x0($t5)
    ctx->pc = 0x4edc20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4edc24: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4edc24u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4edc28: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x4edc28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4edc2c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4edc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4edc30: 0x8d8a0000  lw          $t2, 0x0($t4)
    ctx->pc = 0x4edc30u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4edc34: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x4edc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x4edc38: 0x86090000  lh          $t1, 0x0($s0)
    ctx->pc = 0x4edc38u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4edc3c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4edc3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4edc40: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x4edc40u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4edc44: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4edc44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4edc48: 0xfe3825  or          $a3, $a3, $fp
    ctx->pc = 0x4edc48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 30));
    // 0x4edc4c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4edc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4edc50: 0x11e4025  or          $t0, $t0, $fp
    ctx->pc = 0x4edc50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 30));
    // 0x4edc54: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4edc54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4edc58: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4edc58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4edc5c: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4edc5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4edc60: 0x15e5025  or          $t2, $t2, $fp
    ctx->pc = 0x4edc60u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 30));
    // 0x4edc64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4edc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4edc68: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4edc68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4edc6c: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x4edc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x4edc70: 0xada70000  sw          $a3, 0x0($t5)
    ctx->pc = 0x4edc70u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 7));
    // 0x4edc74: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4edc74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4edc78: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4edc78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4edc7c: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4edc7cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4edc80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4edc80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4edc84: 0x13e4825  or          $t1, $t1, $fp
    ctx->pc = 0x4edc84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 30));
    // 0x4edc88: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4edc88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4edc8c: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x4edc8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x4edc90: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4edc90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4edc94: 0xad680000  sw          $t0, 0x0($t3)
    ctx->pc = 0x4edc94u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 8));
    // 0x4edc98: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4edc98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4edc9c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4edc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4edca0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4edca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4edca4: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x4edca4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x4edca8: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4EDCA8u;
    SET_GPR_U32(ctx, 31, 0x4EDCB0u);
    ctx->pc = 0x4EDCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EDCA8u;
    // 0x4edcac: 0xad8a0000  sw          $t2, 0x0($t4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4EDCA8u, 0x4EDCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EDCB0u;
label_4edcb0:
    // 0x4edcb0: 0x966324a0  lhu         $v1, 0x24A0($s3)
    ctx->pc = 0x4edcb0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 9376)));
    // 0x4edcb4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x4edcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4edcb8: 0x26ea011c  addiu       $t2, $s7, 0x11C
    ctx->pc = 0x4edcb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 23), 284));
    // 0x4edcbc: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4edcbcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4edcc0: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x4edcc0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4edcc4: 0x966224a2  lhu         $v0, 0x24A2($s3)
    ctx->pc = 0x4edcc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 9378)));
    // 0x4edcc8: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x4edcc8u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4edccc: 0x8d07120c  lw          $a3, 0x120C($t0)
    ctx->pc = 0x4edcccu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F120Cu));
    // 0x4edcd0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4edcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4edcd4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4edcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4edcd8: 0x7bae0010  lq          $t6, 0x10($sp)
    ctx->pc = 0x4edcd8u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4edcdc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4edcdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4edce0: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x4edce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x4edce4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x4edce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4edce8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4edce8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4edcec: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x4edcecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4edcf0: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4edcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x4edcf4: 0x8dc60000  lw          $a2, 0x0($t6)
    ctx->pc = 0x4edcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4edcf8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4edcf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4edcfc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4edcfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4edd00: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4edd00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4edd04: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4edd04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4edd08: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4edd08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4edd0c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4edd0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4edd10: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4edd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x4edd14: 0x86490000  lh          $t1, 0x0($s2)
    ctx->pc = 0x4edd14u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4edd18: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x4edd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x4edd1c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4edd1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4edd20: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4edd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x4edd24: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4edd24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4edd28: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4edd28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4edd2c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4edd2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4edd30: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x4edd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x4edd34: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x4edd34u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4edd38: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x4edd38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x4edd3c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4edd3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4edd40: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4edd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x4edd44: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4edd44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4edd48: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4edd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4edd4c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4edd4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4edd50: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4edd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4edd54: 0x86070000  lh          $a3, 0x0($s0)
    ctx->pc = 0x4edd54u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4edd58: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x4edd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x4edd5c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4edd5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4edd60: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4edd60u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4edd64: 0x13e4825  or          $t1, $t1, $fp
    ctx->pc = 0x4edd64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 30));
    // 0x4edd68: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x4edd68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x4edd6c: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4edd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4edd70: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x4edd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4edd74: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x4edd74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x4edd78: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4edd78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4edd7c: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4edd7cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4edd80: 0x11e4025  or          $t0, $t0, $fp
    ctx->pc = 0x4edd80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 30));
    // 0x4edd84: 0x882024  and         $a0, $a0, $t0
    ctx->pc = 0x4edd84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x4edd88: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x4edd88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x4edd8c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4edd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4edd90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4edd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4edd94: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x4edd94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x4edd98: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4edd98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4edd9c: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x4edd9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4edda0: 0xfe3825  or          $a3, $a3, $fp
    ctx->pc = 0x4edda0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 30));
    // 0x4edda4: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x4edda4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x4edda8: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x4edda8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x4eddac: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4eddacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4eddb0: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4eddb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x4eddb4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4eddb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4eddb8: 0xadc60000  sw          $a2, 0x0($t6)
    ctx->pc = 0x4eddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 6));
    // 0x4eddbc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4eddbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4eddc0: 0x85c20000  lh          $v0, 0x0($t6)
    ctx->pc = 0x4eddc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4eddc4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4eddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4eddc8: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4eddc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x4eddcc: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4eddccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4eddd0: 0xadc60000  sw          $a2, 0x0($t6)
    ctx->pc = 0x4eddd0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 6));
    // 0x4eddd4: 0x85c40000  lh          $a0, 0x0($t6)
    ctx->pc = 0x4eddd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4eddd8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4EDDD8u;
    SET_GPR_U32(ctx, 31, 0x4EDDE0u);
    ctx->pc = 0x4EDDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EDDD8u;
    // 0x4edddc: 0x7fae0010  sq          $t6, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4EDDD8u, 0x4EDDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EDDE0u;
label_4edde0:
    // 0x4edde0: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4edde0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4edde4: 0x7bae0010  lq          $t6, 0x10($sp)
    ctx->pc = 0x4edde4u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4edde8: 0x250811ec  addiu       $t0, $t0, 0x11EC
    ctx->pc = 0x4edde8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4588));
    // 0x4eddec: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x4eddecu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x4eddf0: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x4eddf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4eddf4: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4eddf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F11ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F11ECu, _value); } while (0);
    // 0x4eddf8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4EDDF8u;
    SET_GPR_U32(ctx, 31, 0x4EDE00u);
    ctx->pc = 0x4EDDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EDDF8u;
    // 0x4eddfc: 0x7fae0010  sq          $t6, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4EDDF8u, 0x4EDE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EDE00u;
label_4ede00:
    // 0x4ede00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4ede00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ede04: 0x7bae0010  lq          $t6, 0x10($sp)
    ctx->pc = 0x4ede04u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ede08: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ede08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ede0c: 0x244211ec  addiu       $v0, $v0, 0x11EC
    ctx->pc = 0x4ede0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4588));
    // 0x4ede10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ede10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ede14: 0x8dc60000  lw          $a2, 0x0($t6)
    ctx->pc = 0x4ede14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ede18: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4EDE18u;
    SET_GPR_U32(ctx, 31, 0x4EDE20u);
    ctx->pc = 0x4EDE1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EDE18u;
    // 0x4ede1c: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4EDE18u, 0x4EDE20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EDE20u;
label_4ede20:
    // 0x4ede20: 0x7bae0010  lq          $t6, 0x10($sp)
    ctx->pc = 0x4ede20u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ede24: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x4ede24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4ede28: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x4ede28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ede2c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4ede2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ede30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ede30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ede34: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4ede34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x4ede38: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ede38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ede3c: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x4ede3cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x4ede40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ede40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ede44: 0x85c20000  lh          $v0, 0x0($t6)
    ctx->pc = 0x4ede44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ede48: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4ede48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4ede4c: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4ede4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x4ede50: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ede50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ede54: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x4ede54u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x4ede58: 0x85c40000  lh          $a0, 0x0($t6)
    ctx->pc = 0x4ede58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ede5c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4EDE5Cu;
    SET_GPR_U32(ctx, 31, 0x4EDE64u);
    ctx->pc = 0x4EDE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EDE5Cu;
    // 0x4ede60: 0x7fae0010  sq          $t6, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4EDE5Cu, 0x4EDE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EDE64u;
label_4ede64:
    // 0x4ede64: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4ede64u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4ede68: 0x7bae0010  lq          $t6, 0x10($sp)
    ctx->pc = 0x4ede68u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ede6c: 0x250811ec  addiu       $t0, $t0, 0x11EC
    ctx->pc = 0x4ede6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4588));
    // 0x4ede70: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x4ede70u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x4ede74: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x4ede74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ede78: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4ede78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F11ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F11ECu, _value); } while (0);
    // 0x4ede7c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4EDE7Cu;
    SET_GPR_U32(ctx, 31, 0x4EDE84u);
    ctx->pc = 0x4EDE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EDE7Cu;
    // 0x4ede80: 0x7fae0010  sq          $t6, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4EDE7Cu, 0x4EDE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EDE84u;
label_4ede84:
    // 0x4ede84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ede84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ede88: 0x7bae0010  lq          $t6, 0x10($sp)
    ctx->pc = 0x4ede88u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ede8c: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4ede8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4ede90: 0x244211ec  addiu       $v0, $v0, 0x11EC
    ctx->pc = 0x4ede90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4588));
    // 0x4ede94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4ede94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ede98: 0x8dc60000  lw          $a2, 0x0($t6)
    ctx->pc = 0x4ede98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ede9c: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4EDE9Cu;
    SET_GPR_U32(ctx, 31, 0x4EDEA4u);
    ctx->pc = 0x4EDEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EDE9Cu;
    // 0x4edea0: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4EDE9Cu, 0x4EDEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EDEA4u;
label_4edea4:
    // 0x4edea4: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4edea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4edea8: 0x7bae0010  lq          $t6, 0x10($sp)
    ctx->pc = 0x4edea8u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4edeac: 0x248411ec  addiu       $a0, $a0, 0x11EC
    ctx->pc = 0x4edeacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4588));
    // 0x4edeb0: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x4edeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F11ECu));
    // 0x4edeb4: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x4edeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4edeb8: 0x1c0302d  daddu       $a2, $t6, $zero
    ctx->pc = 0x4edeb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4edebc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4edebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4edec0: 0x30a7ffff  andi        $a3, $a1, 0xFFFF
    ctx->pc = 0x4edec0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x4edec4: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x4edec4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4edec8: 0x7e1824  and         $v1, $v1, $fp
    ctx->pc = 0x4edec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x4edecc: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x4edeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x4eded0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4eded0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4eded4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4eded4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4eded8: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x4eded8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x4ededc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4ededcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4edee0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4edee0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4edee4: 0xc12a21e  jal         func_4A8878
    ctx->pc = 0x4EDEE4u;
    SET_GPR_U32(ctx, 31, 0x4EDEECu);
    ctx->pc = 0x4EDEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EDEE4u;
    // 0x4edee8: 0x7fae0010  sq          $t6, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8878u, 0x4EDEE4u, 0x4EDEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EDEECu;
label_4edeec:
    // 0x4edeec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4edeecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4edef0: 0x7bae0010  lq          $t6, 0x10($sp)
    ctx->pc = 0x4edef0u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4edef4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4edef4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4edef8: 0x95c20000  lhu         $v0, 0x0($t6)
    ctx->pc = 0x4edef8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4edefc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4edefcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4edf00: 0xa6e20120  sh          $v0, 0x120($s7)
    ctx->pc = 0x4edf00u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 288), (uint16_t)GPR_U32(ctx, 2));
    // 0x4edf04: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4edf04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4edf08: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4edf08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4edf0c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4edf0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4edf10: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4edf10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4edf14: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4edf14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4edf18: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x4edf18u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4edf1c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x4edf1cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4edf20: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x4edf20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4edf24: 0x8127e84  j           func_49FA10
    ctx->pc = 0x4EDF24u;
    ctx->pc = 0x4EDF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EDF24u;
    // 0x4edf28: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    sub_0049FA10_0x49fa10(rdram, ctx, runtime); return;
    ctx->pc = 0x4EDF2Cu;
    // 0x4edf2c: 0x0  nop
    ctx->pc = 0x4edf2cu;
    // NOP
    ctx->pc = 0x4edf30u;
}
