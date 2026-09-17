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

// Function: sub_004902F8
// Address: 0x4902f8 - 0x4904d8
void sub_004902F8_0x4902f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004902F8_0x4902f8");
#endif

    switch (ctx->pc) {
        case 0x4903a0u: goto label_4903a0;
        case 0x490450u: goto label_490450;
        case 0x4904a0u: goto label_4904a0;
        case 0x4904b4u: goto label_4904b4;
        default: break;
    }

    ctx->pc = 0x4902f8u;

label_4902f8:
    // 0x4902f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4902f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4902fc: 0x3c05007e  lui         $a1, 0x7E
    ctx->pc = 0x4902fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)126 << 16));
    // 0x490300: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x490300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x490304: 0x3c16007e  lui         $s6, 0x7E
    ctx->pc = 0x490304u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)126 << 16));
    // 0x490308: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x490308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49030c: 0x26c614bc  addiu       $a2, $s6, 0x14BC
    ctx->pc = 0x49030cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 5308));
    // 0x490310: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x490310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x490314: 0x24a514d8  addiu       $a1, $a1, 0x14D8
    ctx->pc = 0x490314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5336));
    // 0x490318: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x490318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x49031c: 0x3c03007e  lui         $v1, 0x7E
    ctx->pc = 0x49031cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)126 << 16));
    // 0x490320: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x490320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x490324: 0x246814dc  addiu       $t0, $v1, 0x14DC
    ctx->pc = 0x490324u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 5340));
    // 0x490328: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x490328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x49032c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x49032cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x490330: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x490330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x490334: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x490334u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7E14BCu));
    // 0x490338: 0x94a40002  lhu         $a0, 0x2($a1)
    ctx->pc = 0x490338u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x7E14DAu));
    // 0x49033c: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x49033cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x490340: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x490340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x490344: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x490344u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7E14BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E14BCu, _value); } while (0);
    // 0x490348: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x490348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49034c: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x49034cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x490350: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x490350u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7E14D8u));
    // 0x490354: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x490354u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x490358: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x490358u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x7E14BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E14BCu, _value); } while (0);
    // 0x49035c: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x49035cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7E14DCu));
    // 0x490360: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x490360u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x490364: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x490364u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x7E14BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7E14BCu, _value); } while (0);
    // 0x490368: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x490368u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x7E14DCu));
    // 0x49036c: 0x4400042  bltz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x49036Cu;
    {
        const bool branch_taken_0x49036c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x490370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49036Cu;
        // 0x490370: 0x3c02007e  lui         $v0, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49036c) {
            ctx->pc = 0x490478u;
            goto label_490478;
        }
    }
    ctx->pc = 0x490374u;
    // 0x490374: 0x3c03007e  lui         $v1, 0x7E
    ctx->pc = 0x490374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)126 << 16));
    // 0x490378: 0x3c04007e  lui         $a0, 0x7E
    ctx->pc = 0x490378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)126 << 16));
    // 0x49037c: 0x3c05007e  lui         $a1, 0x7E
    ctx->pc = 0x49037cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)126 << 16));
    // 0x490380: 0x245514c8  addiu       $s5, $v0, 0x14C8
    ctx->pc = 0x490380u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 5320));
    // 0x490384: 0x247214c4  addiu       $s2, $v1, 0x14C4
    ctx->pc = 0x490384u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 5316));
    // 0x490388: 0x249114cc  addiu       $s1, $a0, 0x14CC
    ctx->pc = 0x490388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 5324));
    // 0x49038c: 0x24b414d0  addiu       $s4, $a1, 0x14D0
    ctx->pc = 0x49038cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 5328));
    // 0x490390: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x490390u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490394: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x490394u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x490398: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x490398u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7E14C4u));
    // 0x49039c: 0x0  nop
    ctx->pc = 0x49039cu;
    // NOP
label_4903a0:
    // 0x4903a0: 0x26c414bc  addiu       $a0, $s6, 0x14BC
    ctx->pc = 0x4903a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 5308));
    // 0x4903a4: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x4903a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4903a8: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4903a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4903ac: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x4903acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x4903b0: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4903b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4903b4: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x4903b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x4903b8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4903b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4903bc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x4903bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4903c0: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4903c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4903c4: 0x24e90002  addiu       $t1, $a3, 0x2
    ctx->pc = 0x4903c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x4903c8: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4903c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4903cc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4903ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4903d0: 0x24ea0004  addiu       $t2, $a3, 0x4
    ctx->pc = 0x4903d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x4903d4: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x4903d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4903d8: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4903d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4903dc: 0x24e70006  addiu       $a3, $a3, 0x6
    ctx->pc = 0x4903dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6));
    // 0x4903e0: 0xae490000  sw          $t1, 0x0($s2)
    ctx->pc = 0x4903e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 9));
    // 0x4903e4: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4903e4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4903e8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4903e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4903ec: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4903ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4903f0: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x4903f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x4903f4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4903f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4903f8: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x4903f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4903fc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x4903fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x490400: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x490400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x490404: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x490404u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x490408: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x490408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x49040c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x49040cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x490410: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x490410u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x490414: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x490414u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x490418: 0xae4a0000  sw          $t2, 0x0($s2)
    ctx->pc = 0x490418u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 10));
    // 0x49041c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x49041cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x490420: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x490420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x490424: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x490424u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x490428: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x490428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x49042c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x49042cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x490430: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x490430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x490434: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x490434u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x490438: 0xae470000  sw          $a3, 0x0($s2)
    ctx->pc = 0x490438u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    // 0x49043c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x49043cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x490440: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x490440u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x490444: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x490444u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x490448: 0xc122288  jal         func_488A20
    ctx->pc = 0x490448u;
    SET_GPR_U32(ctx, 31, 0x490450u);
    ctx->pc = 0x49044Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x490448u;
    // 0x49044c: 0xae880000  sw          $t0, 0x0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488A20u, 0x490448u, 0x490450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x490450u;
label_490450:
    // 0x490450: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x490450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x490454: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x490454u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x490458: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x490458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49045c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49045cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x490460: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x490460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x490464: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x490464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x490468: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x490468u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x49046c: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x49046cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x490470: 0x443ffcb  bgezl       $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x490470u;
    {
        const bool branch_taken_0x490470 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x490470) {
            ctx->pc = 0x490474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x490470u;
            // 0x490474: 0x8e470000  lw          $a3, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4903A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4903a0;
        }
    }
    ctx->pc = 0x490478u;
label_490478:
    // 0x490478: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x490478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49047c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49047cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x490480: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x490480u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x490484: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x490484u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x490488: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x490488u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x49048c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x49048cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x490490: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x490490u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x490494: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x490494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x490498: 0x3e00008  jr          $ra
    ctx->pc = 0x490498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x490498u;
        // 0x49049c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x490498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4904A0u;
label_4904a0:
    // 0x4904a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4904a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4904a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4904a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4904a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4904a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4904ac: 0xc1240be  jal         func_4902F8
    ctx->pc = 0x4904ACu;
    SET_GPR_U32(ctx, 31, 0x4904B4u);
    ctx->pc = 0x4904B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4904ACu;
    // 0x4904b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4902F8u;
    goto label_4902f8;
    ctx->pc = 0x4904B4u;
label_4904b4:
    // 0x4904b4: 0x3c03007e  lui         $v1, 0x7E
    ctx->pc = 0x4904b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)126 << 16));
    // 0x4904b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4904b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4904bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4904bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4904c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4904c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4904c4: 0x8c6514bc  lw          $a1, 0x14BC($v1)
    ctx->pc = 0x4904c4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7E14BCu));
    // 0x4904c8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4904c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4904cc: 0xac45d6e4  sw          $a1, -0x291C($v0)
    ctx->pc = 0x4904ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72D6E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72D6E4u, _value); } while (0);
    // 0x4904d0: 0x8123392  j           func_48CE48
    ctx->pc = 0x4904D0u;
    ctx->pc = 0x4904D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4904D0u;
    // 0x4904d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CE48u;
    sub_0048CE48_0x48ce48(rdram, ctx, runtime); return;
    ctx->pc = 0x4904D8u;
}
