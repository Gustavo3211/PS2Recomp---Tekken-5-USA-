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

// Function: sub_004C9288
// Address: 0x4c9288 - 0x4c9820
void sub_004C9288_0x4c9288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C9288_0x4c9288");
#endif

    switch (ctx->pc) {
        case 0x4c9340u: goto label_4c9340;
        case 0x4c9350u: goto label_4c9350;
        case 0x4c93f0u: goto label_4c93f0;
        case 0x4c9410u: goto label_4c9410;
        case 0x4c9430u: goto label_4c9430;
        default: break;
    }

    ctx->pc = 0x4c9288u;

    // 0x4c9288: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4c9288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4c928c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c928cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4c9290: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4c9290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4c9294: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x4c9294u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x4c9298: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4c9298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4c929c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4c929cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c92a0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4c92a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4c92a4: 0x3c17007f  lui         $s7, 0x7F
    ctx->pc = 0x4c92a4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)127 << 16));
    // 0x4c92a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c92a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c92ac: 0x26f40f24  addiu       $s4, $s7, 0xF24
    ctx->pc = 0x4c92acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 3876));
    // 0x4c92b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c92b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c92b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c92b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c92b8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c92b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c92bc: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x4c92bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x4c92c0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x4c92c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x4c92c4: 0x86c201b4  lh          $v0, 0x1B4($s6)
    ctx->pc = 0x4c92c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 436)));
    // 0x4c92c8: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4c92c8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F24u));
    // 0x4c92cc: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4c92ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4c92d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c92d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c92d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c92d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c92d8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4c92d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4c92dc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c92dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c92e0: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4c92e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c92e4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4c92e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4c92e8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c92e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c92ec: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c92ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c92f0: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4c92f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4c92f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c92f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c92f8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4c92f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4c92fc: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4c92fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c9300: 0x1040013a  beqz        $v0, . + 4 + (0x13A << 2)
    ctx->pc = 0x4C9300u;
    {
        const bool branch_taken_0x4c9300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9300u;
        // 0x4c9304: 0x3c120073  lui         $s2, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9300) {
            ctx->pc = 0x4C97ECu;
            goto label_4c97ec;
        }
    }
    ctx->pc = 0x4C9308u;
    // 0x4c9308: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c9308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c930c: 0x2652d680  addiu       $s2, $s2, -0x2980
    ctx->pc = 0x4c930cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294956672));
    // 0x4c9310: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4c9310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4c9314: 0x864224a0  lh          $v0, 0x24A0($s2)
    ctx->pc = 0x4c9314u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 9376)));
    // 0x4c9318: 0x24910f2c  addiu       $s1, $a0, 0xF2C
    ctx->pc = 0x4c9318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 3884));
    // 0x4c931c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c931cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4c9320: 0x3c1e007f  lui         $fp, 0x7F
    ctx->pc = 0x4c9320u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)127 << 16));
    // 0x4c9324: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4c9324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4c9328: 0x27d00f28  addiu       $s0, $fp, 0xF28
    ctx->pc = 0x4c9328u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 3880));
    // 0x4c932c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c932cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c9330: 0x24b30f38  addiu       $s3, $a1, 0xF38
    ctx->pc = 0x4c9330u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 3896));
    // 0x4c9334: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4c9334u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4c9338: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4C9338u;
    SET_GPR_U32(ctx, 31, 0x4C9340u);
    ctx->pc = 0x4C933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9338u;
    // 0x4c933c: 0x86840000  lh          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4C9338u, 0x4C9340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9340u;
label_4c9340:
    // 0x4c9340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c9340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c9344: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4c9344u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4c9348: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4C9348u;
    SET_GPR_U32(ctx, 31, 0x4C9350u);
    ctx->pc = 0x4C934Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9348u;
    // 0x4c934c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4C9348u, 0x4C9350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9350u;
label_4c9350:
    // 0x4c9350: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c9350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c9354: 0x24470f34  addiu       $a3, $v0, 0xF34
    ctx->pc = 0x4c9354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 3892));
    // 0x4c9358: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4c9358u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c935c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4c935cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0F34u));
    // 0x4c9360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c9360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c9364: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4c9364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c9368: 0xb52824  and         $a1, $a1, $s5
    ctx->pc = 0x4c9368u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 21));
    // 0x4c936c: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x4c936cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c9370: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4c9370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x4c9374: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c9374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c9378: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4c9378u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4c937c: 0x86c2015a  lh          $v0, 0x15A($s6)
    ctx->pc = 0x4c937cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 346)));
    // 0x4c9380: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x4c9380u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4c9384: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4c9384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4c9388: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c9388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c938c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4c938cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4c9390: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c9390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c9394: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4c9394u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c9398: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c9398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c939c: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x4c939cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
    // 0x4c93a0: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4c93a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4c93a4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c93a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c93a8: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4c93a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4c93ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c93acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c93b0: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4c93b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c93b4: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x4c93b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x4c93b8: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4c93b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4c93bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c93bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c93c0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4c93c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4c93c4: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4c93c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c93c8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x4c93c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4c93cc: 0x70c23018  mult1       $a2, $a2, $v0
    ctx->pc = 0x4c93ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4c93d0: 0x24a30007  addiu       $v1, $a1, 0x7
    ctx->pc = 0x4c93d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x4c93d4: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x4c93d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4c93d8: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x4c93d8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x4c93dc: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x4c93dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x4c93e0: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x4c93e0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
    // 0x4c93e4: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4c93e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4c93e8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4C93E8u;
    SET_GPR_U32(ctx, 31, 0x4C93F0u);
    ctx->pc = 0x4C93ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C93E8u;
    // 0x4c93ec: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4C93E8u, 0x4C93F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C93F0u;
label_4c93f0:
    // 0x4c93f0: 0x864324a2  lh          $v1, 0x24A2($s2)
    ctx->pc = 0x4c93f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 9378)));
    // 0x4c93f4: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4c93f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4c93f8: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x4c93f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x4c93fc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4c93fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4c9400: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4c9400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4c9404: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x4c9404u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x4c9408: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4C9408u;
    SET_GPR_U32(ctx, 31, 0x4C9410u);
    ctx->pc = 0x4C940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9408u;
    // 0x4c940c: 0x86840000  lh          $a0, 0x0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4C9408u, 0x4C9410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9410u;
label_4c9410:
    // 0x4c9410: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4c9410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c9414: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x4c9414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4c9418: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4c9418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4c941c: 0x751824  and         $v1, $v1, $s5
    ctx->pc = 0x4c941cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
    // 0x4c9420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c9420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c9424: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4c9424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4c9428: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4C9428u;
    SET_GPR_U32(ctx, 31, 0x4C9430u);
    ctx->pc = 0x4C942Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9428u;
    // 0x4c942c: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4C9428u, 0x4C9430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C9430u;
label_4c9430:
    // 0x4c9430: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4c9430u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4c9434: 0x25880f30  addiu       $t0, $t4, 0xF30
    ctx->pc = 0x4c9434u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 12), 3888));
    // 0x4c9438: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4c9438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c943c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4c943cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F30u));
    // 0x4c9440: 0x26ca0124  addiu       $t2, $s6, 0x124
    ctx->pc = 0x4c9440u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), 292));
    // 0x4c9444: 0x30c4ffff  andi        $a0, $a2, 0xFFFF
    ctx->pc = 0x4c9444u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x4c9448: 0x86270000  lh          $a3, 0x0($s1)
    ctx->pc = 0x4c9448u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c944c: 0x751824  and         $v1, $v1, $s5
    ctx->pc = 0x4c944cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
    // 0x4c9450: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x4c9450u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4c9454: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4c9454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4c9458: 0xd54824  and         $t1, $a2, $s5
    ctx->pc = 0x4c9458u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & GPR_U64(ctx, 21));
    // 0x4c945c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4c945cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4c9460: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x4c9460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4c9464: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4c9464u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4c9468: 0x26cb0158  addiu       $t3, $s6, 0x158
    ctx->pc = 0x4c9468u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 22), 344));
    // 0x4c946c: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x4c946cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4c9470: 0xa72818  mult        $a1, $a1, $a3
    ctx->pc = 0x4c9470u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4c9474: 0x24440007  addiu       $a0, $v0, 0x7
    ctx->pc = 0x4c9474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x4c9478: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x4c9478u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4c947c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x4c947cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4c9480: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x4c9480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c9484: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x4c9484u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x4c9488: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4c9488u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x4c948c: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x4c948cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4c9490: 0x24a40007  addiu       $a0, $a1, 0x7
    ctx->pc = 0x4c9490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
    // 0x4c9494: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c9494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c9498: 0x82280b  movn        $a1, $a0, $v0
    ctx->pc = 0x4c9498u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x4c949c: 0x528c3  sra         $a1, $a1, 3
    ctx->pc = 0x4c949cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 3));
    // 0x4c94a0: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4c94a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4c94a4: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x4c94a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c94a8: 0xa71023  subu        $v0, $a1, $a3
    ctx->pc = 0x4c94a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x4c94ac: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x4c94acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
    // 0x4c94b0: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x4c94b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4c94b4: 0x122300a  movz        $a2, $t1, $v0
    ctx->pc = 0x4c94b4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 9));
    // 0x4c94b8: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4c94b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4c94bc: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4c94bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c94c0: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4c94c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4c94c4: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4c94c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4c94c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c94c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c94cc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4c94ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4c94d0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c94d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c94d4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4c94d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c94d8: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x4c94d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x4c94dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c94dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c94e0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c94e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c94e4: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4c94e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4c94e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c94e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c94ec: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4c94ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4c94f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c94f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c94f4: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x4c94f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c94f8: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x4c94f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x4c94fc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c94fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c9500: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c9500u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c9504: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x4c9504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x4c9508: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c9508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c950c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4c950cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4c9510: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4c9510u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4c9514: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x4c9514u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4c9518: 0x244400ff  addiu       $a0, $v0, 0xFF
    ctx->pc = 0x4c9518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x4c951c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x4c951cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4c9520: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x4c9520u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x4c9524: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x4c9524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x4c9528: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4c9528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x4c952c: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x4c952cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x4c9530: 0x346200ff  ori         $v0, $v1, 0xFF
    ctx->pc = 0x4c9530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
    // 0x4c9534: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C9534u;
    {
        const bool branch_taken_0x4c9534 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x4C9538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9534u;
        // 0x4c9538: 0xae870000  sw          $a3, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9534) {
            ctx->pc = 0x4C9544u;
            goto label_4c9544;
        }
    }
    ctx->pc = 0x4C953Cu;
    // 0x4c953c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c953cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c9540: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4c9540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c9544:
    // 0x4c9544: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4c9544u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4c9548: 0x27c60f28  addiu       $a2, $fp, 0xF28
    ctx->pc = 0x4c9548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 3880));
    // 0x4c954c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4c954cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4c9550: 0x2404ff00  addiu       $a0, $zero, -0x100
    ctx->pc = 0x4c9550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c9554: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4c9554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c9558: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x4c9558u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c955c: 0x90e20f2c  lbu         $v0, 0xF2C($a3)
    ctx->pc = 0x4c955cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x7F0F2Cu));
    // 0x4c9560: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4c9560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4c9564: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4c9564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4c9568: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c9568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4c956c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c956cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c9570: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x4c9570u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c9574: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4C9574u;
    {
        const bool branch_taken_0x4c9574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C9578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9574u;
        // 0x4c9578: 0x8d820f30  lw          $v0, 0xF30($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 3888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9574) {
            ctx->pc = 0x4C9580u;
            goto label_4c9580;
        }
    }
    ctx->pc = 0x4C957Cu;
    // 0x4c957c: 0xaee20f24  sw          $v0, 0xF24($s7)
    ctx->pc = 0x4c957cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 3876), GPR_U32(ctx, 2));
label_4c9580:
    // 0x4c9580: 0x26e40f24  addiu       $a0, $s7, 0xF24
    ctx->pc = 0x4c9580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 3876));
    // 0x4c9584: 0x26cd0128  addiu       $t5, $s6, 0x128
    ctx->pc = 0x4c9584u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 22), 296));
    // 0x4c9588: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4c9588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c958c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c958cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4c9590: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4c9590u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4c9594: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4c9594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4c9598: 0x8ca20f34  lw          $v0, 0xF34($a1)
    ctx->pc = 0x4c9598u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0F34u));
    // 0x4c959c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4c959cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4c95a0: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4C95A0u;
    {
        const bool branch_taken_0x4c95a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4C95A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C95A0u;
        // 0x4c95a4: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c95a0) {
            ctx->pc = 0x4C95B8u;
            goto label_4c95b8;
        }
    }
    ctx->pc = 0x4C95A8u;
    // 0x4c95a8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4c95a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c95ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4C95ACu;
    {
        const bool branch_taken_0x4c95ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C95B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C95ACu;
        // 0x4c95b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c95ac) {
            ctx->pc = 0x4C95C4u;
            goto label_4c95c4;
        }
    }
    ctx->pc = 0x4C95B4u;
    // 0x4c95b4: 0x0  nop
    ctx->pc = 0x4c95b4u;
    // NOP
label_4c95b8:
    // 0x4c95b8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4c95b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c95bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c95bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c95c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4c95c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c95c4:
    // 0x4c95c4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4c95c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4c95c8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4c95c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4c95cc: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4c95ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4c95d0: 0x26e90f24  addiu       $t1, $s7, 0xF24
    ctx->pc = 0x4c95d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 23), 3876));
    // 0x4c95d4: 0x24ea0f2c  addiu       $t2, $a3, 0xF2C
    ctx->pc = 0x4c95d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 3884));
    // 0x4c95d8: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4c95d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c95dc: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4c95dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F2Cu));
    // 0x4c95e0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c95e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4c95e4: 0x97c80f28  lhu         $t0, 0xF28($fp)
    ctx->pc = 0x4c95e4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 3880)));
    // 0x4c95e8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c95e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c95ec: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x4c95ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c95f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c95f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c95f4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c95f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c95f8: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c95f8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c95fc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c95fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c9600: 0x82400  sll         $a0, $t0, 16
    ctx->pc = 0x4c9600u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x4c9604: 0x8c470f34  lw          $a3, 0xF34($v0)
    ctx->pc = 0x4c9604u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3892)));
    // 0x4c9608: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4c9608u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4c960c: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4c960cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c9610: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x4c9610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x4c9614: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c9614u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c9618: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c9618u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c961c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c961cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4c9620: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c9620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c9624: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c9624u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c9628: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c9628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c962c: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4c962cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c9630: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4c9630u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4c9634: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c9634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4c9638: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c9638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c963c: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c963cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c9640: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4c9640u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c9644: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x4c9644u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4c9648: 0x244400ff  addiu       $a0, $v0, 0xFF
    ctx->pc = 0x4c9648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x4c964c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x4c964cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4c9650: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x4c9650u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x4c9654: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4c9654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4c9658: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c9658u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c965c: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x4c965cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x4c9660: 0x346200ff  ori         $v0, $v1, 0xFF
    ctx->pc = 0x4c9660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
    // 0x4c9664: 0x4e00003  bltz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C9664u;
    {
        const bool branch_taken_0x4c9664 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x4C9668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9664u;
        // 0x4c9668: 0xad250000  sw          $a1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9664) {
            ctx->pc = 0x4C9674u;
            goto label_4c9674;
        }
    }
    ctx->pc = 0x4C966Cu;
    // 0x4c966c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c966cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c9670: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4c9670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c9674:
    // 0x4c9674: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4c9674u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4c9678: 0x27c60f28  addiu       $a2, $fp, 0xF28
    ctx->pc = 0x4c9678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 3880));
    // 0x4c967c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4c967cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4c9680: 0x2404ff00  addiu       $a0, $zero, -0x100
    ctx->pc = 0x4c9680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c9684: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4c9684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c9688: 0x90c50000  lbu         $a1, 0x0($a2)
    ctx->pc = 0x4c9688u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c968c: 0x90e20f2c  lbu         $v0, 0xF2C($a3)
    ctx->pc = 0x4c968cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x7F0F2Cu));
    // 0x4c9690: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4c9690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4c9694: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4c9694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4c9698: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c9698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4c969c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4c969cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4c96a0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x4c96a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c96a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C96A4u;
    {
        const bool branch_taken_0x4c96a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C96A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C96A4u;
        // 0x4c96a8: 0x3c03007f  lui         $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c96a4) {
            ctx->pc = 0x4C96B4u;
            goto label_4c96b4;
        }
    }
    ctx->pc = 0x4C96ACu;
    // 0x4c96ac: 0x8c620f34  lw          $v0, 0xF34($v1)
    ctx->pc = 0x4c96acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3892)));
    // 0x4c96b0: 0xaee20f24  sw          $v0, 0xF24($s7)
    ctx->pc = 0x4c96b0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 3876), GPR_U32(ctx, 2));
label_4c96b4:
    // 0x4c96b4: 0x26e40f24  addiu       $a0, $s7, 0xF24
    ctx->pc = 0x4c96b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 3876));
    // 0x4c96b8: 0x26cc012c  addiu       $t4, $s6, 0x12C
    ctx->pc = 0x4c96b8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 22), 300));
    // 0x4c96bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4c96bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c96c0: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c96c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4c96c4: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x4c96c4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x4c96c8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4c96c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4c96cc: 0x8ca20f38  lw          $v0, 0xF38($a1)
    ctx->pc = 0x4c96ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0F38u));
    // 0x4c96d0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4c96d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4c96d4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4C96D4u;
    {
        const bool branch_taken_0x4c96d4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4C96D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C96D4u;
        // 0x4c96d8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c96d4) {
            ctx->pc = 0x4C96E8u;
            goto label_4c96e8;
        }
    }
    ctx->pc = 0x4C96DCu;
    // 0x4c96dc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4c96dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c96e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4C96E0u;
    {
        const bool branch_taken_0x4c96e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C96E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C96E0u;
        // 0x4c96e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c96e0) {
            ctx->pc = 0x4C96F4u;
            goto label_4c96f4;
        }
    }
    ctx->pc = 0x4C96E8u;
label_4c96e8:
    // 0x4c96e8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4c96e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4c96ec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4c96ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4c96f0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4c96f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c96f4:
    // 0x4c96f4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4c96f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4c96f8: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4c96f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4c96fc: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4c96fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4c9700: 0x26e90f24  addiu       $t1, $s7, 0xF24
    ctx->pc = 0x4c9700u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 23), 3876));
    // 0x4c9704: 0x24ea0f2c  addiu       $t2, $a3, 0xF2C
    ctx->pc = 0x4c9704u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 3884));
    // 0x4c9708: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4c9708u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4c970c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x4c970cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0F2Cu));
    // 0x4c9710: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c9710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4c9714: 0x97c80f28  lhu         $t0, 0xF28($fp)
    ctx->pc = 0x4c9714u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 3880)));
    // 0x4c9718: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c9718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c971c: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x4c971cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4c9720: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c9720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c9724: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4c9724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4c9728: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c9728u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c972c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c972cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c9730: 0x82400  sll         $a0, $t0, 16
    ctx->pc = 0x4c9730u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x4c9734: 0x8c470f38  lw          $a3, 0xF38($v0)
    ctx->pc = 0x4c9734u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3896)));
    // 0x4c9738: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4c9738u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4c973c: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x4c973cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c9740: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x4c9740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x4c9744: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4c9744u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4c9748: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4c9748u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4c974c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c974cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4c9750: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c9750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c9754: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c9754u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c9758: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4c9758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4c975c: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4c975cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c9760: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4c9760u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4c9764: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4c9764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4c9768: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4c9768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4c976c: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c976cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c9770: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4c9770u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4c9774: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x4c9774u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4c9778: 0x244400ff  addiu       $a0, $v0, 0xFF
    ctx->pc = 0x4c9778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 255));
    // 0x4c977c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x4c977cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x4c9780: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x4c9780u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
    // 0x4c9784: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4c9784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4c9788: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x4c9788u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x4c978c: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x4c978cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x4c9790: 0x346200ff  ori         $v0, $v1, 0xFF
    ctx->pc = 0x4c9790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
    // 0x4c9794: 0x4e00003  bltz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C9794u;
    {
        const bool branch_taken_0x4c9794 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x4C9798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C9794u;
        // 0x4c9798: 0xad250000  sw          $a1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c9794) {
            ctx->pc = 0x4C97A4u;
            goto label_4c97a4;
        }
    }
    ctx->pc = 0x4C979Cu;
    // 0x4c979c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c979cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c97a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4c97a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4c97a4:
    // 0x4c97a4: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4c97a4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4c97a8: 0x27c40f28  addiu       $a0, $fp, 0xF28
    ctx->pc = 0x4c97a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 3880));
    // 0x4c97ac: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4c97acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4c97b0: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4c97b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4c97b4: 0x90a20f2c  lbu         $v0, 0xF2C($a1)
    ctx->pc = 0x4c97b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x7F0F2Cu));
    // 0x4c97b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4c97b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c97bc: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x4c97bcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c97c0: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4c97c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4c97c4: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4c97c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4c97c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4c97c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4c97cc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4c97ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4c97d0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4c97d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4c97d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C97D4u;
    {
        const bool branch_taken_0x4c97d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C97D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C97D4u;
        // 0x4c97d8: 0x3c07007f  lui         $a3, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c97d4) {
            ctx->pc = 0x4C97E4u;
            goto label_4c97e4;
        }
    }
    ctx->pc = 0x4C97DCu;
    // 0x4c97dc: 0x8ce20f38  lw          $v0, 0xF38($a3)
    ctx->pc = 0x4c97dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3896)));
    // 0x4c97e0: 0xaee20f24  sw          $v0, 0xF24($s7)
    ctx->pc = 0x4c97e0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 3876), GPR_U32(ctx, 2));
label_4c97e4:
    // 0x4c97e4: 0x8ee20f24  lw          $v0, 0xF24($s7)
    ctx->pc = 0x4c97e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 3876)));
    // 0x4c97e8: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x4c97e8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
label_4c97ec:
    // 0x4c97ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4c97ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c97f0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4c97f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c97f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c97f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c97f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c97f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c97fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c97fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c9800: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c9800u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c9804: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c9804u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c9808: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c9808u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c980c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4c980cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c9810: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x4c9810u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c9814: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x4c9814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4c9818: 0x812b9d0  j           func_4AE740
    ctx->pc = 0x4C9818u;
    ctx->pc = 0x4C981Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C9818u;
    // 0x4c981c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE740u;
    sub_004AE740_0x4ae740(rdram, ctx, runtime); return;
    ctx->pc = 0x4C9820u;
}
