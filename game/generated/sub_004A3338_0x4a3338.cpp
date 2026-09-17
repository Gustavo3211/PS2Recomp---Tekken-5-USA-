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

// Function: sub_004A3338
// Address: 0x4a3338 - 0x4a3460
void sub_004A3338_0x4a3338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A3338_0x4a3338");
#endif

    switch (ctx->pc) {
        case 0x4a33b8u: goto label_4a33b8;
        case 0x4a3430u: goto label_4a3430;
        case 0x4a343cu: goto label_4a343c;
        default: break;
    }

    ctx->pc = 0x4a3338u;

    // 0x4a3338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a3338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4a333c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4a333cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4a3340: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a3340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a3344: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4a3344u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4a3348: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a3348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4a334c: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4a334cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4a3350: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4a3350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4a3354: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4a3354u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4a3358: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4a3358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4a335c: 0x26100c14  addiu       $s0, $s0, 0xC14
    ctx->pc = 0x4a335cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3092));
    // 0x4a3360: 0x26310c10  addiu       $s1, $s1, 0xC10
    ctx->pc = 0x4a3360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3088));
    // 0x4a3364: 0x26520c18  addiu       $s2, $s2, 0xC18
    ctx->pc = 0x4a3364u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3096));
    // 0x4a3368: 0x8e290000  lw          $t1, 0x0($s1)
    ctx->pc = 0x4a3368u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F0C10u));
    // 0x4a336c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a336cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a3370: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x4a3370u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F0C14u));
    // 0x4a3374: 0x3442001a  ori         $v0, $v0, 0x1A
    ctx->pc = 0x4a3374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
    // 0x4a3378: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x4a3378u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F0C18u));
    // 0x4a337c: 0x2403ff4e  addiu       $v1, $zero, -0xB2
    ctx->pc = 0x4a337cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967118));
    // 0x4a3380: 0x34840400  ori         $a0, $a0, 0x400
    ctx->pc = 0x4a3380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1024);
    // 0x4a3384: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4a3384u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4a3388: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4a3388u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4a338c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4a338cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4a3390: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x4a3390u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x4a3394: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4a3394u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4a3398: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4a3398u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4a339c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a339cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a33a0: 0xae290000  sw          $t1, 0x0($s1)
    ctx->pc = 0x4a33a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 9));
    // 0x4a33a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a33a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a33a8: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x4a33a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
    // 0x4a33ac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4a33acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a33b0: 0xc12abc4  jal         func_4AAF10
    ctx->pc = 0x4A33B0u;
    SET_GPR_U32(ctx, 31, 0x4A33B8u);
    ctx->pc = 0x4A33B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A33B0u;
    // 0x4a33b4: 0xae470000  sw          $a3, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AAF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AAF10u, 0x4A33B0u, 0x4A33B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A33B8u;
label_4a33b8:
    // 0x4a33b8: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4a33b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a33bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a33bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a33c0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4a33c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4a33c4: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4a33c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4a33c8: 0x86260000  lh          $a2, 0x0($s1)
    ctx->pc = 0x4a33c8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a33cc: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4a33ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4a33d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a33d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a33d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a33d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a33d8: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x4a33d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a33dc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4a33dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4a33e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a33e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a33e4: 0x24c60176  addiu       $a2, $a2, 0x176
    ctx->pc = 0x4a33e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 374));
    // 0x4a33e8: 0x1074024  and         $t0, $t0, $a3
    ctx->pc = 0x4a33e8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x4a33ec: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4a33ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a33f0: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x4a33f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x4a33f4: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x4a33f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
    // 0x4a33f8: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x4a33f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x4a33fc: 0x24630110  addiu       $v1, $v1, 0x110
    ctx->pc = 0x4a33fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x4a3400: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x4a3400u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x4a3404: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4a3404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4a3408: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a3408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a340c: 0x473824  and         $a3, $v0, $a3
    ctx->pc = 0x4a340cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4a3410: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x4a3410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4a3414: 0xe63825  or          $a3, $a3, $a2
    ctx->pc = 0x4a3414u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x4a3418: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x4a3418u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x4a341c: 0xae480000  sw          $t0, 0x0($s2)
    ctx->pc = 0x4a341cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 8));
    // 0x4a3420: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x4a3420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3424: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x4a3424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x4a3428: 0xc124924  jal         func_492490
    ctx->pc = 0x4A3428u;
    SET_GPR_U32(ctx, 31, 0x4A3430u);
    ctx->pc = 0x4A342Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3428u;
    // 0x4a342c: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492490u, 0x4A3428u, 0x4A3430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3430u;
label_4a3430:
    // 0x4a3430: 0x24042026  addiu       $a0, $zero, 0x2026
    ctx->pc = 0x4a3430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8230));
    // 0x4a3434: 0xc123bd2  jal         func_48EF48
    ctx->pc = 0x4A3434u;
    SET_GPR_U32(ctx, 31, 0x4A343Cu);
    ctx->pc = 0x4A3438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3434u;
    // 0x4a3438: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EF48u, 0x4A3434u, 0x4A343Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A343Cu;
label_4a343c:
    // 0x4a343c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x4a343cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4a3440: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a3440u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a3444: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x4a3444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x4a3448: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a3448u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a344c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4a344cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a3450: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4a3450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a3454: 0x8123bdc  j           func_48EF70
    ctx->pc = 0x4A3454u;
    ctx->pc = 0x4A3458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3454u;
    // 0x4a3458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48EF70u;
    sub_0048EF70_0x48ef70(rdram, ctx, runtime); return;
    ctx->pc = 0x4A345Cu;
    // 0x4a345c: 0x0  nop
    ctx->pc = 0x4a345cu;
    // NOP
    ctx->pc = 0x4a3460u;
}
