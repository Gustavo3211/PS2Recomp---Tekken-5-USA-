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

// Function: sub_004FF7F0
// Address: 0x4ff7f0 - 0x4ff980
void sub_004FF7F0_0x4ff7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FF7F0_0x4ff7f0");
#endif

    switch (ctx->pc) {
        case 0x4ff96cu: goto label_4ff96c;
        default: break;
    }

    ctx->pc = 0x4ff7f0u;

label_4ff7f0:
    // 0x4ff7f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ff7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ff7f4: 0x24a90004  addiu       $t1, $a1, 0x4
    ctx->pc = 0x4ff7f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4ff7f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ff7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ff7fc: 0x2490000e  addiu       $s0, $a0, 0xE
    ctx->pc = 0x4ff7fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 14));
    // 0x4ff800: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4ff800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4ff804: 0x24910010  addiu       $s1, $a0, 0x10
    ctx->pc = 0x4ff804u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4ff808: 0x24880002  addiu       $t0, $a0, 0x2
    ctx->pc = 0x4ff808u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x4ff80c: 0x248b0004  addiu       $t3, $a0, 0x4
    ctx->pc = 0x4ff80cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4ff810: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4ff810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ff814: 0x248c0006  addiu       $t4, $a0, 0x6
    ctx->pc = 0x4ff814u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x4ff818: 0x84860000  lh          $a2, 0x0($a0)
    ctx->pc = 0x4ff818u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ff81c: 0x248d0008  addiu       $t5, $a0, 0x8
    ctx->pc = 0x4ff81cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x4ff820: 0x248e000a  addiu       $t6, $a0, 0xA
    ctx->pc = 0x4ff820u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x4ff824: 0x248f000c  addiu       $t7, $a0, 0xC
    ctx->pc = 0x4ff824u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x4ff828: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x4ff828u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4ff82c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4ff82cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff830: 0x24aa0008  addiu       $t2, $a1, 0x8
    ctx->pc = 0x4ff830u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x4ff834: 0x24c70fff  addiu       $a3, $a2, 0xFFF
    ctx->pc = 0x4ff834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4095));
    // 0x4ff838: 0x28c30000  slti        $v1, $a2, 0x0
    ctx->pc = 0x4ff838u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4ff83c: 0xe3300b  movn        $a2, $a3, $v1
    ctx->pc = 0x4ff83cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 7));
    // 0x4ff840: 0x63303  sra         $a2, $a2, 12
    ctx->pc = 0x4ff840u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 12));
    // 0x4ff844: 0xa4860000  sh          $a2, 0x0($a0)
    ctx->pc = 0x4ff844u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x4ff848: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x4ff848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ff84c: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4ff84cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ff850: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x4ff850u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ff854: 0x24660fff  addiu       $a2, $v1, 0xFFF
    ctx->pc = 0x4ff854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4095));
    // 0x4ff858: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x4ff858u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4ff85c: 0xc4180b  movn        $v1, $a2, $a0
    ctx->pc = 0x4ff85cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x4ff860: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4ff860u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4ff864: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x4ff864u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ff868: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4ff868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4ff86c: 0x85640000  lh          $a0, 0x0($t3)
    ctx->pc = 0x4ff86cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ff870: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x4ff870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4ff874: 0x24860fff  addiu       $a2, $a0, 0xFFF
    ctx->pc = 0x4ff874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4095));
    // 0x4ff878: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x4ff878u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4ff87c: 0xc3200b  movn        $a0, $a2, $v1
    ctx->pc = 0x4ff87cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x4ff880: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x4ff880u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x4ff884: 0xa5640000  sh          $a0, 0x0($t3)
    ctx->pc = 0x4ff884u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4ff888: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4ff888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ff88c: 0x85830000  lh          $v1, 0x0($t4)
    ctx->pc = 0x4ff88cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4ff890: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x4ff890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ff894: 0x24660fff  addiu       $a2, $v1, 0xFFF
    ctx->pc = 0x4ff894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4095));
    // 0x4ff898: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x4ff898u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4ff89c: 0xc4180b  movn        $v1, $a2, $a0
    ctx->pc = 0x4ff89cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x4ff8a0: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4ff8a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4ff8a4: 0xa5830000  sh          $v1, 0x0($t4)
    ctx->pc = 0x4ff8a4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ff8a8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4ff8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ff8ac: 0x85a40000  lh          $a0, 0x0($t5)
    ctx->pc = 0x4ff8acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4ff8b0: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x4ff8b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4ff8b4: 0x24860fff  addiu       $a2, $a0, 0xFFF
    ctx->pc = 0x4ff8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4095));
    // 0x4ff8b8: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x4ff8b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4ff8bc: 0xc3200b  movn        $a0, $a2, $v1
    ctx->pc = 0x4ff8bcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x4ff8c0: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x4ff8c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x4ff8c4: 0xa5a40000  sh          $a0, 0x0($t5)
    ctx->pc = 0x4ff8c4u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4ff8c8: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x4ff8c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4ff8cc: 0x85c30000  lh          $v1, 0x0($t6)
    ctx->pc = 0x4ff8ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4ff8d0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x4ff8d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ff8d4: 0x24660fff  addiu       $a2, $v1, 0xFFF
    ctx->pc = 0x4ff8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4095));
    // 0x4ff8d8: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x4ff8d8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4ff8dc: 0xc4180b  movn        $v1, $a2, $a0
    ctx->pc = 0x4ff8dcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x4ff8e0: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4ff8e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4ff8e4: 0xa5c30000  sh          $v1, 0x0($t6)
    ctx->pc = 0x4ff8e4u;
    WRITE16(ADD32(GPR_U32(ctx, 14), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ff8e8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x4ff8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4ff8ec: 0x85e30000  lh          $v1, 0x0($t7)
    ctx->pc = 0x4ff8ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4ff8f0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x4ff8f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ff8f4: 0x24650fff  addiu       $a1, $v1, 0xFFF
    ctx->pc = 0x4ff8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4095));
    // 0x4ff8f8: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x4ff8f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4ff8fc: 0xa4180b  movn        $v1, $a1, $a0
    ctx->pc = 0x4ff8fcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x4ff900: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4ff900u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4ff904: 0xa5e30000  sh          $v1, 0x0($t7)
    ctx->pc = 0x4ff904u;
    WRITE16(ADD32(GPR_U32(ctx, 15), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ff908: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x4ff908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ff90c: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4ff90cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ff910: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x4ff910u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ff914: 0x24650fff  addiu       $a1, $v1, 0xFFF
    ctx->pc = 0x4ff914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4095));
    // 0x4ff918: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x4ff918u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4ff91c: 0xa4180b  movn        $v1, $a1, $a0
    ctx->pc = 0x4ff91cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x4ff920: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4ff920u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4ff924: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x4ff924u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ff928: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ff928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ff92c: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x4ff92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4ff930: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4ff930u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ff934: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x4ff934u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4ff938: 0x24650fff  addiu       $a1, $v1, 0xFFF
    ctx->pc = 0x4ff938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4095));
    // 0x4ff93c: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x4ff93cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4ff940: 0xa4180b  movn        $v1, $a1, $a0
    ctx->pc = 0x4ff940u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x4ff944: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4ff944u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4ff948: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x4ff948u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ff94c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ff94cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ff950: 0x3e00008  jr          $ra
    ctx->pc = 0x4FF950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FF954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FF950u;
        // 0x4ff954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FF950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FF958u;
    // 0x4ff958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ff958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ff95c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ff95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ff960: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ff960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ff964: 0xc13fdfc  jal         func_4FF7F0
    ctx->pc = 0x4FF964u;
    SET_GPR_U32(ctx, 31, 0x4FF96Cu);
    ctx->pc = 0x4FF968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FF964u;
    // 0x4ff968: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FF7F0u;
    goto label_4ff7f0;
    ctx->pc = 0x4FF96Cu;
label_4ff96c:
    // 0x4ff96c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ff96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ff970: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ff970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ff974: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ff974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ff978: 0x3e00008  jr          $ra
    ctx->pc = 0x4FF978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FF97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FF978u;
        // 0x4ff97c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FF978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FF980u;
}
