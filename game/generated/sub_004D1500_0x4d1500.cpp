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

// Function: sub_004D1500
// Address: 0x4d1500 - 0x4d16b0
void sub_004D1500_0x4d1500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D1500_0x4d1500");
#endif

    switch (ctx->pc) {
        case 0x4d1500u: goto label_4d1500;
        case 0x4d1504u: goto label_4d1504;
        case 0x4d1508u: goto label_4d1508;
        case 0x4d150cu: goto label_4d150c;
        case 0x4d1510u: goto label_4d1510;
        case 0x4d1514u: goto label_4d1514;
        case 0x4d1518u: goto label_4d1518;
        case 0x4d151cu: goto label_4d151c;
        case 0x4d1520u: goto label_4d1520;
        case 0x4d1524u: goto label_4d1524;
        case 0x4d1528u: goto label_4d1528;
        case 0x4d152cu: goto label_4d152c;
        case 0x4d1530u: goto label_4d1530;
        case 0x4d1534u: goto label_4d1534;
        case 0x4d1538u: goto label_4d1538;
        case 0x4d153cu: goto label_4d153c;
        case 0x4d1540u: goto label_4d1540;
        case 0x4d1544u: goto label_4d1544;
        case 0x4d1548u: goto label_4d1548;
        case 0x4d154cu: goto label_4d154c;
        case 0x4d1550u: goto label_4d1550;
        case 0x4d1554u: goto label_4d1554;
        case 0x4d1558u: goto label_4d1558;
        case 0x4d155cu: goto label_4d155c;
        case 0x4d1560u: goto label_4d1560;
        case 0x4d1564u: goto label_4d1564;
        case 0x4d1568u: goto label_4d1568;
        case 0x4d156cu: goto label_4d156c;
        case 0x4d1570u: goto label_4d1570;
        case 0x4d1574u: goto label_4d1574;
        case 0x4d1578u: goto label_4d1578;
        case 0x4d157cu: goto label_4d157c;
        case 0x4d1580u: goto label_4d1580;
        case 0x4d1584u: goto label_4d1584;
        case 0x4d1588u: goto label_4d1588;
        case 0x4d158cu: goto label_4d158c;
        case 0x4d1590u: goto label_4d1590;
        case 0x4d1594u: goto label_4d1594;
        case 0x4d1598u: goto label_4d1598;
        case 0x4d159cu: goto label_4d159c;
        case 0x4d15a0u: goto label_4d15a0;
        case 0x4d15a4u: goto label_4d15a4;
        case 0x4d15a8u: goto label_4d15a8;
        case 0x4d15acu: goto label_4d15ac;
        case 0x4d15b0u: goto label_4d15b0;
        case 0x4d15b4u: goto label_4d15b4;
        case 0x4d15b8u: goto label_4d15b8;
        case 0x4d15bcu: goto label_4d15bc;
        case 0x4d15c0u: goto label_4d15c0;
        case 0x4d15c4u: goto label_4d15c4;
        case 0x4d15c8u: goto label_4d15c8;
        case 0x4d15ccu: goto label_4d15cc;
        case 0x4d15d0u: goto label_4d15d0;
        case 0x4d15d4u: goto label_4d15d4;
        case 0x4d15d8u: goto label_4d15d8;
        case 0x4d15dcu: goto label_4d15dc;
        case 0x4d15e0u: goto label_4d15e0;
        case 0x4d15e4u: goto label_4d15e4;
        case 0x4d15e8u: goto label_4d15e8;
        case 0x4d15ecu: goto label_4d15ec;
        case 0x4d15f0u: goto label_4d15f0;
        case 0x4d15f4u: goto label_4d15f4;
        case 0x4d15f8u: goto label_4d15f8;
        case 0x4d15fcu: goto label_4d15fc;
        case 0x4d1600u: goto label_4d1600;
        case 0x4d1604u: goto label_4d1604;
        case 0x4d1608u: goto label_4d1608;
        case 0x4d160cu: goto label_4d160c;
        case 0x4d1610u: goto label_4d1610;
        case 0x4d1614u: goto label_4d1614;
        case 0x4d1618u: goto label_4d1618;
        case 0x4d161cu: goto label_4d161c;
        case 0x4d1620u: goto label_4d1620;
        case 0x4d1624u: goto label_4d1624;
        case 0x4d1628u: goto label_4d1628;
        case 0x4d162cu: goto label_4d162c;
        case 0x4d1630u: goto label_4d1630;
        case 0x4d1634u: goto label_4d1634;
        case 0x4d1638u: goto label_4d1638;
        case 0x4d163cu: goto label_4d163c;
        case 0x4d1640u: goto label_4d1640;
        case 0x4d1644u: goto label_4d1644;
        case 0x4d1648u: goto label_4d1648;
        case 0x4d164cu: goto label_4d164c;
        case 0x4d1650u: goto label_4d1650;
        case 0x4d1654u: goto label_4d1654;
        case 0x4d1658u: goto label_4d1658;
        case 0x4d165cu: goto label_4d165c;
        case 0x4d1660u: goto label_4d1660;
        case 0x4d1664u: goto label_4d1664;
        case 0x4d1668u: goto label_4d1668;
        case 0x4d166cu: goto label_4d166c;
        case 0x4d1670u: goto label_4d1670;
        case 0x4d1674u: goto label_4d1674;
        case 0x4d1678u: goto label_4d1678;
        case 0x4d167cu: goto label_4d167c;
        case 0x4d1680u: goto label_4d1680;
        case 0x4d1684u: goto label_4d1684;
        case 0x4d1688u: goto label_4d1688;
        case 0x4d168cu: goto label_4d168c;
        case 0x4d1690u: goto label_4d1690;
        case 0x4d1694u: goto label_4d1694;
        case 0x4d1698u: goto label_4d1698;
        case 0x4d169cu: goto label_4d169c;
        case 0x4d16a0u: goto label_4d16a0;
        case 0x4d16a4u: goto label_4d16a4;
        case 0x4d16a8u: goto label_4d16a8;
        case 0x4d16acu: goto label_4d16ac;
        default: break;
    }

    ctx->pc = 0x4d1500u;

label_4d1500:
    // 0x4d1500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d1500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4d1504:
    // 0x4d1504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d1504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d1508:
    // 0x4d1508: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4d1508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_4d150c:
    // 0x4d150c: 0xc126d66  jal         func_49B598
label_4d1510:
    if (ctx->pc == 0x4D1510u) {
        ctx->pc = 0x4D1510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D150Cu;
        // 0x4d1510: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D1514u;
        goto label_4d1514;
    }
    ctx->pc = 0x4D150Cu;
    SET_GPR_U32(ctx, 31, 0x4D1514u);
    ctx->pc = 0x4D1510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D150Cu;
    // 0x4d1510: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49B598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49B598u, 0x4D150Cu, 0x4D1514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D1514u;
label_4d1514:
    // 0x4d1514: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4d1514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_4d1518:
    // 0x4d1518: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x4d1518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_4d151c:
    // 0x4d151c: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4d151cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
label_4d1520:
    // 0x4d1520: 0xa44323c4  sh          $v1, 0x23C4($v0)
    ctx->pc = 0x4d1520u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 9156), (uint16_t)GPR_U32(ctx, 3));
label_4d1524:
    // 0x4d1524: 0xc1297fa  jal         func_4A5FE8
label_4d1528:
    if (ctx->pc == 0x4D1528u) {
        ctx->pc = 0x4D1528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1524u;
        // 0x4d1528: 0xa44023c2  sh          $zero, 0x23C2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 9154), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D152Cu;
        goto label_4d152c;
    }
    ctx->pc = 0x4D1524u;
    SET_GPR_U32(ctx, 31, 0x4D152Cu);
    ctx->pc = 0x4D1528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D1524u;
    // 0x4d1528: 0xa44023c2  sh          $zero, 0x23C2($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9154), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4D1524u, 0x4D152Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D152Cu;
label_4d152c:
    // 0x4d152c: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4d152cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4d1530:
    // 0x4d1530: 0xa6000166  sh          $zero, 0x166($s0)
    ctx->pc = 0x4d1530u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 0));
label_4d1534:
    // 0x4d1534: 0xa60201bc  sh          $v0, 0x1BC($s0)
    ctx->pc = 0x4d1534u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 444), (uint16_t)GPR_U32(ctx, 2));
label_4d1538:
    // 0x4d1538: 0xa6000168  sh          $zero, 0x168($s0)
    ctx->pc = 0x4d1538u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 360), (uint16_t)GPR_U32(ctx, 0));
label_4d153c:
    // 0x4d153c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4d153cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d1540:
    // 0x4d1540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d1540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d1544:
    // 0x4d1544: 0x3e00008  jr          $ra
label_4d1548:
    if (ctx->pc == 0x4D1548u) {
        ctx->pc = 0x4D1548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1544u;
        // 0x4d1548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D154Cu;
        goto label_4d154c;
    }
    ctx->pc = 0x4D1544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D1548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1544u;
        // 0x4d1548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D1544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D154Cu;
label_4d154c:
    // 0x4d154c: 0x0  nop
    ctx->pc = 0x4d154cu;
    // NOP
label_4d1550:
    // 0x4d1550: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4d1550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4d1554:
    // 0x4d1554: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4d1554u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
label_4d1558:
    // 0x4d1558: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4d1558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_4d155c:
    // 0x4d155c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d155cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
label_4d1560:
    // 0x4d1560: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4d1560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_4d1564:
    // 0x4d1564: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4d1564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d1568:
    // 0x4d1568: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4d1568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_4d156c:
    // 0x4d156c: 0x24b20fec  addiu       $s2, $a1, 0xFEC
    ctx->pc = 0x4d156cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4076));
label_4d1570:
    // 0x4d1570: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4d1570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_4d1574:
    // 0x4d1574: 0x24d3100c  addiu       $s3, $a2, 0x100C
    ctx->pc = 0x4d1574u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 4108));
label_4d1578:
    // 0x4d1578: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4d1578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_4d157c:
    // 0x4d157c: 0x24140006  addiu       $s4, $zero, 0x6
    ctx->pc = 0x4d157cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4d1580:
    // 0x4d1580: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4d1580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_4d1584:
    // 0x4d1584: 0x26230166  addiu       $v1, $s1, 0x166
    ctx->pc = 0x4d1584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 358));
label_4d1588:
    // 0x4d1588: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4d1588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_4d158c:
    // 0x4d158c: 0x26300168  addiu       $s0, $s1, 0x168
    ctx->pc = 0x4d158cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 360));
label_4d1590:
    // 0x4d1590: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4d1590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_4d1594:
    // 0x4d1594: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x4d1594u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_4d1598:
    // 0x4d1598: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4d1598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_4d159c:
    // 0x4d159c: 0x3c1effff  lui         $fp, 0xFFFF
    ctx->pc = 0x4d159cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65535 << 16));
label_4d15a0:
    // 0x4d15a0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4d15a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_4d15a4:
    // 0x4d15a4: 0x3c040054  lui         $a0, 0x54
    ctx->pc = 0x4d15a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)84 << 16));
label_4d15a8:
    // 0x4d15a8: 0x24957480  addiu       $s5, $a0, 0x7480
    ctx->pc = 0x4d15a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 29824));
label_4d15ac:
    // 0x4d15ac: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x4d15acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d15b0:
    // 0x4d15b0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4d15b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_4d15b4:
    // 0x4d15b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4d15b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4d15b8:
    // 0x4d15b8: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4d15b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d15bc:
    // 0x4d15bc: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x4d15bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_4d15c0:
    // 0x4d15c0: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x4d15c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_4d15c4:
    // 0x4d15c4: 0x74001a  div         $zero, $v1, $s4
    ctx->pc = 0x4d15c4u;
    { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_4d15c8:
    // 0x4d15c8: 0x1812  mflo        $v1
    ctx->pc = 0x4d15c8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_4d15cc:
    // 0x4d15cc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x4d15ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_4d15d0:
    // 0x4d15d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d15d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d15d4:
    // 0x4d15d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d15d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4d15d8:
    // 0x4d15d8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x4d15d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4d15dc:
    // 0x4d15dc: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x4d15dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_4d15e0:
    // 0x4d15e0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4d15e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4d15e4:
    // 0x4d15e4: 0x4600016  bltz        $v1, . + 4 + (0x16 << 2)
label_4d15e8:
    if (ctx->pc == 0x4D15E8u) {
        ctx->pc = 0x4D15E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D15E4u;
        // 0x4d15e8: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D15ECu;
        goto label_4d15ec;
    }
    ctx->pc = 0x4D15E4u;
    {
        const bool branch_taken_0x4d15e4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4D15E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D15E4u;
        // 0x4d15e8: 0x94420000  lhu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d15e4) {
            ctx->pc = 0x4D1640u;
            goto label_4d1640;
        }
    }
    ctx->pc = 0x4D15ECu;
label_4d15ec:
    // 0x4d15ec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4d15ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d15f0:
    // 0x4d15f0: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x4d15f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_4d15f4:
    // 0x4d15f4: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x4d15f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
label_4d15f8:
    // 0x4d15f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4d15f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_4d15fc:
    // 0x4d15fc: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x4d15fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
label_4d1600:
    // 0x4d1600: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4d1600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4d1604:
    // 0x4d1604: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4d1604u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_4d1608:
    // 0x4d1608: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4d1608u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4d160c:
    // 0x4d160c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x4d160cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4d1610:
    // 0x4d1610: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_4d1614:
    if (ctx->pc == 0x4D1614u) {
        ctx->pc = 0x4D1614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1610u;
        // 0x4d1614: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D1618u;
        goto label_4d1618;
    }
    ctx->pc = 0x4D1610u;
    {
        const bool branch_taken_0x4d1610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d1610) {
            ctx->pc = 0x4D1614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D1610u;
            // 0x4d1614: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D1678u;
            goto label_4d1678;
        }
    }
    ctx->pc = 0x4D1618u;
label_4d1618:
    // 0x4d1618: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4d1618u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4d161c:
    // 0x4d161c: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x4d161cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
label_4d1620:
    // 0x4d1620: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4d1620u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_4d1624:
    // 0x4d1624: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4d1624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4d1628:
    // 0x4d1628: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4d1628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4d162c:
    // 0x4d162c: 0x40f809  jalr        $v0
label_4d1630:
    if (ctx->pc == 0x4D1630u) {
        ctx->pc = 0x4D1630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D162Cu;
        // 0x4d1630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D1634u;
        goto label_4d1634;
    }
    ctx->pc = 0x4D162Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4D1634u);
        ctx->pc = 0x4D1630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D162Cu;
        // 0x4d1630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D162Cu, 0x4D1634u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4D1634u;
label_4d1634:
    // 0x4d1634: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
label_4d1638:
    if (ctx->pc == 0x4D1638u) {
        ctx->pc = 0x4D1638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1634u;
        // 0x4d1638: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D163Cu;
        goto label_4d163c;
    }
    ctx->pc = 0x4D1634u;
    {
        const bool branch_taken_0x4d1634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D1638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D1634u;
        // 0x4d1638: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d1634) {
            ctx->pc = 0x4D15C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d15c0;
        }
    }
    ctx->pc = 0x4D163Cu;
label_4d163c:
    // 0x4d163c: 0x0  nop
    ctx->pc = 0x4d163cu;
    // NOP
label_4d1640:
    // 0x4d1640: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d1640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d1644:
    // 0x4d1644: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d1644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d1648:
    // 0x4d1648: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4d1648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4d164c:
    // 0x4d164c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d164cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d1650:
    // 0x4d1650: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d1650u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4d1654:
    // 0x4d1654: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d1654u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d1658:
    // 0x4d1658: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d1658u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4d165c:
    // 0x4d165c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d165cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4d1660:
    // 0x4d1660: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4d1660u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4d1664:
    // 0x4d1664: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4d1664u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d1668:
    // 0x4d1668: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4d1668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4d166c:
    // 0x4d166c: 0x812b62c  j           func_4AD8B0
label_4d1670:
    if (ctx->pc == 0x4D1670u) {
        ctx->pc = 0x4D1670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D166Cu;
        // 0x4d1670: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D1674u;
        goto label_4d1674;
    }
    ctx->pc = 0x4D166Cu;
    ctx->pc = 0x4D1670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D166Cu;
    // 0x4d1670: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4D1674u;
label_4d1674:
    // 0x4d1674: 0x0  nop
    ctx->pc = 0x4d1674u;
    // NOP
label_4d1678:
    // 0x4d1678: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4d1678u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_4d167c:
    // 0x4d167c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4d167cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d1680:
    // 0x4d1680: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4d1680u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_4d1684:
    // 0x4d1684: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4d1684u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d1688:
    // 0x4d1688: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4d1688u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_4d168c:
    // 0x4d168c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4d168cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4d1690:
    // 0x4d1690: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4d1690u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_4d1694:
    // 0x4d1694: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4d1694u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4d1698:
    // 0x4d1698: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4d1698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_4d169c:
    // 0x4d169c: 0x3e00008  jr          $ra
label_4d16a0:
    if (ctx->pc == 0x4D16A0u) {
        ctx->pc = 0x4D16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D169Cu;
        // 0x4d16a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4D16A4u;
        goto label_4d16a4;
    }
    ctx->pc = 0x4D169Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D16A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D169Cu;
        // 0x4d16a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D169Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D16A4u;
label_4d16a4:
    // 0x4d16a4: 0x0  nop
    ctx->pc = 0x4d16a4u;
    // NOP
label_4d16a8:
    // 0x4d16a8: 0x3e00008  jr          $ra
label_4d16ac:
    if (ctx->pc == 0x4D16ACu) {
        ctx->pc = 0x4D16B0u;
        goto label_fallthrough_0x4d16a8;
    }
    ctx->pc = 0x4D16A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D16A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4d16a8:
    ctx->pc = 0x4D16B0u;
}
