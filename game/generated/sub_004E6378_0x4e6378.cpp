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

// Function: sub_004E6378
// Address: 0x4e6378 - 0x4e6650
void sub_004E6378_0x4e6378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6378_0x4e6378");
#endif

    switch (ctx->pc) {
        case 0x4e6378u: goto label_4e6378;
        case 0x4e637cu: goto label_4e637c;
        case 0x4e6380u: goto label_4e6380;
        case 0x4e6384u: goto label_4e6384;
        case 0x4e6388u: goto label_4e6388;
        case 0x4e638cu: goto label_4e638c;
        case 0x4e6390u: goto label_4e6390;
        case 0x4e6394u: goto label_4e6394;
        case 0x4e6398u: goto label_4e6398;
        case 0x4e639cu: goto label_4e639c;
        case 0x4e63a0u: goto label_4e63a0;
        case 0x4e63a4u: goto label_4e63a4;
        case 0x4e63a8u: goto label_4e63a8;
        case 0x4e63acu: goto label_4e63ac;
        case 0x4e63b0u: goto label_4e63b0;
        case 0x4e63b4u: goto label_4e63b4;
        case 0x4e63b8u: goto label_4e63b8;
        case 0x4e63bcu: goto label_4e63bc;
        case 0x4e63c0u: goto label_4e63c0;
        case 0x4e63c4u: goto label_4e63c4;
        case 0x4e63c8u: goto label_4e63c8;
        case 0x4e63ccu: goto label_4e63cc;
        case 0x4e63d0u: goto label_4e63d0;
        case 0x4e63d4u: goto label_4e63d4;
        case 0x4e63d8u: goto label_4e63d8;
        case 0x4e63dcu: goto label_4e63dc;
        case 0x4e63e0u: goto label_4e63e0;
        case 0x4e63e4u: goto label_4e63e4;
        case 0x4e63e8u: goto label_4e63e8;
        case 0x4e63ecu: goto label_4e63ec;
        case 0x4e63f0u: goto label_4e63f0;
        case 0x4e63f4u: goto label_4e63f4;
        case 0x4e63f8u: goto label_4e63f8;
        case 0x4e63fcu: goto label_4e63fc;
        case 0x4e6400u: goto label_4e6400;
        case 0x4e6404u: goto label_4e6404;
        case 0x4e6408u: goto label_4e6408;
        case 0x4e640cu: goto label_4e640c;
        case 0x4e6410u: goto label_4e6410;
        case 0x4e6414u: goto label_4e6414;
        case 0x4e6418u: goto label_4e6418;
        case 0x4e641cu: goto label_4e641c;
        case 0x4e6420u: goto label_4e6420;
        case 0x4e6424u: goto label_4e6424;
        case 0x4e6428u: goto label_4e6428;
        case 0x4e642cu: goto label_4e642c;
        case 0x4e6430u: goto label_4e6430;
        case 0x4e6434u: goto label_4e6434;
        case 0x4e6438u: goto label_4e6438;
        case 0x4e643cu: goto label_4e643c;
        case 0x4e6440u: goto label_4e6440;
        case 0x4e6444u: goto label_4e6444;
        case 0x4e6448u: goto label_4e6448;
        case 0x4e644cu: goto label_4e644c;
        case 0x4e6450u: goto label_4e6450;
        case 0x4e6454u: goto label_4e6454;
        case 0x4e6458u: goto label_4e6458;
        case 0x4e645cu: goto label_4e645c;
        case 0x4e6460u: goto label_4e6460;
        case 0x4e6464u: goto label_4e6464;
        case 0x4e6468u: goto label_4e6468;
        case 0x4e646cu: goto label_4e646c;
        case 0x4e6470u: goto label_4e6470;
        case 0x4e6474u: goto label_4e6474;
        case 0x4e6478u: goto label_4e6478;
        case 0x4e647cu: goto label_4e647c;
        case 0x4e6480u: goto label_4e6480;
        case 0x4e6484u: goto label_4e6484;
        case 0x4e6488u: goto label_4e6488;
        case 0x4e648cu: goto label_4e648c;
        case 0x4e6490u: goto label_4e6490;
        case 0x4e6494u: goto label_4e6494;
        case 0x4e6498u: goto label_4e6498;
        case 0x4e649cu: goto label_4e649c;
        case 0x4e64a0u: goto label_4e64a0;
        case 0x4e64a4u: goto label_4e64a4;
        case 0x4e64a8u: goto label_4e64a8;
        case 0x4e64acu: goto label_4e64ac;
        case 0x4e64b0u: goto label_4e64b0;
        case 0x4e64b4u: goto label_4e64b4;
        case 0x4e64b8u: goto label_4e64b8;
        case 0x4e64bcu: goto label_4e64bc;
        case 0x4e64c0u: goto label_4e64c0;
        case 0x4e64c4u: goto label_4e64c4;
        case 0x4e64c8u: goto label_4e64c8;
        case 0x4e64ccu: goto label_4e64cc;
        case 0x4e64d0u: goto label_4e64d0;
        case 0x4e64d4u: goto label_4e64d4;
        case 0x4e64d8u: goto label_4e64d8;
        case 0x4e64dcu: goto label_4e64dc;
        case 0x4e64e0u: goto label_4e64e0;
        case 0x4e64e4u: goto label_4e64e4;
        case 0x4e64e8u: goto label_4e64e8;
        case 0x4e64ecu: goto label_4e64ec;
        case 0x4e64f0u: goto label_4e64f0;
        case 0x4e64f4u: goto label_4e64f4;
        case 0x4e64f8u: goto label_4e64f8;
        case 0x4e64fcu: goto label_4e64fc;
        case 0x4e6500u: goto label_4e6500;
        case 0x4e6504u: goto label_4e6504;
        case 0x4e6508u: goto label_4e6508;
        case 0x4e650cu: goto label_4e650c;
        case 0x4e6510u: goto label_4e6510;
        case 0x4e6514u: goto label_4e6514;
        case 0x4e6518u: goto label_4e6518;
        case 0x4e651cu: goto label_4e651c;
        case 0x4e6520u: goto label_4e6520;
        case 0x4e6524u: goto label_4e6524;
        case 0x4e6528u: goto label_4e6528;
        case 0x4e652cu: goto label_4e652c;
        case 0x4e6530u: goto label_4e6530;
        case 0x4e6534u: goto label_4e6534;
        case 0x4e6538u: goto label_4e6538;
        case 0x4e653cu: goto label_4e653c;
        case 0x4e6540u: goto label_4e6540;
        case 0x4e6544u: goto label_4e6544;
        case 0x4e6548u: goto label_4e6548;
        case 0x4e654cu: goto label_4e654c;
        case 0x4e6550u: goto label_4e6550;
        case 0x4e6554u: goto label_4e6554;
        case 0x4e6558u: goto label_4e6558;
        case 0x4e655cu: goto label_4e655c;
        case 0x4e6560u: goto label_4e6560;
        case 0x4e6564u: goto label_4e6564;
        case 0x4e6568u: goto label_4e6568;
        case 0x4e656cu: goto label_4e656c;
        case 0x4e6570u: goto label_4e6570;
        case 0x4e6574u: goto label_4e6574;
        case 0x4e6578u: goto label_4e6578;
        case 0x4e657cu: goto label_4e657c;
        case 0x4e6580u: goto label_4e6580;
        case 0x4e6584u: goto label_4e6584;
        case 0x4e6588u: goto label_4e6588;
        case 0x4e658cu: goto label_4e658c;
        case 0x4e6590u: goto label_4e6590;
        case 0x4e6594u: goto label_4e6594;
        case 0x4e6598u: goto label_4e6598;
        case 0x4e659cu: goto label_4e659c;
        case 0x4e65a0u: goto label_4e65a0;
        case 0x4e65a4u: goto label_4e65a4;
        case 0x4e65a8u: goto label_4e65a8;
        case 0x4e65acu: goto label_4e65ac;
        case 0x4e65b0u: goto label_4e65b0;
        case 0x4e65b4u: goto label_4e65b4;
        case 0x4e65b8u: goto label_4e65b8;
        case 0x4e65bcu: goto label_4e65bc;
        case 0x4e65c0u: goto label_4e65c0;
        case 0x4e65c4u: goto label_4e65c4;
        case 0x4e65c8u: goto label_4e65c8;
        case 0x4e65ccu: goto label_4e65cc;
        case 0x4e65d0u: goto label_4e65d0;
        case 0x4e65d4u: goto label_4e65d4;
        case 0x4e65d8u: goto label_4e65d8;
        case 0x4e65dcu: goto label_4e65dc;
        case 0x4e65e0u: goto label_4e65e0;
        case 0x4e65e4u: goto label_4e65e4;
        case 0x4e65e8u: goto label_4e65e8;
        case 0x4e65ecu: goto label_4e65ec;
        case 0x4e65f0u: goto label_4e65f0;
        case 0x4e65f4u: goto label_4e65f4;
        case 0x4e65f8u: goto label_4e65f8;
        case 0x4e65fcu: goto label_4e65fc;
        case 0x4e6600u: goto label_4e6600;
        case 0x4e6604u: goto label_4e6604;
        case 0x4e6608u: goto label_4e6608;
        case 0x4e660cu: goto label_4e660c;
        case 0x4e6610u: goto label_4e6610;
        case 0x4e6614u: goto label_4e6614;
        case 0x4e6618u: goto label_4e6618;
        case 0x4e661cu: goto label_4e661c;
        case 0x4e6620u: goto label_4e6620;
        case 0x4e6624u: goto label_4e6624;
        case 0x4e6628u: goto label_4e6628;
        case 0x4e662cu: goto label_4e662c;
        case 0x4e6630u: goto label_4e6630;
        case 0x4e6634u: goto label_4e6634;
        case 0x4e6638u: goto label_4e6638;
        case 0x4e663cu: goto label_4e663c;
        case 0x4e6640u: goto label_4e6640;
        case 0x4e6644u: goto label_4e6644;
        case 0x4e6648u: goto label_4e6648;
        case 0x4e664cu: goto label_4e664c;
        default: break;
    }

    ctx->pc = 0x4e6378u;

label_4e6378:
    // 0x4e6378: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e6378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e637c:
    // 0x4e637c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4e637cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4e6380:
    // 0x4e6380: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4e6380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4e6384:
    // 0x4e6384: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4e6384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4e6388:
    // 0x4e6388: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4e6388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4e638c:
    // 0x4e638c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4e638cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4e6390:
    // 0x4e6390: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4e6390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_4e6394:
    // 0x4e6394: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4e6394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_4e6398:
    // 0x4e6398: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4e6398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_4e639c:
    // 0x4e639c: 0xc1232f2  jal         func_48CBC8
label_4e63a0:
    if (ctx->pc == 0x4E63A0u) {
        ctx->pc = 0x4E63A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E639Cu;
        // 0x4e63a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E63A4u;
        goto label_4e63a4;
    }
    ctx->pc = 0x4E639Cu;
    SET_GPR_U32(ctx, 31, 0x4E63A4u);
    ctx->pc = 0x4E63A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E639Cu;
    // 0x4e63a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4E639Cu, 0x4E63A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E63A4u;
label_4e63a4:
    // 0x4e63a4: 0x260401b4  addiu       $a0, $s0, 0x1B4
    ctx->pc = 0x4e63a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
label_4e63a8:
    // 0x4e63a8: 0x40782d  daddu       $t7, $v0, $zero
    ctx->pc = 0x4e63a8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e63ac:
    // 0x4e63ac: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4e63acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_4e63b0:
    // 0x4e63b0: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
label_4e63b4:
    if (ctx->pc == 0x4E63B4u) {
        ctx->pc = 0x4E63B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E63B0u;
        // 0x4e63b4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E63B8u;
        goto label_4e63b8;
    }
    ctx->pc = 0x4E63B0u;
    {
        const bool branch_taken_0x4e63b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4E63B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E63B0u;
        // 0x4e63b4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e63b0) {
            ctx->pc = 0x4E63E0u;
            goto label_4e63e0;
        }
    }
    ctx->pc = 0x4E63B8u;
label_4e63b8:
    // 0x4e63b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4e63b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4e63bc:
    // 0x4e63bc: 0xa60001ba  sh          $zero, 0x1BA($s0)
    ctx->pc = 0x4e63bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 442), (uint16_t)GPR_U32(ctx, 0));
label_4e63c0:
    // 0x4e63c0: 0xa602014a  sh          $v0, 0x14A($s0)
    ctx->pc = 0x4e63c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 330), (uint16_t)GPR_U32(ctx, 2));
label_4e63c4:
    // 0x4e63c4: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x4e63c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
label_4e63c8:
    // 0x4e63c8: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x4e63c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
label_4e63cc:
    // 0x4e63cc: 0xa60001b6  sh          $zero, 0x1B6($s0)
    ctx->pc = 0x4e63ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 438), (uint16_t)GPR_U32(ctx, 0));
label_4e63d0:
    // 0x4e63d0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4e63d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_4e63d4:
    // 0x4e63d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4e63d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_4e63d8:
    // 0x4e63d8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4e63d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_4e63dc:
    // 0x4e63dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4e63dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e63e0:
    // 0x4e63e0: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4e63e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
label_4e63e4:
    // 0x4e63e4: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x4e63e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_4e63e8:
    // 0x4e63e8: 0x248411d0  addiu       $a0, $a0, 0x11D0
    ctx->pc = 0x4e63e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4560));
label_4e63ec:
    // 0x4e63ec: 0x3c0effff  lui         $t6, 0xFFFF
    ctx->pc = 0x4e63ecu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)65535 << 16));
label_4e63f0:
    // 0x4e63f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4e63f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e63f4:
    // 0x4e63f4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e63f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4e63f8:
    // 0x4e63f8: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x4e63f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
label_4e63fc:
    // 0x4e63fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e63fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e6400:
    // 0x4e6400: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e6400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e6404:
    // 0x4e6404: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e6404u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4e6408:
    // 0x4e6408: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e6408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e640c:
    // 0x4e640c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4e640cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_4e6410:
    // 0x4e6410: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4e6410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_4e6414:
    // 0x4e6414: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4e6414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_4e6418:
    // 0x4e6418: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e6418u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4e641c:
    // 0x4e641c: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x4e641cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
label_4e6420:
    // 0x4e6420: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e6420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e6424:
    // 0x4e6424: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4e6424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4e6428:
    // 0x4e6428: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4e6428u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_4e642c:
    // 0x4e642c: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
label_4e6430:
    if (ctx->pc == 0x4E6430u) {
        ctx->pc = 0x4E6430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E642Cu;
        // 0x4e6430: 0x3c0a007f  lui         $t2, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6434u;
        goto label_4e6434;
    }
    ctx->pc = 0x4E642Cu;
    {
        const bool branch_taken_0x4e642c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E642Cu;
        // 0x4e6430: 0x3c0a007f  lui         $t2, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e642c) {
            ctx->pc = 0x4E6588u;
            goto label_4e6588;
        }
    }
    ctx->pc = 0x4E6434u;
label_4e6434:
    // 0x4e6434: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4e6434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4e6438:
    // 0x4e6438: 0x254a11dc  addiu       $t2, $t2, 0x11DC
    ctx->pc = 0x4e6438u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4572));
label_4e643c:
    // 0x4e643c: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4e643cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
label_4e6440:
    // 0x4e6440: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x4e6440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_4e6444:
    // 0x4e6444: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x4e6444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
label_4e6448:
    // 0x4e6448: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e6448u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4e644c:
    // 0x4e644c: 0x258c11e0  addiu       $t4, $t4, 0x11E0
    ctx->pc = 0x4e644cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4576));
label_4e6450:
    // 0x4e6450: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x4e6450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
label_4e6454:
    // 0x4e6454: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e6454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4e6458:
    // 0x4e6458: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4e6458u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_4e645c:
    // 0x4e645c: 0x8d860000  lw          $a2, 0x0($t4)
    ctx->pc = 0x4e645cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_4e6460:
    // 0x4e6460: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x4e6460u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
label_4e6464:
    // 0x4e6464: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4e6464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_4e6468:
    // 0x4e6468: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4e6468u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
label_4e646c:
    // 0x4e646c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4e646cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4e6470:
    // 0x4e6470: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x4e6470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_4e6474:
    // 0x4e6474: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4e6474u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
label_4e6478:
    // 0x4e6478: 0x256b11e4  addiu       $t3, $t3, 0x11E4
    ctx->pc = 0x4e6478u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4580));
label_4e647c:
    // 0x4e647c: 0x25ad11d4  addiu       $t5, $t5, 0x11D4
    ctx->pc = 0x4e647cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4564));
label_4e6480:
    // 0x4e6480: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x4e6480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
label_4e6484:
    // 0x4e6484: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x4e6484u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4e6488:
    // 0x4e6488: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e6488u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4e648c:
    // 0x4e648c: 0x85490000  lh          $t1, 0x0($t2)
    ctx->pc = 0x4e648cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
label_4e6490:
    // 0x4e6490: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x4e6490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
label_4e6494:
    // 0x4e6494: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4e6494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_4e6498:
    // 0x4e6498: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4e6498u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_4e649c:
    // 0x4e649c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4e649cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4e64a0:
    // 0x4e64a0: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4e64a0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
label_4e64a4:
    // 0x4e64a4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4e64a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_4e64a8:
    // 0x4e64a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e64a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e64ac:
    // 0x4e64ac: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x4e64acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_4e64b0:
    // 0x4e64b0: 0x85840000  lh          $a0, 0x0($t4)
    ctx->pc = 0x4e64b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
label_4e64b4:
    // 0x4e64b4: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x4e64b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
label_4e64b8:
    // 0x4e64b8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e64b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4e64bc:
    // 0x4e64bc: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x4e64bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
label_4e64c0:
    // 0x4e64c0: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4e64c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_4e64c4:
    // 0x4e64c4: 0xad670000  sw          $a3, 0x0($t3)
    ctx->pc = 0x4e64c4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
label_4e64c8:
    // 0x4e64c8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4e64c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
label_4e64cc:
    // 0x4e64cc: 0x8de20000  lw          $v0, 0x0($t7)
    ctx->pc = 0x4e64ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_4e64d0:
    // 0x4e64d0: 0x85680000  lh          $t0, 0x0($t3)
    ctx->pc = 0x4e64d0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_4e64d4:
    // 0x4e64d4: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x4e64d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
label_4e64d8:
    // 0x4e64d8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e64d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4e64dc:
    // 0x4e64dc: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4e64dcu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_4e64e0:
    // 0x4e64e0: 0x12e4825  or          $t1, $t1, $t6
    ctx->pc = 0x4e64e0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 14));
label_4e64e4:
    // 0x4e64e4: 0xa92824  and         $a1, $a1, $t1
    ctx->pc = 0x4e64e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 9));
label_4e64e8:
    // 0x4e64e8: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x4e64e8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
label_4e64ec:
    // 0x4e64ec: 0x8de20004  lw          $v0, 0x4($t7)
    ctx->pc = 0x4e64ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4)));
label_4e64f0:
    // 0x4e64f0: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x4e64f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
label_4e64f4:
    // 0x4e64f4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e64f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4e64f8:
    // 0x4e64f8: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4e64f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4e64fc:
    // 0x4e64fc: 0x8e2025  or          $a0, $a0, $t6
    ctx->pc = 0x4e64fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 14));
label_4e6500:
    // 0x4e6500: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x4e6500u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_4e6504:
    // 0x4e6504: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4e6504u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
label_4e6508:
    // 0x4e6508: 0x8de20008  lw          $v0, 0x8($t7)
    ctx->pc = 0x4e6508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
label_4e650c:
    // 0x4e650c: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x4e650cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
label_4e6510:
    // 0x4e6510: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4e6510u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4e6514:
    // 0x4e6514: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4e6514u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_4e6518:
    // 0x4e6518: 0x10e4025  or          $t0, $t0, $t6
    ctx->pc = 0x4e6518u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 14));
label_4e651c:
    // 0x4e651c: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x4e651cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
label_4e6520:
    // 0x4e6520: 0xad670000  sw          $a3, 0x0($t3)
    ctx->pc = 0x4e6520u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
label_4e6524:
    // 0x4e6524: 0x860201b8  lh          $v0, 0x1B8($s0)
    ctx->pc = 0x4e6524u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 440)));
label_4e6528:
    // 0x4e6528: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x4e6528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
label_4e652c:
    // 0x4e652c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e652cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e6530:
    // 0x4e6530: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x4e6530u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
label_4e6534:
    // 0x4e6534: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e6534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e6538:
    // 0x4e6538: 0x85a20000  lh          $v0, 0x0($t5)
    ctx->pc = 0x4e6538u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
label_4e653c:
    // 0x4e653c: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x4e653cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
label_4e6540:
    // 0x4e6540: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x4e6540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
label_4e6544:
    // 0x4e6544: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e6544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e6548:
    // 0x4e6548: 0xada30000  sw          $v1, 0x0($t5)
    ctx->pc = 0x4e6548u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
label_4e654c:
    // 0x4e654c: 0xc122d6e  jal         func_48B5B8
label_4e6550:
    if (ctx->pc == 0x4E6550u) {
        ctx->pc = 0x4E6550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E654Cu;
        // 0x4e6550: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6554u;
        goto label_4e6554;
    }
    ctx->pc = 0x4E654Cu;
    SET_GPR_U32(ctx, 31, 0x4E6554u);
    ctx->pc = 0x4E6550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E654Cu;
    // 0x4e6550: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4E654Cu, 0x4E6554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6554u;
label_4e6554:
    // 0x4e6554: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_4e6558:
    if (ctx->pc == 0x4E6558u) {
        ctx->pc = 0x4E6558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6554u;
        // 0x4e6558: 0x2604014a  addiu       $a0, $s0, 0x14A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 330));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E655Cu;
        goto label_4e655c;
    }
    ctx->pc = 0x4E6554u;
    {
        const bool branch_taken_0x4e6554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E6558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6554u;
        // 0x4e6558: 0x2604014a  addiu       $a0, $s0, 0x14A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 330));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6554) {
            ctx->pc = 0x4E658Cu;
            goto label_4e658c;
        }
    }
    ctx->pc = 0x4E655Cu;
label_4e655c:
    // 0x4e655c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e655cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e6560:
    // 0x4e6560: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e6560u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e6564:
    // 0x4e6564: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e6564u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4e6568:
    // 0x4e6568: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e6568u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e656c:
    // 0x4e656c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e656cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4e6570:
    // 0x4e6570: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e6570u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e6574:
    // 0x4e6574: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e6574u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4e6578:
    // 0x4e6578: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e6578u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4e657c:
    // 0x4e657c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4e657cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4e6580:
    // 0x4e6580: 0x813a2a2  j           func_4E8A88
label_4e6584:
    if (ctx->pc == 0x4E6584u) {
        ctx->pc = 0x4E6584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6580u;
        // 0x4e6584: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6588u;
        goto label_4e6588;
    }
    ctx->pc = 0x4E6580u;
    ctx->pc = 0x4E6584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6580u;
    // 0x4e6584: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E8A88u, 0x4E6580u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4E6588u;
label_4e6588:
    // 0x4e6588: 0x2604014a  addiu       $a0, $s0, 0x14A
    ctx->pc = 0x4e6588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 330));
label_4e658c:
    // 0x4e658c: 0x261201ba  addiu       $s2, $s0, 0x1BA
    ctx->pc = 0x4e658cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 442));
label_4e6590:
    // 0x4e6590: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4e6590u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_4e6594:
    // 0x4e6594: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4e6594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
label_4e6598:
    // 0x4e6598: 0x245311d0  addiu       $s3, $v0, 0x11D0
    ctx->pc = 0x4e6598u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4560));
label_4e659c:
    // 0x4e659c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4e659cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e65a0:
    // 0x4e65a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4e65a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4e65a4:
    // 0x4e65a4: 0x3c160054  lui         $s6, 0x54
    ctx->pc = 0x4e65a4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)84 << 16));
label_4e65a8:
    // 0x4e65a8: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x4e65a8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_4e65ac:
    // 0x4e65ac: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x4e65acu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
label_4e65b0:
    // 0x4e65b0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x4e65b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e65b4:
    // 0x4e65b4: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4e65b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4e65b8:
    // 0x4e65b8: 0x26c77e80  addiu       $a3, $s6, 0x7E80
    ctx->pc = 0x4e65b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 32384));
label_4e65bc:
    // 0x4e65bc: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4e65bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_4e65c0:
    // 0x4e65c0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4e65c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4e65c4:
    // 0x4e65c4: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4e65c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
label_4e65c8:
    // 0x4e65c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4e65c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4e65cc:
    // 0x4e65cc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4e65ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4e65d0:
    // 0x4e65d0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4e65d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4e65d4:
    // 0x4e65d4: 0x96660000  lhu         $a2, 0x0($s3)
    ctx->pc = 0x4e65d4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4e65d8:
    // 0x4e65d8: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x4e65d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_4e65dc:
    // 0x4e65dc: 0x24440003  addiu       $a0, $v0, 0x3
    ctx->pc = 0x4e65dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
label_4e65e0:
    // 0x4e65e0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x4e65e0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_4e65e4:
    // 0x4e65e4: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x4e65e4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4e65e8:
    // 0x4e65e8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x4e65e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_4e65ec:
    // 0x4e65ec: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4e65ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4e65f0:
    // 0x4e65f0: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x4e65f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_4e65f4:
    // 0x4e65f4: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4e65f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_4e65f8:
    // 0x4e65f8: 0xc3302b  sltu        $a2, $a2, $v1
    ctx->pc = 0x4e65f8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e65fc:
    // 0x4e65fc: 0x14c00008  bnez        $a2, . + 4 + (0x8 << 2)
label_4e6600:
    if (ctx->pc == 0x4E6600u) {
        ctx->pc = 0x4E6600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E65FCu;
        // 0x4e6600: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6604u;
        goto label_4e6604;
    }
    ctx->pc = 0x4E65FCu;
    {
        const bool branch_taken_0x4e65fc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E6600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E65FCu;
        // 0x4e6600: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e65fc) {
            ctx->pc = 0x4E6620u;
            goto label_4e6620;
        }
    }
    ctx->pc = 0x4E6604u;
label_4e6604:
    // 0x4e6604: 0xa6450000  sh          $a1, 0x0($s2)
    ctx->pc = 0x4e6604u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 5));
label_4e6608:
    // 0x4e6608: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x4e6608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_4e660c:
    // 0x4e660c: 0x40f809  jalr        $v0
label_4e6610:
    if (ctx->pc == 0x4E6610u) {
        ctx->pc = 0x4E6610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E660Cu;
        // 0x4e6610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6614u;
        goto label_4e6614;
    }
    ctx->pc = 0x4E660Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4E6614u);
        ctx->pc = 0x4E6610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E660Cu;
        // 0x4e6610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E660Cu, 0x4E6614u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E6614u;
label_4e6614:
    // 0x4e6614: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_4e6618:
    if (ctx->pc == 0x4E6618u) {
        ctx->pc = 0x4E6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6614u;
        // 0x4e6618: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E661Cu;
        goto label_4e661c;
    }
    ctx->pc = 0x4E6614u;
    {
        const bool branch_taken_0x4e6614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6614u;
        // 0x4e6618: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e6614) {
            ctx->pc = 0x4E65B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4e65b8;
        }
    }
    ctx->pc = 0x4E661Cu;
label_4e661c:
    // 0x4e661c: 0x0  nop
    ctx->pc = 0x4e661cu;
    // NOP
label_4e6620:
    // 0x4e6620: 0xc13a2a0  jal         func_4E8A80
label_4e6624:
    if (ctx->pc == 0x4E6624u) {
        ctx->pc = 0x4E6624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6620u;
        // 0x4e6624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6628u;
        goto label_4e6628;
    }
    ctx->pc = 0x4E6620u;
    SET_GPR_U32(ctx, 31, 0x4E6628u);
    ctx->pc = 0x4E6624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4E6620u;
    // 0x4e6624: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E8A80u, 0x4E6620u, 0x4E6628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4E6628u;
label_4e6628:
    // 0x4e6628: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4e6628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e662c:
    // 0x4e662c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4e662cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4e6630:
    // 0x4e6630: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4e6630u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e6634:
    // 0x4e6634: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4e6634u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4e6638:
    // 0x4e6638: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4e6638u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e663c:
    // 0x4e663c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4e663cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4e6640:
    // 0x4e6640: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4e6640u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4e6644:
    // 0x4e6644: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4e6644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4e6648:
    // 0x4e6648: 0x3e00008  jr          $ra
label_4e664c:
    if (ctx->pc == 0x4E664Cu) {
        ctx->pc = 0x4E664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6648u;
        // 0x4e664c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6650u;
        goto label_fallthrough_0x4e6648;
    }
    ctx->pc = 0x4E6648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E664Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E6648u;
        // 0x4e664c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E6648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4e6648:
    ctx->pc = 0x4E6650u;
}
