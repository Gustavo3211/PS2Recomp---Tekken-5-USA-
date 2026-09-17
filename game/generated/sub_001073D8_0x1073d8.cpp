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

// Function: sub_001073D8
// Address: 0x1073d8 - 0x107708
void sub_001073D8_0x1073d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001073D8_0x1073d8");
#endif

    switch (ctx->pc) {
        case 0x10741cu: goto label_10741c;
        case 0x107428u: goto label_107428;
        case 0x10745cu: goto label_10745c;
        case 0x1074a8u: goto label_1074a8;
        case 0x1074ccu: goto label_1074cc;
        case 0x107540u: goto label_107540;
        case 0x107570u: goto label_107570;
        case 0x1075a4u: goto label_1075a4;
        case 0x1075ccu: goto label_1075cc;
        case 0x1075f8u: goto label_1075f8;
        case 0x107630u: goto label_107630;
        case 0x10765cu: goto label_10765c;
        case 0x107688u: goto label_107688;
        case 0x1076b4u: goto label_1076b4;
        default: break;
    }

    ctx->pc = 0x1073d8u;

    // 0x1073d8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1073d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1073dc: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x1073dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x1073e0: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1073e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1073e4: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1073e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1073e8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1073e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1073ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1073ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1073f0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1073f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x1073f4: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1073f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x1073f8: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x1073f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x1073fc: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1073fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107400: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x107400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x107404: 0xffb500b0  sd          $s5, 0xB0($sp)
    ctx->pc = 0x107404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 21));
    // 0x107408: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x107408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x10740c: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x10740cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x107410: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x107410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x107414: 0xc042696  jal         func_109A58
    ctx->pc = 0x107414u;
    SET_GPR_U32(ctx, 31, 0x10741Cu);
    ctx->pc = 0x107418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107414u;
    // 0x107418: 0xffb10070  sd          $s1, 0x70($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109A58u, 0x107414u, 0x10741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10741Cu;
label_10741c:
    // 0x10741c: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x10741Cu;
    {
        const bool branch_taken_0x10741c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10741Cu;
        // 0x107420: 0xdfbf00d0  ld          $ra, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10741c) {
            ctx->pc = 0x1076E0u;
            goto label_1076e0;
        }
    }
    ctx->pc = 0x107424u;
    // 0x107424: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x107424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_107428:
    // 0x107428: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x107428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10742c: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x10742cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x107430: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x107430u;
    {
        const bool branch_taken_0x107430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107430) {
            ctx->pc = 0x107434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107430u;
            // 0x107434: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107440u;
            goto label_107440;
        }
    }
    ctx->pc = 0x107438u;
    // 0x107438: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x107438u;
    {
        const bool branch_taken_0x107438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107438u;
        // 0x10743c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107438) {
            ctx->pc = 0x1076DCu;
            goto label_1076dc;
        }
    }
    ctx->pc = 0x107440u;
label_107440:
    // 0x107440: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x107440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x107444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107448: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x107448u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10744c: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x10744cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x107450: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x107450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x107454: 0xc042226  jal         func_108898
    ctx->pc = 0x107454u;
    SET_GPR_U32(ctx, 31, 0x10745Cu);
    ctx->pc = 0x107458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107454u;
    // 0x107458: 0xac4006dc  sw          $zero, 0x6DC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108898u, 0x107454u, 0x10745Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10745Cu;
label_10745c:
    // 0x10745c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10745cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x107460: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x107460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x107464: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107464u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u)); // MMIO: 0x1000b020
    // 0x107468: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x107468u;
    {
        const bool branch_taken_0x107468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107468u;
        // 0x10746c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107468) {
            ctx->pc = 0x1074F4u;
            goto label_1074f4;
        }
    }
    ctx->pc = 0x107470u;
    // 0x107470: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x107470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x107474: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107474u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10002010
    // 0x107478: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x107478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x10747c: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x10747Cu;
    {
        const bool branch_taken_0x10747c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x107480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10747Cu;
        // 0x107480: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10747c) {
            ctx->pc = 0x1074F8u;
            goto label_1074f8;
        }
    }
    ctx->pc = 0x107484u;
    // 0x107484: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x107484u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x107488: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x107488u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x10748c: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x10748cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x107490: 0x3c111000  lui         $s1, 0x1000
    ctx->pc = 0x107490u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4096 << 16));
    // 0x107494: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x107494u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x107498: 0x3673b400  ori         $s3, $s3, 0xB400
    ctx->pc = 0x107498u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46080);
    // 0x10749c: 0x3652b020  ori         $s2, $s2, 0xB020
    ctx->pc = 0x10749cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)45088);
    // 0x1074a0: 0x36312010  ori         $s1, $s1, 0x2010
    ctx->pc = 0x1074a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8208);
    // 0x1074a4: 0x0  nop
    ctx->pc = 0x1074a4u;
    // NOP
label_1074a8:
    // 0x1074a8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1074a8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 20), 0))); // MMIO: 0x1000b420
    // 0x1074ac: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1074ACu;
    {
        const bool branch_taken_0x1074ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1074ac) {
            ctx->pc = 0x1074B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1074ACu;
            // 0x1074b0: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1074D0u;
            goto label_1074d0;
        }
    }
    ctx->pc = 0x1074B4u;
    // 0x1074b4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1074b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1074b8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1074b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1074bc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1074BCu;
    {
        const bool branch_taken_0x1074bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1074bc) {
            ctx->pc = 0x1074C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1074BCu;
            // 0x1074c0: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1074D0u;
            goto label_1074d0;
        }
    }
    ctx->pc = 0x1074C4u;
    // 0x1074c4: 0xc0411a4  jal         func_104690
    ctx->pc = 0x1074C4u;
    SET_GPR_U32(ctx, 31, 0x1074CCu);
    ctx->pc = 0x1074C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1074C4u;
    // 0x1074c8: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104690u, 0x1074C4u, 0x1074CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1074CCu;
label_1074cc:
    // 0x1074cc: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x1074ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_1074d0:
    // 0x1074d0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1074D0u;
    {
        const bool branch_taken_0x1074d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1074d0) {
            ctx->pc = 0x107538u;
            goto label_107538;
        }
    }
    ctx->pc = 0x1074D8u;
    // 0x1074d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1074d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1074dc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1074DCu;
    {
        const bool branch_taken_0x1074dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1074E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1074DCu;
        // 0x1074e0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1074dc) {
            ctx->pc = 0x1074F8u;
            goto label_1074f8;
        }
    }
    ctx->pc = 0x1074E4u;
    // 0x1074e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1074e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1074e8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1074e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1074ec: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1074ECu;
    {
        const bool branch_taken_0x1074ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1074ec) {
            ctx->pc = 0x1074A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1074a8;
        }
    }
    ctx->pc = 0x1074F4u;
label_1074f4:
    // 0x1074f4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1074f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1074f8:
    // 0x1074f8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1074f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1074fc: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x1074fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x107500: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x107500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x107504: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x107504u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10002020
    // 0x107508: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x107508u;
    SET_GPR_U64(ctx, 4, runtime->Load64(rdram, ctx, 0x10002030u));
    // 0x10750c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x10750cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x107510: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x107510u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x107514: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x107514u;
    {
        const bool branch_taken_0x107514 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x107518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107514u;
        // 0x107518: 0xae020848  sw          $v0, 0x848($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107514) {
            ctx->pc = 0x107548u;
            goto label_107548;
        }
    }
    ctx->pc = 0x10751Cu;
    // 0x10751c: 0x30a3001f  andi        $v1, $a1, 0x1F
    ctx->pc = 0x10751cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x107520: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x107520u;
    {
        const bool branch_taken_0x107520 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107520u;
        // 0x107524: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107520) {
            ctx->pc = 0x107530u;
            goto label_107530;
        }
    }
    ctx->pc = 0x107528u;
    // 0x107528: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x107528u;
    {
        const bool branch_taken_0x107528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107528u;
        // 0x10752c: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107528) {
            ctx->pc = 0x10754Cu;
            goto label_10754c;
        }
    }
    ctx->pc = 0x107530u;
label_107530:
    // 0x107530: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x107530u;
    {
        const bool branch_taken_0x107530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107530u;
        // 0x107534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107530) {
            ctx->pc = 0x10754Cu;
            goto label_10754c;
        }
    }
    ctx->pc = 0x107538u;
label_107538:
    // 0x107538: 0xc041782  jal         func_105E08
    ctx->pc = 0x107538u;
    SET_GPR_U32(ctx, 31, 0x107540u);
    ctx->pc = 0x105E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E08u, 0x107538u, 0x107540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107540u;
label_107540:
    // 0x107540: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x107540u;
    {
        const bool branch_taken_0x107540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107540u;
        // 0x107544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107540) {
            ctx->pc = 0x107574u;
            goto label_107574;
        }
    }
    ctx->pc = 0x107548u;
label_107548:
    // 0x107548: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x107548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_10754c:
    // 0x10754c: 0xae02084c  sw          $v0, 0x84C($s0)
    ctx->pc = 0x10754cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 2));
    // 0x107550: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x107550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x107554: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x107554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x107558: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107558u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x10755c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x10755cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x107560: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x107560u;
    {
        const bool branch_taken_0x107560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107560u;
        // 0x107564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107560) {
            ctx->pc = 0x107570u;
            goto label_107570;
        }
    }
    ctx->pc = 0x107568u;
    // 0x107568: 0xc0417aa  jal         func_105EA8
    ctx->pc = 0x107568u;
    SET_GPR_U32(ctx, 31, 0x107570u);
    ctx->pc = 0x10756Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107568u;
    // 0x10756c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105EA8u, 0x107568u, 0x107570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107570u;
label_107570:
    // 0x107570: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x107570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_107574:
    // 0x107574: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x107574u;
    {
        const bool branch_taken_0x107574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x107574) {
            ctx->pc = 0x107578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x107574u;
            // 0x107578: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x107590u;
            goto label_107590;
        }
    }
    ctx->pc = 0x10757Cu;
    // 0x10757c: 0x8e040878  lw          $a0, 0x878($s0)
    ctx->pc = 0x10757cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x107580: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x107580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x107584: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x107584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x107588: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x107588u;
    {
        const bool branch_taken_0x107588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107588u;
        // 0x10758c: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107588) {
            ctx->pc = 0x1076DCu;
            goto label_1076dc;
        }
    }
    ctx->pc = 0x107590u;
label_107590:
    // 0x107590: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x107590u;
    {
        const bool branch_taken_0x107590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107590u;
        // 0x107594: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107590) {
            ctx->pc = 0x1075DCu;
            goto label_1075dc;
        }
    }
    ctx->pc = 0x107598u;
    // 0x107598: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10759c: 0xc0421dc  jal         func_108770
    ctx->pc = 0x10759Cu;
    SET_GPR_U32(ctx, 31, 0x1075A4u);
    ctx->pc = 0x1075A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10759Cu;
    // 0x1075a0: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108770u, 0x10759Cu, 0x1075A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1075A4u;
label_1075a4:
    // 0x1075a4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1075A4u;
    {
        const bool branch_taken_0x1075a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1075a4) {
            ctx->pc = 0x1075A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1075A4u;
            // 0x1075a8: 0xae00012c  sw          $zero, 0x12C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1075BCu;
            goto label_1075bc;
        }
    }
    ctx->pc = 0x1075ACu;
    // 0x1075ac: 0x8e02012c  lw          $v0, 0x12C($s0)
    ctx->pc = 0x1075acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x1075b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1075B0u;
    {
        const bool branch_taken_0x1075b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1075b0) {
            ctx->pc = 0x1075C4u;
            goto label_1075c4;
        }
    }
    ctx->pc = 0x1075B8u;
    // 0x1075b8: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x1075b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
label_1075bc:
    // 0x1075bc: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x1075BCu;
    {
        const bool branch_taken_0x1075bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1075C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075BCu;
        // 0x1075c0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1075bc) {
            ctx->pc = 0x1076DCu;
            goto label_1076dc;
        }
    }
    ctx->pc = 0x1075C4u;
label_1075c4:
    // 0x1075c4: 0xc04208a  jal         func_108228
    ctx->pc = 0x1075C4u;
    SET_GPR_U32(ctx, 31, 0x1075CCu);
    ctx->pc = 0x1075C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1075C4u;
    // 0x1075c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108228u, 0x1075C4u, 0x1075CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1075CCu;
label_1075cc:
    // 0x1075cc: 0x8e03012c  lw          $v1, 0x12C($s0)
    ctx->pc = 0x1075ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 300)));
    // 0x1075d0: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1075D0u;
    {
        const bool branch_taken_0x1075d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1075D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075D0u;
        // 0x1075d4: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1075d0) {
            ctx->pc = 0x107638u;
            goto label_107638;
        }
    }
    ctx->pc = 0x1075D8u;
    // 0x1075d8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x1075d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_1075dc:
    // 0x1075dc: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x1075dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1075e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1075E0u;
    {
        const bool branch_taken_0x1075e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1075E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075E0u;
        // 0x1075e4: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1075e0) {
            ctx->pc = 0x107600u;
            goto label_107600;
        }
    }
    ctx->pc = 0x1075E8u;
    // 0x1075e8: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1075e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1075ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1075ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1075f0: 0xc0417dc  jal         func_105F70
    ctx->pc = 0x1075F0u;
    SET_GPR_U32(ctx, 31, 0x1075F8u);
    ctx->pc = 0x1075F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1075F0u;
    // 0x1075f4: 0x24a5da40  addiu       $a1, $a1, -0x25C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F70u, 0x1075F0u, 0x1075F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1075F8u;
label_1075f8:
    // 0x1075f8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1075F8u;
    {
        const bool branch_taken_0x1075f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1075FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1075F8u;
        // 0x1075fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1075f8) {
            ctx->pc = 0x1076DCu;
            goto label_1076dc;
        }
    }
    ctx->pc = 0x107600u;
label_107600:
    // 0x107600: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x107600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107604: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x107604u;
    {
        const bool branch_taken_0x107604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x107608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107604u;
        // 0x107608: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107604) {
            ctx->pc = 0x107644u;
            goto label_107644;
        }
    }
    ctx->pc = 0x10760Cu;
    // 0x10760c: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x10760cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x107610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107614: 0x27a50048  addiu       $a1, $sp, 0x48
    ctx->pc = 0x107614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x107618: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x107618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x10761c: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x10761cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x107620: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x107620u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107624: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x107624u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107628: 0xc041f34  jal         func_107CD0
    ctx->pc = 0x107628u;
    SET_GPR_U32(ctx, 31, 0x107630u);
    ctx->pc = 0x10762Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107628u;
    // 0x10762c: 0x220502d  daddu       $t2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107CD0u, 0x107628u, 0x107630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107630u;
label_107630:
    // 0x107630: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x107630u;
    {
        const bool branch_taken_0x107630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107630u;
        // 0x107634: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107630) {
            ctx->pc = 0x107668u;
            goto label_107668;
        }
    }
    ctx->pc = 0x107638u;
label_107638:
    // 0x107638: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x107638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x10763c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x10763Cu;
    {
        const bool branch_taken_0x10763c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10763Cu;
        // 0x107640: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10763c) {
            ctx->pc = 0x1076DCu;
            goto label_1076dc;
        }
    }
    ctx->pc = 0x107644u;
label_107644:
    // 0x107644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107648: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x107648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10764c: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x10764cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x107650: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x107650u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107654: 0xc042236  jal         func_1088D8
    ctx->pc = 0x107654u;
    SET_GPR_U32(ctx, 31, 0x10765Cu);
    ctx->pc = 0x107658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107654u;
    // 0x107658: 0x27a80048  addiu       $t0, $sp, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1088D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1088D8u, 0x107654u, 0x10765Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10765Cu;
label_10765c:
    // 0x10765c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10765Cu;
    {
        const bool branch_taken_0x10765c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10765Cu;
        // 0x107660: 0x27b10030  addiu       $s1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10765c) {
            ctx->pc = 0x107690u;
            goto label_107690;
        }
    }
    ctx->pc = 0x107664u;
    // 0x107664: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x107664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_107668:
    // 0x107668: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x107668u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10766c: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x10766cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x107670: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x107670u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x107674: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x107674u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x107678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x107678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10767c: 0x8fa8004c  lw          $t0, 0x4C($sp)
    ctx->pc = 0x10767cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x107680: 0xc041a28  jal         func_1068A0
    ctx->pc = 0x107680u;
    SET_GPR_U32(ctx, 31, 0x107688u);
    ctx->pc = 0x107684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107680u;
    // 0x107684: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1068A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1068A0u, 0x107680u, 0x107688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107688u;
label_107688:
    // 0x107688: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x107688u;
    {
        const bool branch_taken_0x107688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107688u;
        // 0x10768c: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107688) {
            ctx->pc = 0x10769Cu;
            goto label_10769c;
        }
    }
    ctx->pc = 0x107690u;
label_107690:
    // 0x107690: 0xae00012c  sw          $zero, 0x12C($s0)
    ctx->pc = 0x107690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
    // 0x107694: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x107694u;
    {
        const bool branch_taken_0x107694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107694u;
        // 0x107698: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107694) {
            ctx->pc = 0x1076DCu;
            goto label_1076dc;
        }
    }
    ctx->pc = 0x10769Cu;
label_10769c:
    // 0x10769c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x10769Cu;
    {
        const bool branch_taken_0x10769c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x10769c) {
            ctx->pc = 0x1076A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10769Cu;
            // 0x1076a0: 0x8e020820  lw          $v0, 0x820($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1076BCu;
            goto label_1076bc;
        }
    }
    ctx->pc = 0x1076A4u;
    // 0x1076a4: 0x8e050820  lw          $a1, 0x820($s0)
    ctx->pc = 0x1076a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x1076a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1076a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1076ac: 0xc041bde  jal         func_106F78
    ctx->pc = 0x1076ACu;
    SET_GPR_U32(ctx, 31, 0x1076B4u);
    ctx->pc = 0x1076B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1076ACu;
    // 0x1076b0: 0x38a50001  xori        $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x106F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106F78u, 0x1076ACu, 0x1076B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1076B4u;
label_1076b4:
    // 0x1076b4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x1076b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1076b8: 0x8e020820  lw          $v0, 0x820($s0)
    ctx->pc = 0x1076b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
label_1076bc:
    // 0x1076bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1076bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1076c0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x1076c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1076c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1076c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1076c8: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x1076c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x1076cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1076ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1076d0: 0xae020820  sw          $v0, 0x820($s0)
    ctx->pc = 0x1076d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2080), GPR_U32(ctx, 2));
    // 0x1076d4: 0x1000ff54  b           . + 4 + (-0xAC << 2)
    ctx->pc = 0x1076D4u;
    {
        const bool branch_taken_0x1076d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1076D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1076D4u;
        // 0x1076d8: 0xafa30044  sw          $v1, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1076d4) {
            ctx->pc = 0x107428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_107428;
        }
    }
    ctx->pc = 0x1076DCu;
label_1076dc:
    // 0x1076dc: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1076dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_1076e0:
    // 0x1076e0: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x1076e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1076e4: 0xdfb500b0  ld          $s5, 0xB0($sp)
    ctx->pc = 0x1076e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1076e8: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1076e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1076ec: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x1076ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1076f0: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1076f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1076f4: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x1076f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1076f8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1076f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1076fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1076FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1076FCu;
        // 0x107700: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1076FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107704u;
    // 0x107704: 0x0  nop
    ctx->pc = 0x107704u;
    // NOP
    ctx->pc = 0x107708u;
}
