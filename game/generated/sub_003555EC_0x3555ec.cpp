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

// Function: sub_003555EC
// Address: 0x3555ec - 0x355a94
void sub_003555EC_0x3555ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003555EC_0x3555ec");
#endif

    switch (ctx->pc) {
        case 0x355634u: goto label_355634;
        case 0x355658u: goto label_355658;
        case 0x35566cu: goto label_35566c;
        case 0x3556bcu: goto label_3556bc;
        case 0x355740u: goto label_355740;
        case 0x355a7cu: goto label_355a7c;
        default: break;
    }

    ctx->pc = 0x3555ecu;

    // 0x3555ec: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3555ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x3555f0: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x3555f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x3555f4: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x3555f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x3555f8: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x3555f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3555fc: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3555fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x355600: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x355600u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x355604: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x355604u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x355608: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x355608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x35560c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x35560cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x355610: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x355610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x355614: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x355614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x355618: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x355618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x35561c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x35561cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x355620: 0xafc0002c  sw          $zero, 0x2C($fp)
    ctx->pc = 0x355620u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 44), GPR_U32(ctx, 0));
    // 0x355624: 0xafc00030  sw          $zero, 0x30($fp)
    ctx->pc = 0x355624u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 0));
    // 0x355628: 0xafc00024  sw          $zero, 0x24($fp)
    ctx->pc = 0x355628u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 0));
    // 0x35562c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x35562cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x355630: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x355630u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
label_355634:
    // 0x355634: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x355634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
    // 0x355638: 0x27c30018  addiu       $v1, $fp, 0x18
    ctx->pc = 0x355638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 24));
    // 0x35563c: 0x27c8001c  addiu       $t0, $fp, 0x1C
    ctx->pc = 0x35563cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 28));
    // 0x355640: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x355640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x355644: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x355644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x355648: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x355648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35564c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x35564cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355650: 0xc0436e8  jal         func_10DBA0
    ctx->pc = 0x355650u;
    SET_GPR_U32(ctx, 31, 0x355658u);
    ctx->pc = 0x10DBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DBA0u, 0x355650u, 0x355658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355658u;
label_355658:
    // 0x355658: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x355658u;
    {
        const bool branch_taken_0x355658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355658) {
            ctx->pc = 0x355668u;
            goto label_355668;
        }
    }
    ctx->pc = 0x355660u;
    // 0x355660: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x355660u;
    {
        const bool branch_taken_0x355660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355660) {
            ctx->pc = 0x3556A0u;
            goto label_3556a0;
        }
    }
    ctx->pc = 0x355668u;
label_355668:
    // 0x355668: 0xafc00070  sw          $zero, 0x70($fp)
    ctx->pc = 0x355668u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 112), GPR_U32(ctx, 0));
label_35566c:
    // 0x35566c: 0x8fc20070  lw          $v0, 0x70($fp)
    ctx->pc = 0x35566cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 112)));
    // 0x355670: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x355670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x355674: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x355674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x355678: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x355678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35567c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35567Cu;
    {
        const bool branch_taken_0x35567c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35567c) {
            ctx->pc = 0x35568Cu;
            goto label_35568c;
        }
    }
    ctx->pc = 0x355684u;
    // 0x355684: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x355684u;
    {
        const bool branch_taken_0x355684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355684) {
            ctx->pc = 0x355634u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355634;
        }
    }
    ctx->pc = 0x35568Cu;
label_35568c:
    // 0x35568c: 0x8fc20070  lw          $v0, 0x70($fp)
    ctx->pc = 0x35568cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 112)));
    // 0x355690: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x355690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x355694: 0xafc20070  sw          $v0, 0x70($fp)
    ctx->pc = 0x355694u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 112), GPR_U32(ctx, 2));
    // 0x355698: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x355698u;
    {
        const bool branch_taken_0x355698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355698) {
            ctx->pc = 0x35566Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35566c;
        }
    }
    ctx->pc = 0x3556A0u;
label_3556a0:
    // 0x3556a0: 0x27c20028  addiu       $v0, $fp, 0x28
    ctx->pc = 0x3556a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 40));
    // 0x3556a4: 0x27c30010  addiu       $v1, $fp, 0x10
    ctx->pc = 0x3556a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x3556a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3556a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3556ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3556acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3556b0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3556b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3556b4: 0xc0436a0  jal         func_10DA80
    ctx->pc = 0x3556B4u;
    SET_GPR_U32(ctx, 31, 0x3556BCu);
    ctx->pc = 0x10DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DA80u, 0x3556B4u, 0x3556BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3556BCu;
label_3556bc:
    // 0x3556bc: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x3556bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3556c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3556C0u;
    {
        const bool branch_taken_0x3556c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3556c0) {
            ctx->pc = 0x3556D0u;
            goto label_3556d0;
        }
    }
    ctx->pc = 0x3556C8u;
    // 0x3556c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3556c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3556cc: 0xafc2002c  sw          $v0, 0x2C($fp)
    ctx->pc = 0x3556ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 44), GPR_U32(ctx, 2));
label_3556d0:
    // 0x3556d0: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x3556d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x3556d4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3556d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3556d8: 0x27c20040  addiu       $v0, $fp, 0x40
    ctx->pc = 0x3556d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    // 0x3556dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3556dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3556e0: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x3556e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3556e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3556e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3556e8: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x3556e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x3556ec: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3556ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3556f0: 0x27c20044  addiu       $v0, $fp, 0x44
    ctx->pc = 0x3556f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 68));
    // 0x3556f4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x3556f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3556f8: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x3556f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x3556fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3556fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x355700: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x355700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x355704: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x355704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x355708: 0x27c20048  addiu       $v0, $fp, 0x48
    ctx->pc = 0x355708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 72));
    // 0x35570c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x35570cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x355710: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x355710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x355714: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x355714u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x355718: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x355718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x35571c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x35571cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x355720: 0x27c2004c  addiu       $v0, $fp, 0x4C
    ctx->pc = 0x355720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 76));
    // 0x355724: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x355724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x355728: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x355728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x35572c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35572cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x355730: 0x8fc20024  lw          $v0, 0x24($fp)
    ctx->pc = 0x355730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x355734: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x355734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x355738: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x355738u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x35573c: 0xafc0000c  sw          $zero, 0xC($fp)
    ctx->pc = 0x35573cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
label_355740:
    // 0x355740: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x355740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x355744: 0x8fc30024  lw          $v1, 0x24($fp)
    ctx->pc = 0x355744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x355748: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x355748u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x35574c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35574Cu;
    {
        const bool branch_taken_0x35574c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35574c) {
            ctx->pc = 0x35575Cu;
            goto label_35575c;
        }
    }
    ctx->pc = 0x355754u;
    // 0x355754: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x355754u;
    {
        const bool branch_taken_0x355754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355754) {
            ctx->pc = 0x355818u;
            goto label_355818;
        }
    }
    ctx->pc = 0x35575Cu;
label_35575c:
    // 0x35575c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x35575cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x355760: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x355760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x355764: 0x27c20040  addiu       $v0, $fp, 0x40
    ctx->pc = 0x355764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 64));
    // 0x355768: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x355768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35576c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35576cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355770: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x355770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x355774: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x355774u;
    {
        const bool branch_taken_0x355774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x355774) {
            ctx->pc = 0x3557F0u;
            goto label_3557f0;
        }
    }
    ctx->pc = 0x35577Cu;
    // 0x35577c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x35577cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x355780: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x355780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x355784: 0x27c20044  addiu       $v0, $fp, 0x44
    ctx->pc = 0x355784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 68));
    // 0x355788: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x355788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35578c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35578cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355790: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x355790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x355794: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x355794u;
    {
        const bool branch_taken_0x355794 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x355794) {
            ctx->pc = 0x3557F0u;
            goto label_3557f0;
        }
    }
    ctx->pc = 0x35579Cu;
    // 0x35579c: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x35579cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3557a0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3557a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3557a4: 0x27c20048  addiu       $v0, $fp, 0x48
    ctx->pc = 0x3557a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 72));
    // 0x3557a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3557a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3557ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3557acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3557b0: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x3557b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x3557b4: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3557B4u;
    {
        const bool branch_taken_0x3557b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3557b4) {
            ctx->pc = 0x3557F0u;
            goto label_3557f0;
        }
    }
    ctx->pc = 0x3557BCu;
    // 0x3557bc: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3557bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3557c0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3557c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3557c4: 0x27c2004c  addiu       $v0, $fp, 0x4C
    ctx->pc = 0x3557c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 76));
    // 0x3557c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3557c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3557cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3557ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3557d0: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x3557d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x3557d4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3557D4u;
    {
        const bool branch_taken_0x3557d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3557d4) {
            ctx->pc = 0x3557F0u;
            goto label_3557f0;
        }
    }
    ctx->pc = 0x3557DCu;
    // 0x3557dc: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3557dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3557e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3557e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3557e4: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3557e4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x3557e8: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x3557E8u;
    {
        const bool branch_taken_0x3557e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3557e8) {
            ctx->pc = 0x355740u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355740;
        }
    }
    ctx->pc = 0x3557F0u;
label_3557f0:
    // 0x3557f0: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x3557f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x3557f4: 0xafc20040  sw          $v0, 0x40($fp)
    ctx->pc = 0x3557f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 64), GPR_U32(ctx, 2));
    // 0x3557f8: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x3557f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x3557fc: 0xafc20044  sw          $v0, 0x44($fp)
    ctx->pc = 0x3557fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 68), GPR_U32(ctx, 2));
    // 0x355800: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x355800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x355804: 0xafc20048  sw          $v0, 0x48($fp)
    ctx->pc = 0x355804u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 72), GPR_U32(ctx, 2));
    // 0x355808: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x355808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x35580c: 0xafc2004c  sw          $v0, 0x4C($fp)
    ctx->pc = 0x35580cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 76), GPR_U32(ctx, 2));
    // 0x355810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355814: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x355814u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
label_355818:
    // 0x355818: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x355818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x35581c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x35581cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x355820: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x355820u;
    {
        const bool branch_taken_0x355820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x355820) {
            ctx->pc = 0x355838u;
            goto label_355838;
        }
    }
    ctx->pc = 0x355828u;
    // 0x355828: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35582c: 0xafc20030  sw          $v0, 0x30($fp)
    ctx->pc = 0x35582cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 48), GPR_U32(ctx, 2));
    // 0x355830: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x355830u;
    {
        const bool branch_taken_0x355830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355830) {
            ctx->pc = 0x35584Cu;
            goto label_35584c;
        }
    }
    ctx->pc = 0x355838u;
label_355838:
    // 0x355838: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x355838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x35583c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x35583cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x355840: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x355840u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x355844: 0x1c40ff7b  bgtz        $v0, . + 4 + (-0x85 << 2)
    ctx->pc = 0x355844u;
    {
        const bool branch_taken_0x355844 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x355844) {
            ctx->pc = 0x355634u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355634;
        }
    }
    ctx->pc = 0x35584Cu;
label_35584c:
    // 0x35584c: 0x8fc20030  lw          $v0, 0x30($fp)
    ctx->pc = 0x35584cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x355850: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x355850u;
    {
        const bool branch_taken_0x355850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x355850) {
            ctx->pc = 0x355A5Cu;
            goto label_355a5c;
        }
    }
    ctx->pc = 0x355858u;
    // 0x355858: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x355858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x35585c: 0xafc2007c  sw          $v0, 0x7C($fp)
    ctx->pc = 0x35585cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 124), GPR_U32(ctx, 2));
    // 0x355860: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x355860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x355864: 0x8fc3007c  lw          $v1, 0x7C($fp)
    ctx->pc = 0x355864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 124)));
    // 0x355868: 0x1062004f  beq         $v1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x355868u;
    {
        const bool branch_taken_0x355868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x355868) {
            ctx->pc = 0x3559A8u;
            goto label_3559a8;
        }
    }
    ctx->pc = 0x355870u;
    // 0x355870: 0x8fc3007c  lw          $v1, 0x7C($fp)
    ctx->pc = 0x355870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 124)));
    // 0x355874: 0x2862fffb  slti        $v0, $v1, -0x5
    ctx->pc = 0x355874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967291) ? 1 : 0);
    // 0x355878: 0x14400073  bnez        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x355878u;
    {
        const bool branch_taken_0x355878 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355878) {
            ctx->pc = 0x355A48u;
            goto label_355a48;
        }
    }
    ctx->pc = 0x355880u;
    // 0x355880: 0x8fc2007c  lw          $v0, 0x7C($fp)
    ctx->pc = 0x355880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 124)));
    // 0x355884: 0x1c400070  bgtz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x355884u;
    {
        const bool branch_taken_0x355884 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x355884) {
            ctx->pc = 0x355A48u;
            goto label_355a48;
        }
    }
    ctx->pc = 0x35588Cu;
    // 0x35588c: 0x8fc3007c  lw          $v1, 0x7C($fp)
    ctx->pc = 0x35588cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 124)));
    // 0x355890: 0x2862fffe  slti        $v0, $v1, -0x2
    ctx->pc = 0x355890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967294) ? 1 : 0);
    // 0x355894: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x355894u;
    {
        const bool branch_taken_0x355894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355894) {
            ctx->pc = 0x355A48u;
            goto label_355a48;
        }
    }
    ctx->pc = 0x35589Cu;
    // 0x35589c: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x35589cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x3558a0: 0xafc20074  sw          $v0, 0x74($fp)
    ctx->pc = 0x3558a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 116), GPR_U32(ctx, 2));
    // 0x3558a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3558a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3558a8: 0x8fc30074  lw          $v1, 0x74($fp)
    ctx->pc = 0x3558a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
    // 0x3558ac: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x3558ACu;
    {
        const bool branch_taken_0x3558ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3558ac) {
            ctx->pc = 0x355980u;
            goto label_355980;
        }
    }
    ctx->pc = 0x3558B4u;
    // 0x3558b4: 0x8fc30074  lw          $v1, 0x74($fp)
    ctx->pc = 0x3558b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
    // 0x3558b8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3558b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3558bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3558BCu;
    {
        const bool branch_taken_0x3558bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3558bc) {
            ctx->pc = 0x3558D8u;
            goto label_3558d8;
        }
    }
    ctx->pc = 0x3558C4u;
    // 0x3558c4: 0x8fc20074  lw          $v0, 0x74($fp)
    ctx->pc = 0x3558c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
    // 0x3558c8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3558C8u;
    {
        const bool branch_taken_0x3558c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3558c8) {
            ctx->pc = 0x355994u;
            goto label_355994;
        }
    }
    ctx->pc = 0x3558D0u;
    // 0x3558d0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x3558D0u;
    {
        const bool branch_taken_0x3558d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3558d0) {
            ctx->pc = 0x355994u;
            goto label_355994;
        }
    }
    ctx->pc = 0x3558D8u;
label_3558d8:
    // 0x3558d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3558d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3558dc: 0x8fc30074  lw          $v1, 0x74($fp)
    ctx->pc = 0x3558dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
    // 0x3558e0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3558E0u;
    {
        const bool branch_taken_0x3558e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3558e0) {
            ctx->pc = 0x355900u;
            goto label_355900;
        }
    }
    ctx->pc = 0x3558E8u;
    // 0x3558e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3558e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3558ec: 0x8fc30074  lw          $v1, 0x74($fp)
    ctx->pc = 0x3558ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
    // 0x3558f0: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3558F0u;
    {
        const bool branch_taken_0x3558f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3558f0) {
            ctx->pc = 0x355980u;
            goto label_355980;
        }
    }
    ctx->pc = 0x3558F8u;
    // 0x3558f8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x3558F8u;
    {
        const bool branch_taken_0x3558f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3558f8) {
            ctx->pc = 0x355994u;
            goto label_355994;
        }
    }
    ctx->pc = 0x355900u;
label_355900:
    // 0x355900: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x355900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x355904: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x355904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x355908: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x355908u;
    {
        const bool branch_taken_0x355908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x355908) {
            ctx->pc = 0x35591Cu;
            goto label_35591c;
        }
    }
    ctx->pc = 0x355910u;
    // 0x355910: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x355910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x355914: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x355914u;
    {
        const bool branch_taken_0x355914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x355914) {
            ctx->pc = 0x355930u;
            goto label_355930;
        }
    }
    ctx->pc = 0x35591Cu;
label_35591c:
    // 0x35591c: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x35591cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x355920: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x355920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x355924: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x355924u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x355928: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x355928u;
    {
        const bool branch_taken_0x355928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355928) {
            ctx->pc = 0x355A68u;
            goto label_355a68;
        }
    }
    ctx->pc = 0x355930u;
label_355930:
    // 0x355930: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x355930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x355934: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355938: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x355938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x35593c: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x35593cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x355940: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x355940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x355944: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x355944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x355948: 0x8fc2002c  lw          $v0, 0x2C($fp)
    ctx->pc = 0x355948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x35594c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35594Cu;
    {
        const bool branch_taken_0x35594c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35594c) {
            ctx->pc = 0x35596Cu;
            goto label_35596c;
        }
    }
    ctx->pc = 0x355954u;
    // 0x355954: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x355954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x355958: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x355958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x35595c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x35595cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x355960: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x355960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x355964: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x355964u;
    {
        const bool branch_taken_0x355964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355964) {
            ctx->pc = 0x355A68u;
            goto label_355a68;
        }
    }
    ctx->pc = 0x35596Cu;
label_35596c:
    // 0x35596c: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x35596cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x355970: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x355970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355974: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x355974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x355978: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x355978u;
    {
        const bool branch_taken_0x355978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355978) {
            ctx->pc = 0x355A68u;
            goto label_355a68;
        }
    }
    ctx->pc = 0x355980u;
label_355980:
    // 0x355980: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x355980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x355984: 0x2402fff6  addiu       $v0, $zero, -0xA
    ctx->pc = 0x355984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x355988: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x355988u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x35598c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x35598Cu;
    {
        const bool branch_taken_0x35598c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35598c) {
            ctx->pc = 0x355A68u;
            goto label_355a68;
        }
    }
    ctx->pc = 0x355994u;
label_355994:
    // 0x355994: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x355994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x355998: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x355998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x35599c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x35599cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x3559a0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3559A0u;
    {
        const bool branch_taken_0x3559a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3559a0) {
            ctx->pc = 0x355A68u;
            goto label_355a68;
        }
    }
    ctx->pc = 0x3559A8u;
label_3559a8:
    // 0x3559a8: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x3559a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x3559ac: 0xafc20078  sw          $v0, 0x78($fp)
    ctx->pc = 0x3559acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 120), GPR_U32(ctx, 2));
    // 0x3559b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3559b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3559b4: 0x8fc30078  lw          $v1, 0x78($fp)
    ctx->pc = 0x3559b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 120)));
    // 0x3559b8: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3559B8u;
    {
        const bool branch_taken_0x3559b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3559b8) {
            ctx->pc = 0x355A20u;
            goto label_355a20;
        }
    }
    ctx->pc = 0x3559C0u;
    // 0x3559c0: 0x8fc30078  lw          $v1, 0x78($fp)
    ctx->pc = 0x3559c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 120)));
    // 0x3559c4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3559c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3559c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3559C8u;
    {
        const bool branch_taken_0x3559c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3559c8) {
            ctx->pc = 0x3559E4u;
            goto label_3559e4;
        }
    }
    ctx->pc = 0x3559D0u;
    // 0x3559d0: 0x8fc20078  lw          $v0, 0x78($fp)
    ctx->pc = 0x3559d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 120)));
    // 0x3559d4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3559D4u;
    {
        const bool branch_taken_0x3559d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3559d4) {
            ctx->pc = 0x355A34u;
            goto label_355a34;
        }
    }
    ctx->pc = 0x3559DCu;
    // 0x3559dc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3559DCu;
    {
        const bool branch_taken_0x3559dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3559dc) {
            ctx->pc = 0x355A34u;
            goto label_355a34;
        }
    }
    ctx->pc = 0x3559E4u;
label_3559e4:
    // 0x3559e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3559e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3559e8: 0x8fc30078  lw          $v1, 0x78($fp)
    ctx->pc = 0x3559e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 120)));
    // 0x3559ec: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3559ECu;
    {
        const bool branch_taken_0x3559ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3559ec) {
            ctx->pc = 0x355A0Cu;
            goto label_355a0c;
        }
    }
    ctx->pc = 0x3559F4u;
    // 0x3559f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3559f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3559f8: 0x8fc30078  lw          $v1, 0x78($fp)
    ctx->pc = 0x3559f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 120)));
    // 0x3559fc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3559FCu;
    {
        const bool branch_taken_0x3559fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3559fc) {
            ctx->pc = 0x355A20u;
            goto label_355a20;
        }
    }
    ctx->pc = 0x355A04u;
    // 0x355a04: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x355A04u;
    {
        const bool branch_taken_0x355a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355a04) {
            ctx->pc = 0x355A34u;
            goto label_355a34;
        }
    }
    ctx->pc = 0x355A0Cu;
label_355a0c:
    // 0x355a0c: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x355a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x355a10: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x355a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x355a14: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x355a14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x355a18: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x355A18u;
    {
        const bool branch_taken_0x355a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355a18) {
            ctx->pc = 0x355A68u;
            goto label_355a68;
        }
    }
    ctx->pc = 0x355A20u;
label_355a20:
    // 0x355a20: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x355a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x355a24: 0x2402fff6  addiu       $v0, $zero, -0xA
    ctx->pc = 0x355a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x355a28: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x355a28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x355a2c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x355A2Cu;
    {
        const bool branch_taken_0x355a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355a2c) {
            ctx->pc = 0x355A68u;
            goto label_355a68;
        }
    }
    ctx->pc = 0x355A34u;
label_355a34:
    // 0x355a34: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x355a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x355a38: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x355a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x355a3c: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x355a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x355a40: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x355A40u;
    {
        const bool branch_taken_0x355a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355a40) {
            ctx->pc = 0x355A68u;
            goto label_355a68;
        }
    }
    ctx->pc = 0x355A48u;
label_355a48:
    // 0x355a48: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x355a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x355a4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x355a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x355a50: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x355a50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x355a54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x355A54u;
    {
        const bool branch_taken_0x355a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355a54) {
            ctx->pc = 0x355A68u;
            goto label_355a68;
        }
    }
    ctx->pc = 0x355A5Cu;
label_355a5c:
    // 0x355a5c: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x355a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x355a60: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x355a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x355a64: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x355a64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_355a68:
    // 0x355a68: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x355a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x355a6c: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x355a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x355a70: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x355a70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x355a74: 0xc0d54f2  jal         func_3553C8
    ctx->pc = 0x355A74u;
    SET_GPR_U32(ctx, 31, 0x355A7Cu);
    ctx->pc = 0x3553C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3553C8u, 0x355A74u, 0x355A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355A7Cu;
label_355a7c:
    // 0x355a7c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x355a7cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355a80: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x355a80u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x355a84: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x355a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x355a88: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x355a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x355a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x355A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355A94u;
}
