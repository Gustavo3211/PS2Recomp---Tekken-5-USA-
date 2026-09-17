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

// Function: sub_0033F790
// Address: 0x33f790 - 0x33f990
void sub_0033F790_0x33f790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F790_0x33f790");
#endif

    switch (ctx->pc) {
        case 0x33f7ccu: goto label_33f7cc;
        case 0x33f7f4u: goto label_33f7f4;
        case 0x33f81cu: goto label_33f81c;
        default: break;
    }

    ctx->pc = 0x33f790u;

    // 0x33f790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33f790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33f794: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33f794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x33f798: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33f798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33f79c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x33f79cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f7a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33f7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33f7a4: 0x24420d00  addiu       $v0, $v0, 0xD00
    ctx->pc = 0x33f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3328));
    // 0x33f7a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33f7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33f7ac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33f7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x33f7b0: 0x24510040  addiu       $s1, $v0, 0x40
    ctx->pc = 0x33f7b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x33f7b4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x33f7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x400D50u));
    // 0x33f7b8: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x33f7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x33f7bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33F7BCu;
    {
        const bool branch_taken_0x33f7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F7BCu;
        // 0x33f7c0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f7bc) {
            ctx->pc = 0x33F7E0u;
            goto label_33f7e0;
        }
    }
    ctx->pc = 0x33F7C4u;
    // 0x33f7c4: 0xc0c8c36  jal         func_3230D8
    ctx->pc = 0x33F7C4u;
    SET_GPR_U32(ctx, 31, 0x33F7CCu);
    ctx->pc = 0x33F7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F7C4u;
    // 0x33f7c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3230D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3230D8u, 0x33F7C4u, 0x33F7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F7CCu;
label_33f7cc:
    // 0x33f7cc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x33f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x33f7d0: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x33f7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x33f7d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33f7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33f7d8: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x33f7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x33f7dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x33f7dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33f7e0:
    // 0x33f7e0: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x33f7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x33f7e4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x33F7E4u;
    {
        const bool branch_taken_0x33f7e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f7e4) {
            ctx->pc = 0x33F7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F7E4u;
            // 0x33f7e8: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F80Cu;
            goto label_33f80c;
        }
    }
    ctx->pc = 0x33F7ECu;
    // 0x33f7ec: 0xc0c8c7e  jal         func_3231F8
    ctx->pc = 0x33F7ECu;
    SET_GPR_U32(ctx, 31, 0x33F7F4u);
    ctx->pc = 0x33F7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F7ECu;
    // 0x33f7f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3231F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3231F8u, 0x33F7ECu, 0x33F7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F7F4u;
label_33f7f4:
    // 0x33f7f4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x33f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x33f7f8: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x33f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x33f7fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33f7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33f800: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x33f800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x33f804: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x33f804u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f808: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x33f808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_33f80c:
    // 0x33f80c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x33F80Cu;
    {
        const bool branch_taken_0x33f80c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33f80c) {
            ctx->pc = 0x33F810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F80Cu;
            // 0x33f810: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F830u;
            goto label_33f830;
        }
    }
    ctx->pc = 0x33F814u;
    // 0x33f814: 0xc0c8b60  jal         func_322D80
    ctx->pc = 0x33F814u;
    SET_GPR_U32(ctx, 31, 0x33F81Cu);
    ctx->pc = 0x33F818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F814u;
    // 0x33f818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322D80u, 0x33F814u, 0x33F81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F81Cu;
label_33f81c:
    // 0x33f81c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x33f81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x33f820: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x33f820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x33f824: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33f824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33f828: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x33f828u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x33f82c: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x33f82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_33f830:
    // 0x33f830: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x33f830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x33f834: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x33f834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x33f838: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x33F838u;
    {
        const bool branch_taken_0x33f838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33f838) {
            ctx->pc = 0x33F83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33F838u;
            // 0x33f83c: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33F858u;
            goto label_33f858;
        }
    }
    ctx->pc = 0x33F840u;
    // 0x33f840: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x33f840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x33f844: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x33f844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x33f848: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x33f848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x33f84c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33F84Cu;
    {
        const bool branch_taken_0x33f84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F84Cu;
        // 0x33f850: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f84c) {
            ctx->pc = 0x33F868u;
            goto label_33f868;
        }
    }
    ctx->pc = 0x33F854u;
    // 0x33f854: 0x0  nop
    ctx->pc = 0x33f854u;
    // NOP
label_33f858:
    // 0x33f858: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x33f858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x33f85c: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x33f85cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x33f860: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33f860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x33f864: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x33f864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_33f868:
    // 0x33f868: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33f868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33f86c: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x33f86cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33f870: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33f870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33f874: 0x3c026808  lui         $v0, 0x6808
    ctx->pc = 0x33f874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26632 << 16));
    // 0x33f878: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x33f878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x33f87c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33f87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33f880: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x33f880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x33f884: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x33f884u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x33f888: 0x7e440000  sq          $a0, 0x0($s2)
    ctx->pc = 0x33f888u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 4));
    // 0x33f88c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33f88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33f890: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x33f890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x33f894: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x33f894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x33f898: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x33f898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x33f89c: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x33f89cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x33f8a0: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x33f8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x33f8a4: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33F8A4u;
    {
        const bool branch_taken_0x33f8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x33F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F8A4u;
        // 0x33f8a8: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f8a4) {
            ctx->pc = 0x33F8C0u;
            goto label_33f8c0;
        }
    }
    ctx->pc = 0x33F8ACu;
    // 0x33f8ac: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x33f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x33f8b0: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x33f8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x33f8b4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x33f8b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x33f8b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33F8B8u;
    {
        const bool branch_taken_0x33f8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F8B8u;
        // 0x33f8bc: 0xa21025  or          $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f8b8) {
            ctx->pc = 0x33F8D4u;
            goto label_33f8d4;
        }
    }
    ctx->pc = 0x33F8C0u;
label_33f8c0:
    // 0x33f8c0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x33f8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x33f8c4: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x33f8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x33f8c8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x33f8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x33f8cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33f8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x33f8d0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x33f8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_33f8d4:
    // 0x33f8d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33f8d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33f8d8: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x33f8d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33f8dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33f8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33f8e0: 0x3c026801  lui         $v0, 0x6801
    ctx->pc = 0x33f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26625 << 16));
    // 0x33f8e4: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x33f8e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x33f8e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33f8e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33f8ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x33f8ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x33f8f0: 0x70652b89  pcpyld      $a1, $v1, $a1
    ctx->pc = 0x33f8f0u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x33f8f4: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x33f8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
    // 0x33f8f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33f8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33f8fc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x33f8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x33f900: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33f900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33f904: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x33f904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x33f908: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x33f908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x33f90c: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x33f90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x33f910: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x33F910u;
    {
        const bool branch_taken_0x33f910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x33F914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F910u;
        // 0x33f914: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f910) {
            ctx->pc = 0x33F930u;
            goto label_33f930;
        }
    }
    ctx->pc = 0x33F918u;
    // 0x33f918: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x33f918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x33f91c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x33f91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x33f920: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x33f920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x33f924: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33F924u;
    {
        const bool branch_taken_0x33f924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F924u;
        // 0x33f928: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f924) {
            ctx->pc = 0x33F944u;
            goto label_33f944;
        }
    }
    ctx->pc = 0x33F92Cu;
    // 0x33f92c: 0x0  nop
    ctx->pc = 0x33f92cu;
    // NOP
label_33f930:
    // 0x33f930: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x33f930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x33f934: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x33f934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x33f938: 0x34630006  ori         $v1, $v1, 0x6
    ctx->pc = 0x33f938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x33f93c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x33f93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x33f940: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x33f940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_33f944:
    // 0x33f944: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33f944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33f948: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x33f948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33f94c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33f950: 0x3c036c06  lui         $v1, 0x6C06
    ctx->pc = 0x33f950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27654 << 16));
    // 0x33f954: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x33f954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x33f958: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33f958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33f95c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33f95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33f960: 0x70442389  pcpyld      $a0, $v0, $a0
    ctx->pc = 0x33f960u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x33f964: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x33f964u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x33f968: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33f968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33f96c: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x33f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x33f970: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33f970u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33f974: 0x24630006  addiu       $v1, $v1, 0x6
    ctx->pc = 0x33f974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x33f978: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33f978u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f97c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x33f97cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x33f980: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33f980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33f984: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33f984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f988: 0x3e00008  jr          $ra
    ctx->pc = 0x33F988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F988u;
        // 0x33f98c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F990u;
}
