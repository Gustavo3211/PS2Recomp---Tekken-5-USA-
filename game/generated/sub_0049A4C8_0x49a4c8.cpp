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

// Function: sub_0049A4C8
// Address: 0x49a4c8 - 0x49a6e0
void sub_0049A4C8_0x49a4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049A4C8_0x49a4c8");
#endif

    switch (ctx->pc) {
        case 0x49a514u: goto label_49a514;
        case 0x49a590u: goto label_49a590;
        case 0x49a600u: goto label_49a600;
        case 0x49a610u: goto label_49a610;
        case 0x49a620u: goto label_49a620;
        case 0x49a630u: goto label_49a630;
        case 0x49a640u: goto label_49a640;
        case 0x49a650u: goto label_49a650;
        default: break;
    }

    ctx->pc = 0x49a4c8u;

    // 0x49a4c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x49a4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x49a4cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49a4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49a4d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x49a4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x49a4d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x49a4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x49a4d8: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x49a4d8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x49a4dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x49a4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x49a4e0: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x49a4e0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x49a4e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x49a4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x49a4e8: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x49a4e8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x49a4ec: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x49a4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x49a4f0: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x49a4f0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x49a4f4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x49a4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x49a4f8: 0x3c160073  lui         $s6, 0x73
    ctx->pc = 0x49a4f8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)115 << 16));
    // 0x49a4fc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x49a4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x49a500: 0x26d0d680  addiu       $s0, $s6, -0x2980
    ctx->pc = 0x49a500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294956672));
    // 0x49a504: 0x26510b58  addiu       $s1, $s2, 0xB58
    ctx->pc = 0x49a504u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 2904));
    // 0x49a508: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x49a508u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x72D6C0u));
    // 0x49a50c: 0xc124620  jal         func_491880
    ctx->pc = 0x49A50Cu;
    SET_GPR_U32(ctx, 31, 0x49A514u);
    ctx->pc = 0x49A510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49A50Cu;
    // 0x49a510: 0xaea20b5c  sw          $v0, 0xB5C($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 2908), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491880u, 0x49A50Cu, 0x49A514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A514u;
label_49a514:
    // 0x49a514: 0x26870b50  addiu       $a3, $s4, 0xB50
    ctx->pc = 0x49a514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 2896));
    // 0x49a518: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x49a518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x49a51c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x49a51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49a520: 0x346305b6  ori         $v1, $v1, 0x5B6
    ctx->pc = 0x49a520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1462);
    // 0x49a524: 0x3408a800  ori         $t0, $zero, 0xA800
    ctx->pc = 0x49a524u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x49a528: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x49a528u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x49a52c: 0x3401a802  ori         $at, $zero, 0xA802
    ctx->pc = 0x49a52cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43010);
    // 0x49a530: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x49a530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x49a534: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49a534u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49a538: 0x86090092  lh          $t1, 0x92($s0)
    ctx->pc = 0x49a538u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x49a53c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x49a53cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x49a540: 0xae280000  sw          $t0, 0x0($s1)
    ctx->pc = 0x49a540u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 8));
    // 0x49a544: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x49a544u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x49a548: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49a548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49a54c: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x49a54cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x49a550: 0x26660b54  addiu       $a2, $s3, 0xB54
    ctx->pc = 0x49a550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2900));
    // 0x49a554: 0x84e30000  lh          $v1, 0x0($a3)
    ctx->pc = 0x49a554u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49a558: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x49a558u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49a55c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x49a55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x49a560: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x49a560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x49a564: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x49a564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x49a568: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x49a568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x49a56c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x49a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x49a570: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x49a570u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x49a574: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x49a574u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x49a578: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x49a578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x49a57c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x49a57cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x49a580: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x49a580u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x49a584: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x49a584u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49a588: 0x4400048  bltz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x49A588u;
    {
        const bool branch_taken_0x49a588 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x49A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A588u;
        // 0x49a58c: 0x3c10007f  lui         $s0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a588) {
            ctx->pc = 0x49A6ACu;
            goto label_49a6ac;
        }
    }
    ctx->pc = 0x49A590u;
label_49a590:
    // 0x49a590: 0x8e450b58  lw          $a1, 0xB58($s2)
    ctx->pc = 0x49a590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2904)));
    // 0x49a594: 0x26040b3c  addiu       $a0, $s0, 0xB3C
    ctx->pc = 0x49a594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2876));
    // 0x49a598: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49a598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49a59c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x49a59cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x49a5a0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x49a5a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49a5a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49a5a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49a5a8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x49a5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x49a5ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49a5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49a5b0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x49a5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x49a5b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49a5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49a5b8: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x49a5b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49a5bc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x49a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x49a5c0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x49a5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x49a5c4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49a5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49a5c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x49a5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x49a5cc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x49a5ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49a5d0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49a5d4: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x49a5d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x49a5d8: 0x2c430005  sltiu       $v1, $v0, 0x5
    ctx->pc = 0x49a5d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x49a5dc: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x49A5DCu;
    {
        const bool branch_taken_0x49a5dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A5DCu;
        // 0x49a5e0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a5dc) {
            ctx->pc = 0x49A648u;
            goto label_49a648;
        }
    }
    ctx->pc = 0x49A5E4u;
    // 0x49a5e4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x49a5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x49a5e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x49a5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x49a5ec: 0x8c63adc0  lw          $v1, -0x5240($v1)
    ctx->pc = 0x49a5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946240)));
    // 0x49a5f0: 0x600008  jr          $v1
    ctx->pc = 0x49A5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x49A5F8u: goto label_49a5f8;
            case 0x49A608u: goto label_49a608;
            case 0x49A618u: goto label_49a618;
            case 0x49A628u: goto label_49a628;
            case 0x49A638u: goto label_49a638;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A5F0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x49A5F8u;
label_49a5f8:
    // 0x49a5f8: 0xc1266c8  jal         func_499B20
    ctx->pc = 0x49A5F8u;
    SET_GPR_U32(ctx, 31, 0x49A600u);
    ctx->pc = 0x499B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499B20u, 0x49A5F8u, 0x49A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A600u;
label_49a600:
    // 0x49a600: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x49A600u;
    {
        const bool branch_taken_0x49a600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a600) {
            ctx->pc = 0x49A648u;
            goto label_49a648;
        }
    }
    ctx->pc = 0x49A608u;
label_49a608:
    // 0x49a608: 0xc1266da  jal         func_499B68
    ctx->pc = 0x49A608u;
    SET_GPR_U32(ctx, 31, 0x49A610u);
    ctx->pc = 0x499B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499B68u, 0x49A608u, 0x49A610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A610u;
label_49a610:
    // 0x49a610: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x49A610u;
    {
        const bool branch_taken_0x49a610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a610) {
            ctx->pc = 0x49A648u;
            goto label_49a648;
        }
    }
    ctx->pc = 0x49A618u;
label_49a618:
    // 0x49a618: 0xc126746  jal         func_499D18
    ctx->pc = 0x49A618u;
    SET_GPR_U32(ctx, 31, 0x49A620u);
    ctx->pc = 0x499D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499D18u, 0x49A618u, 0x49A620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A620u;
label_49a620:
    // 0x49a620: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x49A620u;
    {
        const bool branch_taken_0x49a620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a620) {
            ctx->pc = 0x49A648u;
            goto label_49a648;
        }
    }
    ctx->pc = 0x49A628u;
label_49a628:
    // 0x49a628: 0xc126758  jal         func_499D60
    ctx->pc = 0x49A628u;
    SET_GPR_U32(ctx, 31, 0x49A630u);
    ctx->pc = 0x499D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499D60u, 0x49A628u, 0x49A630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A630u;
label_49a630:
    // 0x49a630: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x49A630u;
    {
        const bool branch_taken_0x49a630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x49a630) {
            ctx->pc = 0x49A648u;
            goto label_49a648;
        }
    }
    ctx->pc = 0x49A638u;
label_49a638:
    // 0x49a638: 0xc1266c6  jal         func_499B18
    ctx->pc = 0x49A638u;
    SET_GPR_U32(ctx, 31, 0x49A640u);
    ctx->pc = 0x499B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x499B18u, 0x49A638u, 0x49A640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A640u;
label_49a640:
    // 0x49a640: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x49A640u;
    {
        const bool branch_taken_0x49a640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49A644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A640u;
        // 0x49a644: 0x26660b54  addiu       $a2, $s3, 0xB54 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2900));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a640) {
            ctx->pc = 0x49A654u;
            goto label_49a654;
        }
    }
    ctx->pc = 0x49A648u;
label_49a648:
    // 0x49a648: 0xc126876  jal         func_49A1D8
    ctx->pc = 0x49A648u;
    SET_GPR_U32(ctx, 31, 0x49A650u);
    ctx->pc = 0x49A1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49A1D8u, 0x49A648u, 0x49A650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49A650u;
label_49a650:
    // 0x49a650: 0x26660b54  addiu       $a2, $s3, 0xB54
    ctx->pc = 0x49a650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2900));
label_49a654:
    // 0x49a654: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x49a654u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x49a658: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x49a658u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49a65c: 0x26870b50  addiu       $a3, $s4, 0xB50
    ctx->pc = 0x49a65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 2896));
    // 0x49a660: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x49a660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49a664: 0x26490b58  addiu       $t1, $s2, 0xB58
    ctx->pc = 0x49a664u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 2904));
    // 0x49a668: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49a668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49a66c: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x49a66cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49a670: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x49a670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x49a674: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49a674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49a678: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49a678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49a67c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x49a67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x49a680: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x49a680u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x49a684: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x49a684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x49a688: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x49a688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x49a68c: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x49a68cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x49a690: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x49a690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x49a694: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x49a694u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x49a698: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x49a698u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x49a69c: 0x2442002a  addiu       $v0, $v0, 0x2A
    ctx->pc = 0x49a69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 42));
    // 0x49a6a0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x49a6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x49a6a4: 0x461ffba  bgez        $v1, . + 4 + (-0x46 << 2)
    ctx->pc = 0x49A6A4u;
    {
        const bool branch_taken_0x49a6a4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x49A6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A6A4u;
        // 0x49a6a8: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49a6a4) {
            ctx->pc = 0x49A590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_49a590;
        }
    }
    ctx->pc = 0x49A6ACu;
label_49a6ac:
    // 0x49a6ac: 0x8ea30b5c  lw          $v1, 0xB5C($s5)
    ctx->pc = 0x49a6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2908)));
    // 0x49a6b0: 0x26c2d680  addiu       $v0, $s6, -0x2980
    ctx->pc = 0x49a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294956672));
    // 0x49a6b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49a6b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a6b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49a6b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49a6bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x49a6bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49a6c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x49a6c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x49a6c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x49a6c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49a6c8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x49a6c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x49a6cc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x49a6ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49a6d0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x49a6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x49a6d4: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x49a6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x49a6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x49A6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49A6D8u;
        // 0x49a6dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49A6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49A6E0u;
}
