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

// Function: sub_00356638
// Address: 0x356638 - 0x356814
void sub_00356638_0x356638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356638_0x356638");
#endif

    switch (ctx->pc) {
        case 0x356690u: goto label_356690;
        case 0x3566ccu: goto label_3566cc;
        case 0x3566e0u: goto label_3566e0;
        case 0x356730u: goto label_356730;
        default: break;
    }

    ctx->pc = 0x356638u;

    // 0x356638: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x356638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35663c: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x35663cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x356640: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x356640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x356644: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x356644u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356648: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x356648u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x35664c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x35664cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x356650: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x356650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x356654: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x356654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x356658: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x356658u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x35665c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x35665cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x356660: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x356660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x356664: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x356664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x356668: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x356668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35666c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x35666cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x356670: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x356670u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356674: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x356674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x356678: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x356678u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35667c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x35667cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x356680: 0x3c02001c  lui         $v0, 0x1C
    ctx->pc = 0x356680u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28 << 16));
    // 0x356684: 0x2442d740  addiu       $v0, $v0, -0x28C0
    ctx->pc = 0x356684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956864));
    // 0x356688: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x356688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35668c: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x35668cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
label_356690:
    // 0x356690: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x356690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x356694: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x356694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x356698: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x356698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x35669c: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x35669cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3566a0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3566a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3566a4: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x3566a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3566a8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3566a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3566ac: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x3566acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x3566b0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3566b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3566b4: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x3566b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3566b8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x3566b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3566bc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3566bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3566c0: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x3566c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3566c4: 0xc043764  jal         func_10DD90
    ctx->pc = 0x3566C4u;
    SET_GPR_U32(ctx, 31, 0x3566CCu);
    ctx->pc = 0x10DD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD90u, 0x3566C4u, 0x3566CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3566CCu;
label_3566cc:
    // 0x3566cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3566CCu;
    {
        const bool branch_taken_0x3566cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3566cc) {
            ctx->pc = 0x3566DCu;
            goto label_3566dc;
        }
    }
    ctx->pc = 0x3566D4u;
    // 0x3566d4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3566D4u;
    {
        const bool branch_taken_0x3566d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3566d4) {
            ctx->pc = 0x356714u;
            goto label_356714;
        }
    }
    ctx->pc = 0x3566DCu;
label_3566dc:
    // 0x3566dc: 0xafc0001c  sw          $zero, 0x1C($fp)
    ctx->pc = 0x3566dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 0));
label_3566e0:
    // 0x3566e0: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x3566e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x3566e4: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x3566e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x3566e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3566e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3566ec: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3566ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3566f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3566F0u;
    {
        const bool branch_taken_0x3566f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3566f0) {
            ctx->pc = 0x356700u;
            goto label_356700;
        }
    }
    ctx->pc = 0x3566F8u;
    // 0x3566f8: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x3566F8u;
    {
        const bool branch_taken_0x3566f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3566f8) {
            ctx->pc = 0x356690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_356690;
        }
    }
    ctx->pc = 0x356700u;
label_356700:
    // 0x356700: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x356700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x356704: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x356704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x356708: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x356708u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x35670c: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x35670Cu;
    {
        const bool branch_taken_0x35670c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35670c) {
            ctx->pc = 0x3566E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3566e0;
        }
    }
    ctx->pc = 0x356714u;
label_356714:
    // 0x356714: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x356714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x356718: 0x27c30014  addiu       $v1, $fp, 0x14
    ctx->pc = 0x356718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
    // 0x35671c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35671cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356720: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x356720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356724: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x356724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356728: 0xc0436a0  jal         func_10DA80
    ctx->pc = 0x356728u;
    SET_GPR_U32(ctx, 31, 0x356730u);
    ctx->pc = 0x10DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DA80u, 0x356728u, 0x356730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356730u;
label_356730:
    // 0x356730: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x356730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x356734: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x356734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x356738: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x356738u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x35673c: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x35673cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x356740: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x356740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x356744: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x356744u;
    {
        const bool branch_taken_0x356744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356744) {
            ctx->pc = 0x3567D0u;
            goto label_3567d0;
        }
    }
    ctx->pc = 0x35674Cu;
    // 0x35674c: 0x8fc20020  lw          $v0, 0x20($fp)
    ctx->pc = 0x35674cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x356750: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x356750u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x356754: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x356754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x356758: 0x24424ea0  addiu       $v0, $v0, 0x4EA0
    ctx->pc = 0x356758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20128));
    // 0x35675c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35675cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x356760: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x356760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x356764: 0x400008  jr          $v0
    ctx->pc = 0x356764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x35676Cu: goto label_35676c;
            case 0x356780u: goto label_356780;
            case 0x356794u: goto label_356794;
            case 0x3567A8u: goto label_3567a8;
            case 0x3567BCu: goto label_3567bc;
            case 0x3567D0u: goto label_3567d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356764u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x35676Cu;
label_35676c:
    // 0x35676c: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x35676cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x356770: 0x3442fff9  ori         $v0, $v0, 0xFFF9
    ctx->pc = 0x356770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65529);
    // 0x356774: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x356774u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x356778: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x356778u;
    {
        const bool branch_taken_0x356778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x356778) {
            ctx->pc = 0x3567F8u;
            goto label_3567f8;
        }
    }
    ctx->pc = 0x356780u;
label_356780:
    // 0x356780: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x356784: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x356784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x356788: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x356788u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x35678c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x35678Cu;
    {
        const bool branch_taken_0x35678c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35678c) {
            ctx->pc = 0x3567F8u;
            goto label_3567f8;
        }
    }
    ctx->pc = 0x356794u;
label_356794:
    // 0x356794: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x356794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x356798: 0x3442fffa  ori         $v0, $v0, 0xFFFA
    ctx->pc = 0x356798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65530);
    // 0x35679c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x35679cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x3567a0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3567A0u;
    {
        const bool branch_taken_0x3567a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3567a0) {
            ctx->pc = 0x3567F8u;
            goto label_3567f8;
        }
    }
    ctx->pc = 0x3567A8u;
label_3567a8:
    // 0x3567a8: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3567a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3567ac: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x3567acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x3567b0: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3567b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x3567b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3567B4u;
    {
        const bool branch_taken_0x3567b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3567b4) {
            ctx->pc = 0x3567F8u;
            goto label_3567f8;
        }
    }
    ctx->pc = 0x3567BCu;
label_3567bc:
    // 0x3567bc: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3567bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3567c0: 0x3442fff7  ori         $v0, $v0, 0xFFF7
    ctx->pc = 0x3567c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65527);
    // 0x3567c4: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3567c4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x3567c8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3567C8u;
    {
        const bool branch_taken_0x3567c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3567c8) {
            ctx->pc = 0x3567F8u;
            goto label_3567f8;
        }
    }
    ctx->pc = 0x3567D0u;
label_3567d0:
    // 0x3567d0: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x3567d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x3567d4: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3567D4u;
    {
        const bool branch_taken_0x3567d4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3567d4) {
            ctx->pc = 0x3567ECu;
            goto label_3567ec;
        }
    }
    ctx->pc = 0x3567DCu;
    // 0x3567dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3567dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3567e0: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3567e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x3567e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3567E4u;
    {
        const bool branch_taken_0x3567e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3567e4) {
            ctx->pc = 0x3567F8u;
            goto label_3567f8;
        }
    }
    ctx->pc = 0x3567ECu;
label_3567ec:
    // 0x3567ec: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3567ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3567f0: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x3567f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x3567f4: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3567f4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_3567f8:
    // 0x3567f8: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x3567f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x3567fc: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x3567fcu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x356800: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x356800u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x356804: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x356804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x356808: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x356808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35680c: 0x3e00008  jr          $ra
    ctx->pc = 0x35680Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35680Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356814u;
}
