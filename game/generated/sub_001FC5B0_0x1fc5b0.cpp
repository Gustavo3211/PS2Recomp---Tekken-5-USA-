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

// Function: sub_001FC5B0
// Address: 0x1fc5b0 - 0x1fd958
void sub_001FC5B0_0x1fc5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FC5B0_0x1fc5b0");
#endif

    switch (ctx->pc) {
        case 0x1fc630u: goto label_1fc630;
        case 0x1fc660u: goto label_1fc660;
        case 0x1fc66cu: goto label_1fc66c;
        case 0x1fc69cu: goto label_1fc69c;
        case 0x1fc6e4u: goto label_1fc6e4;
        case 0x1fc708u: goto label_1fc708;
        case 0x1fc71cu: goto label_1fc71c;
        case 0x1fc734u: goto label_1fc734;
        case 0x1fc748u: goto label_1fc748;
        case 0x1fc768u: goto label_1fc768;
        case 0x1fc78cu: goto label_1fc78c;
        case 0x1fc7b4u: goto label_1fc7b4;
        case 0x1fc7d8u: goto label_1fc7d8;
        case 0x1fc7ecu: goto label_1fc7ec;
        case 0x1fc7f8u: goto label_1fc7f8;
        case 0x1fc818u: goto label_1fc818;
        case 0x1fc828u: goto label_1fc828;
        case 0x1fc834u: goto label_1fc834;
        case 0x1fc854u: goto label_1fc854;
        case 0x1fc860u: goto label_1fc860;
        case 0x1fc86cu: goto label_1fc86c;
        case 0x1fc884u: goto label_1fc884;
        case 0x1fc89cu: goto label_1fc89c;
        case 0x1fc8acu: goto label_1fc8ac;
        case 0x1fc8d0u: goto label_1fc8d0;
        case 0x1fc908u: goto label_1fc908;
        case 0x1fc928u: goto label_1fc928;
        case 0x1fc948u: goto label_1fc948;
        case 0x1fc95cu: goto label_1fc95c;
        case 0x1fc974u: goto label_1fc974;
        case 0x1fc984u: goto label_1fc984;
        case 0x1fc994u: goto label_1fc994;
        case 0x1fc9dcu: goto label_1fc9dc;
        case 0x1fca00u: goto label_1fca00;
        case 0x1fca20u: goto label_1fca20;
        case 0x1fca34u: goto label_1fca34;
        case 0x1fca4cu: goto label_1fca4c;
        case 0x1fca58u: goto label_1fca58;
        case 0x1fca68u: goto label_1fca68;
        case 0x1fca84u: goto label_1fca84;
        case 0x1fca98u: goto label_1fca98;
        case 0x1fcab4u: goto label_1fcab4;
        case 0x1fcac8u: goto label_1fcac8;
        case 0x1fcaecu: goto label_1fcaec;
        case 0x1fcb0cu: goto label_1fcb0c;
        case 0x1fcb34u: goto label_1fcb34;
        case 0x1fcb5cu: goto label_1fcb5c;
        case 0x1fcb84u: goto label_1fcb84;
        case 0x1fcbb4u: goto label_1fcbb4;
        case 0x1fcbccu: goto label_1fcbcc;
        case 0x1fcbd8u: goto label_1fcbd8;
        case 0x1fcbecu: goto label_1fcbec;
        case 0x1fcc14u: goto label_1fcc14;
        case 0x1fcc20u: goto label_1fcc20;
        case 0x1fcc44u: goto label_1fcc44;
        case 0x1fcc60u: goto label_1fcc60;
        case 0x1fcc6cu: goto label_1fcc6c;
        case 0x1fcc90u: goto label_1fcc90;
        case 0x1fccacu: goto label_1fccac;
        case 0x1fccb8u: goto label_1fccb8;
        case 0x1fccdcu: goto label_1fccdc;
        case 0x1fcce4u: goto label_1fcce4;
        case 0x1fcd04u: goto label_1fcd04;
        case 0x1fcd30u: goto label_1fcd30;
        case 0x1fcd50u: goto label_1fcd50;
        case 0x1fcdd4u: goto label_1fcdd4;
        case 0x1fcde4u: goto label_1fcde4;
        case 0x1fce88u: goto label_1fce88;
        case 0x1fce9cu: goto label_1fce9c;
        case 0x1fcefcu: goto label_1fcefc;
        case 0x1fcf20u: goto label_1fcf20;
        case 0x1fcf80u: goto label_1fcf80;
        case 0x1fcf8cu: goto label_1fcf8c;
        case 0x1fcfc0u: goto label_1fcfc0;
        case 0x1fd010u: goto label_1fd010;
        case 0x1fd01cu: goto label_1fd01c;
        case 0x1fd06cu: goto label_1fd06c;
        case 0x1fd078u: goto label_1fd078;
        case 0x1fd0b4u: goto label_1fd0b4;
        case 0x1fd104u: goto label_1fd104;
        case 0x1fd124u: goto label_1fd124;
        case 0x1fd150u: goto label_1fd150;
        case 0x1fd168u: goto label_1fd168;
        case 0x1fd18cu: goto label_1fd18c;
        case 0x1fd1a8u: goto label_1fd1a8;
        case 0x1fd210u: goto label_1fd210;
        case 0x1fd224u: goto label_1fd224;
        case 0x1fd264u: goto label_1fd264;
        case 0x1fd26cu: goto label_1fd26c;
        case 0x1fd274u: goto label_1fd274;
        case 0x1fd298u: goto label_1fd298;
        case 0x1fd2b0u: goto label_1fd2b0;
        case 0x1fd2b8u: goto label_1fd2b8;
        case 0x1fd2c0u: goto label_1fd2c0;
        case 0x1fd2d0u: goto label_1fd2d0;
        case 0x1fd2fcu: goto label_1fd2fc;
        case 0x1fd310u: goto label_1fd310;
        case 0x1fd324u: goto label_1fd324;
        case 0x1fd330u: goto label_1fd330;
        case 0x1fd340u: goto label_1fd340;
        case 0x1fd348u: goto label_1fd348;
        case 0x1fd37cu: goto label_1fd37c;
        case 0x1fd390u: goto label_1fd390;
        case 0x1fd3a4u: goto label_1fd3a4;
        case 0x1fd3b8u: goto label_1fd3b8;
        case 0x1fd3ccu: goto label_1fd3cc;
        case 0x1fd3e0u: goto label_1fd3e0;
        case 0x1fd3f4u: goto label_1fd3f4;
        case 0x1fd408u: goto label_1fd408;
        case 0x1fd41cu: goto label_1fd41c;
        case 0x1fd430u: goto label_1fd430;
        case 0x1fd444u: goto label_1fd444;
        case 0x1fd458u: goto label_1fd458;
        case 0x1fd468u: goto label_1fd468;
        case 0x1fd478u: goto label_1fd478;
        case 0x1fd4c8u: goto label_1fd4c8;
        case 0x1fd4d4u: goto label_1fd4d4;
        case 0x1fd4dcu: goto label_1fd4dc;
        case 0x1fd4e4u: goto label_1fd4e4;
        case 0x1fd544u: goto label_1fd544;
        case 0x1fd56cu: goto label_1fd56c;
        case 0x1fd57cu: goto label_1fd57c;
        case 0x1fd5dcu: goto label_1fd5dc;
        case 0x1fd6bcu: goto label_1fd6bc;
        case 0x1fd6e0u: goto label_1fd6e0;
        case 0x1fd728u: goto label_1fd728;
        case 0x1fd738u: goto label_1fd738;
        case 0x1fd74cu: goto label_1fd74c;
        case 0x1fd754u: goto label_1fd754;
        case 0x1fd760u: goto label_1fd760;
        case 0x1fd770u: goto label_1fd770;
        case 0x1fd778u: goto label_1fd778;
        case 0x1fd788u: goto label_1fd788;
        case 0x1fd790u: goto label_1fd790;
        case 0x1fd798u: goto label_1fd798;
        case 0x1fd7b4u: goto label_1fd7b4;
        case 0x1fd7d0u: goto label_1fd7d0;
        case 0x1fd7e4u: goto label_1fd7e4;
        case 0x1fd7f0u: goto label_1fd7f0;
        case 0x1fd814u: goto label_1fd814;
        case 0x1fd830u: goto label_1fd830;
        case 0x1fd85cu: goto label_1fd85c;
        case 0x1fd888u: goto label_1fd888;
        case 0x1fd8ecu: goto label_1fd8ec;
        case 0x1fd8f4u: goto label_1fd8f4;
        case 0x1fd910u: goto label_1fd910;
        case 0x1fd918u: goto label_1fd918;
        case 0x1fd924u: goto label_1fd924;
        default: break;
    }

    ctx->pc = 0x1fc5b0u;

    // 0x1fc5b0: 0x27bdfca0  addiu       $sp, $sp, -0x360
    ctx->pc = 0x1fc5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966432));
    // 0x1fc5b4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1fc5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1fc5b8: 0xffb00310  sd          $s0, 0x310($sp)
    ctx->pc = 0x1fc5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 784), GPR_U64(ctx, 16));
    // 0x1fc5bc: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x1fc5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x1fc5c0: 0xffb10318  sd          $s1, 0x318($sp)
    ctx->pc = 0x1fc5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 792), GPR_U64(ctx, 17));
    // 0x1fc5c4: 0x2784a848  addiu       $a0, $gp, -0x57B8
    ctx->pc = 0x1fc5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944840));
    // 0x1fc5c8: 0xffb20320  sd          $s2, 0x320($sp)
    ctx->pc = 0x1fc5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 800), GPR_U64(ctx, 18));
    // 0x1fc5cc: 0x2785a850  addiu       $a1, $gp, -0x57B0
    ctx->pc = 0x1fc5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944848));
    // 0x1fc5d0: 0xffb30328  sd          $s3, 0x328($sp)
    ctx->pc = 0x1fc5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 808), GPR_U64(ctx, 19));
    // 0x1fc5d4: 0xffb40330  sd          $s4, 0x330($sp)
    ctx->pc = 0x1fc5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 816), GPR_U64(ctx, 20));
    // 0x1fc5d8: 0xffb50338  sd          $s5, 0x338($sp)
    ctx->pc = 0x1fc5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 824), GPR_U64(ctx, 21));
    // 0x1fc5dc: 0xffb60340  sd          $s6, 0x340($sp)
    ctx->pc = 0x1fc5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 832), GPR_U64(ctx, 22));
    // 0x1fc5e0: 0xffb70348  sd          $s7, 0x348($sp)
    ctx->pc = 0x1fc5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 840), GPR_U64(ctx, 23));
    // 0x1fc5e4: 0xffbe0350  sd          $fp, 0x350($sp)
    ctx->pc = 0x1fc5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 848), GPR_U64(ctx, 30));
    // 0x1fc5e8: 0xffbf0358  sd          $ra, 0x358($sp)
    ctx->pc = 0x1fc5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 856), GPR_U64(ctx, 31));
    // 0x1fc5ec: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x1fc5ecu;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x1fc5f0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1fc5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc5f4: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x1fc5f4u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3A88D4u));
    // 0x1fc5f8: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1fc5f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc5fc: 0x92a301bc  lbu         $v1, 0x1BC($s5)
    ctx->pc = 0x1fc5fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 444)));
    // 0x1fc600: 0xafa60300  sw          $a2, 0x300($sp)
    ctx->pc = 0x1fc600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 6));
    // 0x1fc604: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1fc604u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fc608: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC608u;
    {
        const bool branch_taken_0x1fc608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC608u;
        // 0x1fc60c: 0xafa60304  sw          $a2, 0x304($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 772), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc608) {
            ctx->pc = 0x1FC628u;
            goto label_1fc628;
        }
    }
    ctx->pc = 0x1FC610u;
    // 0x1fc610: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1fc610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fc614: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x1fc614u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc618: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1fc618u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc61c: 0xafa40300  sw          $a0, 0x300($sp)
    ctx->pc = 0x1fc61cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 768), GPR_U32(ctx, 4));
    // 0x1fc620: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x1fc620u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fc624: 0xafa50304  sw          $a1, 0x304($sp)
    ctx->pc = 0x1fc624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 772), GPR_U32(ctx, 5));
label_1fc628:
    // 0x1fc628: 0xc07ec0a  jal         func_1FB028
    ctx->pc = 0x1FC628u;
    SET_GPR_U32(ctx, 31, 0x1FC630u);
    ctx->pc = 0x1FB028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB028u, 0x1FC628u, 0x1FC630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC630u;
label_1fc630:
    // 0x1fc630: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC630u;
    {
        const bool branch_taken_0x1fc630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC630u;
        // 0x1fc634: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc630) {
            ctx->pc = 0x1FC640u;
            goto label_1fc640;
        }
    }
    ctx->pc = 0x1FC638u;
    // 0x1fc638: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FC638u;
    {
        const bool branch_taken_0x1fc638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC638u;
        // 0x1fc63c: 0xa24201c0  sb          $v0, 0x1C0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 448), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc638) {
            ctx->pc = 0x1FC644u;
            goto label_1fc644;
        }
    }
    ctx->pc = 0x1FC640u;
label_1fc640:
    // 0x1fc640: 0xa24001c0  sb          $zero, 0x1C0($s2)
    ctx->pc = 0x1fc640u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 448), (uint8_t)GPR_U32(ctx, 0));
label_1fc644:
    // 0x1fc644: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1fc644u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1fc648: 0x24628858  addiu       $v0, $v1, -0x77A8
    ctx->pc = 0x1fc648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
    // 0x1fc64c: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1fc64cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x1fc650: 0x106001a2  beqz        $v1, . + 4 + (0x1A2 << 2)
    ctx->pc = 0x1FC650u;
    {
        const bool branch_taken_0x1fc650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC650u;
        // 0x1fc654: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc650) {
            ctx->pc = 0x1FCCDCu;
            goto label_1fccdc;
        }
    }
    ctx->pc = 0x1FC658u;
    // 0x1fc658: 0xc07ed3c  jal         func_1FB4F0
    ctx->pc = 0x1FC658u;
    SET_GPR_U32(ctx, 31, 0x1FC660u);
    ctx->pc = 0x1FC65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC658u;
    // 0x1fc65c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB4F0u, 0x1FC658u, 0x1FC660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC660u;
label_1fc660:
    // 0x1fc660: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fc660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc664: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x1FC664u;
    SET_GPR_U32(ctx, 31, 0x1FC66Cu);
    ctx->pc = 0x1FC668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC664u;
    // 0x1fc668: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x1FC664u, 0x1FC66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC66Cu;
label_1fc66c:
    // 0x1fc66c: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fc66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fc670: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1fc670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1fc674: 0x10600199  beqz        $v1, . + 4 + (0x199 << 2)
    ctx->pc = 0x1FC674u;
    {
        const bool branch_taken_0x1fc674 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC674u;
        // 0x1fc678: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc674) {
            ctx->pc = 0x1FCCDCu;
            goto label_1fccdc;
        }
    }
    ctx->pc = 0x1FC67Cu;
    // 0x1fc67c: 0x3c0780fe  lui         $a3, 0x80FE
    ctx->pc = 0x1fc67cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)33022 << 16));
    // 0x1fc680: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fc680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc684: 0x24843628  addiu       $a0, $a0, 0x3628
    ctx->pc = 0x1fc684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13864));
    // 0x1fc688: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1fc688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fc68c: 0x34e7fefe  ori         $a3, $a3, 0xFEFE
    ctx->pc = 0x1fc68cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65278);
    // 0x1fc690: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x1fc690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1fc694: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FC694u;
    SET_GPR_U32(ctx, 31, 0x1FC69Cu);
    ctx->pc = 0x1FC698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC694u;
    // 0x1fc698: 0x3c110015  lui         $s1, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)21 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FC694u, 0x1FC69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC69Cu;
label_1fc69c:
    // 0x1fc69c: 0x8f8697c8  lw          $a2, -0x6838($gp)
    ctx->pc = 0x1fc69cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fc6a0: 0x8cc2007c  lw          $v0, 0x7C($a2)
    ctx->pc = 0x1fc6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x1fc6a4: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x1FC6A4u;
    {
        const bool branch_taken_0x1fc6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC6A4u;
        // 0x1fc6a8: 0x27be0100  addiu       $fp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc6a4) {
            ctx->pc = 0x1FC890u;
            goto label_1fc890;
        }
    }
    ctx->pc = 0x1FC6ACu;
    // 0x1fc6ac: 0x8cc20078  lw          $v0, 0x78($a2)
    ctx->pc = 0x1fc6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
    // 0x1fc6b0: 0x50400077  beql        $v0, $zero, . + 4 + (0x77 << 2)
    ctx->pc = 0x1FC6B0u;
    {
        const bool branch_taken_0x1fc6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc6b0) {
            ctx->pc = 0x1FC6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC6B0u;
            // 0x1fc6b4: 0x3c110015  lui         $s1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC890u;
            goto label_1fc890;
        }
    }
    ctx->pc = 0x1FC6B8u;
    // 0x1fc6b8: 0x8cc60074  lw          $a2, 0x74($a2)
    ctx->pc = 0x1fc6b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
    // 0x1fc6bc: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x1fc6bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fc6c0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FC6C0u;
    {
        const bool branch_taken_0x1fc6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC6C0u;
        // 0x1fc6c4: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc6c0) {
            ctx->pc = 0x1FC728u;
            goto label_1fc728;
        }
    }
    ctx->pc = 0x1FC6C8u;
    // 0x1fc6c8: 0x28c2000a  slti        $v0, $a2, 0xA
    ctx->pc = 0x1fc6c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fc6cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC6CCu;
    {
        const bool branch_taken_0x1fc6cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC6CCu;
        // 0x1fc6d0: 0x28c20064  slti        $v0, $a2, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc6cc) {
            ctx->pc = 0x1FC6F0u;
            goto label_1fc6f0;
        }
    }
    ctx->pc = 0x1FC6D4u;
    // 0x1fc6d4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1fc6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1fc6d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fc6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc6dc: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FC6DCu;
    SET_GPR_U32(ctx, 31, 0x1FC6E4u);
    ctx->pc = 0x1FC6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC6DCu;
    // 0x1fc6e0: 0x24a53638  addiu       $a1, $a1, 0x3638 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FC6DCu, 0x1FC6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC6E4u;
label_1fc6e4:
    // 0x1fc6e4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1FC6E4u;
    {
        const bool branch_taken_0x1fc6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC6E4u;
        // 0x1fc6e8: 0x27be0100  addiu       $fp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc6e4) {
            ctx->pc = 0x1FC738u;
            goto label_1fc738;
        }
    }
    ctx->pc = 0x1FC6ECu;
    // 0x1fc6ec: 0x0  nop
    ctx->pc = 0x1fc6ecu;
    // NOP
label_1fc6f0:
    // 0x1fc6f0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC6F0u;
    {
        const bool branch_taken_0x1fc6f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc6f0) {
            ctx->pc = 0x1FC6F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC6F0u;
            // 0x1fc6f4: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC710u;
            goto label_1fc710;
        }
    }
    ctx->pc = 0x1FC6F8u;
    // 0x1fc6f8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1fc6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1fc6fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fc6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc700: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FC700u;
    SET_GPR_U32(ctx, 31, 0x1FC708u);
    ctx->pc = 0x1FC704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC700u;
    // 0x1fc704: 0x24a53650  addiu       $a1, $a1, 0x3650 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FC700u, 0x1FC708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC708u;
label_1fc708:
    // 0x1fc708: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1FC708u;
    {
        const bool branch_taken_0x1fc708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC708u;
        // 0x1fc70c: 0x27be0100  addiu       $fp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc708) {
            ctx->pc = 0x1FC738u;
            goto label_1fc738;
        }
    }
    ctx->pc = 0x1FC710u;
label_1fc710:
    // 0x1fc710: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fc710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc714: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FC714u;
    SET_GPR_U32(ctx, 31, 0x1FC71Cu);
    ctx->pc = 0x1FC718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC714u;
    // 0x1fc718: 0x24a53668  addiu       $a1, $a1, 0x3668 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FC714u, 0x1FC71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC71Cu;
label_1fc71c:
    // 0x1fc71c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC71Cu;
    {
        const bool branch_taken_0x1fc71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC71Cu;
        // 0x1fc720: 0x27be0100  addiu       $fp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc71c) {
            ctx->pc = 0x1FC738u;
            goto label_1fc738;
        }
    }
    ctx->pc = 0x1FC724u;
    // 0x1fc724: 0x0  nop
    ctx->pc = 0x1fc724u;
    // NOP
label_1fc728:
    // 0x1fc728: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fc728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc72c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FC72Cu;
    SET_GPR_U32(ctx, 31, 0x1FC734u);
    ctx->pc = 0x1FC730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC72Cu;
    // 0x1fc730: 0x24a52040  addiu       $a1, $a1, 0x2040 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FC72Cu, 0x1FC734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC734u;
label_1fc734:
    // 0x1fc734: 0x27be0100  addiu       $fp, $sp, 0x100
    ctx->pc = 0x1fc734u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1fc738:
    // 0x1fc738: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fc738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc73c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fc73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc740: 0xc0b635c  jal         func_2D8D70
    ctx->pc = 0x1FC740u;
    SET_GPR_U32(ctx, 31, 0x1FC748u);
    ctx->pc = 0x1FC744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC740u;
    // 0x1fc744: 0x3c130046  lui         $s3, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8D70u, 0x1FC740u, 0x1FC748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC748u;
label_1fc748:
    // 0x1fc748: 0x26643678  addiu       $a0, $s3, 0x3678
    ctx->pc = 0x1fc748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 13944));
    // 0x1fc74c: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1fc74cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1fc750: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fc750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc754: 0x34c6fefe  ori         $a2, $a2, 0xFEFE
    ctx->pc = 0x1fc754u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65278);
    // 0x1fc758: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x1fc758u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1fc75c: 0x240800c8  addiu       $t0, $zero, 0xC8
    ctx->pc = 0x1fc75cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1fc760: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FC760u;
    SET_GPR_U32(ctx, 31, 0x1FC768u);
    ctx->pc = 0x1FC764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC760u;
    // 0x1fc764: 0x3c0482d  daddu       $t1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FC760u, 0x1FC768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC768u;
label_1fc768:
    // 0x1fc768: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fc768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fc76c: 0x8c66007c  lw          $a2, 0x7C($v1)
    ctx->pc = 0x1fc76cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
    // 0x1fc770: 0x28c2000a  slti        $v0, $a2, 0xA
    ctx->pc = 0x1fc770u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fc774: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC774u;
    {
        const bool branch_taken_0x1fc774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC774u;
        // 0x1fc778: 0x3c0802d  daddu       $s0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc774) {
            ctx->pc = 0x1FC798u;
            goto label_1fc798;
        }
    }
    ctx->pc = 0x1FC77Cu;
    // 0x1fc77c: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1fc77cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1fc780: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fc780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc784: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FC784u;
    SET_GPR_U32(ctx, 31, 0x1FC78Cu);
    ctx->pc = 0x1FC788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC784u;
    // 0x1fc788: 0x24a52048  addiu       $a1, $a1, 0x2048 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FC784u, 0x1FC78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC78Cu;
label_1fc78c:
    // 0x1fc78c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1FC78Cu;
    {
        const bool branch_taken_0x1fc78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC78Cu;
        // 0x1fc790: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc78c) {
            ctx->pc = 0x1FC7F0u;
            goto label_1fc7f0;
        }
    }
    ctx->pc = 0x1FC794u;
    // 0x1fc794: 0x0  nop
    ctx->pc = 0x1fc794u;
    // NOP
label_1fc798:
    // 0x1fc798: 0x28c20064  slti        $v0, $a2, 0x64
    ctx->pc = 0x1fc798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1fc79c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC79Cu;
    {
        const bool branch_taken_0x1fc79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC79Cu;
        // 0x1fc7a0: 0x28c203e8  slti        $v0, $a2, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc79c) {
            ctx->pc = 0x1FC7C0u;
            goto label_1fc7c0;
        }
    }
    ctx->pc = 0x1FC7A4u;
    // 0x1fc7a4: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1fc7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1fc7a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fc7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc7ac: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FC7ACu;
    SET_GPR_U32(ctx, 31, 0x1FC7B4u);
    ctx->pc = 0x1FC7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC7ACu;
    // 0x1fc7b0: 0x24a52050  addiu       $a1, $a1, 0x2050 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FC7ACu, 0x1FC7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC7B4u;
label_1fc7b4:
    // 0x1fc7b4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1FC7B4u;
    {
        const bool branch_taken_0x1fc7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7B4u;
        // 0x1fc7b8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc7b4) {
            ctx->pc = 0x1FC7F0u;
            goto label_1fc7f0;
        }
    }
    ctx->pc = 0x1FC7BCu;
    // 0x1fc7bc: 0x0  nop
    ctx->pc = 0x1fc7bcu;
    // NOP
label_1fc7c0:
    // 0x1fc7c0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC7C0u;
    {
        const bool branch_taken_0x1fc7c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc7c0) {
            ctx->pc = 0x1FC7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC7C0u;
            // 0x1fc7c4: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC7E0u;
            goto label_1fc7e0;
        }
    }
    ctx->pc = 0x1FC7C8u;
    // 0x1fc7c8: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1fc7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1fc7cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fc7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc7d0: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FC7D0u;
    SET_GPR_U32(ctx, 31, 0x1FC7D8u);
    ctx->pc = 0x1FC7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC7D0u;
    // 0x1fc7d4: 0x24a52058  addiu       $a1, $a1, 0x2058 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FC7D0u, 0x1FC7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC7D8u;
label_1fc7d8:
    // 0x1fc7d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC7D8u;
    {
        const bool branch_taken_0x1fc7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC7D8u;
        // 0x1fc7dc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc7d8) {
            ctx->pc = 0x1FC7F0u;
            goto label_1fc7f0;
        }
    }
    ctx->pc = 0x1FC7E0u;
label_1fc7e0:
    // 0x1fc7e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fc7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc7e4: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FC7E4u;
    SET_GPR_U32(ctx, 31, 0x1FC7ECu);
    ctx->pc = 0x1FC7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC7E4u;
    // 0x1fc7e8: 0x24a52060  addiu       $a1, $a1, 0x2060 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FC7E4u, 0x1FC7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC7ECu;
label_1fc7ec:
    // 0x1fc7ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fc7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fc7f0:
    // 0x1fc7f0: 0xc0b635c  jal         func_2D8D70
    ctx->pc = 0x1FC7F0u;
    SET_GPR_U32(ctx, 31, 0x1FC7F8u);
    ctx->pc = 0x1FC7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC7F0u;
    // 0x1fc7f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8D70u, 0x1FC7F0u, 0x1FC7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC7F8u;
label_1fc7f8:
    // 0x1fc7f8: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x1fc7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x1fc7fc: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1fc7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1fc800: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1fc800u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc804: 0x34c680fe  ori         $a2, $a2, 0x80FE
    ctx->pc = 0x1fc804u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)33022);
    // 0x1fc808: 0x24842068  addiu       $a0, $a0, 0x2068
    ctx->pc = 0x1fc808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8296));
    // 0x1fc80c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fc80cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc810: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FC810u;
    SET_GPR_U32(ctx, 31, 0x1FC818u);
    ctx->pc = 0x1FC814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC810u;
    // 0x1fc814: 0x3c110015  lui         $s1, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)21 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FC810u, 0x1FC818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC818u;
label_1fc818:
    // 0x1fc818: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1fc818u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1fc81c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fc81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc820: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FC820u;
    SET_GPR_U32(ctx, 31, 0x1FC828u);
    ctx->pc = 0x1FC824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC820u;
    // 0x1fc824: 0x24a52070  addiu       $a1, $a1, 0x2070 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FC820u, 0x1FC828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC828u;
label_1fc828:
    // 0x1fc828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc82c: 0xc0b635c  jal         func_2D8D70
    ctx->pc = 0x1FC82Cu;
    SET_GPR_U32(ctx, 31, 0x1FC834u);
    ctx->pc = 0x1FC830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC82Cu;
    // 0x1fc830: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8D70u, 0x1FC82Cu, 0x1FC834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC834u;
label_1fc834:
    // 0x1fc834: 0x26643678  addiu       $a0, $s3, 0x3678
    ctx->pc = 0x1fc834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 13944));
    // 0x1fc838: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1fc838u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1fc83c: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x1fc83cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1fc840: 0x34c680fe  ori         $a2, $a2, 0x80FE
    ctx->pc = 0x1fc840u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)33022);
    // 0x1fc844: 0x240800ca  addiu       $t0, $zero, 0xCA
    ctx->pc = 0x1fc844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x1fc848: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1fc848u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc84c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FC84Cu;
    SET_GPR_U32(ctx, 31, 0x1FC854u);
    ctx->pc = 0x1FC850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC84Cu;
    // 0x1fc850: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FC84Cu, 0x1FC854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC854u;
label_1fc854:
    // 0x1fc854: 0x26252078  addiu       $a1, $s1, 0x2078
    ctx->pc = 0x1fc854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8312));
    // 0x1fc858: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FC858u;
    SET_GPR_U32(ctx, 31, 0x1FC860u);
    ctx->pc = 0x1FC85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC858u;
    // 0x1fc85c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FC858u, 0x1FC860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC860u;
label_1fc860:
    // 0x1fc860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc864: 0xc0b635c  jal         func_2D8D70
    ctx->pc = 0x1FC864u;
    SET_GPR_U32(ctx, 31, 0x1FC86Cu);
    ctx->pc = 0x1FC868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC864u;
    // 0x1fc868: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8D70u, 0x1FC864u, 0x1FC86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC86Cu;
label_1fc86c:
    // 0x1fc86c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x1fc86cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x1fc870: 0x24842080  addiu       $a0, $a0, 0x2080
    ctx->pc = 0x1fc870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8320));
    // 0x1fc874: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1fc874u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc878: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fc878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc87c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FC87Cu;
    SET_GPR_U32(ctx, 31, 0x1FC884u);
    ctx->pc = 0x1FC880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC87Cu;
    // 0x1fc880: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FC87Cu, 0x1FC884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC884u;
label_1fc884:
    // 0x1fc884: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC884u;
    {
        const bool branch_taken_0x1fc884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC884u;
        // 0x1fc888: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc884) {
            ctx->pc = 0x1FC894u;
            goto label_1fc894;
        }
    }
    ctx->pc = 0x1FC88Cu;
    // 0x1fc88c: 0x0  nop
    ctx->pc = 0x1fc88cu;
    // NOP
label_1fc890:
    // 0x1fc890: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fc890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fc894:
    // 0x1fc894: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FC894u;
    SET_GPR_U32(ctx, 31, 0x1FC89Cu);
    ctx->pc = 0x1FC898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC894u;
    // 0x1fc898: 0x26252078  addiu       $a1, $s1, 0x2078 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FC894u, 0x1FC89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC89Cu;
label_1fc89c:
    // 0x1fc89c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fc89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fc8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8a4: 0xc0b635c  jal         func_2D8D70
    ctx->pc = 0x1FC8A4u;
    SET_GPR_U32(ctx, 31, 0x1FC8ACu);
    ctx->pc = 0x1FC8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC8A4u;
    // 0x1fc8a8: 0x3c160046  lui         $s6, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8D70u, 0x1FC8A4u, 0x1FC8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC8ACu;
label_1fc8ac:
    // 0x1fc8ac: 0x26c43688  addiu       $a0, $s6, 0x3688
    ctx->pc = 0x1fc8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 13960));
    // 0x1fc8b0: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1fc8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1fc8b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fc8b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8b8: 0x34c680fe  ori         $a2, $a2, 0x80FE
    ctx->pc = 0x1fc8b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)33022);
    // 0x1fc8bc: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x1fc8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1fc8c0: 0x24080050  addiu       $t0, $zero, 0x50
    ctx->pc = 0x1fc8c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1fc8c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fc8c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc8c8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FC8C8u;
    SET_GPR_U32(ctx, 31, 0x1FC8D0u);
    ctx->pc = 0x1FC8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC8C8u;
    // 0x1fc8cc: 0x3c0502d  daddu       $t2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FC8C8u, 0x1FC8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC8D0u;
label_1fc8d0:
    // 0x1fc8d0: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fc8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fc8d4: 0x8c4600ac  lw          $a2, 0xAC($v0)
    ctx->pc = 0x1fc8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x1fc8d8: 0x54c00005  bnel        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC8D8u;
    {
        const bool branch_taken_0x1fc8d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc8d8) {
            ctx->pc = 0x1FC8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC8D8u;
            // 0x1fc8dc: 0x28c2000a  slti        $v0, $a2, 0xA (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC8F0u;
            goto label_1fc8f0;
        }
    }
    ctx->pc = 0x1FC8E0u;
    // 0x1fc8e0: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x1fc8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1fc8e4: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1FC8E4u;
    {
        const bool branch_taken_0x1fc8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8E4u;
        // 0x1fc8e8: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8e4) {
            ctx->pc = 0x1FC968u;
            goto label_1fc968;
        }
    }
    ctx->pc = 0x1FC8ECu;
    // 0x1fc8ec: 0x28c2000a  slti        $v0, $a2, 0xA
    ctx->pc = 0x1fc8ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
label_1fc8f0:
    // 0x1fc8f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC8F0u;
    {
        const bool branch_taken_0x1fc8f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC8F0u;
        // 0x1fc8f4: 0x28c20064  slti        $v0, $a2, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc8f0) {
            ctx->pc = 0x1FC910u;
            goto label_1fc910;
        }
    }
    ctx->pc = 0x1FC8F8u;
    // 0x1fc8f8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1fc8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1fc8fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fc8fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc900: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FC900u;
    SET_GPR_U32(ctx, 31, 0x1FC908u);
    ctx->pc = 0x1FC904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC900u;
    // 0x1fc904: 0x24a53698  addiu       $a1, $a1, 0x3698 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FC900u, 0x1FC908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC908u;
label_1fc908:
    // 0x1fc908: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1FC908u;
    {
        const bool branch_taken_0x1fc908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC908u;
        // 0x1fc90c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc908) {
            ctx->pc = 0x1FC978u;
            goto label_1fc978;
        }
    }
    ctx->pc = 0x1FC910u;
label_1fc910:
    // 0x1fc910: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC910u;
    {
        const bool branch_taken_0x1fc910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC910u;
        // 0x1fc914: 0x28c203e8  slti        $v0, $a2, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc910) {
            ctx->pc = 0x1FC930u;
            goto label_1fc930;
        }
    }
    ctx->pc = 0x1FC918u;
    // 0x1fc918: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1fc918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1fc91c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fc91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc920: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FC920u;
    SET_GPR_U32(ctx, 31, 0x1FC928u);
    ctx->pc = 0x1FC924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC920u;
    // 0x1fc924: 0x24a536a8  addiu       $a1, $a1, 0x36A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FC920u, 0x1FC928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC928u;
label_1fc928:
    // 0x1fc928: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1FC928u;
    {
        const bool branch_taken_0x1fc928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC928u;
        // 0x1fc92c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc928) {
            ctx->pc = 0x1FC978u;
            goto label_1fc978;
        }
    }
    ctx->pc = 0x1FC930u;
label_1fc930:
    // 0x1fc930: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC930u;
    {
        const bool branch_taken_0x1fc930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fc930) {
            ctx->pc = 0x1FC934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC930u;
            // 0x1fc934: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC950u;
            goto label_1fc950;
        }
    }
    ctx->pc = 0x1FC938u;
    // 0x1fc938: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1fc938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1fc93c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fc93cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc940: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FC940u;
    SET_GPR_U32(ctx, 31, 0x1FC948u);
    ctx->pc = 0x1FC944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC940u;
    // 0x1fc944: 0x24a536b8  addiu       $a1, $a1, 0x36B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FC940u, 0x1FC948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC948u;
label_1fc948:
    // 0x1fc948: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1FC948u;
    {
        const bool branch_taken_0x1fc948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC948u;
        // 0x1fc94c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc948) {
            ctx->pc = 0x1FC978u;
            goto label_1fc978;
        }
    }
    ctx->pc = 0x1FC950u;
label_1fc950:
    // 0x1fc950: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fc950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc954: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FC954u;
    SET_GPR_U32(ctx, 31, 0x1FC95Cu);
    ctx->pc = 0x1FC958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC954u;
    // 0x1fc958: 0x24a52088  addiu       $a1, $a1, 0x2088 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FC954u, 0x1FC95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC95Cu;
label_1fc95c:
    // 0x1fc95c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FC95Cu;
    {
        const bool branch_taken_0x1fc95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC95Cu;
        // 0x1fc960: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc95c) {
            ctx->pc = 0x1FC978u;
            goto label_1fc978;
        }
    }
    ctx->pc = 0x1FC964u;
    // 0x1fc964: 0x0  nop
    ctx->pc = 0x1fc964u;
    // NOP
label_1fc968:
    // 0x1fc968: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fc968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc96c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FC96Cu;
    SET_GPR_U32(ctx, 31, 0x1FC974u);
    ctx->pc = 0x1FC970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC96Cu;
    // 0x1fc970: 0x24a52090  addiu       $a1, $a1, 0x2090 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FC96Cu, 0x1FC974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC974u;
label_1fc974:
    // 0x1fc974: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fc974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fc978:
    // 0x1fc978: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fc978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc97c: 0xc0b635c  jal         func_2D8D70
    ctx->pc = 0x1FC97Cu;
    SET_GPR_U32(ctx, 31, 0x1FC984u);
    ctx->pc = 0x1FC980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC97Cu;
    // 0x1fc980: 0x3c170015  lui         $s7, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)21 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8D70u, 0x1FC97Cu, 0x1FC984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC984u;
label_1fc984:
    // 0x1fc984: 0x26e42098  addiu       $a0, $s7, 0x2098
    ctx->pc = 0x1fc984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 8344));
    // 0x1fc988: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1fc988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fc98c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FC98Cu;
    SET_GPR_U32(ctx, 31, 0x1FC994u);
    ctx->pc = 0x1FC990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC98Cu;
    // 0x1fc990: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FC98Cu, 0x1FC994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC994u;
label_1fc994:
    // 0x1fc994: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fc994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fc998: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x1fc998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
    // 0x1fc99c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FC99Cu;
    {
        const bool branch_taken_0x1fc99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fc99c) {
            ctx->pc = 0x1FC9A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FC99Cu;
            // 0x1fc9a0: 0x8c6400b8  lw          $a0, 0xB8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FC9B4u;
            goto label_1fc9b4;
        }
    }
    ctx->pc = 0x1FC9A4u;
    // 0x1fc9a4: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1fc9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1fc9a8: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1FC9A8u;
    {
        const bool branch_taken_0x1fc9a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC9A8u;
        // 0x1fc9ac: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc9a8) {
            ctx->pc = 0x1FCA40u;
            goto label_1fca40;
        }
    }
    ctx->pc = 0x1FC9B0u;
    // 0x1fc9b0: 0x8c6400b8  lw          $a0, 0xB8($v1)
    ctx->pc = 0x1fc9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 184)));
label_1fc9b4:
    // 0x1fc9b4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1fc9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fc9b8: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x1fc9b8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1fc9bc: 0x3012  mflo        $a2
    ctx->pc = 0x1fc9bcu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1fc9c0: 0x28c3000a  slti        $v1, $a2, 0xA
    ctx->pc = 0x1fc9c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fc9c4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FC9C4u;
    {
        const bool branch_taken_0x1fc9c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC9C4u;
        // 0x1fc9c8: 0x28c20064  slti        $v0, $a2, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc9c4) {
            ctx->pc = 0x1FC9E8u;
            goto label_1fc9e8;
        }
    }
    ctx->pc = 0x1FC9CCu;
    // 0x1fc9cc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1fc9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1fc9d0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fc9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc9d4: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FC9D4u;
    SET_GPR_U32(ctx, 31, 0x1FC9DCu);
    ctx->pc = 0x1FC9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC9D4u;
    // 0x1fc9d8: 0x24a536c8  addiu       $a1, $a1, 0x36C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FC9D4u, 0x1FC9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC9DCu;
label_1fc9dc:
    // 0x1fc9dc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1FC9DCu;
    {
        const bool branch_taken_0x1fc9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC9DCu;
        // 0x1fc9e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc9dc) {
            ctx->pc = 0x1FCA50u;
            goto label_1fca50;
        }
    }
    ctx->pc = 0x1FC9E4u;
    // 0x1fc9e4: 0x0  nop
    ctx->pc = 0x1fc9e4u;
    // NOP
label_1fc9e8:
    // 0x1fc9e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FC9E8u;
    {
        const bool branch_taken_0x1fc9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC9E8u;
        // 0x1fc9ec: 0x28c203e8  slti        $v0, $a2, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc9e8) {
            ctx->pc = 0x1FCA08u;
            goto label_1fca08;
        }
    }
    ctx->pc = 0x1FC9F0u;
    // 0x1fc9f0: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1fc9f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1fc9f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fc9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc9f8: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FC9F8u;
    SET_GPR_U32(ctx, 31, 0x1FCA00u);
    ctx->pc = 0x1FC9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC9F8u;
    // 0x1fc9fc: 0x24a520a0  addiu       $a1, $a1, 0x20A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FC9F8u, 0x1FCA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA00u;
label_1fca00:
    // 0x1fca00: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1FCA00u;
    {
        const bool branch_taken_0x1fca00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA00u;
        // 0x1fca04: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fca00) {
            ctx->pc = 0x1FCA50u;
            goto label_1fca50;
        }
    }
    ctx->pc = 0x1FCA08u;
label_1fca08:
    // 0x1fca08: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FCA08u;
    {
        const bool branch_taken_0x1fca08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fca08) {
            ctx->pc = 0x1FCA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCA08u;
            // 0x1fca0c: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCA28u;
            goto label_1fca28;
        }
    }
    ctx->pc = 0x1FCA10u;
    // 0x1fca10: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1fca10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1fca14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fca14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca18: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FCA18u;
    SET_GPR_U32(ctx, 31, 0x1FCA20u);
    ctx->pc = 0x1FCA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA18u;
    // 0x1fca1c: 0x24a520a8  addiu       $a1, $a1, 0x20A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FCA18u, 0x1FCA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA20u;
label_1fca20:
    // 0x1fca20: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1FCA20u;
    {
        const bool branch_taken_0x1fca20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA20u;
        // 0x1fca24: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fca20) {
            ctx->pc = 0x1FCA50u;
            goto label_1fca50;
        }
    }
    ctx->pc = 0x1FCA28u;
label_1fca28:
    // 0x1fca28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fca28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca2c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FCA2Cu;
    SET_GPR_U32(ctx, 31, 0x1FCA34u);
    ctx->pc = 0x1FCA30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA2Cu;
    // 0x1fca30: 0x24a520b0  addiu       $a1, $a1, 0x20B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FCA2Cu, 0x1FCA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA34u;
label_1fca34:
    // 0x1fca34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FCA34u;
    {
        const bool branch_taken_0x1fca34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA34u;
        // 0x1fca38: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fca34) {
            ctx->pc = 0x1FCA50u;
            goto label_1fca50;
        }
    }
    ctx->pc = 0x1FCA3Cu;
    // 0x1fca3c: 0x0  nop
    ctx->pc = 0x1fca3cu;
    // NOP
label_1fca40:
    // 0x1fca40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fca40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca44: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FCA44u;
    SET_GPR_U32(ctx, 31, 0x1FCA4Cu);
    ctx->pc = 0x1FCA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA44u;
    // 0x1fca48: 0x24a520b8  addiu       $a1, $a1, 0x20B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FCA44u, 0x1FCA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA4Cu;
label_1fca4c:
    // 0x1fca4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fca4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fca50:
    // 0x1fca50: 0xc0b635c  jal         func_2D8D70
    ctx->pc = 0x1FCA50u;
    SET_GPR_U32(ctx, 31, 0x1FCA58u);
    ctx->pc = 0x1FCA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA50u;
    // 0x1fca54: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8D70u, 0x1FCA50u, 0x1FCA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA58u;
label_1fca58:
    // 0x1fca58: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x1fca58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x1fca5c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1fca5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca60: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FCA60u;
    SET_GPR_U32(ctx, 31, 0x1FCA68u);
    ctx->pc = 0x1FCA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCA60u;
    // 0x1fca64: 0x248420c0  addiu       $a0, $a0, 0x20C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FCA60u, 0x1FCA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA68u;
label_1fca68:
    // 0x1fca68: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fca68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fca6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1fca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fca70: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1fca70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1fca74: 0x54430062  bnel        $v0, $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x1FCA74u;
    {
        const bool branch_taken_0x1fca74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fca74) {
            ctx->pc = 0x1FCA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCA74u;
            // 0x1fca78: 0x8ca200a4  lw          $v0, 0xA4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCC00u;
            goto label_1fcc00;
        }
    }
    ctx->pc = 0x1FCA7Cu;
    // 0x1fca7c: 0xc07f11c  jal         func_1FC470
    ctx->pc = 0x1FCA7Cu;
    SET_GPR_U32(ctx, 31, 0x1FCA84u);
    ctx->pc = 0x1FC470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC470u, 0x1FCA7Cu, 0x1FCA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCA84u;
label_1fca84:
    // 0x1fca84: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x1FCA84u;
    {
        const bool branch_taken_0x1fca84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCA84u;
        // 0x1fca88: 0x8f8597c8  lw          $a1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fca84) {
            ctx->pc = 0x1FCBFCu;
            goto label_1fcbfc;
        }
    }
    ctx->pc = 0x1FCA8Cu;
    // 0x1fca8c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1fca8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca90: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x1fca90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fca94: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fca94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
label_1fca98:
    // 0x1fca98: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1fca98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1fca9c: 0x138080  sll         $s0, $s3, 2
    ctx->pc = 0x1fca9cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1fcaa0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fcaa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcaa4: 0x246536d8  addiu       $a1, $v1, 0x36D8
    ctx->pc = 0x1fcaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 14040));
    // 0x1fcaa8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1fcaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1fcaac: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FCAACu;
    SET_GPR_U32(ctx, 31, 0x1FCAB4u);
    ctx->pc = 0x1FCAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCAACu;
    // 0x1fcab0: 0x8c5100c0  lw          $s1, 0xC0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FCAACu, 0x1FCAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCAB4u;
label_1fcab4:
    // 0x1fcab4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fcab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcab8: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x1fcab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x1fcabc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1fcabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcac0: 0xc0b635c  jal         func_2D8D70
    ctx->pc = 0x1FCAC0u;
    SET_GPR_U32(ctx, 31, 0x1FCAC8u);
    ctx->pc = 0x1FCAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCAC0u;
    // 0x1fcac4: 0x108180  sll         $s0, $s0, 6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8D70u, 0x1FCAC0u, 0x1FCAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCAC8u;
label_1fcac8:
    // 0x1fcac8: 0x3c0680fe  lui         $a2, 0x80FE
    ctx->pc = 0x1fcac8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)33022 << 16));
    // 0x1fcacc: 0x26070014  addiu       $a3, $s0, 0x14
    ctx->pc = 0x1fcaccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1fcad0: 0x26c43688  addiu       $a0, $s6, 0x3688
    ctx->pc = 0x1fcad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 13960));
    // 0x1fcad4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fcad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcad8: 0x34c6fefe  ori         $a2, $a2, 0xFEFE
    ctx->pc = 0x1fcad8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65278);
    // 0x1fcadc: 0x2408001c  addiu       $t0, $zero, 0x1C
    ctx->pc = 0x1fcadcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1fcae0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fcae0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcae4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FCAE4u;
    SET_GPR_U32(ctx, 31, 0x1FCAECu);
    ctx->pc = 0x1FCAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCAE4u;
    // 0x1fcae8: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FCAE4u, 0x1FCAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCAECu;
label_1fcaec:
    // 0x1fcaec: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x1fcaecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fcaf0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FCAF0u;
    {
        const bool branch_taken_0x1fcaf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCAF0u;
        // 0x1fcaf4: 0x2a220064  slti        $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcaf0) {
            ctx->pc = 0x1FCB18u;
            goto label_1fcb18;
        }
    }
    ctx->pc = 0x1FCAF8u;
    // 0x1fcaf8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1fcaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1fcafc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fcafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb00: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fcb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb04: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FCB04u;
    SET_GPR_U32(ctx, 31, 0x1FCB0Cu);
    ctx->pc = 0x1FCB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB04u;
    // 0x1fcb08: 0x244536e8  addiu       $a1, $v0, 0x36E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 14056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FCB04u, 0x1FCB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB0Cu;
label_1fcb0c:
    // 0x1fcb0c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1FCB0Cu;
    {
        const bool branch_taken_0x1fcb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB0Cu;
        // 0x1fcb10: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb0c) {
            ctx->pc = 0x1FCBD0u;
            goto label_1fcbd0;
        }
    }
    ctx->pc = 0x1FCB14u;
    // 0x1fcb14: 0x0  nop
    ctx->pc = 0x1fcb14u;
    // NOP
label_1fcb18:
    // 0x1fcb18: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FCB18u;
    {
        const bool branch_taken_0x1fcb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB18u;
        // 0x1fcb1c: 0x2a2203e8  slti        $v0, $s1, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb18) {
            ctx->pc = 0x1FCB40u;
            goto label_1fcb40;
        }
    }
    ctx->pc = 0x1FCB20u;
    // 0x1fcb20: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1fcb20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1fcb24: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fcb24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fcb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb2c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FCB2Cu;
    SET_GPR_U32(ctx, 31, 0x1FCB34u);
    ctx->pc = 0x1FCB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB2Cu;
    // 0x1fcb30: 0x246536f8  addiu       $a1, $v1, 0x36F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 14072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FCB2Cu, 0x1FCB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB34u;
label_1fcb34:
    // 0x1fcb34: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1FCB34u;
    {
        const bool branch_taken_0x1fcb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB34u;
        // 0x1fcb38: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb34) {
            ctx->pc = 0x1FCBD0u;
            goto label_1fcbd0;
        }
    }
    ctx->pc = 0x1FCB3Cu;
    // 0x1fcb3c: 0x0  nop
    ctx->pc = 0x1fcb3cu;
    // NOP
label_1fcb40:
    // 0x1fcb40: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FCB40u;
    {
        const bool branch_taken_0x1fcb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB40u;
        // 0x1fcb44: 0x2a222710  slti        $v0, $s1, 0x2710 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10000) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb40) {
            ctx->pc = 0x1FCB68u;
            goto label_1fcb68;
        }
    }
    ctx->pc = 0x1FCB48u;
    // 0x1fcb48: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1fcb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1fcb4c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fcb4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fcb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb54: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FCB54u;
    SET_GPR_U32(ctx, 31, 0x1FCB5Cu);
    ctx->pc = 0x1FCB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB54u;
    // 0x1fcb58: 0x24453708  addiu       $a1, $v0, 0x3708 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 14088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FCB54u, 0x1FCB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB5Cu;
label_1fcb5c:
    // 0x1fcb5c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1FCB5Cu;
    {
        const bool branch_taken_0x1fcb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB5Cu;
        // 0x1fcb60: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb5c) {
            ctx->pc = 0x1FCBD0u;
            goto label_1fcbd0;
        }
    }
    ctx->pc = 0x1FCB64u;
    // 0x1fcb64: 0x0  nop
    ctx->pc = 0x1fcb64u;
    // NOP
label_1fcb68:
    // 0x1fcb68: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FCB68u;
    {
        const bool branch_taken_0x1fcb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB68u;
        // 0x1fcb6c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb68) {
            ctx->pc = 0x1FCB90u;
            goto label_1fcb90;
        }
    }
    ctx->pc = 0x1FCB70u;
    // 0x1fcb70: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1fcb70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1fcb74: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fcb74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fcb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb7c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FCB7Cu;
    SET_GPR_U32(ctx, 31, 0x1FCB84u);
    ctx->pc = 0x1FCB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB7Cu;
    // 0x1fcb80: 0x24653718  addiu       $a1, $v1, 0x3718 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 14104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FCB7Cu, 0x1FCB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCB84u;
label_1fcb84:
    // 0x1fcb84: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1FCB84u;
    {
        const bool branch_taken_0x1fcb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB84u;
        // 0x1fcb88: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb84) {
            ctx->pc = 0x1FCBD0u;
            goto label_1fcbd0;
        }
    }
    ctx->pc = 0x1FCB8Cu;
    // 0x1fcb8c: 0x0  nop
    ctx->pc = 0x1fcb8cu;
    // NOP
label_1fcb90:
    // 0x1fcb90: 0x3442869f  ori         $v0, $v0, 0x869F
    ctx->pc = 0x1fcb90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
    // 0x1fcb94: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x1fcb94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1fcb98: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FCB98u;
    {
        const bool branch_taken_0x1fcb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB98u;
        // 0x1fcb9c: 0x3c030046  lui         $v1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb98) {
            ctx->pc = 0x1FCBC0u;
            goto label_1fcbc0;
        }
    }
    ctx->pc = 0x1FCBA0u;
    // 0x1fcba0: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1fcba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x1fcba4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fcba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcba8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fcba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcbac: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FCBACu;
    SET_GPR_U32(ctx, 31, 0x1FCBB4u);
    ctx->pc = 0x1FCBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCBACu;
    // 0x1fcbb0: 0x244520c8  addiu       $a1, $v0, 0x20C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FCBACu, 0x1FCBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCBB4u;
label_1fcbb4:
    // 0x1fcbb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1FCBB4u;
    {
        const bool branch_taken_0x1fcbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBB4u;
        // 0x1fcbb8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcbb4) {
            ctx->pc = 0x1FCBD0u;
            goto label_1fcbd0;
        }
    }
    ctx->pc = 0x1FCBBCu;
    // 0x1fcbbc: 0x0  nop
    ctx->pc = 0x1fcbbcu;
    // NOP
label_1fcbc0:
    // 0x1fcbc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fcbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcbc4: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FCBC4u;
    SET_GPR_U32(ctx, 31, 0x1FCBCCu);
    ctx->pc = 0x1FCBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCBC4u;
    // 0x1fcbc8: 0x24653728  addiu       $a1, $v1, 0x3728 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 14120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FCBC4u, 0x1FCBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCBCCu;
label_1fcbcc:
    // 0x1fcbcc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1fcbccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1fcbd0:
    // 0x1fcbd0: 0xc0b635c  jal         func_2D8D70
    ctx->pc = 0x1FCBD0u;
    SET_GPR_U32(ctx, 31, 0x1FCBD8u);
    ctx->pc = 0x1FCBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCBD0u;
    // 0x1fcbd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8D70u, 0x1FCBD0u, 0x1FCBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCBD8u;
label_1fcbd8:
    // 0x1fcbd8: 0x26e42098  addiu       $a0, $s7, 0x2098
    ctx->pc = 0x1fcbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 8344));
    // 0x1fcbdc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1fcbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fcbe0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1fcbe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcbe4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FCBE4u;
    SET_GPR_U32(ctx, 31, 0x1FCBECu);
    ctx->pc = 0x1FCBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCBE4u;
    // 0x1fcbe8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FCBE4u, 0x1FCBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCBECu;
label_1fcbec:
    // 0x1fcbec: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x1fcbecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fcbf0: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x1FCBF0u;
    {
        const bool branch_taken_0x1fcbf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBF0u;
        // 0x1fcbf4: 0x8f8297c8  lw          $v0, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcbf0) {
            ctx->pc = 0x1FCA98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fca98;
        }
    }
    ctx->pc = 0x1FCBF8u;
    // 0x1fcbf8: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fcbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
label_1fcbfc:
    // 0x1fcbfc: 0x8ca200a4  lw          $v0, 0xA4($a1)
    ctx->pc = 0x1fcbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 164)));
label_1fcc00:
    // 0x1fcc00: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FCC00u;
    {
        const bool branch_taken_0x1fcc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC00u;
        // 0x1fcc04: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc00) {
            ctx->pc = 0x1FCC48u;
            goto label_1fcc48;
        }
    }
    ctx->pc = 0x1FCC08u;
    // 0x1fcc08: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1fcc08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1fcc0c: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FCC0Cu;
    SET_GPR_U32(ctx, 31, 0x1FCC14u);
    ctx->pc = 0x1FCC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCC0Cu;
    // 0x1fcc10: 0x24a520d0  addiu       $a1, $a1, 0x20D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FCC0Cu, 0x1FCC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCC14u;
label_1fcc14:
    // 0x1fcc14: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fcc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcc18: 0xc0b635c  jal         func_2D8D70
    ctx->pc = 0x1FCC18u;
    SET_GPR_U32(ctx, 31, 0x1FCC20u);
    ctx->pc = 0x1FCC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCC18u;
    // 0x1fcc1c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8D70u, 0x1FCC18u, 0x1FCC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCC20u;
label_1fcc20:
    // 0x1fcc20: 0x26c43688  addiu       $a0, $s6, 0x3688
    ctx->pc = 0x1fcc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 13960));
    // 0x1fcc24: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1fcc24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1fcc28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fcc28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcc2c: 0x34c600fe  ori         $a2, $a2, 0xFE
    ctx->pc = 0x1fcc2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)254);
    // 0x1fcc30: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x1fcc30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1fcc34: 0x2408006e  addiu       $t0, $zero, 0x6E
    ctx->pc = 0x1fcc34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x1fcc38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fcc38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcc3c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FCC3Cu;
    SET_GPR_U32(ctx, 31, 0x1FCC44u);
    ctx->pc = 0x1FCC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCC3Cu;
    // 0x1fcc40: 0x3c0502d  daddu       $t2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FCC3Cu, 0x1FCC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCC44u;
label_1fcc44:
    // 0x1fcc44: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fcc44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
label_1fcc48:
    // 0x1fcc48: 0x8ca200a8  lw          $v0, 0xA8($a1)
    ctx->pc = 0x1fcc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 168)));
    // 0x1fcc4c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FCC4Cu;
    {
        const bool branch_taken_0x1fcc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC4Cu;
        // 0x1fcc50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc4c) {
            ctx->pc = 0x1FCC94u;
            goto label_1fcc94;
        }
    }
    ctx->pc = 0x1FCC54u;
    // 0x1fcc54: 0x3c050015  lui         $a1, 0x15
    ctx->pc = 0x1fcc54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
    // 0x1fcc58: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FCC58u;
    SET_GPR_U32(ctx, 31, 0x1FCC60u);
    ctx->pc = 0x1FCC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCC58u;
    // 0x1fcc5c: 0x24a520d8  addiu       $a1, $a1, 0x20D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FCC58u, 0x1FCC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCC60u;
label_1fcc60:
    // 0x1fcc60: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fcc60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcc64: 0xc0b635c  jal         func_2D8D70
    ctx->pc = 0x1FCC64u;
    SET_GPR_U32(ctx, 31, 0x1FCC6Cu);
    ctx->pc = 0x1FCC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCC64u;
    // 0x1fcc68: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8D70u, 0x1FCC64u, 0x1FCC6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCC6Cu;
label_1fcc6c:
    // 0x1fcc6c: 0x26c43688  addiu       $a0, $s6, 0x3688
    ctx->pc = 0x1fcc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 13960));
    // 0x1fcc70: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1fcc70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1fcc74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fcc74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcc78: 0x34c600fe  ori         $a2, $a2, 0xFE
    ctx->pc = 0x1fcc78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)254);
    // 0x1fcc7c: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x1fcc7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1fcc80: 0x24080087  addiu       $t0, $zero, 0x87
    ctx->pc = 0x1fcc80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 135));
    // 0x1fcc84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1fcc84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcc88: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FCC88u;
    SET_GPR_U32(ctx, 31, 0x1FCC90u);
    ctx->pc = 0x1FCC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCC88u;
    // 0x1fcc8c: 0x3c0502d  daddu       $t2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FCC88u, 0x1FCC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCC90u;
label_1fcc90:
    // 0x1fcc90: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fcc90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
label_1fcc94:
    // 0x1fcc94: 0x8ca203d4  lw          $v0, 0x3D4($a1)
    ctx->pc = 0x1fcc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 980)));
    // 0x1fcc98: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FCC98u;
    {
        const bool branch_taken_0x1fcc98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC98u;
        // 0x1fcc9c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc98) {
            ctx->pc = 0x1FCCDCu;
            goto label_1fccdc;
        }
    }
    ctx->pc = 0x1FCCA0u;
    // 0x1fcca0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1fcca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcca4: 0xc04a368  jal         func_128DA0
    ctx->pc = 0x1FCCA4u;
    SET_GPR_U32(ctx, 31, 0x1FCCACu);
    ctx->pc = 0x1FCCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCCA4u;
    // 0x1fcca8: 0x24a53738  addiu       $a1, $a1, 0x3738 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128DA0u, 0x1FCCA4u, 0x1FCCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCCACu;
label_1fccac:
    // 0x1fccac: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1fccacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fccb0: 0xc0b635c  jal         func_2D8D70
    ctx->pc = 0x1FCCB0u;
    SET_GPR_U32(ctx, 31, 0x1FCCB8u);
    ctx->pc = 0x1FCCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCCB0u;
    // 0x1fccb4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8D70u, 0x1FCCB0u, 0x1FCCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCCB8u;
label_1fccb8:
    // 0x1fccb8: 0x26c43688  addiu       $a0, $s6, 0x3688
    ctx->pc = 0x1fccb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 13960));
    // 0x1fccbc: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x1fccbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x1fccc0: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x1fccc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fccc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fccc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fccc8: 0x34c600fe  ori         $a2, $a2, 0xFE
    ctx->pc = 0x1fccc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)254);
    // 0x1fcccc: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x1fccccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1fccd0: 0x240800a0  addiu       $t0, $zero, 0xA0
    ctx->pc = 0x1fccd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1fccd4: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FCCD4u;
    SET_GPR_U32(ctx, 31, 0x1FCCDCu);
    ctx->pc = 0x1FCCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCCD4u;
    // 0x1fccd8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FCCD4u, 0x1FCCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCCDCu;
label_1fccdc:
    // 0x1fccdc: 0xc07f11c  jal         func_1FC470
    ctx->pc = 0x1FCCDCu;
    SET_GPR_U32(ctx, 31, 0x1FCCE4u);
    ctx->pc = 0x1FC470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC470u, 0x1FCCDCu, 0x1FCCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCCE4u;
label_1fcce4:
    // 0x1fcce4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FCCE4u;
    {
        const bool branch_taken_0x1fcce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCCE4u;
        // 0x1fcce8: 0x8f8597c8  lw          $a1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcce4) {
            ctx->pc = 0x1FCD44u;
            goto label_1fcd44;
        }
    }
    ctx->pc = 0x1FCCECu;
    // 0x1fccec: 0x8ca20098  lw          $v0, 0x98($a1)
    ctx->pc = 0x1fccecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 152)));
    // 0x1fccf0: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1FCCF0u;
    {
        const bool branch_taken_0x1fccf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fccf0) {
            ctx->pc = 0x1FCCF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCCF0u;
            // 0x1fccf4: 0x8ca2008c  lw          $v0, 0x8C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCD1Cu;
            goto label_1fcd1c;
        }
    }
    ctx->pc = 0x1FCCF8u;
    // 0x1fccf8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1fccf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fccfc: 0xc07f148  jal         func_1FC520
    ctx->pc = 0x1FCCFCu;
    SET_GPR_U32(ctx, 31, 0x1FCD04u);
    ctx->pc = 0x1FCD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCCFCu;
    // 0x1fcd00: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC520u, 0x1FCCFCu, 0x1FCD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCD04u;
label_1fcd04:
    // 0x1fcd04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FCD04u;
    {
        const bool branch_taken_0x1fcd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD04u;
        // 0x1fcd08: 0x8f8597c8  lw          $a1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd04) {
            ctx->pc = 0x1FCD18u;
            goto label_1fcd18;
        }
    }
    ctx->pc = 0x1FCD0Cu;
    // 0x1fcd0c: 0x8ea206a0  lw          $v0, 0x6A0($s5)
    ctx->pc = 0x1fcd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1696)));
    // 0x1fcd10: 0xaea2069c  sw          $v0, 0x69C($s5)
    ctx->pc = 0x1fcd10u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 1692), GPR_U32(ctx, 2));
    // 0x1fcd14: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fcd14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
label_1fcd18:
    // 0x1fcd18: 0x8ca2008c  lw          $v0, 0x8C($a1)
    ctx->pc = 0x1fcd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
label_1fcd1c:
    // 0x1fcd1c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FCD1Cu;
    {
        const bool branch_taken_0x1fcd1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD1Cu;
        // 0x1fcd20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd1c) {
            ctx->pc = 0x1FCD48u;
            goto label_1fcd48;
        }
    }
    ctx->pc = 0x1FCD24u;
    // 0x1fcd24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fcd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcd28: 0xc07f148  jal         func_1FC520
    ctx->pc = 0x1FCD28u;
    SET_GPR_U32(ctx, 31, 0x1FCD30u);
    ctx->pc = 0x1FCD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCD28u;
    // 0x1fcd2c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC520u, 0x1FCD28u, 0x1FCD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCD30u;
label_1fcd30:
    // 0x1fcd30: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FCD30u;
    {
        const bool branch_taken_0x1fcd30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD30u;
        // 0x1fcd34: 0x8f8597c8  lw          $a1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd30) {
            ctx->pc = 0x1FCD44u;
            goto label_1fcd44;
        }
    }
    ctx->pc = 0x1FCD38u;
    // 0x1fcd38: 0x8e4206a0  lw          $v0, 0x6A0($s2)
    ctx->pc = 0x1fcd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1696)));
    // 0x1fcd3c: 0xae42069c  sw          $v0, 0x69C($s2)
    ctx->pc = 0x1fcd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1692), GPR_U32(ctx, 2));
    // 0x1fcd40: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fcd40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
label_1fcd44:
    // 0x1fcd44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fcd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fcd48:
    // 0x1fcd48: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1fcd48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fcd4c: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1fcd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1fcd50:
    // 0x1fcd50: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1fcd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fcd54: 0x80430210  lb          $v1, 0x210($v0)
    ctx->pc = 0x1fcd54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x1fcd58: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FCD58u;
    {
        const bool branch_taken_0x1fcd58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD58u;
        // 0x1fcd5c: 0x28860006  slti        $a2, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd58) {
            ctx->pc = 0x1FCD7Cu;
            goto label_1fcd7c;
        }
    }
    ctx->pc = 0x1FCD60u;
    // 0x1fcd60: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x1fcd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1fcd64: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1fcd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1fcd68: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1fcd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1fcd6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCD6Cu;
    {
        const bool branch_taken_0x1fcd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcd6c) {
            ctx->pc = 0x1FCD7Cu;
            goto label_1fcd7c;
        }
    }
    ctx->pc = 0x1FCD74u;
    // 0x1fcd74: 0xaca703d0  sw          $a3, 0x3D0($a1)
    ctx->pc = 0x1fcd74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 976), GPR_U32(ctx, 7));
    // 0x1fcd78: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fcd78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
label_1fcd7c:
    // 0x1fcd7c: 0x14c0fff4  bnez        $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x1FCD7Cu;
    {
        const bool branch_taken_0x1fcd7c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD7Cu;
        // 0x1fcd80: 0x921021  addu        $v0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd7c) {
            ctx->pc = 0x1FCD50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fcd50;
        }
    }
    ctx->pc = 0x1FCD84u;
    // 0x1fcd84: 0x8ca203d0  lw          $v0, 0x3D0($a1)
    ctx->pc = 0x1fcd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 976)));
    // 0x1fcd88: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCD88u;
    {
        const bool branch_taken_0x1fcd88 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1FCD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD88u;
        // 0x1fcd8c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd88) {
            ctx->pc = 0x1FCD98u;
            goto label_1fcd98;
        }
    }
    ctx->pc = 0x1FCD90u;
    // 0x1fcd90: 0xaca203d0  sw          $v0, 0x3D0($a1)
    ctx->pc = 0x1fcd90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 976), GPR_U32(ctx, 2));
    // 0x1fcd94: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fcd94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
label_1fcd98:
    // 0x1fcd98: 0x8ca203d4  lw          $v0, 0x3D4($a1)
    ctx->pc = 0x1fcd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 980)));
    // 0x1fcd9c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FCD9Cu;
    {
        const bool branch_taken_0x1fcd9c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FCDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCD9Cu;
        // 0x1fcda0: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcd9c) {
            ctx->pc = 0x1FCDB0u;
            goto label_1fcdb0;
        }
    }
    ctx->pc = 0x1FCDA4u;
    // 0x1fcda4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fcda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fcda8: 0xaca203d4  sw          $v0, 0x3D4($a1)
    ctx->pc = 0x1fcda8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 980), GPR_U32(ctx, 2));
    // 0x1fcdac: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fcdacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
label_1fcdb0:
    // 0x1fcdb0: 0x24828858  addiu       $v0, $a0, -0x77A8
    ctx->pc = 0x1fcdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
    // 0x1fcdb4: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1fcdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1fcdb8: 0x106000fe  beqz        $v1, . + 4 + (0xFE << 2)
    ctx->pc = 0x1FCDB8u;
    {
        const bool branch_taken_0x1fcdb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDB8u;
        // 0x1fcdbc: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcdb8) {
            ctx->pc = 0x1FD1B4u;
            goto label_1fd1b4;
        }
    }
    ctx->pc = 0x1FCDC0u;
    // 0x1fcdc0: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x1fcdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1fcdc4: 0x104000fc  beqz        $v0, . + 4 + (0xFC << 2)
    ctx->pc = 0x1FCDC4u;
    {
        const bool branch_taken_0x1fcdc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDC4u;
        // 0x1fcdc8: 0x24828858  addiu       $v0, $a0, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcdc4) {
            ctx->pc = 0x1FD1B8u;
            goto label_1fd1b8;
        }
    }
    ctx->pc = 0x1FCDCCu;
    // 0x1fcdcc: 0xc07f10a  jal         func_1FC428
    ctx->pc = 0x1FCDCCu;
    SET_GPR_U32(ctx, 31, 0x1FCDD4u);
    ctx->pc = 0x1FC428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC428u, 0x1FCDCCu, 0x1FCDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCDD4u;
label_1fcdd4:
    // 0x1fcdd4: 0x144000f6  bnez        $v0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x1FCDD4u;
    {
        const bool branch_taken_0x1fcdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDD4u;
        // 0x1fcdd8: 0x8f8597c8  lw          $a1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcdd4) {
            ctx->pc = 0x1FD1B0u;
            goto label_1fd1b0;
        }
    }
    ctx->pc = 0x1FCDDCu;
    // 0x1fcddc: 0xc07f102  jal         func_1FC408
    ctx->pc = 0x1FCDDCu;
    SET_GPR_U32(ctx, 31, 0x1FCDE4u);
    ctx->pc = 0x1FC408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC408u, 0x1FCDDCu, 0x1FCDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCDE4u;
label_1fcde4:
    // 0x1fcde4: 0x144000f2  bnez        $v0, . + 4 + (0xF2 << 2)
    ctx->pc = 0x1FCDE4u;
    {
        const bool branch_taken_0x1fcde4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDE4u;
        // 0x1fcde8: 0x8f8597c8  lw          $a1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcde4) {
            ctx->pc = 0x1FD1B0u;
            goto label_1fd1b0;
        }
    }
    ctx->pc = 0x1FCDECu;
    // 0x1fcdec: 0x8f829720  lw          $v0, -0x68E0($gp)
    ctx->pc = 0x1fcdecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
    // 0x1fcdf0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1fcdf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fcdf4: 0x144000ef  bnez        $v0, . + 4 + (0xEF << 2)
    ctx->pc = 0x1FCDF4u;
    {
        const bool branch_taken_0x1fcdf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCDF4u;
        // 0x1fcdf8: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcdf4) {
            ctx->pc = 0x1FD1B4u;
            goto label_1fd1b4;
        }
    }
    ctx->pc = 0x1FCDFCu;
    // 0x1fcdfc: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fcdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fce00: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1fce00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fce04: 0x144000eb  bnez        $v0, . + 4 + (0xEB << 2)
    ctx->pc = 0x1FCE04u;
    {
        const bool branch_taken_0x1fce04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE04u;
        // 0x1fce08: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce04) {
            ctx->pc = 0x1FD1B4u;
            goto label_1fd1b4;
        }
    }
    ctx->pc = 0x1FCE0Cu;
    // 0x1fce0c: 0x94a2003a  lhu         $v0, 0x3A($a1)
    ctx->pc = 0x1fce0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 58)));
    // 0x1fce10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FCE10u;
    {
        const bool branch_taken_0x1fce10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE10u;
        // 0x1fce14: 0x8fa30304  lw          $v1, 0x304($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce10) {
            ctx->pc = 0x1FCE28u;
            goto label_1fce28;
        }
    }
    ctx->pc = 0x1FCE18u;
    // 0x1fce18: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x1fce18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fce1c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1fce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1fce20: 0x10000102  b           . + 4 + (0x102 << 2)
    ctx->pc = 0x1FCE20u;
    {
        const bool branch_taken_0x1fce20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE20u;
        // 0x1fce24: 0xa4a2003a  sh          $v0, 0x3A($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 58), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce20) {
            ctx->pc = 0x1FD22Cu;
            goto label_1fd22c;
        }
    }
    ctx->pc = 0x1FCE28u;
label_1fce28:
    // 0x1fce28: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x1fce28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1fce2c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FCE2Cu;
    {
        const bool branch_taken_0x1fce2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE2Cu;
        // 0x1fce30: 0x8fa40300  lw          $a0, 0x300($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce2c) {
            ctx->pc = 0x1FCEA8u;
            goto label_1fcea8;
        }
    }
    ctx->pc = 0x1FCE34u;
    // 0x1fce34: 0x30820060  andi        $v0, $a0, 0x60
    ctx->pc = 0x1fce34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)96);
    // 0x1fce38: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1FCE38u;
    {
        const bool branch_taken_0x1fce38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE38u;
        // 0x1fce3c: 0x8fa20300  lw          $v0, 0x300($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce38) {
            ctx->pc = 0x1FCEACu;
            goto label_1fceac;
        }
    }
    ctx->pc = 0x1FCE40u;
    // 0x1fce40: 0x94a30038  lhu         $v1, 0x38($a1)
    ctx->pc = 0x1fce40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x1fce44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fce44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fce48: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FCE48u;
    {
        const bool branch_taken_0x1fce48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FCE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE48u;
        // 0x1fce4c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce48) {
            ctx->pc = 0x1FCE70u;
            goto label_1fce70;
        }
    }
    ctx->pc = 0x1FCE50u;
    // 0x1fce50: 0x5440007d  bnel        $v0, $zero, . + 4 + (0x7D << 2)
    ctx->pc = 0x1FCE50u;
    {
        const bool branch_taken_0x1fce50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fce50) {
            ctx->pc = 0x1FCE54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCE50u;
            // 0x1fce54: 0x8ca20030  lw          $v0, 0x30($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD048u;
            goto label_1fd048;
        }
    }
    ctx->pc = 0x1FCE58u;
    // 0x1fce58: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fce58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fce5c: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FCE5Cu;
    {
        const bool branch_taken_0x1fce5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fce5c) {
            ctx->pc = 0x1FCE60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCE5Cu;
            // 0x1fce60: 0xa4a00038  sh          $zero, 0x38($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 56), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCE90u;
            goto label_1fce90;
        }
    }
    ctx->pc = 0x1FCE64u;
    // 0x1fce64: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1FCE64u;
    {
        const bool branch_taken_0x1fce64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE64u;
        // 0x1fce68: 0x8ca20030  lw          $v0, 0x30($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce64) {
            ctx->pc = 0x1FD048u;
            goto label_1fd048;
        }
    }
    ctx->pc = 0x1FCE6Cu;
    // 0x1fce6c: 0x0  nop
    ctx->pc = 0x1fce6cu;
    // NOP
label_1fce70:
    // 0x1fce70: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x1fce70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x1fce74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fce74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fce78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fce78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fce7c: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fce80: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x1FCE80u;
    SET_GPR_U32(ctx, 31, 0x1FCE88u);
    ctx->pc = 0x1FCE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCE80u;
    // 0x1fce84: 0xa4400038  sh          $zero, 0x38($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x1FCE80u, 0x1FCE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCE88u;
label_1fce88:
    // 0x1fce88: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x1FCE88u;
    {
        const bool branch_taken_0x1fce88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE88u;
        // 0x1fce8c: 0x8f8597c8  lw          $a1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fce88) {
            ctx->pc = 0x1FD044u;
            goto label_1fd044;
        }
    }
    ctx->pc = 0x1FCE90u;
label_1fce90:
    // 0x1fce90: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fce90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fce94: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x1FCE94u;
    SET_GPR_U32(ctx, 31, 0x1FCE9Cu);
    ctx->pc = 0x1FCE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCE94u;
    // 0x1fce98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x1FCE94u, 0x1FCE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCE9Cu;
label_1fce9c:
    // 0x1fce9c: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fcea0: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1FCEA0u;
    {
        const bool branch_taken_0x1fcea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEA0u;
        // 0x1fcea4: 0xac400030  sw          $zero, 0x30($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcea0) {
            ctx->pc = 0x1FD040u;
            goto label_1fd040;
        }
    }
    ctx->pc = 0x1FCEA8u;
label_1fcea8:
    // 0x1fcea8: 0x8fa20300  lw          $v0, 0x300($sp)
    ctx->pc = 0x1fcea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
label_1fceac:
    // 0x1fceac: 0x30430120  andi        $v1, $v0, 0x120
    ctx->pc = 0x1fceacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)288);
    // 0x1fceb0: 0x24020120  addiu       $v0, $zero, 0x120
    ctx->pc = 0x1fceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    // 0x1fceb4: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FCEB4u;
    {
        const bool branch_taken_0x1fceb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FCEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEB4u;
        // 0x1fceb8: 0x8fa40300  lw          $a0, 0x300($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fceb4) {
            ctx->pc = 0x1FCF2Cu;
            goto label_1fcf2c;
        }
    }
    ctx->pc = 0x1FCEBCu;
    // 0x1fcebc: 0x8fa30304  lw          $v1, 0x304($sp)
    ctx->pc = 0x1fcebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
    // 0x1fcec0: 0x30620120  andi        $v0, $v1, 0x120
    ctx->pc = 0x1fcec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)288);
    // 0x1fcec4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FCEC4u;
    {
        const bool branch_taken_0x1fcec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEC4u;
        // 0x1fcec8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcec4) {
            ctx->pc = 0x1FCF28u;
            goto label_1fcf28;
        }
    }
    ctx->pc = 0x1FCECCu;
    // 0x1fcecc: 0x94c30038  lhu         $v1, 0x38($a2)
    ctx->pc = 0x1fceccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x1fced0: 0x1064000d  beq         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FCED0u;
    {
        const bool branch_taken_0x1fced0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1FCED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCED0u;
        // 0x1fced4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fced0) {
            ctx->pc = 0x1FCF08u;
            goto label_1fcf08;
        }
    }
    ctx->pc = 0x1FCED8u;
    // 0x1fced8: 0x5040005b  beql        $v0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x1FCED8u;
    {
        const bool branch_taken_0x1fced8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fced8) {
            ctx->pc = 0x1FCEDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCED8u;
            // 0x1fcedc: 0x8ca20030  lw          $v0, 0x30($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD048u;
            goto label_1fd048;
        }
    }
    ctx->pc = 0x1FCEE0u;
    // 0x1fcee0: 0x54600059  bnel        $v1, $zero, . + 4 + (0x59 << 2)
    ctx->pc = 0x1FCEE0u;
    {
        const bool branch_taken_0x1fcee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcee0) {
            ctx->pc = 0x1FCEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCEE0u;
            // 0x1fcee4: 0x8ca20030  lw          $v0, 0x30($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD048u;
            goto label_1fd048;
        }
    }
    ctx->pc = 0x1FCEE8u;
    // 0x1fcee8: 0xa4c40038  sh          $a0, 0x38($a2)
    ctx->pc = 0x1fcee8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 56), (uint16_t)GPR_U32(ctx, 4));
    // 0x1fceec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fceecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fcef0: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fcef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fcef4: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x1FCEF4u;
    SET_GPR_U32(ctx, 31, 0x1FCEFCu);
    ctx->pc = 0x1FCEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCEF4u;
    // 0x1fcef8: 0xac400034  sw          $zero, 0x34($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x1FCEF4u, 0x1FCEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCEFCu;
label_1fcefc:
    // 0x1fcefc: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1FCEFCu;
    {
        const bool branch_taken_0x1fcefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCEFCu;
        // 0x1fcf00: 0x8f8597c8  lw          $a1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcefc) {
            ctx->pc = 0x1FD044u;
            goto label_1fd044;
        }
    }
    ctx->pc = 0x1FCF04u;
    // 0x1fcf04: 0x0  nop
    ctx->pc = 0x1fcf04u;
    // NOP
label_1fcf08:
    // 0x1fcf08: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x1fcf08u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x1fcf0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fcf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fcf10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fcf10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcf14: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fcf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fcf18: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x1FCF18u;
    SET_GPR_U32(ctx, 31, 0x1FCF20u);
    ctx->pc = 0x1FCF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF18u;
    // 0x1fcf1c: 0xa4400038  sh          $zero, 0x38($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x1FCF18u, 0x1FCF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCF20u;
label_1fcf20:
    // 0x1fcf20: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x1FCF20u;
    {
        const bool branch_taken_0x1fcf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF20u;
        // 0x1fcf24: 0x8f8597c8  lw          $a1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf20) {
            ctx->pc = 0x1FD044u;
            goto label_1fd044;
        }
    }
    ctx->pc = 0x1FCF28u;
label_1fcf28:
    // 0x1fcf28: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x1fcf28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
label_1fcf2c:
    // 0x1fcf2c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x1fcf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1fcf30: 0x30830140  andi        $v1, $a0, 0x140
    ctx->pc = 0x1fcf30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)320);
    // 0x1fcf34: 0x54620025  bnel        $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1FCF34u;
    {
        const bool branch_taken_0x1fcf34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fcf34) {
            ctx->pc = 0x1FCF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCF34u;
            // 0x1fcf38: 0x8fa40300  lw          $a0, 0x300($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FCFCCu;
            goto label_1fcfcc;
        }
    }
    ctx->pc = 0x1FCF3Cu;
    // 0x1fcf3c: 0x8fa30304  lw          $v1, 0x304($sp)
    ctx->pc = 0x1fcf3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
    // 0x1fcf40: 0x30620140  andi        $v0, $v1, 0x140
    ctx->pc = 0x1fcf40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)320);
    // 0x1fcf44: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1FCF44u;
    {
        const bool branch_taken_0x1fcf44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF44u;
        // 0x1fcf48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf44) {
            ctx->pc = 0x1FCFC8u;
            goto label_1fcfc8;
        }
    }
    ctx->pc = 0x1FCF4Cu;
    // 0x1fcf4c: 0x94c30038  lhu         $v1, 0x38($a2)
    ctx->pc = 0x1fcf4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x1fcf50: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FCF50u;
    {
        const bool branch_taken_0x1fcf50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FCF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF50u;
        // 0x1fcf54: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf50) {
            ctx->pc = 0x1FCFA8u;
            goto label_1fcfa8;
        }
    }
    ctx->pc = 0x1FCF58u;
    // 0x1fcf58: 0x5040003b  beql        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x1FCF58u;
    {
        const bool branch_taken_0x1fcf58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcf58) {
            ctx->pc = 0x1FCF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCF58u;
            // 0x1fcf5c: 0x8ca20030  lw          $v0, 0x30($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD048u;
            goto label_1fd048;
        }
    }
    ctx->pc = 0x1FCF60u;
    // 0x1fcf60: 0x54600039  bnel        $v1, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x1FCF60u;
    {
        const bool branch_taken_0x1fcf60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcf60) {
            ctx->pc = 0x1FCF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCF60u;
            // 0x1fcf64: 0x8ca20030  lw          $v0, 0x30($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD048u;
            goto label_1fd048;
        }
    }
    ctx->pc = 0x1FCF68u;
    // 0x1fcf68: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x1fcf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x1fcf6c: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1FCF6Cu;
    {
        const bool branch_taken_0x1fcf6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCF6Cu;
        // 0x1fcf70: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcf6c) {
            ctx->pc = 0x1FD044u;
            goto label_1fd044;
        }
    }
    ctx->pc = 0x1FCF74u;
    // 0x1fcf74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fcf74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fcf78: 0xc07e61e  jal         func_1F9878
    ctx->pc = 0x1FCF78u;
    SET_GPR_U32(ctx, 31, 0x1FCF80u);
    ctx->pc = 0x1FCF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF78u;
    // 0x1fcf7c: 0xa4c20038  sh          $v0, 0x38($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 56), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9878u, 0x1FCF78u, 0x1FCF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCF80u;
label_1fcf80:
    // 0x1fcf80: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fcf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fcf84: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x1FCF84u;
    SET_GPR_U32(ctx, 31, 0x1FCF8Cu);
    ctx->pc = 0x1FCF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCF84u;
    // 0x1fcf88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x1FCF84u, 0x1FCF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCF8Cu;
label_1fcf8c:
    // 0x1fcf8c: 0x2782a868  addiu       $v0, $gp, -0x5798
    ctx->pc = 0x1fcf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944872));
    // 0x1fcf90: 0x2783a870  addiu       $v1, $gp, -0x5790
    ctx->pc = 0x1fcf90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944880));
    // 0x1fcf94: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1fcf94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1fcf98: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1fcf98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1fcf9c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1fcf9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1fcfa0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1FCFA0u;
    {
        const bool branch_taken_0x1fcfa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFA0u;
        // 0x1fcfa4: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcfa0) {
            ctx->pc = 0x1FD040u;
            goto label_1fd040;
        }
    }
    ctx->pc = 0x1FCFA8u;
label_1fcfa8:
    // 0x1fcfa8: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x1fcfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
    // 0x1fcfac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fcfacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fcfb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fcfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcfb4: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fcfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fcfb8: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x1FCFB8u;
    SET_GPR_U32(ctx, 31, 0x1FCFC0u);
    ctx->pc = 0x1FCFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCFB8u;
    // 0x1fcfbc: 0xa4400038  sh          $zero, 0x38($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x1FCFB8u, 0x1FCFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCFC0u;
label_1fcfc0:
    // 0x1fcfc0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1FCFC0u;
    {
        const bool branch_taken_0x1fcfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFC0u;
        // 0x1fcfc4: 0x8f8597c8  lw          $a1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcfc0) {
            ctx->pc = 0x1FD044u;
            goto label_1fd044;
        }
    }
    ctx->pc = 0x1FCFC8u;
label_1fcfc8:
    // 0x1fcfc8: 0x8fa40300  lw          $a0, 0x300($sp)
    ctx->pc = 0x1fcfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 768)));
label_1fcfcc:
    // 0x1fcfcc: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x1fcfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x1fcfd0: 0x30830180  andi        $v1, $a0, 0x180
    ctx->pc = 0x1fcfd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)384);
    // 0x1fcfd4: 0x5462001c  bnel        $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1FCFD4u;
    {
        const bool branch_taken_0x1fcfd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fcfd4) {
            ctx->pc = 0x1FCFD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCFD4u;
            // 0x1fcfd8: 0x8ca20030  lw          $v0, 0x30($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD048u;
            goto label_1fd048;
        }
    }
    ctx->pc = 0x1FCFDCu;
    // 0x1fcfdc: 0x8fa30304  lw          $v1, 0x304($sp)
    ctx->pc = 0x1fcfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
    // 0x1fcfe0: 0x30620180  andi        $v0, $v1, 0x180
    ctx->pc = 0x1fcfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)384);
    // 0x1fcfe4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FCFE4u;
    {
        const bool branch_taken_0x1fcfe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fcfe4) {
            ctx->pc = 0x1FCFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCFE4u;
            // 0x1fcfe8: 0x8ca20030  lw          $v0, 0x30($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD048u;
            goto label_1fd048;
        }
    }
    ctx->pc = 0x1FCFECu;
    // 0x1fcfec: 0x94c20038  lhu         $v0, 0x38($a2)
    ctx->pc = 0x1fcfecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 56)));
    // 0x1fcff0: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FCFF0u;
    {
        const bool branch_taken_0x1fcff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fcff0) {
            ctx->pc = 0x1FCFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FCFF0u;
            // 0x1fcff4: 0x8ca20030  lw          $v0, 0x30($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD048u;
            goto label_1fd048;
        }
    }
    ctx->pc = 0x1FCFF8u;
    // 0x1fcff8: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x1fcff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x1fcffc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FCFFCu;
    {
        const bool branch_taken_0x1fcffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCFFCu;
        // 0x1fd000: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcffc) {
            ctx->pc = 0x1FD044u;
            goto label_1fd044;
        }
    }
    ctx->pc = 0x1FD004u;
    // 0x1fd004: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fd004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd008: 0xc07e61e  jal         func_1F9878
    ctx->pc = 0x1FD008u;
    SET_GPR_U32(ctx, 31, 0x1FD010u);
    ctx->pc = 0x1FD00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD008u;
    // 0x1fd00c: 0xa4c20038  sh          $v0, 0x38($a2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 6), 56), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9878u, 0x1FD008u, 0x1FD010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD010u;
label_1fd010:
    // 0x1fd010: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fd010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fd014: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x1FD014u;
    SET_GPR_U32(ctx, 31, 0x1FD01Cu);
    ctx->pc = 0x1FD018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD014u;
    // 0x1fd018: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x1FD014u, 0x1FD01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD01Cu;
label_1fd01c:
    // 0x1fd01c: 0x2783a868  addiu       $v1, $gp, -0x5798
    ctx->pc = 0x1fd01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944872));
    // 0x1fd020: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fd020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fd024: 0x2782a870  addiu       $v0, $gp, -0x5790
    ctx->pc = 0x1fd024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944880));
    // 0x1fd028: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fd028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd02c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1fd02cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1fd030: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1fd030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1fd034: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1fd034u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1fd038: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1fd038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1fd03c: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x1fd03cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
label_1fd040:
    // 0x1fd040: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fd040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
label_1fd044:
    // 0x1fd044: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x1fd044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_1fd048:
    // 0x1fd048: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FD048u;
    {
        const bool branch_taken_0x1fd048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD048u;
        // 0x1fd04c: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd048) {
            ctx->pc = 0x1FD0A0u;
            goto label_1fd0a0;
        }
    }
    ctx->pc = 0x1FD050u;
    // 0x1fd050: 0x94a20038  lhu         $v0, 0x38($a1)
    ctx->pc = 0x1fd050u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x1fd054: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FD054u;
    {
        const bool branch_taken_0x1fd054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD054u;
        // 0x1fd058: 0x3c06000b  lui         $a2, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)11 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd054) {
            ctx->pc = 0x1FD0A4u;
            goto label_1fd0a4;
        }
    }
    ctx->pc = 0x1FD05Cu;
    // 0x1fd05c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fd05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fd060: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fd060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd064: 0xc07e61e  jal         func_1F9878
    ctx->pc = 0x1FD064u;
    SET_GPR_U32(ctx, 31, 0x1FD06Cu);
    ctx->pc = 0x1FD068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD064u;
    // 0x1fd068: 0xa4a20038  sh          $v0, 0x38($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 56), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9878u, 0x1FD064u, 0x1FD06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD06Cu;
label_1fd06c:
    // 0x1fd06c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fd06cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fd070: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x1FD070u;
    SET_GPR_U32(ctx, 31, 0x1FD078u);
    ctx->pc = 0x1FD074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD070u;
    // 0x1fd074: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x1FD070u, 0x1FD078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD078u;
label_1fd078:
    // 0x1fd078: 0x2783a868  addiu       $v1, $gp, -0x5798
    ctx->pc = 0x1fd078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944872));
    // 0x1fd07c: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fd07cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fd080: 0x2782a870  addiu       $v0, $gp, -0x5790
    ctx->pc = 0x1fd080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944880));
    // 0x1fd084: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fd084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd088: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1fd088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1fd08c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1fd08cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1fd090: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1fd090u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1fd094: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1fd094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1fd098: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x1fd098u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
    // 0x1fd09c: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x1fd09cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
label_1fd0a0:
    // 0x1fd0a0: 0x3c06000b  lui         $a2, 0xB
    ctx->pc = 0x1fd0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)11 << 16));
label_1fd0a4:
    // 0x1fd0a4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1fd0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fd0a8: 0x248420e0  addiu       $a0, $a0, 0x20E0
    ctx->pc = 0x1fd0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8416));
    // 0x1fd0ac: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FD0ACu;
    SET_GPR_U32(ctx, 31, 0x1FD0B4u);
    ctx->pc = 0x1FD0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD0ACu;
    // 0x1fd0b0: 0x34c60090  ori         $a2, $a2, 0x90 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)144);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FD0ACu, 0x1FD0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD0B4u;
label_1fd0b4:
    // 0x1fd0b4: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fd0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fd0b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fd0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd0bc: 0x94a30038  lhu         $v1, 0x38($a1)
    ctx->pc = 0x1fd0bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x1fd0c0: 0x1062001b  beq         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1FD0C0u;
    {
        const bool branch_taken_0x1fd0c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD0C0u;
        // 0x1fd0c4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd0c0) {
            ctx->pc = 0x1FD130u;
            goto label_1fd130;
        }
    }
    ctx->pc = 0x1FD0C8u;
    // 0x1fd0c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD0C8u;
    {
        const bool branch_taken_0x1fd0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD0C8u;
        // 0x1fd0cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd0c8) {
            ctx->pc = 0x1FD0E0u;
            goto label_1fd0e0;
        }
    }
    ctx->pc = 0x1FD0D0u;
    // 0x1fd0d0: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FD0D0u;
    {
        const bool branch_taken_0x1fd0d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd0d0) {
            ctx->pc = 0x1FD0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD0D0u;
            // 0x1fd0d4: 0x3c020015  lui         $v0, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD0F0u;
            goto label_1fd0f0;
        }
    }
    ctx->pc = 0x1FD0D8u;
    // 0x1fd0d8: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1FD0D8u;
    {
        const bool branch_taken_0x1fd0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD0D8u;
        // 0x1fd0dc: 0x8ca2003c  lw          $v0, 0x3C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd0d8) {
            ctx->pc = 0x1FD234u;
            goto label_1fd234;
        }
    }
    ctx->pc = 0x1FD0E0u;
label_1fd0e0:
    // 0x1fd0e0: 0x50620023  beql        $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1FD0E0u;
    {
        const bool branch_taken_0x1fd0e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fd0e0) {
            ctx->pc = 0x1FD0E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD0E0u;
            // 0x1fd0e4: 0x8f829720  lw          $v0, -0x68E0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD170u;
            goto label_1fd170;
        }
    }
    ctx->pc = 0x1FD0E8u;
    // 0x1fd0e8: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x1FD0E8u;
    {
        const bool branch_taken_0x1fd0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD0E8u;
        // 0x1fd0ec: 0x8ca2003c  lw          $v0, 0x3C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd0e8) {
            ctx->pc = 0x1FD234u;
            goto label_1fd234;
        }
    }
    ctx->pc = 0x1FD0F0u;
label_1fd0f0:
    // 0x1fd0f0: 0x3c05000b  lui         $a1, 0xB
    ctx->pc = 0x1fd0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)11 << 16));
    // 0x1fd0f4: 0x245020e8  addiu       $s0, $v0, 0x20E8
    ctx->pc = 0x1fd0f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8424));
    // 0x1fd0f8: 0x34a50091  ori         $a1, $a1, 0x91
    ctx->pc = 0x1fd0f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)145);
    // 0x1fd0fc: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FD0FCu;
    SET_GPR_U32(ctx, 31, 0x1FD104u);
    ctx->pc = 0x1FD100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD0FCu;
    // 0x1fd100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FD0FCu, 0x1FD104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD104u;
label_1fd104:
    // 0x1fd104: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fd104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fd108: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x1fd108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1fd10c: 0x50400049  beql        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x1FD10Cu;
    {
        const bool branch_taken_0x1fd10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd10c) {
            ctx->pc = 0x1FD110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD10Cu;
            // 0x1fd110: 0x8ca2003c  lw          $v0, 0x3C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD234u;
            goto label_1fd234;
        }
    }
    ctx->pc = 0x1FD114u;
    // 0x1fd114: 0x3c05000b  lui         $a1, 0xB
    ctx->pc = 0x1fd114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)11 << 16));
    // 0x1fd118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fd118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd11c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FD11Cu;
    SET_GPR_U32(ctx, 31, 0x1FD124u);
    ctx->pc = 0x1FD120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD11Cu;
    // 0x1fd120: 0x34a50092  ori         $a1, $a1, 0x92 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)146);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FD11Cu, 0x1FD124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD124u;
label_1fd124:
    // 0x1fd124: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x1FD124u;
    {
        const bool branch_taken_0x1fd124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD124u;
        // 0x1fd128: 0x8f8597c8  lw          $a1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd124) {
            ctx->pc = 0x1FD230u;
            goto label_1fd230;
        }
    }
    ctx->pc = 0x1FD12Cu;
    // 0x1fd12c: 0x0  nop
    ctx->pc = 0x1fd12cu;
    // NOP
label_1fd130:
    // 0x1fd130: 0x8f829720  lw          $v0, -0x68E0($gp)
    ctx->pc = 0x1fd130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940448)));
    // 0x1fd134: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1fd134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1fd138: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FD138u;
    {
        const bool branch_taken_0x1fd138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD138u;
        // 0x1fd13c: 0x3c100015  lui         $s0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd138) {
            ctx->pc = 0x1FD158u;
            goto label_1fd158;
        }
    }
    ctx->pc = 0x1FD140u;
    // 0x1fd140: 0x3c05000b  lui         $a1, 0xB
    ctx->pc = 0x1fd140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)11 << 16));
    // 0x1fd144: 0x260420e8  addiu       $a0, $s0, 0x20E8
    ctx->pc = 0x1fd144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8424));
    // 0x1fd148: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FD148u;
    SET_GPR_U32(ctx, 31, 0x1FD150u);
    ctx->pc = 0x1FD14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD148u;
    // 0x1fd14c: 0x34a50093  ori         $a1, $a1, 0x93 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)147);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FD148u, 0x1FD150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD150u;
label_1fd150:
    // 0x1fd150: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD150u;
    {
        const bool branch_taken_0x1fd150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD150u;
        // 0x1fd154: 0x3c05000b  lui         $a1, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)11 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd150) {
            ctx->pc = 0x1FD15Cu;
            goto label_1fd15c;
        }
    }
    ctx->pc = 0x1FD158u;
label_1fd158:
    // 0x1fd158: 0x3c05000b  lui         $a1, 0xB
    ctx->pc = 0x1fd158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)11 << 16));
label_1fd15c:
    // 0x1fd15c: 0x260420e8  addiu       $a0, $s0, 0x20E8
    ctx->pc = 0x1fd15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8424));
    // 0x1fd160: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FD160u;
    SET_GPR_U32(ctx, 31, 0x1FD168u);
    ctx->pc = 0x1FD164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD160u;
    // 0x1fd164: 0x34a50094  ori         $a1, $a1, 0x94 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)148);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FD160u, 0x1FD168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD168u;
label_1fd168:
    // 0x1fd168: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1FD168u;
    {
        const bool branch_taken_0x1fd168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD168u;
        // 0x1fd16c: 0x8f8597c8  lw          $a1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd168) {
            ctx->pc = 0x1FD230u;
            goto label_1fd230;
        }
    }
    ctx->pc = 0x1FD170u;
label_1fd170:
    // 0x1fd170: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1fd170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1fd174: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD174u;
    {
        const bool branch_taken_0x1fd174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD174u;
        // 0x1fd178: 0x3c100015  lui         $s0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd174) {
            ctx->pc = 0x1FD198u;
            goto label_1fd198;
        }
    }
    ctx->pc = 0x1FD17Cu;
    // 0x1fd17c: 0x3c05000b  lui         $a1, 0xB
    ctx->pc = 0x1fd17cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)11 << 16));
    // 0x1fd180: 0x260420e8  addiu       $a0, $s0, 0x20E8
    ctx->pc = 0x1fd180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8424));
    // 0x1fd184: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FD184u;
    SET_GPR_U32(ctx, 31, 0x1FD18Cu);
    ctx->pc = 0x1FD188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD184u;
    // 0x1fd188: 0x34a5009c  ori         $a1, $a1, 0x9C (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)156);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FD184u, 0x1FD18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD18Cu;
label_1fd18c:
    // 0x1fd18c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD18Cu;
    {
        const bool branch_taken_0x1fd18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD18Cu;
        // 0x1fd190: 0x3c05000b  lui         $a1, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)11 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd18c) {
            ctx->pc = 0x1FD19Cu;
            goto label_1fd19c;
        }
    }
    ctx->pc = 0x1FD194u;
    // 0x1fd194: 0x0  nop
    ctx->pc = 0x1fd194u;
    // NOP
label_1fd198:
    // 0x1fd198: 0x3c05000b  lui         $a1, 0xB
    ctx->pc = 0x1fd198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)11 << 16));
label_1fd19c:
    // 0x1fd19c: 0x260420e8  addiu       $a0, $s0, 0x20E8
    ctx->pc = 0x1fd19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8424));
    // 0x1fd1a0: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FD1A0u;
    SET_GPR_U32(ctx, 31, 0x1FD1A8u);
    ctx->pc = 0x1FD1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD1A0u;
    // 0x1fd1a4: 0x34a50094  ori         $a1, $a1, 0x94 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)148);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FD1A0u, 0x1FD1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD1A8u;
label_1fd1a8:
    // 0x1fd1a8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1FD1A8u;
    {
        const bool branch_taken_0x1fd1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1A8u;
        // 0x1fd1ac: 0x8f8597c8  lw          $a1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd1a8) {
            ctx->pc = 0x1FD230u;
            goto label_1fd230;
        }
    }
    ctx->pc = 0x1FD1B0u;
label_1fd1b0:
    // 0x1fd1b0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1fd1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_1fd1b4:
    // 0x1fd1b4: 0x24828858  addiu       $v0, $a0, -0x77A8
    ctx->pc = 0x1fd1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
label_1fd1b8:
    // 0x1fd1b8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1fd1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1fd1bc: 0x5460001d  bnel        $v1, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FD1BCu;
    {
        const bool branch_taken_0x1fd1bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd1bc) {
            ctx->pc = 0x1FD1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD1BCu;
            // 0x1fd1c0: 0x8ca2003c  lw          $v0, 0x3C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD234u;
            goto label_1fd234;
        }
    }
    ctx->pc = 0x1FD1C4u;
    // 0x1fd1c4: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x1fd1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x1fd1c8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FD1C8u;
    {
        const bool branch_taken_0x1fd1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1C8u;
        // 0x1fd1cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd1c8) {
            ctx->pc = 0x1FD230u;
            goto label_1fd230;
        }
    }
    ctx->pc = 0x1FD1D0u;
    // 0x1fd1d0: 0x94a30038  lhu         $v1, 0x38($a1)
    ctx->pc = 0x1fd1d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x1fd1d4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD1D4u;
    {
        const bool branch_taken_0x1fd1d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1D4u;
        // 0x1fd1d8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd1d4) {
            ctx->pc = 0x1FD1F8u;
            goto label_1fd1f8;
        }
    }
    ctx->pc = 0x1FD1DCu;
    // 0x1fd1dc: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FD1DCu;
    {
        const bool branch_taken_0x1fd1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd1dc) {
            ctx->pc = 0x1FD1E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD1DCu;
            // 0x1fd1e0: 0x8ca2003c  lw          $v0, 0x3C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD234u;
            goto label_1fd234;
        }
    }
    ctx->pc = 0x1FD1E4u;
    // 0x1fd1e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fd1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fd1e8: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FD1E8u;
    {
        const bool branch_taken_0x1fd1e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fd1e8) {
            ctx->pc = 0x1FD1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD1E8u;
            // 0x1fd1ec: 0xa4a00038  sh          $zero, 0x38($a1) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 5), 56), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD218u;
            goto label_1fd218;
        }
    }
    ctx->pc = 0x1FD1F0u;
    // 0x1fd1f0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FD1F0u;
    {
        const bool branch_taken_0x1fd1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD1F0u;
        // 0x1fd1f4: 0x8ca2003c  lw          $v0, 0x3C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd1f0) {
            ctx->pc = 0x1FD234u;
            goto label_1fd234;
        }
    }
    ctx->pc = 0x1FD1F8u;
label_1fd1f8:
    // 0x1fd1f8: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x1fd1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x1fd1fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fd1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd200: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fd200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd204: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fd204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fd208: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x1FD208u;
    SET_GPR_U32(ctx, 31, 0x1FD210u);
    ctx->pc = 0x1FD20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD208u;
    // 0x1fd20c: 0xa4400038  sh          $zero, 0x38($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x1FD208u, 0x1FD210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD210u;
label_1fd210:
    // 0x1fd210: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FD210u;
    {
        const bool branch_taken_0x1fd210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD210u;
        // 0x1fd214: 0x8f8597c8  lw          $a1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd210) {
            ctx->pc = 0x1FD230u;
            goto label_1fd230;
        }
    }
    ctx->pc = 0x1FD218u;
label_1fd218:
    // 0x1fd218: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fd218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd21c: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x1FD21Cu;
    SET_GPR_U32(ctx, 31, 0x1FD224u);
    ctx->pc = 0x1FD220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD21Cu;
    // 0x1fd220: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x1FD21Cu, 0x1FD224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD224u;
label_1fd224:
    // 0x1fd224: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fd224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fd228: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1fd228u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_1fd22c:
    // 0x1fd22c: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fd22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
label_1fd230:
    // 0x1fd230: 0x8ca2003c  lw          $v0, 0x3C($a1)
    ctx->pc = 0x1fd230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_1fd234:
    // 0x1fd234: 0x1040017e  beqz        $v0, . + 4 + (0x17E << 2)
    ctx->pc = 0x1FD234u;
    {
        const bool branch_taken_0x1fd234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD234u;
        // 0x1fd238: 0x3c06003b  lui         $a2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd234) {
            ctx->pc = 0x1FD830u;
            goto label_1fd830;
        }
    }
    ctx->pc = 0x1FD23Cu;
    // 0x1fd23c: 0x24c28858  addiu       $v0, $a2, -0x77A8
    ctx->pc = 0x1fd23cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936664));
    // 0x1fd240: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1fd240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1fd244: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1FD244u;
    {
        const bool branch_taken_0x1fd244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD244u;
        // 0x1fd248: 0x8ca20044  lw          $v0, 0x44($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd244) {
            ctx->pc = 0x1FD27Cu;
            goto label_1fd27c;
        }
    }
    ctx->pc = 0x1FD24Cu;
    // 0x1fd24c: 0x5040010a  beql        $v0, $zero, . + 4 + (0x10A << 2)
    ctx->pc = 0x1FD24Cu;
    {
        const bool branch_taken_0x1fd24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd24c) {
            ctx->pc = 0x1FD250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD24Cu;
            // 0x1fd250: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD678u;
            goto label_1fd678;
        }
    }
    ctx->pc = 0x1FD254u;
    // 0x1fd254: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x1fd254u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
    // 0x1fd258: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fd258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd25c: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x1FD25Cu;
    SET_GPR_U32(ctx, 31, 0x1FD264u);
    ctx->pc = 0x1FD260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD25Cu;
    // 0x1fd260: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x1FD25Cu, 0x1FD264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD264u;
label_1fd264:
    // 0x1fd264: 0xc07e57c  jal         func_1F95F0
    ctx->pc = 0x1FD264u;
    SET_GPR_U32(ctx, 31, 0x1FD26Cu);
    ctx->pc = 0x1FD268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD264u;
    // 0x1fd268: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F95F0u, 0x1FD264u, 0x1FD26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD26Cu;
label_1fd26c:
    // 0x1fd26c: 0xc07e584  jal         func_1F9610
    ctx->pc = 0x1FD26Cu;
    SET_GPR_U32(ctx, 31, 0x1FD274u);
    ctx->pc = 0x1FD270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD26Cu;
    // 0x1fd270: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9610u, 0x1FD26Cu, 0x1FD274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD274u;
label_1fd274:
    // 0x1fd274: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fd274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fd278: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x1fd278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_1fd27c:
    // 0x1fd27c: 0x504000fe  beql        $v0, $zero, . + 4 + (0xFE << 2)
    ctx->pc = 0x1FD27Cu;
    {
        const bool branch_taken_0x1fd27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd27c) {
            ctx->pc = 0x1FD280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD27Cu;
            // 0x1fd280: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD678u;
            goto label_1fd678;
        }
    }
    ctx->pc = 0x1FD284u;
    // 0x1fd284: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x1fd284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x1fd288: 0x54400034  bnel        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x1FD288u;
    {
        const bool branch_taken_0x1fd288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd288) {
            ctx->pc = 0x1FD28Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD288u;
            // 0x1fd28c: 0x92a201f0  lbu         $v0, 0x1F0($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD35Cu;
            goto label_1fd35c;
        }
    }
    ctx->pc = 0x1FD290u;
    // 0x1fd290: 0xc07f0ea  jal         func_1FC3A8
    ctx->pc = 0x1FD290u;
    SET_GPR_U32(ctx, 31, 0x1FD298u);
    ctx->pc = 0x1FC3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC3A8u, 0x1FD290u, 0x1FD298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD298u;
label_1fd298:
    // 0x1fd298: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FD298u;
    {
        const bool branch_taken_0x1fd298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD298u;
        // 0x1fd29c: 0x8f8297c8  lw          $v0, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd298) {
            ctx->pc = 0x1FD2C8u;
            goto label_1fd2c8;
        }
    }
    ctx->pc = 0x1FD2A0u;
    // 0x1fd2a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fd2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd2a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fd2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd2a8: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x1FD2A8u;
    SET_GPR_U32(ctx, 31, 0x1FD2B0u);
    ctx->pc = 0x1FD2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD2A8u;
    // 0x1fd2ac: 0xac400044  sw          $zero, 0x44($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x1FD2A8u, 0x1FD2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD2B0u;
label_1fd2b0:
    // 0x1fd2b0: 0xc07e57c  jal         func_1F95F0
    ctx->pc = 0x1FD2B0u;
    SET_GPR_U32(ctx, 31, 0x1FD2B8u);
    ctx->pc = 0x1FD2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD2B0u;
    // 0x1fd2b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F95F0u, 0x1FD2B0u, 0x1FD2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD2B8u;
label_1fd2b8:
    // 0x1fd2b8: 0xc07e584  jal         func_1F9610
    ctx->pc = 0x1FD2B8u;
    SET_GPR_U32(ctx, 31, 0x1FD2C0u);
    ctx->pc = 0x1FD2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD2B8u;
    // 0x1fd2bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9610u, 0x1FD2B8u, 0x1FD2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD2C0u;
label_1fd2c0:
    // 0x1fd2c0: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1FD2C0u;
    {
        const bool branch_taken_0x1fd2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2C0u;
        // 0x1fd2c4: 0x92a201f0  lbu         $v0, 0x1F0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd2c0) {
            ctx->pc = 0x1FD35Cu;
            goto label_1fd35c;
        }
    }
    ctx->pc = 0x1FD2C8u;
label_1fd2c8:
    // 0x1fd2c8: 0xc07f0cc  jal         func_1FC330
    ctx->pc = 0x1FD2C8u;
    SET_GPR_U32(ctx, 31, 0x1FD2D0u);
    ctx->pc = 0x1FC330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC330u, 0x1FD2C8u, 0x1FD2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD2D0u;
label_1fd2d0:
    // 0x1fd2d0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fd2d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd2d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fd2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fd2d8: 0x96230028  lhu         $v1, 0x28($s1)
    ctx->pc = 0x1fd2d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1fd2dc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD2DCu;
    {
        const bool branch_taken_0x1fd2dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2DCu;
        // 0x1fd2e0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd2dc) {
            ctx->pc = 0x1FD2ECu;
            goto label_1fd2ec;
        }
    }
    ctx->pc = 0x1FD2E4u;
    // 0x1fd2e4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD2E4u;
    {
        const bool branch_taken_0x1fd2e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fd2e4) {
            ctx->pc = 0x1FD308u;
            goto label_1fd308;
        }
    }
    ctx->pc = 0x1FD2ECu;
label_1fd2ec:
    // 0x1fd2ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fd2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd2f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fd2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd2f4: 0xc07e668  jal         func_1F99A0
    ctx->pc = 0x1FD2F4u;
    SET_GPR_U32(ctx, 31, 0x1FD2FCu);
    ctx->pc = 0x1FD2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD2F4u;
    // 0x1fd2f8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F99A0u, 0x1FD2F4u, 0x1FD2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD2FCu;
label_1fd2fc:
    // 0x1fd2fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1FD2FCu;
    {
        const bool branch_taken_0x1fd2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD2FCu;
        // 0x1fd300: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd2fc) {
            ctx->pc = 0x1FD328u;
            goto label_1fd328;
        }
    }
    ctx->pc = 0x1FD304u;
    // 0x1fd304: 0x0  nop
    ctx->pc = 0x1fd304u;
    // NOP
label_1fd308:
    // 0x1fd308: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x1FD308u;
    SET_GPR_U32(ctx, 31, 0x1FD310u);
    ctx->pc = 0x1FD30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD308u;
    // 0x1fd30c: 0x8630001e  lh          $s0, 0x1E($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x1FD308u, 0x1FD310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD310u;
label_1fd310:
    // 0x1fd310: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fd310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd314: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x1fd314u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1fd318: 0x3010  mfhi        $a2
    ctx->pc = 0x1fd318u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1fd31c: 0xc07e668  jal         func_1F99A0
    ctx->pc = 0x1FD31Cu;
    SET_GPR_U32(ctx, 31, 0x1FD324u);
    ctx->pc = 0x1FD320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD31Cu;
    // 0x1fd320: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F99A0u, 0x1FD31Cu, 0x1FD324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD324u;
label_1fd324:
    // 0x1fd324: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fd324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd328:
    // 0x1fd328: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x1FD328u;
    SET_GPR_U32(ctx, 31, 0x1FD330u);
    ctx->pc = 0x1FD32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD328u;
    // 0x1fd32c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x1FD328u, 0x1FD330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD330u;
label_1fd330:
    // 0x1fd330: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fd330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fd334: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fd334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd338: 0xc07e57c  jal         func_1F95F0
    ctx->pc = 0x1FD338u;
    SET_GPR_U32(ctx, 31, 0x1FD340u);
    ctx->pc = 0x1FD33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD338u;
    // 0x1fd33c: 0xac5103cc  sw          $s1, 0x3CC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 972), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F95F0u, 0x1FD338u, 0x1FD340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD340u;
label_1fd340:
    // 0x1fd340: 0xc07e584  jal         func_1F9610
    ctx->pc = 0x1FD340u;
    SET_GPR_U32(ctx, 31, 0x1FD348u);
    ctx->pc = 0x1FD344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD340u;
    // 0x1fd344: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9610u, 0x1FD340u, 0x1FD348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD348u;
label_1fd348:
    // 0x1fd348: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fd348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fd34c: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x1fd34cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x1fd350: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fd350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fd354: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x1fd354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    // 0x1fd358: 0x92a201f0  lbu         $v0, 0x1F0($s5)
    ctx->pc = 0x1fd358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 496)));
label_1fd35c:
    // 0x1fd35c: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1FD35Cu;
    {
        const bool branch_taken_0x1fd35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD35Cu;
        // 0x1fd360: 0x8f8597c8  lw          $a1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd35c) {
            ctx->pc = 0x1FD4B4u;
            goto label_1fd4b4;
        }
    }
    ctx->pc = 0x1FD364u;
    // 0x1fd364: 0x8e4200cc  lw          $v0, 0xCC($s2)
    ctx->pc = 0x1fd364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x1fd368: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1fd368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1fd36c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x1FD36Cu;
    {
        const bool branch_taken_0x1fd36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD36Cu;
        // 0x1fd370: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd36c) {
            ctx->pc = 0x1FD450u;
            goto label_1fd450;
        }
    }
    ctx->pc = 0x1FD374u;
    // 0x1fd374: 0xc0990ca  jal         func_264328
    ctx->pc = 0x1FD374u;
    SET_GPR_U32(ctx, 31, 0x1FD37Cu);
    ctx->pc = 0x1FD378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD374u;
    // 0x1fd378: 0x34058004  ori         $a1, $zero, 0x8004 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264328u, 0x1FD374u, 0x1FD37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD37Cu;
label_1fd37c:
    // 0x1fd37c: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x1fd37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1fd380: 0x1062004b  beq         $v1, $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1FD380u;
    {
        const bool branch_taken_0x1fd380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD380u;
        // 0x1fd384: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd380) {
            ctx->pc = 0x1FD4B0u;
            goto label_1fd4b0;
        }
    }
    ctx->pc = 0x1FD388u;
    // 0x1fd388: 0xc0990ca  jal         func_264328
    ctx->pc = 0x1FD388u;
    SET_GPR_U32(ctx, 31, 0x1FD390u);
    ctx->pc = 0x1FD38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD388u;
    // 0x1fd38c: 0x34058005  ori         $a1, $zero, 0x8005 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32773);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264328u, 0x1FD388u, 0x1FD390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD390u;
label_1fd390:
    // 0x1fd390: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x1fd390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1fd394: 0x10620046  beq         $v1, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x1FD394u;
    {
        const bool branch_taken_0x1fd394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD394u;
        // 0x1fd398: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd394) {
            ctx->pc = 0x1FD4B0u;
            goto label_1fd4b0;
        }
    }
    ctx->pc = 0x1FD39Cu;
    // 0x1fd39c: 0xc0990ca  jal         func_264328
    ctx->pc = 0x1FD39Cu;
    SET_GPR_U32(ctx, 31, 0x1FD3A4u);
    ctx->pc = 0x1FD3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD39Cu;
    // 0x1fd3a0: 0x34058006  ori         $a1, $zero, 0x8006 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32774);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264328u, 0x1FD39Cu, 0x1FD3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD3A4u;
label_1fd3a4:
    // 0x1fd3a4: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x1fd3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1fd3a8: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1FD3A8u;
    {
        const bool branch_taken_0x1fd3a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD3A8u;
        // 0x1fd3ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd3a8) {
            ctx->pc = 0x1FD4B0u;
            goto label_1fd4b0;
        }
    }
    ctx->pc = 0x1FD3B0u;
    // 0x1fd3b0: 0xc0990ca  jal         func_264328
    ctx->pc = 0x1FD3B0u;
    SET_GPR_U32(ctx, 31, 0x1FD3B8u);
    ctx->pc = 0x1FD3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD3B0u;
    // 0x1fd3b4: 0x34058007  ori         $a1, $zero, 0x8007 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32775);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264328u, 0x1FD3B0u, 0x1FD3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD3B8u;
label_1fd3b8:
    // 0x1fd3b8: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x1fd3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1fd3bc: 0x1062003c  beq         $v1, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1FD3BCu;
    {
        const bool branch_taken_0x1fd3bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD3BCu;
        // 0x1fd3c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd3bc) {
            ctx->pc = 0x1FD4B0u;
            goto label_1fd4b0;
        }
    }
    ctx->pc = 0x1FD3C4u;
    // 0x1fd3c4: 0xc0990ca  jal         func_264328
    ctx->pc = 0x1FD3C4u;
    SET_GPR_U32(ctx, 31, 0x1FD3CCu);
    ctx->pc = 0x1FD3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD3C4u;
    // 0x1fd3c8: 0x34058008  ori         $a1, $zero, 0x8008 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32776);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264328u, 0x1FD3C4u, 0x1FD3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD3CCu;
label_1fd3cc:
    // 0x1fd3cc: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x1fd3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1fd3d0: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1FD3D0u;
    {
        const bool branch_taken_0x1fd3d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD3D0u;
        // 0x1fd3d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd3d0) {
            ctx->pc = 0x1FD4B0u;
            goto label_1fd4b0;
        }
    }
    ctx->pc = 0x1FD3D8u;
    // 0x1fd3d8: 0xc0990ca  jal         func_264328
    ctx->pc = 0x1FD3D8u;
    SET_GPR_U32(ctx, 31, 0x1FD3E0u);
    ctx->pc = 0x1FD3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD3D8u;
    // 0x1fd3dc: 0x34058009  ori         $a1, $zero, 0x8009 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32777);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264328u, 0x1FD3D8u, 0x1FD3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD3E0u;
label_1fd3e0:
    // 0x1fd3e0: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x1fd3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1fd3e4: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1FD3E4u;
    {
        const bool branch_taken_0x1fd3e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD3E4u;
        // 0x1fd3e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd3e4) {
            ctx->pc = 0x1FD4B0u;
            goto label_1fd4b0;
        }
    }
    ctx->pc = 0x1FD3ECu;
    // 0x1fd3ec: 0xc0990ca  jal         func_264328
    ctx->pc = 0x1FD3ECu;
    SET_GPR_U32(ctx, 31, 0x1FD3F4u);
    ctx->pc = 0x1FD3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD3ECu;
    // 0x1fd3f0: 0x3405800a  ori         $a1, $zero, 0x800A (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32778);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264328u, 0x1FD3ECu, 0x1FD3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD3F4u;
label_1fd3f4:
    // 0x1fd3f4: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x1fd3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1fd3f8: 0x1062002d  beq         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1FD3F8u;
    {
        const bool branch_taken_0x1fd3f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD3F8u;
        // 0x1fd3fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd3f8) {
            ctx->pc = 0x1FD4B0u;
            goto label_1fd4b0;
        }
    }
    ctx->pc = 0x1FD400u;
    // 0x1fd400: 0xc0990ca  jal         func_264328
    ctx->pc = 0x1FD400u;
    SET_GPR_U32(ctx, 31, 0x1FD408u);
    ctx->pc = 0x1FD404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD400u;
    // 0x1fd404: 0x3405800b  ori         $a1, $zero, 0x800B (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32779);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264328u, 0x1FD400u, 0x1FD408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD408u;
label_1fd408:
    // 0x1fd408: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x1fd408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1fd40c: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1FD40Cu;
    {
        const bool branch_taken_0x1fd40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD40Cu;
        // 0x1fd410: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd40c) {
            ctx->pc = 0x1FD4B0u;
            goto label_1fd4b0;
        }
    }
    ctx->pc = 0x1FD414u;
    // 0x1fd414: 0xc0990ca  jal         func_264328
    ctx->pc = 0x1FD414u;
    SET_GPR_U32(ctx, 31, 0x1FD41Cu);
    ctx->pc = 0x1FD418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD414u;
    // 0x1fd418: 0x3405800c  ori         $a1, $zero, 0x800C (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32780);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264328u, 0x1FD414u, 0x1FD41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD41Cu;
label_1fd41c:
    // 0x1fd41c: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x1fd41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1fd420: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1FD420u;
    {
        const bool branch_taken_0x1fd420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD420u;
        // 0x1fd424: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd420) {
            ctx->pc = 0x1FD4B0u;
            goto label_1fd4b0;
        }
    }
    ctx->pc = 0x1FD428u;
    // 0x1fd428: 0xc0990ca  jal         func_264328
    ctx->pc = 0x1FD428u;
    SET_GPR_U32(ctx, 31, 0x1FD430u);
    ctx->pc = 0x1FD42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD428u;
    // 0x1fd42c: 0x3405800d  ori         $a1, $zero, 0x800D (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32781);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264328u, 0x1FD428u, 0x1FD430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD430u;
label_1fd430:
    // 0x1fd430: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x1fd430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1fd434: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1FD434u;
    {
        const bool branch_taken_0x1fd434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD434u;
        // 0x1fd438: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd434) {
            ctx->pc = 0x1FD4B0u;
            goto label_1fd4b0;
        }
    }
    ctx->pc = 0x1FD43Cu;
    // 0x1fd43c: 0xc0990ca  jal         func_264328
    ctx->pc = 0x1FD43Cu;
    SET_GPR_U32(ctx, 31, 0x1FD444u);
    ctx->pc = 0x1FD440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD43Cu;
    // 0x1fd440: 0x3405800e  ori         $a1, $zero, 0x800E (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32782);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264328u, 0x1FD43Cu, 0x1FD444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD444u;
label_1fd444:
    // 0x1fd444: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x1fd444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1fd448: 0x5062001a  beql        $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FD448u;
    {
        const bool branch_taken_0x1fd448 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1fd448) {
            ctx->pc = 0x1FD44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD448u;
            // 0x1fd44c: 0x8f8597c8  lw          $a1, -0x6838($gp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD4B4u;
            goto label_1fd4b4;
        }
    }
    ctx->pc = 0x1FD450u;
label_1fd450:
    // 0x1fd450: 0xc09d944  jal         func_276510
    ctx->pc = 0x1FD450u;
    SET_GPR_U32(ctx, 31, 0x1FD458u);
    ctx->pc = 0x276510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276510u, 0x1FD450u, 0x1FD458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD458u;
label_1fd458:
    // 0x1fd458: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FD458u;
    {
        const bool branch_taken_0x1fd458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD458u;
        // 0x1fd45c: 0x8f8597c8  lw          $a1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd458) {
            ctx->pc = 0x1FD484u;
            goto label_1fd484;
        }
    }
    ctx->pc = 0x1FD460u;
    // 0x1fd460: 0xc09e198  jal         func_278660
    ctx->pc = 0x1FD460u;
    SET_GPR_U32(ctx, 31, 0x1FD468u);
    ctx->pc = 0x1FD464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD460u;
    // 0x1fd464: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278660u, 0x1FD460u, 0x1FD468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD468u;
label_1fd468:
    // 0x1fd468: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1FD468u;
    {
        const bool branch_taken_0x1fd468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD468u;
        // 0x1fd46c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd468) {
            ctx->pc = 0x1FD4F0u;
            goto label_1fd4f0;
        }
    }
    ctx->pc = 0x1FD470u;
    // 0x1fd470: 0xc0990ca  jal         func_264328
    ctx->pc = 0x1FD470u;
    SET_GPR_U32(ctx, 31, 0x1FD478u);
    ctx->pc = 0x1FD474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD470u;
    // 0x1fd474: 0x34058001  ori         $a1, $zero, 0x8001 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264328u, 0x1FD470u, 0x1FD478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD478u;
label_1fd478:
    // 0x1fd478: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x1fd478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1fd47c: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1FD47Cu;
    {
        const bool branch_taken_0x1fd47c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FD480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD47Cu;
        // 0x1fd480: 0x8f8597c8  lw          $a1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd47c) {
            ctx->pc = 0x1FD4F4u;
            goto label_1fd4f4;
        }
    }
    ctx->pc = 0x1FD484u;
label_1fd484:
    // 0x1fd484: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x1fd484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x1fd488: 0x2842003c  slti        $v0, $v0, 0x3C
    ctx->pc = 0x1fd488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x1fd48c: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FD48Cu;
    {
        const bool branch_taken_0x1fd48c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd48c) {
            ctx->pc = 0x1FD490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD48Cu;
            // 0x1fd490: 0x8ca303cc  lw          $v1, 0x3CC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 972)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD4F8u;
            goto label_1fd4f8;
        }
    }
    ctx->pc = 0x1FD494u;
    // 0x1fd494: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x1fd494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x1fd498: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fd498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fd49c: 0x54620016  bnel        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FD49Cu;
    {
        const bool branch_taken_0x1fd49c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fd49c) {
            ctx->pc = 0x1FD4A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD49Cu;
            // 0x1fd4a0: 0x8ca303cc  lw          $v1, 0x3CC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 972)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD4F8u;
            goto label_1fd4f8;
        }
    }
    ctx->pc = 0x1FD4A4u;
    // 0x1fd4a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD4A4u;
    {
        const bool branch_taken_0x1fd4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4A4u;
        // 0x1fd4a8: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd4a4) {
            ctx->pc = 0x1FD4B8u;
            goto label_1fd4b8;
        }
    }
    ctx->pc = 0x1FD4ACu;
    // 0x1fd4ac: 0x0  nop
    ctx->pc = 0x1fd4acu;
    // NOP
label_1fd4b0:
    // 0x1fd4b0: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fd4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
label_1fd4b4:
    // 0x1fd4b4: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1fd4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1fd4b8:
    // 0x1fd4b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fd4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd4bc: 0xaca20048  sw          $v0, 0x48($a1)
    ctx->pc = 0x1fd4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 2));
    // 0x1fd4c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fd4c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd4c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fd4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd4c8:
    // 0x1fd4c8: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fd4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fd4cc: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x1FD4CCu;
    SET_GPR_U32(ctx, 31, 0x1FD4D4u);
    ctx->pc = 0x1FD4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD4CCu;
    // 0x1fd4d0: 0xac43004c  sw          $v1, 0x4C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x1FD4CCu, 0x1FD4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD4D4u;
label_1fd4d4:
    // 0x1fd4d4: 0xc07e57c  jal         func_1F95F0
    ctx->pc = 0x1FD4D4u;
    SET_GPR_U32(ctx, 31, 0x1FD4DCu);
    ctx->pc = 0x1FD4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD4D4u;
    // 0x1fd4d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F95F0u, 0x1FD4D4u, 0x1FD4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD4DCu;
label_1fd4dc:
    // 0x1fd4dc: 0xc07e584  jal         func_1F9610
    ctx->pc = 0x1FD4DCu;
    SET_GPR_U32(ctx, 31, 0x1FD4E4u);
    ctx->pc = 0x1FD4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD4DCu;
    // 0x1fd4e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9610u, 0x1FD4DCu, 0x1FD4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD4E4u;
label_1fd4e4:
    // 0x1fd4e4: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x1FD4E4u;
    {
        const bool branch_taken_0x1fd4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD4E4u;
        // 0x1fd4e8: 0x8f8597c8  lw          $a1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd4e4) {
            ctx->pc = 0x1FD5A8u;
            goto label_1fd5a8;
        }
    }
    ctx->pc = 0x1FD4ECu;
    // 0x1fd4ec: 0x0  nop
    ctx->pc = 0x1fd4ecu;
    // NOP
label_1fd4f0:
    // 0x1fd4f0: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fd4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
label_1fd4f4:
    // 0x1fd4f4: 0x8ca303cc  lw          $v1, 0x3CC($a1)
    ctx->pc = 0x1fd4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 972)));
label_1fd4f8:
    // 0x1fd4f8: 0x94620028  lhu         $v0, 0x28($v1)
    ctx->pc = 0x1fd4f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x1fd4fc: 0x3401fffd  ori         $at, $zero, 0xFFFD
    ctx->pc = 0x1fd4fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65533);
    // 0x1fd500: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1fd500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1fd504: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x1fd504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1fd508: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1fd508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fd50c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1FD50Cu;
    {
        const bool branch_taken_0x1fd50c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD50Cu;
        // 0x1fd510: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd50c) {
            ctx->pc = 0x1FD5ACu;
            goto label_1fd5ac;
        }
    }
    ctx->pc = 0x1FD514u;
    // 0x1fd514: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x1fd514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x1fd518: 0x2842003c  slti        $v0, $v0, 0x3C
    ctx->pc = 0x1fd518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x1fd51c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1FD51Cu;
    {
        const bool branch_taken_0x1fd51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD51Cu;
        // 0x1fd520: 0x24628858  addiu       $v0, $v1, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd51c) {
            ctx->pc = 0x1FD5B0u;
            goto label_1fd5b0;
        }
    }
    ctx->pc = 0x1FD524u;
    // 0x1fd524: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x1fd524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1fd528: 0x96440158  lhu         $a0, 0x158($s2)
    ctx->pc = 0x1fd528u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x1fd52c: 0x94430018  lhu         $v1, 0x18($v0)
    ctx->pc = 0x1fd52cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1fd530: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD530u;
    {
        const bool branch_taken_0x1fd530 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1fd530) {
            ctx->pc = 0x1FD534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD530u;
            // 0x1fd534: 0x92430190  lbu         $v1, 0x190($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD554u;
            goto label_1fd554;
        }
    }
    ctx->pc = 0x1FD538u;
    // 0x1fd538: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fd538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd53c: 0xc0990ca  jal         func_264328
    ctx->pc = 0x1FD53Cu;
    SET_GPR_U32(ctx, 31, 0x1FD544u);
    ctx->pc = 0x1FD540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD53Cu;
    // 0x1fd540: 0x34058001  ori         $a1, $zero, 0x8001 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264328u, 0x1FD53Cu, 0x1FD544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD544u;
label_1fd544:
    // 0x1fd544: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x1fd544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1fd548: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FD548u;
    {
        const bool branch_taken_0x1fd548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD548u;
        // 0x1fd54c: 0x8f8597c8  lw          $a1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd548) {
            ctx->pc = 0x1FD584u;
            goto label_1fd584;
        }
    }
    ctx->pc = 0x1FD550u;
    // 0x1fd550: 0x92430190  lbu         $v1, 0x190($s2)
    ctx->pc = 0x1fd550u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 400)));
label_1fd554:
    // 0x1fd554: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1fd554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fd558: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FD558u;
    {
        const bool branch_taken_0x1fd558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FD55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD558u;
        // 0x1fd55c: 0x8f8597c8  lw          $a1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd558) {
            ctx->pc = 0x1FD5A8u;
            goto label_1fd5a8;
        }
    }
    ctx->pc = 0x1FD560u;
    // 0x1fd560: 0x9645017a  lhu         $a1, 0x17A($s2)
    ctx->pc = 0x1fd560u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 378)));
    // 0x1fd564: 0xc0990ca  jal         func_264328
    ctx->pc = 0x1FD564u;
    SET_GPR_U32(ctx, 31, 0x1FD56Cu);
    ctx->pc = 0x1FD568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD564u;
    // 0x1fd568: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264328u, 0x1FD564u, 0x1FD56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD56Cu;
label_1fd56c:
    // 0x1fd56c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fd56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd570: 0x34058001  ori         $a1, $zero, 0x8001
    ctx->pc = 0x1fd570u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1fd574: 0xc0990ca  jal         func_264328
    ctx->pc = 0x1FD574u;
    SET_GPR_U32(ctx, 31, 0x1FD57Cu);
    ctx->pc = 0x1FD578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD574u;
    // 0x1fd578: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264328u, 0x1FD574u, 0x1FD57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD57Cu;
label_1fd57c:
    // 0x1fd57c: 0x1602000a  bne         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FD57Cu;
    {
        const bool branch_taken_0x1fd57c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FD580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD57Cu;
        // 0x1fd580: 0x8f8597c8  lw          $a1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd57c) {
            ctx->pc = 0x1FD5A8u;
            goto label_1fd5a8;
        }
    }
    ctx->pc = 0x1FD584u;
label_1fd584:
    // 0x1fd584: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x1fd584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x1fd588: 0x5c400008  bgtzl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD588u;
    {
        const bool branch_taken_0x1fd588 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1fd588) {
            ctx->pc = 0x1FD58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD588u;
            // 0x1fd58c: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD5ACu;
            goto label_1fd5ac;
        }
    }
    ctx->pc = 0x1FD590u;
    // 0x1fd590: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1fd590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1fd594: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fd594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd598: 0xaca20048  sw          $v0, 0x48($a1)
    ctx->pc = 0x1fd598u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 2));
    // 0x1fd59c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fd59cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd5a0: 0x1000ffc9  b           . + 4 + (-0x37 << 2)
    ctx->pc = 0x1FD5A0u;
    {
        const bool branch_taken_0x1fd5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5A0u;
        // 0x1fd5a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd5a0) {
            ctx->pc = 0x1FD4C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd4c8;
        }
    }
    ctx->pc = 0x1FD5A8u;
label_1fd5a8:
    // 0x1fd5a8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1fd5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1fd5ac:
    // 0x1fd5ac: 0x24628858  addiu       $v0, $v1, -0x77A8
    ctx->pc = 0x1fd5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
label_1fd5b0:
    // 0x1fd5b0: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1fd5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1fd5b4: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1FD5B4u;
    {
        const bool branch_taken_0x1fd5b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5B4u;
        // 0x1fd5b8: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd5b4) {
            ctx->pc = 0x1FD654u;
            goto label_1fd654;
        }
    }
    ctx->pc = 0x1FD5BCu;
    // 0x1fd5bc: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x1fd5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x1fd5c0: 0x4400025  bltz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1FD5C0u;
    {
        const bool branch_taken_0x1fd5c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1FD5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5C0u;
        // 0x1fd5c4: 0x24828858  addiu       $v0, $a0, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd5c0) {
            ctx->pc = 0x1FD658u;
            goto label_1fd658;
        }
    }
    ctx->pc = 0x1FD5C8u;
    // 0x1fd5c8: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x1fd5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x1fd5cc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1FD5CCu;
    {
        const bool branch_taken_0x1fd5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5CCu;
        // 0x1fd5d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd5cc) {
            ctx->pc = 0x1FD640u;
            goto label_1fd640;
        }
    }
    ctx->pc = 0x1FD5D4u;
    // 0x1fd5d4: 0xc0990ca  jal         func_264328
    ctx->pc = 0x1FD5D4u;
    SET_GPR_U32(ctx, 31, 0x1FD5DCu);
    ctx->pc = 0x1FD5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD5D4u;
    // 0x1fd5d8: 0x34058001  ori         $a1, $zero, 0x8001 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    ctx->in_delay_slot = false;
    ctx->pc = 0x264328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264328u, 0x1FD5D4u, 0x1FD5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD5DCu;
label_1fd5dc:
    // 0x1fd5dc: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x1fd5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1fd5e0: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1FD5E0u;
    {
        const bool branch_taken_0x1fd5e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FD5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5E0u;
        // 0x1fd5e4: 0x8f8597c8  lw          $a1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd5e0) {
            ctx->pc = 0x1FD640u;
            goto label_1fd640;
        }
    }
    ctx->pc = 0x1FD5E8u;
    // 0x1fd5e8: 0x86420080  lh          $v0, 0x80($s2)
    ctx->pc = 0x1fd5e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x1fd5ec: 0x28422aaa  slti        $v0, $v0, 0x2AAA
    ctx->pc = 0x1fd5ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10922) ? 1 : 0);
    // 0x1fd5f0: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1FD5F0u;
    {
        const bool branch_taken_0x1fd5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd5f0) {
            ctx->pc = 0x1FD5F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD5F0u;
            // 0x1fd5f4: 0x8ca20048  lw          $v0, 0x48($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD644u;
            goto label_1fd644;
        }
    }
    ctx->pc = 0x1FD5F8u;
    // 0x1fd5f8: 0x8f8497c8  lw          $a0, -0x6838($gp)
    ctx->pc = 0x1fd5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fd5fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fd5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd600: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x1fd600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1fd604: 0x1065000a  beq         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FD604u;
    {
        const bool branch_taken_0x1fd604 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1FD608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD604u;
        // 0x1fd608: 0x2402003c  addiu       $v0, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd604) {
            ctx->pc = 0x1FD630u;
            goto label_1fd630;
        }
    }
    ctx->pc = 0x1FD60Cu;
    // 0x1fd60c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1fd60cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fd610: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD610u;
    {
        const bool branch_taken_0x1fd610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd610) {
            ctx->pc = 0x1FD614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD610u;
            // 0x1fd614: 0xac850048  sw          $a1, 0x48($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD634u;
            goto label_1fd634;
        }
    }
    ctx->pc = 0x1FD618u;
    // 0x1fd618: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fd618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fd61c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD61Cu;
    {
        const bool branch_taken_0x1fd61c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD61Cu;
        // 0x1fd620: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd61c) {
            ctx->pc = 0x1FD630u;
            goto label_1fd630;
        }
    }
    ctx->pc = 0x1FD624u;
    // 0x1fd624: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD624u;
    {
        const bool branch_taken_0x1fd624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD624u;
        // 0x1fd628: 0xac850048  sw          $a1, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd624) {
            ctx->pc = 0x1FD634u;
            goto label_1fd634;
        }
    }
    ctx->pc = 0x1FD62Cu;
    // 0x1fd62c: 0x0  nop
    ctx->pc = 0x1fd62cu;
    // NOP
label_1fd630:
    // 0x1fd630: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x1fd630u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
label_1fd634:
    // 0x1fd634: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fd634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fd638: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x1fd638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
    // 0x1fd63c: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fd63cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
label_1fd640:
    // 0x1fd640: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x1fd640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
label_1fd644:
    // 0x1fd644: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1fd644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fd648: 0xaca20048  sw          $v0, 0x48($a1)
    ctx->pc = 0x1fd648u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 2));
    // 0x1fd64c: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fd64cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fd650: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1fd650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_1fd654:
    // 0x1fd654: 0x24828858  addiu       $v0, $a0, -0x77A8
    ctx->pc = 0x1fd654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
label_1fd658:
    // 0x1fd658: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1fd658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1fd65c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD65Cu;
    {
        const bool branch_taken_0x1fd65c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd65c) {
            ctx->pc = 0x1FD660u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD65Cu;
            // 0x1fd660: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD678u;
            goto label_1fd678;
        }
    }
    ctx->pc = 0x1FD664u;
    // 0x1fd664: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x1fd664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x1fd668: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fd668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fd66c: 0xaca20054  sw          $v0, 0x54($a1)
    ctx->pc = 0x1fd66cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 2));
    // 0x1fd670: 0x8f8597c8  lw          $a1, -0x6838($gp)
    ctx->pc = 0x1fd670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fd674: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1fd674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1fd678:
    // 0x1fd678: 0x1440006e  bnez        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x1FD678u;
    {
        const bool branch_taken_0x1fd678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD678u;
        // 0x1fd67c: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd678) {
            ctx->pc = 0x1FD834u;
            goto label_1fd834;
        }
    }
    ctx->pc = 0x1FD680u;
    // 0x1fd680: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1fd680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1fd684: 0x1440006c  bnez        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x1FD684u;
    {
        const bool branch_taken_0x1fd684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD684u;
        // 0x1fd688: 0x24908858  addiu       $s0, $a0, -0x77A8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd684) {
            ctx->pc = 0x1FD838u;
            goto label_1fd838;
        }
    }
    ctx->pc = 0x1FD68Cu;
    // 0x1fd68c: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x1fd68cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x1fd690: 0x24c28858  addiu       $v0, $a2, -0x77A8
    ctx->pc = 0x1fd690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936664));
    // 0x1fd694: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1fd694u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x1fd698: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x1FD698u;
    {
        const bool branch_taken_0x1fd698 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD698u;
        // 0x1fd69c: 0x8fa30304  lw          $v1, 0x304($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd698) {
            ctx->pc = 0x1FD798u;
            goto label_1fd798;
        }
    }
    ctx->pc = 0x1FD6A0u;
    // 0x1fd6a0: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x1fd6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1fd6a4: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x1FD6A4u;
    {
        const bool branch_taken_0x1fd6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD6A4u;
        // 0x1fd6a8: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd6a4) {
            ctx->pc = 0x1FD79Cu;
            goto label_1fd79c;
        }
    }
    ctx->pc = 0x1FD6ACu;
    // 0x1fd6ac: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x1fd6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x1fd6b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1fd6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1fd6b4: 0xc07f0ea  jal         func_1FC3A8
    ctx->pc = 0x1FD6B4u;
    SET_GPR_U32(ctx, 31, 0x1FD6BCu);
    ctx->pc = 0x1FD6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD6B4u;
    // 0x1fd6b8: 0xaca20044  sw          $v0, 0x44($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC3A8u, 0x1FD6B4u, 0x1FD6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD6BCu;
label_1fd6bc:
    // 0x1fd6bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD6BCu;
    {
        const bool branch_taken_0x1fd6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD6BCu;
        // 0x1fd6c0: 0x8f8297c8  lw          $v0, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd6bc) {
            ctx->pc = 0x1FD6CCu;
            goto label_1fd6cc;
        }
    }
    ctx->pc = 0x1FD6C4u;
    // 0x1fd6c4: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x1fd6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x1fd6c8: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fd6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
label_1fd6cc:
    // 0x1fd6cc: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1fd6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1fd6d0: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1FD6D0u;
    {
        const bool branch_taken_0x1fd6d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD6D0u;
        // 0x1fd6d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd6d0) {
            ctx->pc = 0x1FD780u;
            goto label_1fd780;
        }
    }
    ctx->pc = 0x1FD6D8u;
    // 0x1fd6d8: 0xc07f0cc  jal         func_1FC330
    ctx->pc = 0x1FD6D8u;
    SET_GPR_U32(ctx, 31, 0x1FD6E0u);
    ctx->pc = 0x1FC330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC330u, 0x1FD6D8u, 0x1FD6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD6E0u;
label_1fd6e0:
    // 0x1fd6e0: 0x8f8497c8  lw          $a0, -0x6838($gp)
    ctx->pc = 0x1fd6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fd6e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fd6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fd6e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fd6e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd6ec: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x1fd6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
    // 0x1fd6f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fd6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fd6f4: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fd6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fd6f8: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x1fd6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x1fd6fc: 0x8f8397c8  lw          $v1, -0x6838($gp)
    ctx->pc = 0x1fd6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fd700: 0xac60004c  sw          $zero, 0x4C($v1)
    ctx->pc = 0x1fd700u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
    // 0x1fd704: 0x96230028  lhu         $v1, 0x28($s1)
    ctx->pc = 0x1fd704u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1fd708: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD708u;
    {
        const bool branch_taken_0x1fd708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1FD70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD708u;
        // 0x1fd70c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd708) {
            ctx->pc = 0x1FD718u;
            goto label_1fd718;
        }
    }
    ctx->pc = 0x1FD710u;
    // 0x1fd710: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FD710u;
    {
        const bool branch_taken_0x1fd710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fd710) {
            ctx->pc = 0x1FD730u;
            goto label_1fd730;
        }
    }
    ctx->pc = 0x1FD718u;
label_1fd718:
    // 0x1fd718: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fd718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd71c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fd71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd720: 0xc07e668  jal         func_1F99A0
    ctx->pc = 0x1FD720u;
    SET_GPR_U32(ctx, 31, 0x1FD728u);
    ctx->pc = 0x1FD724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD720u;
    // 0x1fd724: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F99A0u, 0x1FD720u, 0x1FD728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD728u;
label_1fd728:
    // 0x1fd728: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD728u;
    {
        const bool branch_taken_0x1fd728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd728) {
            ctx->pc = 0x1FD74Cu;
            goto label_1fd74c;
        }
    }
    ctx->pc = 0x1FD730u;
label_1fd730:
    // 0x1fd730: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x1FD730u;
    SET_GPR_U32(ctx, 31, 0x1FD738u);
    ctx->pc = 0x1FD734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD730u;
    // 0x1fd734: 0x8630001e  lh          $s0, 0x1E($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x1FD730u, 0x1FD738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD738u;
label_1fd738:
    // 0x1fd738: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fd738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd73c: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x1fd73cu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1fd740: 0x3010  mfhi        $a2
    ctx->pc = 0x1fd740u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1fd744: 0xc07e668  jal         func_1F99A0
    ctx->pc = 0x1FD744u;
    SET_GPR_U32(ctx, 31, 0x1FD74Cu);
    ctx->pc = 0x1FD748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD744u;
    // 0x1fd748: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F99A0u, 0x1FD744u, 0x1FD74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD74Cu;
label_1fd74c:
    // 0x1fd74c: 0xc07e624  jal         func_1F9890
    ctx->pc = 0x1FD74Cu;
    SET_GPR_U32(ctx, 31, 0x1FD754u);
    ctx->pc = 0x1FD750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD74Cu;
    // 0x1fd750: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9890u, 0x1FD74Cu, 0x1FD754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD754u;
label_1fd754:
    // 0x1fd754: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1fd754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fd758: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x1FD758u;
    SET_GPR_U32(ctx, 31, 0x1FD760u);
    ctx->pc = 0x1FD75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD758u;
    // 0x1fd75c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x1FD758u, 0x1FD760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD760u;
label_1fd760:
    // 0x1fd760: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fd760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fd764: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fd764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd768: 0xc07e57c  jal         func_1F95F0
    ctx->pc = 0x1FD768u;
    SET_GPR_U32(ctx, 31, 0x1FD770u);
    ctx->pc = 0x1FD76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD768u;
    // 0x1fd76c: 0xac5103cc  sw          $s1, 0x3CC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 972), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F95F0u, 0x1FD768u, 0x1FD770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD770u;
label_1fd770:
    // 0x1fd770: 0xc07e584  jal         func_1F9610
    ctx->pc = 0x1FD770u;
    SET_GPR_U32(ctx, 31, 0x1FD778u);
    ctx->pc = 0x1FD774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD770u;
    // 0x1fd774: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9610u, 0x1FD770u, 0x1FD778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD778u;
label_1fd778:
    // 0x1fd778: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD778u;
    {
        const bool branch_taken_0x1fd778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD778u;
        // 0x1fd77c: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd778) {
            ctx->pc = 0x1FD79Cu;
            goto label_1fd79c;
        }
    }
    ctx->pc = 0x1FD780u;
label_1fd780:
    // 0x1fd780: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x1FD780u;
    SET_GPR_U32(ctx, 31, 0x1FD788u);
    ctx->pc = 0x1FD784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD780u;
    // 0x1fd784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x1FD780u, 0x1FD788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD788u;
label_1fd788:
    // 0x1fd788: 0xc07e57c  jal         func_1F95F0
    ctx->pc = 0x1FD788u;
    SET_GPR_U32(ctx, 31, 0x1FD790u);
    ctx->pc = 0x1FD78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD788u;
    // 0x1fd78c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F95F0u, 0x1FD788u, 0x1FD790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD790u;
label_1fd790:
    // 0x1fd790: 0xc07e584  jal         func_1F9610
    ctx->pc = 0x1FD790u;
    SET_GPR_U32(ctx, 31, 0x1FD798u);
    ctx->pc = 0x1FD794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD790u;
    // 0x1fd794: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9610u, 0x1FD790u, 0x1FD798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD798u;
label_1fd798:
    // 0x1fd798: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1fd798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_1fd79c:
    // 0x1fd79c: 0x24628858  addiu       $v0, $v1, -0x77A8
    ctx->pc = 0x1fd79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
    // 0x1fd7a0: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1fd7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1fd7a4: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1FD7A4u;
    {
        const bool branch_taken_0x1fd7a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7A4u;
        // 0x1fd7a8: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd7a4) {
            ctx->pc = 0x1FD834u;
            goto label_1fd834;
        }
    }
    ctx->pc = 0x1FD7ACu;
    // 0x1fd7ac: 0xc07f0ea  jal         func_1FC3A8
    ctx->pc = 0x1FD7ACu;
    SET_GPR_U32(ctx, 31, 0x1FD7B4u);
    ctx->pc = 0x1FC3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC3A8u, 0x1FD7ACu, 0x1FD7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD7B4u;
label_1fd7b4:
    // 0x1fd7b4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FD7B4u;
    {
        const bool branch_taken_0x1fd7b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd7b4) {
            ctx->pc = 0x1FD7B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD7B4u;
            // 0x1fd7b8: 0x8f8297c8  lw          $v0, -0x6838($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD7F8u;
            goto label_1fd7f8;
        }
    }
    ctx->pc = 0x1FD7BCu;
    // 0x1fd7bc: 0x3c100015  lui         $s0, 0x15
    ctx->pc = 0x1fd7bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)21 << 16));
    // 0x1fd7c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fd7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd7c4: 0x261020f0  addiu       $s0, $s0, 0x20F0
    ctx->pc = 0x1fd7c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8432));
    // 0x1fd7c8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FD7C8u;
    SET_GPR_U32(ctx, 31, 0x1FD7D0u);
    ctx->pc = 0x1FD7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD7C8u;
    // 0x1fd7cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FD7C8u, 0x1FD7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD7D0u;
label_1fd7d0:
    // 0x1fd7d0: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x1fd7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x1fd7d4: 0x3c05000b  lui         $a1, 0xB
    ctx->pc = 0x1fd7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)11 << 16));
    // 0x1fd7d8: 0x248420e8  addiu       $a0, $a0, 0x20E8
    ctx->pc = 0x1fd7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8424));
    // 0x1fd7dc: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FD7DCu;
    SET_GPR_U32(ctx, 31, 0x1FD7E4u);
    ctx->pc = 0x1FD7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD7DCu;
    // 0x1fd7e0: 0x34a5007d  ori         $a1, $a1, 0x7D (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)125);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FD7DCu, 0x1FD7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD7E4u;
label_1fd7e4:
    // 0x1fd7e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fd7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd7e8: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FD7E8u;
    SET_GPR_U32(ctx, 31, 0x1FD7F0u);
    ctx->pc = 0x1FD7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD7E8u;
    // 0x1fd7ec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FD7E8u, 0x1FD7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD7F0u;
label_1fd7f0:
    // 0x1fd7f0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1FD7F0u;
    {
        const bool branch_taken_0x1fd7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7F0u;
        // 0x1fd7f4: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd7f0) {
            ctx->pc = 0x1FD834u;
            goto label_1fd834;
        }
    }
    ctx->pc = 0x1FD7F8u;
label_1fd7f8:
    // 0x1fd7f8: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1fd7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1fd7fc: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FD7FCu;
    {
        const bool branch_taken_0x1fd7fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD7FCu;
        // 0x1fd800: 0x3c040015  lui         $a0, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd7fc) {
            ctx->pc = 0x1FD820u;
            goto label_1fd820;
        }
    }
    ctx->pc = 0x1FD804u;
    // 0x1fd804: 0x3c05000b  lui         $a1, 0xB
    ctx->pc = 0x1fd804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)11 << 16));
    // 0x1fd808: 0x248420e8  addiu       $a0, $a0, 0x20E8
    ctx->pc = 0x1fd808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8424));
    // 0x1fd80c: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FD80Cu;
    SET_GPR_U32(ctx, 31, 0x1FD814u);
    ctx->pc = 0x1FD810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD80Cu;
    // 0x1fd810: 0x34a5008f  ori         $a1, $a1, 0x8F (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)143);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FD80Cu, 0x1FD814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD814u;
label_1fd814:
    // 0x1fd814: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FD814u;
    {
        const bool branch_taken_0x1fd814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD814u;
        // 0x1fd818: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd814) {
            ctx->pc = 0x1FD834u;
            goto label_1fd834;
        }
    }
    ctx->pc = 0x1FD81Cu;
    // 0x1fd81c: 0x0  nop
    ctx->pc = 0x1fd81cu;
    // NOP
label_1fd820:
    // 0x1fd820: 0x3c05000b  lui         $a1, 0xB
    ctx->pc = 0x1fd820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)11 << 16));
    // 0x1fd824: 0x248420e8  addiu       $a0, $a0, 0x20E8
    ctx->pc = 0x1fd824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8424));
    // 0x1fd828: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x1FD828u;
    SET_GPR_U32(ctx, 31, 0x1FD830u);
    ctx->pc = 0x1FD82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD828u;
    // 0x1fd82c: 0x34a5008e  ori         $a1, $a1, 0x8E (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)142);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x1FD828u, 0x1FD830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD830u;
label_1fd830:
    // 0x1fd830: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1fd830u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_1fd834:
    // 0x1fd834: 0x24908858  addiu       $s0, $a0, -0x77A8
    ctx->pc = 0x1fd834u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936664));
label_1fd838:
    // 0x1fd838: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1fd838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1fd83c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FD83Cu;
    {
        const bool branch_taken_0x1fd83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD83Cu;
        // 0x1fd840: 0x8f8397c8  lw          $v1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd83c) {
            ctx->pc = 0x1FD878u;
            goto label_1fd878;
        }
    }
    ctx->pc = 0x1FD844u;
    // 0x1fd844: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1fd844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1fd848: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1fd848u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fd84c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD84Cu;
    {
        const bool branch_taken_0x1fd84c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD84Cu;
        // 0x1fd850: 0x3c06003b  lui         $a2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd84c) {
            ctx->pc = 0x1FD864u;
            goto label_1fd864;
        }
    }
    ctx->pc = 0x1FD854u;
    // 0x1fd854: 0xc07f11c  jal         func_1FC470
    ctx->pc = 0x1FD854u;
    SET_GPR_U32(ctx, 31, 0x1FD85Cu);
    ctx->pc = 0x1FC470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC470u, 0x1FD854u, 0x1FD85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD85Cu;
label_1fd85c:
    // 0x1fd85c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FD85Cu;
    {
        const bool branch_taken_0x1fd85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD85Cu;
        // 0x1fd860: 0x3c06003b  lui         $a2, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd85c) {
            ctx->pc = 0x1FD878u;
            goto label_1fd878;
        }
    }
    ctx->pc = 0x1FD864u;
label_1fd864:
    // 0x1fd864: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fd864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd868: 0x24c28858  addiu       $v0, $a2, -0x77A8
    ctx->pc = 0x1fd868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936664));
    // 0x1fd86c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD86Cu;
    {
        const bool branch_taken_0x1fd86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD86Cu;
        // 0x1fd870: 0xac430020  sw          $v1, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd86c) {
            ctx->pc = 0x1FD87Cu;
            goto label_1fd87c;
        }
    }
    ctx->pc = 0x1FD874u;
    // 0x1fd874: 0x0  nop
    ctx->pc = 0x1fd874u;
    // NOP
label_1fd878:
    // 0x1fd878: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1fd878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1fd87c:
    // 0x1fd87c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1fd87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd880: 0xc07ea38  jal         func_1FA8E0
    ctx->pc = 0x1FD880u;
    SET_GPR_U32(ctx, 31, 0x1FD888u);
    ctx->pc = 0x1FD884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD880u;
    // 0x1fd884: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA8E0u, 0x1FD880u, 0x1FD888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD888u;
label_1fd888:
    // 0x1fd888: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x1fd888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x1fd88c: 0x24628858  addiu       $v0, $v1, -0x77A8
    ctx->pc = 0x1fd88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
    // 0x1fd890: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1fd890u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88ACu));
    // 0x1fd894: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1FD894u;
    {
        const bool branch_taken_0x1fd894 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD894u;
        // 0x1fd898: 0xdfb00310  ld          $s0, 0x310($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd894) {
            ctx->pc = 0x1FD928u;
            goto label_1fd928;
        }
    }
    ctx->pc = 0x1FD89Cu;
    // 0x1fd89c: 0xc6a00758  lwc1        $f0, 0x758($s5)
    ctx->pc = 0x1fd89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd8a0: 0xc6a10750  lwc1        $f1, 0x750($s5)
    ctx->pc = 0x1fd8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fd8a4: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x1fd8a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x1fd8a8: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x1fd8a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x1fd8ac: 0x46000004  c1          0x4
    ctx->pc = 0x1fd8acu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1fd8b0: 0xc7818218  lwc1        $f1, -0x7DE8($gp)
    ctx->pc = 0x1fd8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fd8b4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1fd8b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fd8b8: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x1FD8B8u;
    {
        const bool branch_taken_0x1fd8b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1fd8b8) {
            ctx->pc = 0x1FD8E4u;
            goto label_1fd8e4;
        }
    }
    ctx->pc = 0x1FD8C0u;
    // 0x1fd8c0: 0xc6400758  lwc1        $f0, 0x758($s2)
    ctx->pc = 0x1fd8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fd8c4: 0xc6410750  lwc1        $f1, 0x750($s2)
    ctx->pc = 0x1fd8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fd8c8: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x1fd8c8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x1fd8cc: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x1fd8ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x1fd8d0: 0x46000004  c1          0x4
    ctx->pc = 0x1fd8d0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1fd8d4: 0xc781821c  lwc1        $f1, -0x7DE4($gp)
    ctx->pc = 0x1fd8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fd8d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1fd8d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fd8dc: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1FD8DCu;
    {
        const bool branch_taken_0x1fd8dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FD8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD8DCu;
        // 0x1fd8e0: 0xdfb00310  ld          $s0, 0x310($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd8dc) {
            ctx->pc = 0x1FD928u;
            goto label_1fd928;
        }
    }
    ctx->pc = 0x1FD8E4u;
label_1fd8e4:
    // 0x1fd8e4: 0xc07c864  jal         func_1F2190
    ctx->pc = 0x1FD8E4u;
    SET_GPR_U32(ctx, 31, 0x1FD8ECu);
    ctx->pc = 0x1FD8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD8E4u;
    // 0x1fd8e8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2190u, 0x1FD8E4u, 0x1FD8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD8ECu;
label_1fd8ec:
    // 0x1fd8ec: 0xc07ebb4  jal         func_1FAED0
    ctx->pc = 0x1FD8ECu;
    SET_GPR_U32(ctx, 31, 0x1FD8F4u);
    ctx->pc = 0x1FAED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAED0u, 0x1FD8ECu, 0x1FD8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD8F4u;
label_1fd8f4:
    // 0x1fd8f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fd8f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd8f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fd8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd8fc: 0xa600003a  sh          $zero, 0x3A($s0)
    ctx->pc = 0x1fd8fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fd900: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fd900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd904: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1fd904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1fd908: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x1FD908u;
    SET_GPR_U32(ctx, 31, 0x1FD910u);
    ctx->pc = 0x1FD90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD908u;
    // 0x1fd90c: 0xa6000038  sh          $zero, 0x38($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x1FD908u, 0x1FD910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD910u;
label_1fd910:
    // 0x1fd910: 0xc07e57c  jal         func_1F95F0
    ctx->pc = 0x1FD910u;
    SET_GPR_U32(ctx, 31, 0x1FD918u);
    ctx->pc = 0x1FD914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD910u;
    // 0x1fd914: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F95F0u, 0x1FD910u, 0x1FD918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD918u;
label_1fd918:
    // 0x1fd918: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x1fd918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x1fd91c: 0xc07e584  jal         func_1F9610
    ctx->pc = 0x1FD91Cu;
    SET_GPR_U32(ctx, 31, 0x1FD924u);
    ctx->pc = 0x1FD920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD91Cu;
    // 0x1fd920: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9610u, 0x1FD91Cu, 0x1FD924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD924u;
label_1fd924:
    // 0x1fd924: 0xdfb00310  ld          $s0, 0x310($sp)
    ctx->pc = 0x1fd924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 784)));
label_1fd928:
    // 0x1fd928: 0xdfb10318  ld          $s1, 0x318($sp)
    ctx->pc = 0x1fd928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 792)));
    // 0x1fd92c: 0xdfb20320  ld          $s2, 0x320($sp)
    ctx->pc = 0x1fd92cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1fd930: 0xdfb30328  ld          $s3, 0x328($sp)
    ctx->pc = 0x1fd930u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 808)));
    // 0x1fd934: 0xdfb40330  ld          $s4, 0x330($sp)
    ctx->pc = 0x1fd934u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x1fd938: 0xdfb50338  ld          $s5, 0x338($sp)
    ctx->pc = 0x1fd938u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 824)));
    // 0x1fd93c: 0xdfb60340  ld          $s6, 0x340($sp)
    ctx->pc = 0x1fd93cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 832)));
    // 0x1fd940: 0xdfb70348  ld          $s7, 0x348($sp)
    ctx->pc = 0x1fd940u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 840)));
    // 0x1fd944: 0xdfbe0350  ld          $fp, 0x350($sp)
    ctx->pc = 0x1fd944u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 848)));
    // 0x1fd948: 0xdfbf0358  ld          $ra, 0x358($sp)
    ctx->pc = 0x1fd948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 856)));
    // 0x1fd94c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD94Cu;
        // 0x1fd950: 0x27bd0360  addiu       $sp, $sp, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD954u;
    // 0x1fd954: 0x0  nop
    ctx->pc = 0x1fd954u;
    // NOP
    ctx->pc = 0x1fd958u;
}
