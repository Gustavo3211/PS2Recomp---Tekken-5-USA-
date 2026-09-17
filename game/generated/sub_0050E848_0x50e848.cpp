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

// Function: sub_0050E848
// Address: 0x50e848 - 0x50ecd0
void sub_0050E848_0x50e848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050E848_0x50e848");
#endif

    switch (ctx->pc) {
        case 0x50e858u: goto label_50e858;
        case 0x50ea10u: goto label_50ea10;
        case 0x50ead0u: goto label_50ead0;
        case 0x50eadcu: goto label_50eadc;
        case 0x50ec70u: goto label_50ec70;
        case 0x50ec8cu: goto label_50ec8c;
        case 0x50ec94u: goto label_50ec94;
        default: break;
    }

    ctx->pc = 0x50e848u;

    // 0x50e848: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50e848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50e84c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50e84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50e850: 0xc144ac0  jal         func_512B00
    ctx->pc = 0x50E850u;
    SET_GPR_U32(ctx, 31, 0x50E858u);
    ctx->pc = 0x512B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512B00u, 0x50E850u, 0x50E858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50E858u;
label_50e858:
    // 0x50e858: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x50e858u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50e85c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x50e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x50e860: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50e860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x50e864: 0xa5a20008  sh          $v0, 0x8($t5)
    ctx->pc = 0x50e864u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x50e868: 0xa5a3000e  sh          $v1, 0xE($t5)
    ctx->pc = 0x50e868u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x50e86c: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x50e86cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x50e870: 0x24a5c688  addiu       $a1, $a1, -0x3978
    ctx->pc = 0x50e870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952584));
    // 0x50e874: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50e874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50e878: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x50e878u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EC688u));
    // 0x50e87c: 0x244cc678  addiu       $t4, $v0, -0x3988
    ctx->pc = 0x50e87cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952568));
    // 0x50e880: 0x25a800c4  addiu       $t0, $t5, 0xC4
    ctx->pc = 0x50e880u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), 196));
    // 0x50e884: 0x3c0effff  lui         $t6, 0xFFFF
    ctx->pc = 0x50e884u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)65535 << 16));
    // 0x50e888: 0x24830002  addiu       $v1, $a0, 0x2
    ctx->pc = 0x50e888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x50e88c: 0x24860004  addiu       $a2, $a0, 0x4
    ctx->pc = 0x50e88cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x50e890: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x50e890u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8EC688u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC688u, _value); } while (0);
    // 0x50e894: 0x24840006  addiu       $a0, $a0, 0x6
    ctx->pc = 0x50e894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x50e898: 0x25a700d4  addiu       $a3, $t5, 0xD4
    ctx->pc = 0x50e898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 212));
    // 0x50e89c: 0x25a900ce  addiu       $t1, $t5, 0xCE
    ctx->pc = 0x50e89cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), 206));
    // 0x50e8a0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x50e8a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x50e8a4: 0x25aa00d6  addiu       $t2, $t5, 0xD6
    ctx->pc = 0x50e8a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 214));
    // 0x50e8a8: 0x240b01e9  addiu       $t3, $zero, 0x1E9
    ctx->pc = 0x50e8a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 489));
    // 0x50e8ac: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x50e8acu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50e8b0: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x50e8b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x8EC688u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC688u, _value); } while (0);
    // 0x50e8b4: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x50e8b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x50e8b8: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x50e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC678u));
    // 0x50e8bc: 0x6e1825  or          $v1, $v1, $t6
    ctx->pc = 0x50e8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
    // 0x50e8c0: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x50e8c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8EC688u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC688u, _value); } while (0);
    // 0x50e8c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50e8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50e8c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50e8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50e8cc: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x50e8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x50e8d0: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x50e8d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x50e8d4: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x50e8d4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x50e8d8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x50e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50e8dc: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x50e8dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x50e8e0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x50e8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x50e8e4: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x50e8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x50e8e8: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x50e8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x50e8ec: 0xa5a300cc  sh          $v1, 0xCC($t5)
    ctx->pc = 0x50e8ecu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 204), (uint16_t)GPR_U32(ctx, 3));
    // 0x50e8f0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x50e8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x50e8f4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x50e8f4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x50e8f8: 0xa5230000  sh          $v1, 0x0($t1)
    ctx->pc = 0x50e8f8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x50e8fc: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x50e8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x50e900: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x50e900u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50e904: 0xa5420000  sh          $v0, 0x0($t2)
    ctx->pc = 0x50e904u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50e908: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x50e908u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x50e90c: 0xada600d0  sw          $a2, 0xD0($t5)
    ctx->pc = 0x50e90cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 208), GPR_U32(ctx, 6));
    // 0x50e910: 0x85820000  lh          $v0, 0x0($t4)
    ctx->pc = 0x50e910u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x50e914: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x50e914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x50e918: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x50e918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x50e91c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x50e91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50e920: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x50e920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x50e924: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50e924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50e928: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50e928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50e92c: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x50e92cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x50e930: 0x85820000  lh          $v0, 0x0($t4)
    ctx->pc = 0x50e930u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x50e934: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x50e934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x50e938: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x50e938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x50e93c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x50e93cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x50e940: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x50e940u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50e944: 0x24420176  addiu       $v0, $v0, 0x176
    ctx->pc = 0x50e944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 374));
    // 0x50e948: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x50e948u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50e94c: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x50e94cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x50e950: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x50e950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x50e954: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x50e954u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x50e958: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x50e958u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x50e95c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x50e95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x50e960: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x50e960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x50e964: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50e964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50e968: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50e968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50e96c: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x50e96cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x50e970: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50e970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50e974: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x50e974u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x50e978: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50e978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50e97c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x50e97cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x50e980: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x50e980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x50e984: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50e984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50e988: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x50e988u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x50e98c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50e98cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50e990: 0x95820000  lhu         $v0, 0x0($t4)
    ctx->pc = 0x50e990u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x50e994: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x50e994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x50e998: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x50e998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x50e99c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50e99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50e9a0: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x50e9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x50e9a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50e9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50e9a8: 0x85820000  lh          $v0, 0x0($t4)
    ctx->pc = 0x50e9a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x50e9ac: 0x244201f4  addiu       $v0, $v0, 0x1F4
    ctx->pc = 0x50e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 500));
    // 0x50e9b0: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x50e9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x50e9b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50e9b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50e9b8: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x50e9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
    // 0x50e9bc: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x50e9bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x50e9c0: 0x144b0007  bne         $v0, $t3, . + 4 + (0x7 << 2)
    ctx->pc = 0x50E9C0u;
    {
        const bool branch_taken_0x50e9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        ctx->pc = 0x50E9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50E9C0u;
        // 0x50e9c4: 0x25a400c8  addiu       $a0, $t5, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e9c0) {
            ctx->pc = 0x50E9E0u;
            goto label_50e9e0;
        }
    }
    ctx->pc = 0x50E9C8u;
    // 0x50e9c8: 0x85820000  lh          $v0, 0x0($t4)
    ctx->pc = 0x50e9c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x50e9cc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50e9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50e9d0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x50e9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x50e9d4: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x50e9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x50e9d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50e9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50e9dc: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x50e9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
label_50e9e0:
    // 0x50e9e0: 0x95830000  lhu         $v1, 0x0($t4)
    ctx->pc = 0x50e9e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x50e9e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x50e9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x50e9e8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x50e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x50e9ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50e9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50e9f0: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x50e9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x50e9f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50e9f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50e9f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x50e9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x50e9fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50e9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50ea00: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x50ea00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x50ea04: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x50ea04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x50ea08: 0x3e00008  jr          $ra
    ctx->pc = 0x50EA08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50EA08u;
        // 0x50ea0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50EA08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50EA10u;
label_50ea10:
    // 0x50ea10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x50ea10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x50ea14: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50ea18: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x50ea18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x50ea1c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x50ea1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50ea20: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x50ea20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x50ea24: 0x244ac688  addiu       $t2, $v0, -0x3978
    ctx->pc = 0x50ea24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952584));
    // 0x50ea28: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x50ea28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x50ea2c: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x50ea2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x50ea30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x50ea30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x50ea34: 0x2488c684  addiu       $t0, $a0, -0x397C
    ctx->pc = 0x50ea34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952580));
    // 0x50ea38: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x50ea38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x50ea3c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x50ea3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x50ea40: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x50ea40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x50ea44: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x50ea44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x50ea48: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x50ea48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x50ea4c: 0x2489c680  addiu       $t1, $a0, -0x3980
    ctx->pc = 0x50ea4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952576));
    // 0x50ea50: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x50ea50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x50ea54: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x50ea54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x50ea58: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x50ea58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x50ea5c: 0x8e6300d0  lw          $v1, 0xD0($s3)
    ctx->pc = 0x50ea5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
    // 0x50ea60: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x50ea60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8EC688u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC688u, _value); } while (0);
    // 0x50ea64: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x50ea64u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC684u));
    // 0x50ea68: 0x866200d4  lh          $v0, 0xD4($s3)
    ctx->pc = 0x50ea68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 212)));
    // 0x50ea6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50ea6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50ea70: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x50ea70u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x8EC680u));
    // 0x50ea74: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x50ea74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x50ea78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50ea78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50ea7c: 0x3c020090  lui         $v0, 0x90
    ctx->pc = 0x50ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)144 << 16));
    // 0x50ea80: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x50ea80u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x50ea84: 0x2445f080  addiu       $a1, $v0, -0xF80
    ctx->pc = 0x50ea84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963328));
    // 0x50ea88: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x50ea88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x50ea8c: 0x866200c4  lh          $v0, 0xC4($s3)
    ctx->pc = 0x50ea8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 196)));
    // 0x50ea90: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x50ea90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8FF0D0u));
    // 0x50ea94: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x50ea94u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x50ea98: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x50ea98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x50ea9c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x50ea9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x50eaa0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x50eaa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x50eaa4: 0x8cb00054  lw          $s0, 0x54($a1)
    ctx->pc = 0x50eaa4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x50eaa8: 0x4c00045  bltz        $a2, . + 4 + (0x45 << 2)
    ctx->pc = 0x50EAA8u;
    {
        const bool branch_taken_0x50eaa8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x50EAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50EAA8u;
        // 0x50eaac: 0xad240000  sw          $a0, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50eaa8) {
            ctx->pc = 0x50EBC0u;
            goto label_50ebc0;
        }
    }
    ctx->pc = 0x50EAB0u;
    // 0x50eab0: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x50eab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x50eab4: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x50eab4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50eab8: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x50eab8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50eabc: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x50eabcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50eac0: 0x267e00c8  addiu       $fp, $s3, 0xC8
    ctx->pc = 0x50eac0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 200));
    // 0x50eac4: 0x267700ce  addiu       $s7, $s3, 0xCE
    ctx->pc = 0x50eac4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 206));
    // 0x50eac8: 0x2492c678  addiu       $s2, $a0, -0x3988
    ctx->pc = 0x50eac8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952568));
    // 0x50eacc: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x50eaccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
label_50ead0:
    // 0x50ead0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x50ead0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50ead4: 0xc14481c  jal         func_512070
    ctx->pc = 0x50EAD4u;
    SET_GPR_U32(ctx, 31, 0x50EADCu);
    ctx->pc = 0x50EAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50EAD4u;
    // 0x50ead8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512070u, 0x50EAD4u, 0x50EADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50EADCu;
label_50eadc:
    // 0x50eadc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50eadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x50eae0: 0x14430039  bne         $v0, $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x50EAE0u;
    {
        const bool branch_taken_0x50eae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x50EAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50EAE0u;
        // 0x50eae4: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50eae0) {
            ctx->pc = 0x50EBC8u;
            goto label_50ebc8;
        }
    }
    ctx->pc = 0x50EAE8u;
    // 0x50eae8: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x50eae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x50eaec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x50eaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50eaf0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x50eaf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x50eaf4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x50eaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x50eaf8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50eaf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50eafc: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x50eafcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x50eb00: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x50eb00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x50eb04: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x50eb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x50eb08: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x50eb08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x50eb0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50eb0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50eb10: 0x866400d6  lh          $a0, 0xD6($s3)
    ctx->pc = 0x50eb10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 214)));
    // 0x50eb14: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x50eb14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50eb18: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x50eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x50eb1c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x50eb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x50eb20: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50eb20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50eb24: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x50eb24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x50eb28: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x50eb28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x50eb2c: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x50eb2cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x50eb30: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x50eb30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x50eb34: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x50eb34u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x50eb38: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x50eb38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x50eb3c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x50eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x50eb40: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x50eb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x50eb44: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x50eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x50eb48: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x50eb48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x50eb4c: 0x966300cc  lhu         $v1, 0xCC($s3)
    ctx->pc = 0x50eb4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 204)));
    // 0x50eb50: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x50eb50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x50eb54: 0x96e20000  lhu         $v0, 0x0($s7)
    ctx->pc = 0x50eb54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x50eb58: 0xa605000c  sh          $a1, 0xC($s0)
    ctx->pc = 0x50eb58u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 5));
    // 0x50eb5c: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x50eb5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x50eb60: 0xa600000e  sh          $zero, 0xE($s0)
    ctx->pc = 0x50eb60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 0));
    // 0x50eb64: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x50eb64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x50eb68: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x50eb68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x50eb6c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x50eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x50eb70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x50eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x50eb74: 0x8ec50000  lw          $a1, 0x0($s6)
    ctx->pc = 0x50eb74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x50eb78: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x50eb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x50eb7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50eb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50eb80: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50eb80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50eb84: 0x84a60000  lh          $a2, 0x0($a1)
    ctx->pc = 0x50eb84u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x50eb88: 0x86a40000  lh          $a0, 0x0($s5)
    ctx->pc = 0x50eb88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x50eb8c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x50eb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x50eb90: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x50eb90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x50eb94: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x50eb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x50eb98: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x50eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x50eb9c: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x50eb9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x50eba0: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x50eba0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x50eba4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x50eba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x50eba8: 0xaec50000  sw          $a1, 0x0($s6)
    ctx->pc = 0x50eba8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
    // 0x50ebac: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x50ebacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x50ebb0: 0x461ffc7  bgez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x50EBB0u;
    {
        const bool branch_taken_0x50ebb0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x50EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50EBB0u;
        // 0x50ebb4: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ebb0) {
            ctx->pc = 0x50EAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_50ead0;
        }
    }
    ctx->pc = 0x50EBB8u;
    // 0x50ebb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x50EBB8u;
    {
        const bool branch_taken_0x50ebb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x50EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50EBB8u;
        // 0x50ebbc: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50ebb8) {
            ctx->pc = 0x50EBCCu;
            goto label_50ebcc;
        }
    }
    ctx->pc = 0x50EBC0u;
label_50ebc0:
    // 0x50ebc0: 0x267e00c8  addiu       $fp, $s3, 0xC8
    ctx->pc = 0x50ebc0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 19), 200));
    // 0x50ebc4: 0x267700ce  addiu       $s7, $s3, 0xCE
    ctx->pc = 0x50ebc4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 206));
label_50ebc8:
    // 0x50ebc8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x50ebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_50ebcc:
    // 0x50ebcc: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x50ebccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x50ebd0: 0x2482f080  addiu       $v0, $a0, -0xF80
    ctx->pc = 0x50ebd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963328));
    // 0x50ebd4: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x50ebd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x50ebd8: 0xac500054  sw          $s0, 0x54($v0)
    ctx->pc = 0x50ebd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x8FF0D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8FF0D4u, _value); } while (0);
    // 0x50ebdc: 0x3c10008f  lui         $s0, 0x8F
    ctx->pc = 0x50ebdcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)143 << 16));
    // 0x50ebe0: 0xac430050  sw          $v1, 0x50($v0)
    ctx->pc = 0x50ebe0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8FF0D0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8FF0D0u, _value); } while (0);
    // 0x50ebe4: 0x2610c67c  addiu       $s0, $s0, -0x3984
    ctx->pc = 0x50ebe4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952572));
    // 0x50ebe8: 0x2491c678  addiu       $s1, $a0, -0x3988
    ctx->pc = 0x50ebe8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952568));
    // 0x50ebec: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x50ebecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x50ebf0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x50ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x50ebf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x50ebf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50ebf8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x50ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC67Cu));
    // 0x50ebfc: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x50ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x50ec00: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x50ec00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8EC678u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC678u, _value); } while (0);
    // 0x50ec04: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50ec04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50ec08: 0x86e20000  lh          $v0, 0x0($s7)
    ctx->pc = 0x50ec08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x50ec0c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50ec0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50ec10: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50ec10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50ec14: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x50ec18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50ec18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50ec1c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x50ec1cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50ec20: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x50ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50ec24: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x50ec24u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x50ec28: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x50ec28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x50ec2c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x50ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x50ec30: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x50ec30u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x50ec34: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50ec34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50ec38: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50ec38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50ec3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50ec3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x50ec40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50ec40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50ec44: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x50ec44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50ec48: 0x21023  negu        $v0, $v0
    ctx->pc = 0x50ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x50ec4c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50ec4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50ec50: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50ec50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50ec54: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x50ec54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x50ec58: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x50ec58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x50ec5c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x50ec5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50ec60: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x50ec60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x50ec64: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x50ec64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x50ec68: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x50EC68u;
    SET_GPR_U32(ctx, 31, 0x50EC70u);
    ctx->pc = 0x50EC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50EC68u;
    // 0x50ec6c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x50EC68u, 0x50EC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50EC70u;
label_50ec70:
    // 0x50ec70: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x50ec70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x50ec74: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x50ec74u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50ec78: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x50ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x50ec7c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x50EC7Cu;
    {
        const bool branch_taken_0x50ec7c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x50ec7c) {
            ctx->pc = 0x50EC8Cu;
            goto label_50ec8c;
        }
    }
    ctx->pc = 0x50EC84u;
    // 0x50ec84: 0xc144af2  jal         func_512BC8
    ctx->pc = 0x50EC84u;
    SET_GPR_U32(ctx, 31, 0x50EC8Cu);
    ctx->pc = 0x50EC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50EC84u;
    // 0x50ec88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512BC8u, 0x50EC84u, 0x50EC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50EC8Cu;
label_50ec8c:
    // 0x50ec8c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x50EC8Cu;
    SET_GPR_U32(ctx, 31, 0x50EC94u);
    ctx->pc = 0x50EC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50EC8Cu;
    // 0x50ec90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x50EC8Cu, 0x50EC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50EC94u;
label_50ec94:
    // 0x50ec94: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x50ec94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x50ec98: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x50ec98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50ec9c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x50ec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x50eca0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x50eca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x50eca4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x50eca4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x50eca8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x50eca8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x50ecac: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x50ecacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x50ecb0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x50ecb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x50ecb4: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x50ecb4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x50ecb8: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x50ecb8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x50ecbc: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x50ecbcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x50ecc0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x50ecc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x50ecc4: 0x3e00008  jr          $ra
    ctx->pc = 0x50ECC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50ECC4u;
        // 0x50ecc8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50ECC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50ECCCu;
    // 0x50eccc: 0x0  nop
    ctx->pc = 0x50ecccu;
    // NOP
    ctx->pc = 0x50ecd0u;
}
