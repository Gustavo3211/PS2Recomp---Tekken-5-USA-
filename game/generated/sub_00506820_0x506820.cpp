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

// Function: sub_00506820
// Address: 0x506820 - 0x5069a0
void sub_00506820_0x506820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00506820_0x506820");
#endif

    switch (ctx->pc) {
        case 0x5068ccu: goto label_5068cc;
        case 0x506944u: goto label_506944;
        case 0x506954u: goto label_506954;
        case 0x506980u: goto label_506980;
        default: break;
    }

    ctx->pc = 0x506820u;

    // 0x506820: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x506820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x506824: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x506824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x506828: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x506828u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50682c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x50682cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x506830: 0x26740014  addiu       $s4, $s3, 0x14
    ctx->pc = 0x506830u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x506834: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x506834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x506838: 0x26680010  addiu       $t0, $s3, 0x10
    ctx->pc = 0x506838u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x50683c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x50683cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x506840: 0x2664011c  addiu       $a0, $s3, 0x11C
    ctx->pc = 0x506840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 284));
    // 0x506844: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x506844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x506848: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x506848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x50684c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x50684cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x506850: 0x8662011a  lh          $v0, 0x11A($s3)
    ctx->pc = 0x506850u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 282)));
    // 0x506854: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x506854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x506858: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x506858u;
    {
        const bool branch_taken_0x506858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x50685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506858u;
        // 0x50685c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506858) {
            ctx->pc = 0x506874u;
            goto label_506874;
        }
    }
    ctx->pc = 0x506860u;
    // 0x506860: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x506860u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x506864: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x506864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x506868: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x506868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x50686c: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x50686Cu;
    {
        const bool branch_taken_0x50686c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x506870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50686Cu;
        // 0x506870: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50686c) {
            ctx->pc = 0x506980u;
            goto label_506980;
        }
    }
    ctx->pc = 0x506874u;
label_506874:
    // 0x506874: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x506874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x506878: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x506878u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x50687c: 0x85070000  lh          $a3, 0x0($t0)
    ctx->pc = 0x50687cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x506880: 0x85030002  lh          $v1, 0x2($t0)
    ctx->pc = 0x506880u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x506884: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x506884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x506888: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x506888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50688c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50688cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x506890: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x506890u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x506894: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x506894u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x506898: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x506898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50689c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x50689cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x5068a0: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x5068a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x5068a4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x5068a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x5068a8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x5068a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x5068ac: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x5068acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x5068b0: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x5068b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x5068b4: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x5068b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x5068b8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x5068b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x5068bc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x5068bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x5068c0: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x5068c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x5068c4: 0xc144abc  jal         func_512AF0
    ctx->pc = 0x5068C4u;
    SET_GPR_U32(ctx, 31, 0x5068CCu);
    ctx->pc = 0x5068C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5068C4u;
    // 0x5068c8: 0xafa40008  sw          $a0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512AF0u, 0x5068C4u, 0x5068CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5068CCu;
label_5068cc:
    // 0x5068cc: 0x84460010  lh          $a2, 0x10($v0)
    ctx->pc = 0x5068ccu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x5068d0: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x5068d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x5068d4: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x5068d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5068d8: 0x27b20008  addiu       $s2, $sp, 0x8
    ctx->pc = 0x5068d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x5068dc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x5068dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5068e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x5068e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5068e4: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x5068e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x5068e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x5068e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5068ec: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x5068ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x5068f0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x5068f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x5068f4: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x5068f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x5068f8: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x5068f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x5068fc: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x5068fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x506900: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x506900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x506904: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x506904u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x506908: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x506908u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x50690c: 0x84470014  lh          $a3, 0x14($v0)
    ctx->pc = 0x50690cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x506910: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x506910u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x506914: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x506914u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x506918: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x506918u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x50691c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x50691cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x506920: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x506920u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x506924: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x506924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x506928: 0x84430018  lh          $v1, 0x18($v0)
    ctx->pc = 0x506928u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x50692c: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x50692cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x506930: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x506930u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x506934: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x506934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x506938: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x506938u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x50693c: 0xc14123e  jal         func_5048F8
    ctx->pc = 0x50693Cu;
    SET_GPR_U32(ctx, 31, 0x506944u);
    ctx->pc = 0x506940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50693Cu;
    // 0x506940: 0xafa80008  sw          $t0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5048F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5048F8u, 0x50693Cu, 0x506944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x506944u;
label_506944:
    // 0x506944: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x506944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x506948: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x506948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50694c: 0xc1413a2  jal         func_504E88
    ctx->pc = 0x50694Cu;
    SET_GPR_U32(ctx, 31, 0x506954u);
    ctx->pc = 0x506950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50694Cu;
    // 0x506950: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x504E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x504E88u, 0x50694Cu, 0x506954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x506954u;
label_506954:
    // 0x506954: 0x26620018  addiu       $v0, $s3, 0x18
    ctx->pc = 0x506954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x506958: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x506958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x50695c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x50695cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x506960: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x506960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x506964: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x506964u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x506968: 0xb02824  and         $a1, $a1, $s0
    ctx->pc = 0x506968u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x50696c: 0x8666000e  lh          $a2, 0xE($s3)
    ctx->pc = 0x50696cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 14)));
    // 0x506970: 0x84470000  lh          $a3, 0x0($v0)
    ctx->pc = 0x506970u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x506974: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x506974u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x506978: 0xc142052  jal         func_508148
    ctx->pc = 0x506978u;
    SET_GPR_U32(ctx, 31, 0x506980u);
    ctx->pc = 0x50697Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x506978u;
    // 0x50697c: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x508148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x508148u, 0x506978u, 0x506980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x506980u;
label_506980:
    // 0x506980: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x506980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x506984: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x506984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x506988: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x506988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50698c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x50698cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x506990: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x506990u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x506994: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x506994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x506998: 0x3e00008  jr          $ra
    ctx->pc = 0x506998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x506998u;
        // 0x50699c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x506998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5069A0u;
}
