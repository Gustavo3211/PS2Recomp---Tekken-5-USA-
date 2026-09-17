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

// Function: sub_00106F78
// Address: 0x106f78 - 0x107198
void sub_00106F78_0x106f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106F78_0x106f78");
#endif

    switch (ctx->pc) {
        case 0x106f78u: goto label_106f78;
        case 0x106f7cu: goto label_106f7c;
        case 0x106f80u: goto label_106f80;
        case 0x106f84u: goto label_106f84;
        case 0x106f88u: goto label_106f88;
        case 0x106f8cu: goto label_106f8c;
        case 0x106f90u: goto label_106f90;
        case 0x106f94u: goto label_106f94;
        case 0x106f98u: goto label_106f98;
        case 0x106f9cu: goto label_106f9c;
        case 0x106fa0u: goto label_106fa0;
        case 0x106fa4u: goto label_106fa4;
        case 0x106fa8u: goto label_106fa8;
        case 0x106facu: goto label_106fac;
        case 0x106fb0u: goto label_106fb0;
        case 0x106fb4u: goto label_106fb4;
        case 0x106fb8u: goto label_106fb8;
        case 0x106fbcu: goto label_106fbc;
        case 0x106fc0u: goto label_106fc0;
        case 0x106fc4u: goto label_106fc4;
        case 0x106fc8u: goto label_106fc8;
        case 0x106fccu: goto label_106fcc;
        case 0x106fd0u: goto label_106fd0;
        case 0x106fd4u: goto label_106fd4;
        case 0x106fd8u: goto label_106fd8;
        case 0x106fdcu: goto label_106fdc;
        case 0x106fe0u: goto label_106fe0;
        case 0x106fe4u: goto label_106fe4;
        case 0x106fe8u: goto label_106fe8;
        case 0x106fecu: goto label_106fec;
        case 0x106ff0u: goto label_106ff0;
        case 0x106ff4u: goto label_106ff4;
        case 0x106ff8u: goto label_106ff8;
        case 0x106ffcu: goto label_106ffc;
        case 0x107000u: goto label_107000;
        case 0x107004u: goto label_107004;
        case 0x107008u: goto label_107008;
        case 0x10700cu: goto label_10700c;
        case 0x107010u: goto label_107010;
        case 0x107014u: goto label_107014;
        case 0x107018u: goto label_107018;
        case 0x10701cu: goto label_10701c;
        case 0x107020u: goto label_107020;
        case 0x107024u: goto label_107024;
        case 0x107028u: goto label_107028;
        case 0x10702cu: goto label_10702c;
        case 0x107030u: goto label_107030;
        case 0x107034u: goto label_107034;
        case 0x107038u: goto label_107038;
        case 0x10703cu: goto label_10703c;
        case 0x107040u: goto label_107040;
        case 0x107044u: goto label_107044;
        case 0x107048u: goto label_107048;
        case 0x10704cu: goto label_10704c;
        case 0x107050u: goto label_107050;
        case 0x107054u: goto label_107054;
        case 0x107058u: goto label_107058;
        case 0x10705cu: goto label_10705c;
        case 0x107060u: goto label_107060;
        case 0x107064u: goto label_107064;
        case 0x107068u: goto label_107068;
        case 0x10706cu: goto label_10706c;
        case 0x107070u: goto label_107070;
        case 0x107074u: goto label_107074;
        case 0x107078u: goto label_107078;
        case 0x10707cu: goto label_10707c;
        case 0x107080u: goto label_107080;
        case 0x107084u: goto label_107084;
        case 0x107088u: goto label_107088;
        case 0x10708cu: goto label_10708c;
        case 0x107090u: goto label_107090;
        case 0x107094u: goto label_107094;
        case 0x107098u: goto label_107098;
        case 0x10709cu: goto label_10709c;
        case 0x1070a0u: goto label_1070a0;
        case 0x1070a4u: goto label_1070a4;
        case 0x1070a8u: goto label_1070a8;
        case 0x1070acu: goto label_1070ac;
        case 0x1070b0u: goto label_1070b0;
        case 0x1070b4u: goto label_1070b4;
        case 0x1070b8u: goto label_1070b8;
        case 0x1070bcu: goto label_1070bc;
        case 0x1070c0u: goto label_1070c0;
        case 0x1070c4u: goto label_1070c4;
        case 0x1070c8u: goto label_1070c8;
        case 0x1070ccu: goto label_1070cc;
        case 0x1070d0u: goto label_1070d0;
        case 0x1070d4u: goto label_1070d4;
        case 0x1070d8u: goto label_1070d8;
        case 0x1070dcu: goto label_1070dc;
        case 0x1070e0u: goto label_1070e0;
        case 0x1070e4u: goto label_1070e4;
        case 0x1070e8u: goto label_1070e8;
        case 0x1070ecu: goto label_1070ec;
        case 0x1070f0u: goto label_1070f0;
        case 0x1070f4u: goto label_1070f4;
        case 0x1070f8u: goto label_1070f8;
        case 0x1070fcu: goto label_1070fc;
        case 0x107100u: goto label_107100;
        case 0x107104u: goto label_107104;
        case 0x107108u: goto label_107108;
        case 0x10710cu: goto label_10710c;
        case 0x107110u: goto label_107110;
        case 0x107114u: goto label_107114;
        case 0x107118u: goto label_107118;
        case 0x10711cu: goto label_10711c;
        case 0x107120u: goto label_107120;
        case 0x107124u: goto label_107124;
        case 0x107128u: goto label_107128;
        case 0x10712cu: goto label_10712c;
        case 0x107130u: goto label_107130;
        case 0x107134u: goto label_107134;
        case 0x107138u: goto label_107138;
        case 0x10713cu: goto label_10713c;
        case 0x107140u: goto label_107140;
        case 0x107144u: goto label_107144;
        case 0x107148u: goto label_107148;
        case 0x10714cu: goto label_10714c;
        case 0x107150u: goto label_107150;
        case 0x107154u: goto label_107154;
        case 0x107158u: goto label_107158;
        case 0x10715cu: goto label_10715c;
        case 0x107160u: goto label_107160;
        case 0x107164u: goto label_107164;
        case 0x107168u: goto label_107168;
        case 0x10716cu: goto label_10716c;
        case 0x107170u: goto label_107170;
        case 0x107174u: goto label_107174;
        case 0x107178u: goto label_107178;
        case 0x10717cu: goto label_10717c;
        case 0x107180u: goto label_107180;
        case 0x107184u: goto label_107184;
        case 0x107188u: goto label_107188;
        case 0x10718cu: goto label_10718c;
        case 0x107190u: goto label_107190;
        case 0x107194u: goto label_107194;
        default: break;
    }

    ctx->pc = 0x106f78u;

label_106f78:
    // 0x106f78: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x106f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_106f7c:
    // 0x106f7c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x106f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_106f80:
    // 0x106f80: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x106f80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_106f84:
    // 0x106f84: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x106f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_106f88:
    // 0x106f88: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x106f88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_106f8c:
    // 0x106f8c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x106f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_106f90:
    // 0x106f90: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x106f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_106f94:
    // 0x106f94: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x106f94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_106f98:
    // 0x106f98: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x106f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_106f9c:
    // 0x106f9c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x106f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_106fa0:
    // 0x106fa0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x106fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_106fa4:
    // 0x106fa4: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x106fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_106fa8:
    // 0x106fa8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x106fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_106fac:
    // 0x106fac: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x106facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_106fb0:
    // 0x106fb0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x106fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_106fb4:
    // 0x106fb4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x106fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_106fb8:
    // 0x106fb8: 0x8c4306d8  lw          $v1, 0x6D8($v0)
    ctx->pc = 0x106fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1752)));
label_106fbc:
    // 0x106fbc: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_106fc0:
    if (ctx->pc == 0x106FC0u) {
        ctx->pc = 0x106FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FBCu;
        // 0x106fc0: 0x268206cc  addiu       $v0, $s4, 0x6CC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1740));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106FC4u;
        goto label_106fc4;
    }
    ctx->pc = 0x106FBCu;
    {
        const bool branch_taken_0x106fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FBCu;
        // 0x106fc0: 0x268206cc  addiu       $v0, $s4, 0x6CC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1740));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106fbc) {
            ctx->pc = 0x10705Cu;
            goto label_10705c;
        }
    }
    ctx->pc = 0x106FC4u;
label_106fc4:
    // 0x106fc4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x106fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_106fc8:
    // 0x106fc8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x106fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_106fcc:
    // 0x106fcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x106fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_106fd0:
    // 0x106fd0: 0x18600026  blez        $v1, . + 4 + (0x26 << 2)
label_106fd4:
    if (ctx->pc == 0x106FD4u) {
        ctx->pc = 0x106FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FD0u;
        // 0x106fd4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x106FD8u;
        goto label_106fd8;
    }
    ctx->pc = 0x106FD0u;
    {
        const bool branch_taken_0x106fd0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x106FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106FD0u;
        // 0x106fd4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106fd0) {
            ctx->pc = 0x10706Cu;
            goto label_10706c;
        }
    }
    ctx->pc = 0x106FD8u;
label_106fd8:
    // 0x106fd8: 0x268306d0  addiu       $v1, $s4, 0x6D0
    ctx->pc = 0x106fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
label_106fdc:
    // 0x106fdc: 0x269705c8  addiu       $s7, $s4, 0x5C8
    ctx->pc = 0x106fdcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1480));
label_106fe0:
    // 0x106fe0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x106fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_106fe4:
    // 0x106fe4: 0x269605d8  addiu       $s6, $s4, 0x5D8
    ctx->pc = 0x106fe4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 1496));
label_106fe8:
    // 0x106fe8: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x106fe8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
label_106fec:
    // 0x106fec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x106fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_106ff0:
    // 0x106ff0: 0x24110140  addiu       $s1, $zero, 0x140
    ctx->pc = 0x106ff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_106ff4:
    // 0x106ff4: 0x2413001c  addiu       $s3, $zero, 0x1C
    ctx->pc = 0x106ff4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_106ff8:
    // 0x106ff8: 0x158080  sll         $s0, $s5, 2
    ctx->pc = 0x106ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_106ffc:
    // 0x106ffc: 0x518818  mult        $s1, $v0, $s1
    ctx->pc = 0x106ffcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_107000:
    // 0x107000: 0x72b39818  mult1       $s3, $s5, $s3
    ctx->pc = 0x107000u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 19); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
label_107004:
    // 0x107004: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x107004u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_107008:
    // 0x107008: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x107008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_10700c:
    // 0x10700c: 0x263205a0  addiu       $s2, $s1, 0x5A0
    ctx->pc = 0x10700cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1440));
label_107010:
    // 0x107010: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x107010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_107014:
    // 0x107014: 0x2929021  addu        $s2, $s4, $s2
    ctx->pc = 0x107014u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_107018:
    // 0x107018: 0x26640048  addiu       $a0, $s3, 0x48
    ctx->pc = 0x107018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
label_10701c:
    // 0x10701c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10701cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_107020:
    // 0x107020: 0x60f809  jalr        $v1
label_107024:
    if (ctx->pc == 0x107024u) {
        ctx->pc = 0x107024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107020u;
        // 0x107024: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107028u;
        goto label_107028;
    }
    ctx->pc = 0x107020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x107028u);
        ctx->pc = 0x107024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107020u;
        // 0x107024: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107020u, 0x107028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107028u;
label_107028:
    // 0x107028: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x107028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_10702c:
    // 0x10702c: 0x267300b8  addiu       $s3, $s3, 0xB8
    ctx->pc = 0x10702cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 184));
label_107030:
    // 0x107030: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x107030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_107034:
    // 0x107034: 0x40f809  jalr        $v0
label_107038:
    if (ctx->pc == 0x107038u) {
        ctx->pc = 0x107038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107034u;
        // 0x107038: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10703Cu;
        goto label_10703c;
    }
    ctx->pc = 0x107034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10703Cu);
        ctx->pc = 0x107038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107034u;
        // 0x107038: 0x2532021  addu        $a0, $s2, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107034u, 0x10703Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10703Cu;
label_10703c:
    // 0x10703c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x10703cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_107040:
    // 0x107040: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x107040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_107044:
    // 0x107044: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x107044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_107048:
    // 0x107048: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x107048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_10704c:
    // 0x10704c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_107050:
    if (ctx->pc == 0x107050u) {
        ctx->pc = 0x107050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10704Cu;
        // 0x107050: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107054u;
        goto label_107054;
    }
    ctx->pc = 0x10704Cu;
    {
        const bool branch_taken_0x10704c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x107050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10704Cu;
        // 0x107050: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10704c) {
            ctx->pc = 0x106FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106ff0;
        }
    }
    ctx->pc = 0x107054u;
label_107054:
    // 0x107054: 0x10000009  b           . + 4 + (0x9 << 2)
label_107058:
    if (ctx->pc == 0x107058u) {
        ctx->pc = 0x107058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107054u;
        // 0x107058: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10705Cu;
        goto label_10705c;
    }
    ctx->pc = 0x107054u;
    {
        const bool branch_taken_0x107054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107054u;
        // 0x107058: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107054) {
            ctx->pc = 0x10707Cu;
            goto label_10707c;
        }
    }
    ctx->pc = 0x10705Cu;
label_10705c:
    // 0x10705c: 0x268206d0  addiu       $v0, $s4, 0x6D0
    ctx->pc = 0x10705cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
label_107060:
    // 0x107060: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x107060u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
label_107064:
    // 0x107064: 0x10000004  b           . + 4 + (0x4 << 2)
label_107068:
    if (ctx->pc == 0x107068u) {
        ctx->pc = 0x107068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107064u;
        // 0x107068: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10706Cu;
        goto label_10706c;
    }
    ctx->pc = 0x107064u;
    {
        const bool branch_taken_0x107064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x107068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107064u;
        // 0x107068: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107064) {
            ctx->pc = 0x107078u;
            goto label_107078;
        }
    }
    ctx->pc = 0x10706Cu;
label_10706c:
    // 0x10706c: 0x268306d0  addiu       $v1, $s4, 0x6D0
    ctx->pc = 0x10706cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1744));
label_107070:
    // 0x107070: 0x269e06c8  addiu       $fp, $s4, 0x6C8
    ctx->pc = 0x107070u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1736));
label_107074:
    // 0x107074: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x107074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_107078:
    // 0x107078: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x107078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_10707c:
    // 0x10707c: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x10707cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_107080:
    // 0x107080: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x107080u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_107084:
    // 0x107084: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x107084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_107088:
    // 0x107088: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x107088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_10708c:
    // 0x10708c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10708cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_107090:
    // 0x107090: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_107094:
    if (ctx->pc == 0x107094u) {
        ctx->pc = 0x107094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107090u;
        // 0x107094: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107098u;
        goto label_107098;
    }
    ctx->pc = 0x107090u;
    {
        const bool branch_taken_0x107090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107090u;
        // 0x107094: 0x2841021  addu        $v0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107090) {
            ctx->pc = 0x1070B0u;
            goto label_1070b0;
        }
    }
    ctx->pc = 0x107098u;
label_107098:
    // 0x107098: 0x8c4306dc  lw          $v1, 0x6DC($v0)
    ctx->pc = 0x107098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1756)));
label_10709c:
    // 0x10709c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1070a0:
    if (ctx->pc == 0x1070A0u) {
        ctx->pc = 0x1070A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10709Cu;
        // 0x1070a0: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1070A4u;
        goto label_1070a4;
    }
    ctx->pc = 0x10709Cu;
    {
        const bool branch_taken_0x10709c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1070A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10709Cu;
        // 0x1070a0: 0x3c050015  lui         $a1, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10709c) {
            ctx->pc = 0x1070B0u;
            goto label_1070b0;
        }
    }
    ctx->pc = 0x1070A4u;
label_1070a4:
    // 0x1070a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1070a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1070a8:
    // 0x1070a8: 0xc0417dc  jal         func_105F70
label_1070ac:
    if (ctx->pc == 0x1070ACu) {
        ctx->pc = 0x1070ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070A8u;
        // 0x1070ac: 0x24a5da08  addiu       $a1, $a1, -0x25F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1070B0u;
        goto label_1070b0;
    }
    ctx->pc = 0x1070A8u;
    SET_GPR_U32(ctx, 31, 0x1070B0u);
    ctx->pc = 0x1070ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1070A8u;
    // 0x1070ac: 0x24a5da08  addiu       $a1, $a1, -0x25F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105F70u, 0x1070A8u, 0x1070B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1070B0u;
label_1070b0:
    // 0x1070b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1070b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1070b4:
    // 0x1070b4: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x1070b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1070b8:
    // 0x1070b8: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x1070b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1070bc:
    // 0x1070bc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1070bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1070c0:
    // 0x1070c0: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x1070c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1070c4:
    // 0x1070c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1070c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1070c8:
    // 0x1070c8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1070cc:
    if (ctx->pc == 0x1070CCu) {
        ctx->pc = 0x1070CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070C8u;
        // 0x1070cc: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1070D0u;
        goto label_1070d0;
    }
    ctx->pc = 0x1070C8u;
    {
        const bool branch_taken_0x1070c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1070CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1070C8u;
        // 0x1070cc: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1070c8) {
            ctx->pc = 0x107110u;
            goto label_107110;
        }
    }
    ctx->pc = 0x1070D0u;
label_1070d0:
    // 0x1070d0: 0x3c51021  addu        $v0, $fp, $a1
    ctx->pc = 0x1070d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_1070d4:
    // 0x1070d4: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x1070d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_1070d8:
    // 0x1070d8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1070d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1070dc:
    // 0x1070dc: 0x8c6505a4  lw          $a1, 0x5A4($v1)
    ctx->pc = 0x1070dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1444)));
label_1070e0:
    // 0x1070e0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1070e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1070e4:
    // 0x1070e4: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x1070e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1070e8:
    // 0x1070e8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x1070e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1070ec:
    // 0x1070ec: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1070ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1070f0:
    // 0x1070f0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1070f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1070f4:
    // 0x1070f4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1070f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1070f8:
    // 0x1070f8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1070f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1070fc:
    // 0x1070fc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1070fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_107100:
    // 0x107100: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x107100u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_107104:
    // 0x107104: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x107104u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_107108:
    // 0x107108: 0x80422a2  j           func_108A88
label_10710c:
    if (ctx->pc == 0x10710Cu) {
        ctx->pc = 0x10710Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107108u;
        // 0x10710c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107110u;
        goto label_107110;
    }
    ctx->pc = 0x107108u;
    ctx->pc = 0x10710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107108u;
    // 0x10710c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A88u, 0x107108u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x107110u;
label_107110:
    // 0x107110: 0x8c4306dc  lw          $v1, 0x6DC($v0)
    ctx->pc = 0x107110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1756)));
label_107114:
    // 0x107114: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_107118:
    if (ctx->pc == 0x107118u) {
        ctx->pc = 0x107118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107114u;
        // 0x107118: 0x3c51021  addu        $v0, $fp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10711Cu;
        goto label_10711c;
    }
    ctx->pc = 0x107114u;
    {
        const bool branch_taken_0x107114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x107118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107114u;
        // 0x107118: 0x3c51021  addu        $v0, $fp, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107114) {
            ctx->pc = 0x107154u;
            goto label_107154;
        }
    }
    ctx->pc = 0x10711Cu;
label_10711c:
    // 0x10711c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x10711cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_107120:
    // 0x107120: 0x8e850830  lw          $a1, 0x830($s4)
    ctx->pc = 0x107120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2096)));
label_107124:
    // 0x107124: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x107124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_107128:
    // 0x107128: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x107128u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_10712c:
    // 0x10712c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x10712cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_107130:
    // 0x107130: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x107130u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_107134:
    // 0x107134: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x107134u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_107138:
    // 0x107138: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x107138u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_10713c:
    // 0x10713c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x10713cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_107140:
    // 0x107140: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x107140u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_107144:
    // 0x107144: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x107144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_107148:
    // 0x107148: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x107148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10714c:
    // 0x10714c: 0x80422a2  j           func_108A88
label_107150:
    if (ctx->pc == 0x107150u) {
        ctx->pc = 0x107150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10714Cu;
        // 0x107150: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107154u;
        goto label_107154;
    }
    ctx->pc = 0x10714Cu;
    ctx->pc = 0x107150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10714Cu;
    // 0x107150: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A88u, 0x10714Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x107154u;
label_107154:
    // 0x107154: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x107154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_107158:
    // 0x107158: 0x8e850830  lw          $a1, 0x830($s4)
    ctx->pc = 0x107158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2096)));
label_10715c:
    // 0x10715c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10715cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_107160:
    // 0x107160: 0x8c6605a4  lw          $a2, 0x5A4($v1)
    ctx->pc = 0x107160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1444)));
label_107164:
    // 0x107164: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x107164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_107168:
    // 0x107168: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x107168u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_10716c:
    // 0x10716c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x10716cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_107170:
    // 0x107170: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x107170u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_107174:
    // 0x107174: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x107174u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_107178:
    // 0x107178: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x107178u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_10717c:
    // 0x10717c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x10717cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_107180:
    // 0x107180: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x107180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_107184:
    // 0x107184: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x107184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_107188:
    // 0x107188: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x107188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10718c:
    // 0x10718c: 0x8042266  j           func_108998
label_107190:
    if (ctx->pc == 0x107190u) {
        ctx->pc = 0x107190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10718Cu;
        // 0x107190: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107194u;
        goto label_107194;
    }
    ctx->pc = 0x10718Cu;
    ctx->pc = 0x107190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10718Cu;
    // 0x107190: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108998u, 0x10718Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x107194u;
label_107194:
    // 0x107194: 0x0  nop
    ctx->pc = 0x107194u;
    // NOP
    ctx->pc = 0x107198u;
}
