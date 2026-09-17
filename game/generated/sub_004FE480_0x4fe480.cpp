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

// Function: sub_004FE480
// Address: 0x4fe480 - 0x4fe8d0
void sub_004FE480_0x4fe480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FE480_0x4fe480");
#endif

    switch (ctx->pc) {
        case 0x4fe8bcu: goto label_4fe8bc;
        default: break;
    }

    ctx->pc = 0x4fe480u;

label_4fe480:
    // 0x4fe480: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4fe480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4fe484: 0x248d0002  addiu       $t5, $a0, 0x2
    ctx->pc = 0x4fe484u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x4fe488: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4fe488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4fe48c: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x4fe48cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x4fe490: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4fe490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4fe494: 0x2491000a  addiu       $s1, $a0, 0xA
    ctx->pc = 0x4fe494u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 10));
    // 0x4fe498: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4fe498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4fe49c: 0x24b2000c  addiu       $s2, $a1, 0xC
    ctx->pc = 0x4fe49cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x4fe4a0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4fe4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4fe4a4: 0x24b30006  addiu       $s3, $a1, 0x6
    ctx->pc = 0x4fe4a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
    // 0x4fe4a8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4fe4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4fe4ac: 0x2494000c  addiu       $s4, $a0, 0xC
    ctx->pc = 0x4fe4acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x4fe4b0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4fe4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4fe4b4: 0x2495000e  addiu       $s5, $a0, 0xE
    ctx->pc = 0x4fe4b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 4), 14));
    // 0x4fe4b8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4fe4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4fe4bc: 0x24960010  addiu       $s6, $a0, 0x10
    ctx->pc = 0x4fe4bcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4fe4c0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4fe4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4fe4c4: 0x24b70008  addiu       $s7, $a1, 0x8
    ctx->pc = 0x4fe4c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x4fe4c8: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x4fe4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x4fe4cc: 0x24be000a  addiu       $fp, $a1, 0xA
    ctx->pc = 0x4fe4ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x4fe4d0: 0x248e0004  addiu       $t6, $a0, 0x4
    ctx->pc = 0x4fe4d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x4fe4d4: 0x24b80002  addiu       $t8, $a1, 0x2
    ctx->pc = 0x4fe4d4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4fe4d8: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4fe4d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4fe4dc: 0x24b9000e  addiu       $t9, $a1, 0xE
    ctx->pc = 0x4fe4dcu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 5), 14));
    // 0x4fe4e0: 0x84870000  lh          $a3, 0x0($a0)
    ctx->pc = 0x4fe4e0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4fe4e4: 0x248f0006  addiu       $t7, $a0, 0x6
    ctx->pc = 0x4fe4e4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), 6));
    // 0x4fe4e8: 0x86690000  lh          $t1, 0x0($s3)
    ctx->pc = 0x4fe4e8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4fe4ec: 0x85a80000  lh          $t0, 0x0($t5)
    ctx->pc = 0x4fe4ecu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4fe4f0: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x4fe4f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4fe4f4: 0x85c30000  lh          $v1, 0x0($t6)
    ctx->pc = 0x4fe4f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4fe4f8: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4fe4f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4fe4fc: 0x1094018  mult        $t0, $t0, $t1
    ctx->pc = 0x4fe4fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4fe500: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x4fe500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4fe504: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x4fe504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x4fe508: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4fe508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4fe50c: 0x24eb0fff  addiu       $t3, $a3, 0xFFF
    ctx->pc = 0x4fe50cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 4095));
    // 0x4fe510: 0x28e90000  slti        $t1, $a3, 0x0
    ctx->pc = 0x4fe510u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe514: 0x250a0fff  addiu       $t2, $t0, 0xFFF
    ctx->pc = 0x4fe514u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 4095));
    // 0x4fe518: 0x29020000  slti        $v0, $t0, 0x0
    ctx->pc = 0x4fe518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe51c: 0x169380b  movn        $a3, $t3, $t1
    ctx->pc = 0x4fe51cu;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 11));
    // 0x4fe520: 0x142400b  movn        $t0, $t2, $v0
    ctx->pc = 0x4fe520u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 10));
    // 0x4fe524: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x4fe524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe528: 0x24690fff  addiu       $t1, $v1, 0xFFF
    ctx->pc = 0x4fe528u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4095));
    // 0x4fe52c: 0x84303  sra         $t0, $t0, 12
    ctx->pc = 0x4fe52cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 12));
    // 0x4fe530: 0x122180b  movn        $v1, $t1, $v0
    ctx->pc = 0x4fe530u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 9));
    // 0x4fe534: 0x73b03  sra         $a3, $a3, 12
    ctx->pc = 0x4fe534u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 12));
    // 0x4fe538: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4fe538u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4fe53c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x4fe53cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x4fe540: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x4fe540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4fe544: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x4fe544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x4fe548: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x4fe548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x4fe54c: 0xa4c70000  sh          $a3, 0x0($a2)
    ctx->pc = 0x4fe54cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x4fe550: 0x87020000  lh          $v0, 0x0($t8)
    ctx->pc = 0x4fe550u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4fe554: 0x86ea0000  lh          $t2, 0x0($s7)
    ctx->pc = 0x4fe554u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4fe558: 0x84880000  lh          $t0, 0x0($a0)
    ctx->pc = 0x4fe558u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4fe55c: 0x85a90000  lh          $t1, 0x0($t5)
    ctx->pc = 0x4fe55cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4fe560: 0x87230000  lh          $v1, 0x0($t9)
    ctx->pc = 0x4fe560u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4fe564: 0x1024018  mult        $t0, $t0, $v0
    ctx->pc = 0x4fe564u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4fe568: 0x85c70000  lh          $a3, 0x0($t6)
    ctx->pc = 0x4fe568u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4fe56c: 0x12a4818  mult        $t1, $t1, $t2
    ctx->pc = 0x4fe56cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x4fe570: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x4fe570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fe574: 0x70e33818  mult1       $a3, $a3, $v1
    ctx->pc = 0x4fe574u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4fe578: 0x250c0fff  addiu       $t4, $t0, 0xFFF
    ctx->pc = 0x4fe578u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 4095));
    // 0x4fe57c: 0x290a0000  slti        $t2, $t0, 0x0
    ctx->pc = 0x4fe57cu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe580: 0x252b0fff  addiu       $t3, $t1, 0xFFF
    ctx->pc = 0x4fe580u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 9), 4095));
    // 0x4fe584: 0x29230000  slti        $v1, $t1, 0x0
    ctx->pc = 0x4fe584u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe588: 0x18a400b  movn        $t0, $t4, $t2
    ctx->pc = 0x4fe588u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 12));
    // 0x4fe58c: 0x163480b  movn        $t1, $t3, $v1
    ctx->pc = 0x4fe58cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 11));
    // 0x4fe590: 0x24ea0fff  addiu       $t2, $a3, 0xFFF
    ctx->pc = 0x4fe590u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 4095));
    // 0x4fe594: 0x28e30000  slti        $v1, $a3, 0x0
    ctx->pc = 0x4fe594u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe598: 0x143380b  movn        $a3, $t2, $v1
    ctx->pc = 0x4fe598u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 10));
    // 0x4fe59c: 0x94b03  sra         $t1, $t1, 12
    ctx->pc = 0x4fe59cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 12));
    // 0x4fe5a0: 0x84303  sra         $t0, $t0, 12
    ctx->pc = 0x4fe5a0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 12));
    // 0x4fe5a4: 0x73b03  sra         $a3, $a3, 12
    ctx->pc = 0x4fe5a4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 12));
    // 0x4fe5a8: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x4fe5a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x4fe5ac: 0x1074021  addu        $t0, $t0, $a3
    ctx->pc = 0x4fe5acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x4fe5b0: 0xa4c80002  sh          $t0, 0x2($a2)
    ctx->pc = 0x4fe5b0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x4fe5b4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4fe5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fe5b8: 0x84870000  lh          $a3, 0x0($a0)
    ctx->pc = 0x4fe5b8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4fe5bc: 0x84680000  lh          $t0, 0x0($v1)
    ctx->pc = 0x4fe5bcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fe5c0: 0x87ca0000  lh          $t2, 0x0($fp)
    ctx->pc = 0x4fe5c0u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4fe5c4: 0xe83818  mult        $a3, $a3, $t0
    ctx->pc = 0x4fe5c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4fe5c8: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x4fe5c8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4fe5cc: 0x85a90000  lh          $t1, 0x0($t5)
    ctx->pc = 0x4fe5ccu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4fe5d0: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4fe5d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4fe5d4: 0x85c40000  lh          $a0, 0x0($t6)
    ctx->pc = 0x4fe5d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4fe5d8: 0x12a4818  mult        $t1, $t1, $t2
    ctx->pc = 0x4fe5d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x4fe5dc: 0x24eb0fff  addiu       $t3, $a3, 0xFFF
    ctx->pc = 0x4fe5dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 4095));
    // 0x4fe5e0: 0x28e80000  slti        $t0, $a3, 0x0
    ctx->pc = 0x4fe5e0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe5e4: 0x70832018  mult1       $a0, $a0, $v1
    ctx->pc = 0x4fe5e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4fe5e8: 0x168380b  movn        $a3, $t3, $t0
    ctx->pc = 0x4fe5e8u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 11));
    // 0x4fe5ec: 0x73b03  sra         $a3, $a3, 12
    ctx->pc = 0x4fe5ecu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 12));
    // 0x4fe5f0: 0x252a0fff  addiu       $t2, $t1, 0xFFF
    ctx->pc = 0x4fe5f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 9), 4095));
    // 0x4fe5f4: 0x29230000  slti        $v1, $t1, 0x0
    ctx->pc = 0x4fe5f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe5f8: 0x143480b  movn        $t1, $t2, $v1
    ctx->pc = 0x4fe5f8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 10));
    // 0x4fe5fc: 0x24880fff  addiu       $t0, $a0, 0xFFF
    ctx->pc = 0x4fe5fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4095));
    // 0x4fe600: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x4fe600u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe604: 0x103200b  movn        $a0, $t0, $v1
    ctx->pc = 0x4fe604u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 8));
    // 0x4fe608: 0x94b03  sra         $t1, $t1, 12
    ctx->pc = 0x4fe608u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 12));
    // 0x4fe60c: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x4fe60cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x4fe610: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x4fe610u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x4fe614: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x4fe614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x4fe618: 0xa4c70004  sh          $a3, 0x4($a2)
    ctx->pc = 0x4fe618u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x4fe61c: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4fe61cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4fe620: 0x85e40000  lh          $a0, 0x0($t7)
    ctx->pc = 0x4fe620u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4fe624: 0x86690000  lh          $t1, 0x0($s3)
    ctx->pc = 0x4fe624u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4fe628: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x4fe628u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fe62c: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x4fe62cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4fe630: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x4fe630u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fe634: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4fe634u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4fe638: 0x1094018  mult        $t0, $t0, $t1
    ctx->pc = 0x4fe638u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4fe63c: 0x70e33818  mult1       $a3, $a3, $v1
    ctx->pc = 0x4fe63cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4fe640: 0x248b0fff  addiu       $t3, $a0, 0xFFF
    ctx->pc = 0x4fe640u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4095));
    // 0x4fe644: 0x28890000  slti        $t1, $a0, 0x0
    ctx->pc = 0x4fe644u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe648: 0x250a0fff  addiu       $t2, $t0, 0xFFF
    ctx->pc = 0x4fe648u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 4095));
    // 0x4fe64c: 0x29030000  slti        $v1, $t0, 0x0
    ctx->pc = 0x4fe64cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe650: 0x169200b  movn        $a0, $t3, $t1
    ctx->pc = 0x4fe650u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 11));
    // 0x4fe654: 0x143400b  movn        $t0, $t2, $v1
    ctx->pc = 0x4fe654u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 10));
    // 0x4fe658: 0x24e90fff  addiu       $t1, $a3, 0xFFF
    ctx->pc = 0x4fe658u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4095));
    // 0x4fe65c: 0x28e30000  slti        $v1, $a3, 0x0
    ctx->pc = 0x4fe65cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe660: 0x123380b  movn        $a3, $t1, $v1
    ctx->pc = 0x4fe660u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 9));
    // 0x4fe664: 0x84303  sra         $t0, $t0, 12
    ctx->pc = 0x4fe664u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 12));
    // 0x4fe668: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x4fe668u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x4fe66c: 0x73b03  sra         $a3, $a3, 12
    ctx->pc = 0x4fe66cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 12));
    // 0x4fe670: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x4fe670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x4fe674: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x4fe674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x4fe678: 0xa4c40006  sh          $a0, 0x6($a2)
    ctx->pc = 0x4fe678u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 4));
    // 0x4fe67c: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x4fe67cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4fe680: 0x85e70000  lh          $a3, 0x0($t7)
    ctx->pc = 0x4fe680u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4fe684: 0x86e90000  lh          $t1, 0x0($s7)
    ctx->pc = 0x4fe684u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4fe688: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x4fe688u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fe68c: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x4fe68cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4fe690: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x4fe690u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fe694: 0x87230000  lh          $v1, 0x0($t9)
    ctx->pc = 0x4fe694u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4fe698: 0x1094018  mult        $t0, $t0, $t1
    ctx->pc = 0x4fe698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4fe69c: 0x70832018  mult1       $a0, $a0, $v1
    ctx->pc = 0x4fe69cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4fe6a0: 0x24eb0fff  addiu       $t3, $a3, 0xFFF
    ctx->pc = 0x4fe6a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 4095));
    // 0x4fe6a4: 0x28e90000  slti        $t1, $a3, 0x0
    ctx->pc = 0x4fe6a4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe6a8: 0x250a0fff  addiu       $t2, $t0, 0xFFF
    ctx->pc = 0x4fe6a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 4095));
    // 0x4fe6ac: 0x29030000  slti        $v1, $t0, 0x0
    ctx->pc = 0x4fe6acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe6b0: 0x169380b  movn        $a3, $t3, $t1
    ctx->pc = 0x4fe6b0u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 11));
    // 0x4fe6b4: 0x143400b  movn        $t0, $t2, $v1
    ctx->pc = 0x4fe6b4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 10));
    // 0x4fe6b8: 0x24890fff  addiu       $t1, $a0, 0xFFF
    ctx->pc = 0x4fe6b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4095));
    // 0x4fe6bc: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x4fe6bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe6c0: 0x123200b  movn        $a0, $t1, $v1
    ctx->pc = 0x4fe6c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 9));
    // 0x4fe6c4: 0x84303  sra         $t0, $t0, 12
    ctx->pc = 0x4fe6c4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 12));
    // 0x4fe6c8: 0x73b03  sra         $a3, $a3, 12
    ctx->pc = 0x4fe6c8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 12));
    // 0x4fe6cc: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x4fe6ccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x4fe6d0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x4fe6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x4fe6d4: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x4fe6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x4fe6d8: 0xa4c70008  sh          $a3, 0x8($a2)
    ctx->pc = 0x4fe6d8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 7));
    // 0x4fe6dc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4fe6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fe6e0: 0x85e40000  lh          $a0, 0x0($t7)
    ctx->pc = 0x4fe6e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x4fe6e4: 0x84690000  lh          $t1, 0x0($v1)
    ctx->pc = 0x4fe6e4u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fe6e8: 0x87ca0000  lh          $t2, 0x0($fp)
    ctx->pc = 0x4fe6e8u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4fe6ec: 0x892018  mult        $a0, $a0, $t1
    ctx->pc = 0x4fe6ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4fe6f0: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x4fe6f0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4fe6f4: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x4fe6f4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4fe6f8: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x4fe6f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4fe6fc: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x4fe6fcu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4fe700: 0x10a4018  mult        $t0, $t0, $t2
    ctx->pc = 0x4fe700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x4fe704: 0x248b0fff  addiu       $t3, $a0, 0xFFF
    ctx->pc = 0x4fe704u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4095));
    // 0x4fe708: 0x28890000  slti        $t1, $a0, 0x0
    ctx->pc = 0x4fe708u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe70c: 0x70e33818  mult1       $a3, $a3, $v1
    ctx->pc = 0x4fe70cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4fe710: 0x169200b  movn        $a0, $t3, $t1
    ctx->pc = 0x4fe710u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 11));
    // 0x4fe714: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x4fe714u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x4fe718: 0x250a0fff  addiu       $t2, $t0, 0xFFF
    ctx->pc = 0x4fe718u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 4095));
    // 0x4fe71c: 0x29030000  slti        $v1, $t0, 0x0
    ctx->pc = 0x4fe71cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe720: 0x143400b  movn        $t0, $t2, $v1
    ctx->pc = 0x4fe720u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 10));
    // 0x4fe724: 0x24e90fff  addiu       $t1, $a3, 0xFFF
    ctx->pc = 0x4fe724u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4095));
    // 0x4fe728: 0x28e30000  slti        $v1, $a3, 0x0
    ctx->pc = 0x4fe728u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe72c: 0x123380b  movn        $a3, $t1, $v1
    ctx->pc = 0x4fe72cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 9));
    // 0x4fe730: 0x84303  sra         $t0, $t0, 12
    ctx->pc = 0x4fe730u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 12));
    // 0x4fe734: 0x73b03  sra         $a3, $a3, 12
    ctx->pc = 0x4fe734u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 12));
    // 0x4fe738: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x4fe738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x4fe73c: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x4fe73cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x4fe740: 0xa4c4000a  sh          $a0, 0xA($a2)
    ctx->pc = 0x4fe740u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x4fe744: 0x84a80000  lh          $t0, 0x0($a1)
    ctx->pc = 0x4fe744u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4fe748: 0x86690000  lh          $t1, 0x0($s3)
    ctx->pc = 0x4fe748u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4fe74c: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4fe74cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4fe750: 0x86a70000  lh          $a3, 0x0($s5)
    ctx->pc = 0x4fe750u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4fe754: 0x86440000  lh          $a0, 0x0($s2)
    ctx->pc = 0x4fe754u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4fe758: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x4fe758u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4fe75c: 0x86c50000  lh          $a1, 0x0($s6)
    ctx->pc = 0x4fe75cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4fe760: 0xe93818  mult        $a3, $a3, $t1
    ctx->pc = 0x4fe760u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4fe764: 0x70a42818  mult1       $a1, $a1, $a0
    ctx->pc = 0x4fe764u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4fe768: 0x246a0fff  addiu       $t2, $v1, 0xFFF
    ctx->pc = 0x4fe768u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4095));
    // 0x4fe76c: 0x28680000  slti        $t0, $v1, 0x0
    ctx->pc = 0x4fe76cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe770: 0x24e90fff  addiu       $t1, $a3, 0xFFF
    ctx->pc = 0x4fe770u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4095));
    // 0x4fe774: 0x28e40000  slti        $a0, $a3, 0x0
    ctx->pc = 0x4fe774u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe778: 0x148180b  movn        $v1, $t2, $t0
    ctx->pc = 0x4fe778u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 10));
    // 0x4fe77c: 0x124380b  movn        $a3, $t1, $a0
    ctx->pc = 0x4fe77cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 9));
    // 0x4fe780: 0x24a80fff  addiu       $t0, $a1, 0xFFF
    ctx->pc = 0x4fe780u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4095));
    // 0x4fe784: 0x28a40000  slti        $a0, $a1, 0x0
    ctx->pc = 0x4fe784u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe788: 0x104280b  movn        $a1, $t0, $a0
    ctx->pc = 0x4fe788u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
    // 0x4fe78c: 0x73b03  sra         $a3, $a3, 12
    ctx->pc = 0x4fe78cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 12));
    // 0x4fe790: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4fe790u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4fe794: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x4fe794u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x4fe798: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4fe798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4fe79c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4fe79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4fe7a0: 0xa4c3000c  sh          $v1, 0xC($a2)
    ctx->pc = 0x4fe7a0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4fe7a4: 0x87080000  lh          $t0, 0x0($t8)
    ctx->pc = 0x4fe7a4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4fe7a8: 0x86e90000  lh          $t1, 0x0($s7)
    ctx->pc = 0x4fe7a8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4fe7ac: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4fe7acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4fe7b0: 0x86a70000  lh          $a3, 0x0($s5)
    ctx->pc = 0x4fe7b0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4fe7b4: 0x87240000  lh          $a0, 0x0($t9)
    ctx->pc = 0x4fe7b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x4fe7b8: 0x681818  mult        $v1, $v1, $t0
    ctx->pc = 0x4fe7b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4fe7bc: 0x86c50000  lh          $a1, 0x0($s6)
    ctx->pc = 0x4fe7bcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4fe7c0: 0xe93818  mult        $a3, $a3, $t1
    ctx->pc = 0x4fe7c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4fe7c4: 0x70a42818  mult1       $a1, $a1, $a0
    ctx->pc = 0x4fe7c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4fe7c8: 0x246a0fff  addiu       $t2, $v1, 0xFFF
    ctx->pc = 0x4fe7c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4095));
    // 0x4fe7cc: 0x28680000  slti        $t0, $v1, 0x0
    ctx->pc = 0x4fe7ccu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe7d0: 0x24e90fff  addiu       $t1, $a3, 0xFFF
    ctx->pc = 0x4fe7d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4095));
    // 0x4fe7d4: 0x28e40000  slti        $a0, $a3, 0x0
    ctx->pc = 0x4fe7d4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe7d8: 0x148180b  movn        $v1, $t2, $t0
    ctx->pc = 0x4fe7d8u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 10));
    // 0x4fe7dc: 0x124380b  movn        $a3, $t1, $a0
    ctx->pc = 0x4fe7dcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 9));
    // 0x4fe7e0: 0x24a80fff  addiu       $t0, $a1, 0xFFF
    ctx->pc = 0x4fe7e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4095));
    // 0x4fe7e4: 0x28a40000  slti        $a0, $a1, 0x0
    ctx->pc = 0x4fe7e4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe7e8: 0x104280b  movn        $a1, $t0, $a0
    ctx->pc = 0x4fe7e8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
    // 0x4fe7ec: 0x73b03  sra         $a3, $a3, 12
    ctx->pc = 0x4fe7ecu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 12));
    // 0x4fe7f0: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x4fe7f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x4fe7f4: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x4fe7f4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x4fe7f8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4fe7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4fe7fc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4fe7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4fe800: 0xa4c3000e  sh          $v1, 0xE($a2)
    ctx->pc = 0x4fe800u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x4fe804: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x4fe804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fe808: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x4fe808u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4fe80c: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x4fe80cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4fe810: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x4fe810u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4fe814: 0x87c80000  lh          $t0, 0x0($fp)
    ctx->pc = 0x4fe814u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4fe818: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x4fe818u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4fe81c: 0x86a70000  lh          $a3, 0x0($s5)
    ctx->pc = 0x4fe81cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4fe820: 0x85230000  lh          $v1, 0x0($t1)
    ctx->pc = 0x4fe820u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4fe824: 0x86c50000  lh          $a1, 0x0($s6)
    ctx->pc = 0x4fe824u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4fe828: 0xe83818  mult        $a3, $a3, $t0
    ctx->pc = 0x4fe828u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x4fe82c: 0x248a0fff  addiu       $t2, $a0, 0xFFF
    ctx->pc = 0x4fe82cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 4095));
    // 0x4fe830: 0x28880000  slti        $t0, $a0, 0x0
    ctx->pc = 0x4fe830u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe834: 0x70a32818  mult1       $a1, $a1, $v1
    ctx->pc = 0x4fe834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4fe838: 0x148200b  movn        $a0, $t2, $t0
    ctx->pc = 0x4fe838u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 10));
    // 0x4fe83c: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x4fe83cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x4fe840: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4fe840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4fe844: 0x24e90fff  addiu       $t1, $a3, 0xFFF
    ctx->pc = 0x4fe844u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4095));
    // 0x4fe848: 0x28e30000  slti        $v1, $a3, 0x0
    ctx->pc = 0x4fe848u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe84c: 0x123380b  movn        $a3, $t1, $v1
    ctx->pc = 0x4fe84cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 9));
    // 0x4fe850: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4fe850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4fe854: 0x24a80fff  addiu       $t0, $a1, 0xFFF
    ctx->pc = 0x4fe854u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4095));
    // 0x4fe858: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x4fe858u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fe85c: 0x103280b  movn        $a1, $t0, $v1
    ctx->pc = 0x4fe85cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 8));
    // 0x4fe860: 0x73b03  sra         $a3, $a3, 12
    ctx->pc = 0x4fe860u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 12));
    // 0x4fe864: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x4fe864u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x4fe868: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x4fe868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x4fe86c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4fe86cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4fe870: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4fe870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4fe874: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4fe874u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4fe878: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4fe878u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4fe87c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4fe87cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4fe880: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4fe880u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4fe884: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4fe884u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4fe888: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x4fe888u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4fe88c: 0xa4c40010  sh          $a0, 0x10($a2)
    ctx->pc = 0x4fe88cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 16), (uint16_t)GPR_U32(ctx, 4));
    // 0x4fe890: 0x3e00008  jr          $ra
    ctx->pc = 0x4FE890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FE894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FE890u;
        // 0x4fe894: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FE890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FE898u;
    // 0x4fe898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4fe898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4fe89c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4fe89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4fe8a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4fe8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4fe8a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4fe8a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fe8a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4fe8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fe8ac: 0x8c44cfa0  lw          $a0, -0x3060($v0)
    ctx->pc = 0x4fe8acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x56CFA0u));
    // 0x4fe8b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4fe8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4fe8b4: 0xc13f920  jal         func_4FE480
    ctx->pc = 0x4FE8B4u;
    SET_GPR_U32(ctx, 31, 0x4FE8BCu);
    ctx->pc = 0x4FE8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4FE8B4u;
    // 0x4fe8b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4FE480u;
    goto label_4fe480;
    ctx->pc = 0x4FE8BCu;
label_4fe8bc:
    // 0x4fe8bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4fe8bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4fe8c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4fe8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4fe8c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4fe8c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4fe8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4FE8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FE8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FE8C8u;
        // 0x4fe8cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FE8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FE8D0u;
}
