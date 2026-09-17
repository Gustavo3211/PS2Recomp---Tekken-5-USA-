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

// Function: sub_00357688
// Address: 0x357688 - 0x357850
void sub_00357688_0x357688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357688_0x357688");
#endif

    switch (ctx->pc) {
        case 0x357700u: goto label_357700;
        case 0x357714u: goto label_357714;
        case 0x357728u: goto label_357728;
        case 0x357778u: goto label_357778;
        default: break;
    }

    ctx->pc = 0x357688u;

    // 0x357688: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x357688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35768c: 0xffbe0030  sd          $fp, 0x30($sp)
    ctx->pc = 0x35768cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 30));
    // 0x357690: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x357690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x357694: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x357694u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357698: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x357698u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x35769c: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x35769cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
    // 0x3576a0: 0xafc60008  sw          $a2, 0x8($fp)
    ctx->pc = 0x3576a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 6));
    // 0x3576a4: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x3576a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x3576a8: 0xafc20020  sw          $v0, 0x20($fp)
    ctx->pc = 0x3576a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 32), GPR_U32(ctx, 2));
    // 0x3576ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3576acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3576b0: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x3576b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x3576b4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3576B4u;
    {
        const bool branch_taken_0x3576b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3576b4) {
            ctx->pc = 0x3576E8u;
            goto label_3576e8;
        }
    }
    ctx->pc = 0x3576BCu;
    // 0x3576bc: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x3576bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x3576c0: 0x2c620001  sltiu       $v0, $v1, 0x1
    ctx->pc = 0x3576c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3576c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3576C4u;
    {
        const bool branch_taken_0x3576c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3576c4) {
            ctx->pc = 0x3576DCu;
            goto label_3576dc;
        }
    }
    ctx->pc = 0x3576CCu;
    // 0x3576cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3576ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3576d0: 0x8fc30020  lw          $v1, 0x20($fp)
    ctx->pc = 0x3576d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
    // 0x3576d4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3576D4u;
    {
        const bool branch_taken_0x3576d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3576d4) {
            ctx->pc = 0x3576F8u;
            goto label_3576f8;
        }
    }
    ctx->pc = 0x3576DCu;
label_3576dc:
    // 0x3576dc: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x3576dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 0));
    // 0x3576e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3576E0u;
    {
        const bool branch_taken_0x3576e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3576e0) {
            ctx->pc = 0x357700u;
            goto label_357700;
        }
    }
    ctx->pc = 0x3576E8u;
label_3576e8:
    // 0x3576e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3576e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3576ec: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x3576ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
    // 0x3576f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3576F0u;
    {
        const bool branch_taken_0x3576f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3576f0) {
            ctx->pc = 0x357700u;
            goto label_357700;
        }
    }
    ctx->pc = 0x3576F8u;
label_3576f8:
    // 0x3576f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3576f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3576fc: 0xafc20018  sw          $v0, 0x18($fp)
    ctx->pc = 0x3576fcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 2));
label_357700:
    // 0x357700: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x357700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x357704: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x357704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x357708: 0x8fc60018  lw          $a2, 0x18($fp)
    ctx->pc = 0x357708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x35770c: 0xc043598  jal         func_10D660
    ctx->pc = 0x35770Cu;
    SET_GPR_U32(ctx, 31, 0x357714u);
    ctx->pc = 0x10D660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D660u, 0x35770Cu, 0x357714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357714u;
label_357714:
    // 0x357714: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357714u;
    {
        const bool branch_taken_0x357714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357714) {
            ctx->pc = 0x357724u;
            goto label_357724;
        }
    }
    ctx->pc = 0x35771Cu;
    // 0x35771c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x35771Cu;
    {
        const bool branch_taken_0x35771c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35771c) {
            ctx->pc = 0x35775Cu;
            goto label_35775c;
        }
    }
    ctx->pc = 0x357724u;
label_357724:
    // 0x357724: 0xafc0001c  sw          $zero, 0x1C($fp)
    ctx->pc = 0x357724u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 0));
label_357728:
    // 0x357728: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x357728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x35772c: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x35772cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x357730: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x357730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x357734: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x357734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x357738: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x357738u;
    {
        const bool branch_taken_0x357738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357738) {
            ctx->pc = 0x357748u;
            goto label_357748;
        }
    }
    ctx->pc = 0x357740u;
    // 0x357740: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x357740u;
    {
        const bool branch_taken_0x357740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357740) {
            ctx->pc = 0x357700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_357700;
        }
    }
    ctx->pc = 0x357748u;
label_357748:
    // 0x357748: 0x8fc2001c  lw          $v0, 0x1C($fp)
    ctx->pc = 0x357748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 28)));
    // 0x35774c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x35774cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x357750: 0xafc2001c  sw          $v0, 0x1C($fp)
    ctx->pc = 0x357750u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
    // 0x357754: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x357754u;
    {
        const bool branch_taken_0x357754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357754) {
            ctx->pc = 0x357728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_357728;
        }
    }
    ctx->pc = 0x35775Cu;
label_35775c:
    // 0x35775c: 0x27c20010  addiu       $v0, $fp, 0x10
    ctx->pc = 0x35775cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x357760: 0x27c30014  addiu       $v1, $fp, 0x14
    ctx->pc = 0x357760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
    // 0x357764: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x357764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357768: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x357768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35776c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x35776cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357770: 0xc0436a0  jal         func_10DA80
    ctx->pc = 0x357770u;
    SET_GPR_U32(ctx, 31, 0x357778u);
    ctx->pc = 0x10DA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DA80u, 0x357770u, 0x357778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357778u;
label_357778:
    // 0x357778: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x357778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x35777c: 0xafc20024  sw          $v0, 0x24($fp)
    ctx->pc = 0x35777cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 36), GPR_U32(ctx, 2));
    // 0x357780: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x357780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x357784: 0x8fc30024  lw          $v1, 0x24($fp)
    ctx->pc = 0x357784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x357788: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x357788u;
    {
        const bool branch_taken_0x357788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x357788) {
            ctx->pc = 0x3577E4u;
            goto label_3577e4;
        }
    }
    ctx->pc = 0x357790u;
    // 0x357790: 0x8fc30024  lw          $v1, 0x24($fp)
    ctx->pc = 0x357790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x357794: 0x2862fffd  slti        $v0, $v1, -0x3
    ctx->pc = 0x357794u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967293) ? 1 : 0);
    // 0x357798: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x357798u;
    {
        const bool branch_taken_0x357798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357798) {
            ctx->pc = 0x3577B8u;
            goto label_3577b8;
        }
    }
    ctx->pc = 0x3577A0u;
    // 0x3577a0: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3577a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x3577a4: 0x8fc30024  lw          $v1, 0x24($fp)
    ctx->pc = 0x3577a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x3577a8: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3577A8u;
    {
        const bool branch_taken_0x3577a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3577a8) {
            ctx->pc = 0x3577F8u;
            goto label_3577f8;
        }
    }
    ctx->pc = 0x3577B0u;
    // 0x3577b0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x3577B0u;
    {
        const bool branch_taken_0x3577b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3577b0) {
            ctx->pc = 0x35780Cu;
            goto label_35780c;
        }
    }
    ctx->pc = 0x3577B8u;
label_3577b8:
    // 0x3577b8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x3577b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3577bc: 0x8fc30024  lw          $v1, 0x24($fp)
    ctx->pc = 0x3577bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 36)));
    // 0x3577c0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3577C0u;
    {
        const bool branch_taken_0x3577c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3577c0) {
            ctx->pc = 0x3577D0u;
            goto label_3577d0;
        }
    }
    ctx->pc = 0x3577C8u;
    // 0x3577c8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3577C8u;
    {
        const bool branch_taken_0x3577c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3577c8) {
            ctx->pc = 0x35780Cu;
            goto label_35780c;
        }
    }
    ctx->pc = 0x3577D0u;
label_3577d0:
    // 0x3577d0: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3577d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3577d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3577d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3577d8: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3577d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x3577dc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3577DCu;
    {
        const bool branch_taken_0x3577dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3577dc) {
            ctx->pc = 0x357834u;
            goto label_357834;
        }
    }
    ctx->pc = 0x3577E4u;
label_3577e4:
    // 0x3577e4: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3577e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3577e8: 0x3442fff6  ori         $v0, $v0, 0xFFF6
    ctx->pc = 0x3577e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65526);
    // 0x3577ec: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x3577ecu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x3577f0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x3577F0u;
    {
        const bool branch_taken_0x3577f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3577f0) {
            ctx->pc = 0x357834u;
            goto label_357834;
        }
    }
    ctx->pc = 0x3577F8u;
label_3577f8:
    // 0x3577f8: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x3577f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x3577fc: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x3577fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x357800: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x357800u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x357804: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x357804u;
    {
        const bool branch_taken_0x357804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357804) {
            ctx->pc = 0x357834u;
            goto label_357834;
        }
    }
    ctx->pc = 0x35780Cu;
label_35780c:
    // 0x35780c: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x35780cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x357810: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x357810u;
    {
        const bool branch_taken_0x357810 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x357810) {
            ctx->pc = 0x357828u;
            goto label_357828;
        }
    }
    ctx->pc = 0x357818u;
    // 0x357818: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x357818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x35781c: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x35781cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
    // 0x357820: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x357820u;
    {
        const bool branch_taken_0x357820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357820) {
            ctx->pc = 0x357834u;
            goto label_357834;
        }
    }
    ctx->pc = 0x357828u;
label_357828:
    // 0x357828: 0x3c02fdff  lui         $v0, 0xFDFF
    ctx->pc = 0x357828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65023 << 16));
    // 0x35782c: 0x3442fffb  ori         $v0, $v0, 0xFFFB
    ctx->pc = 0x35782cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65531);
    // 0x357830: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x357830u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_357834:
    // 0x357834: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x357834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x357838: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x357838u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35783c: 0xdfbe0030  ld          $fp, 0x30($sp)
    ctx->pc = 0x35783cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x357840: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x357840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x357844: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x357844u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x357848: 0x3e00008  jr          $ra
    ctx->pc = 0x357848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357850u;
}
