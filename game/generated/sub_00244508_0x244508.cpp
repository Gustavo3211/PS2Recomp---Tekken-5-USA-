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

// Function: sub_00244508
// Address: 0x244508 - 0x244790
void sub_00244508_0x244508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244508_0x244508");
#endif

    switch (ctx->pc) {
        case 0x244570u: goto label_244570;
        case 0x2445b0u: goto label_2445b0;
        case 0x2445ccu: goto label_2445cc;
        case 0x244620u: goto label_244620;
        case 0x244650u: goto label_244650;
        case 0x2446c0u: goto label_2446c0;
        case 0x244730u: goto label_244730;
        default: break;
    }

    ctx->pc = 0x244508u;

    // 0x244508: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x244508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x24450c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x24450cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x244510: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x244510u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244514: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x244514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x244518: 0x3c160016  lui         $s6, 0x16
    ctx->pc = 0x244518u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)22 << 16));
    // 0x24451c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x24451cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x244520: 0x13a080  sll         $s4, $s3, 2
    ctx->pc = 0x244520u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x244524: 0x26c56690  addiu       $a1, $s6, 0x6690
    ctx->pc = 0x244524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 26256));
    // 0x244528: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x244528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x24452c: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x24452cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x244530: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x244530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x244534: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x244534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x244538: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x244538u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24453c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x24453cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x244540: 0x2444011c  addiu       $a0, $v0, 0x11C
    ctx->pc = 0x244540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x244544: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x244544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x244548: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x244548u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x24454c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x24454cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x244550: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x244550u;
    {
        const bool branch_taken_0x244550 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x244554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244550u;
        // 0x244554: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244550) {
            ctx->pc = 0x244594u;
            goto label_244594;
        }
    }
    ctx->pc = 0x244558u;
    // 0x244558: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x244558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x24455c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24455cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244560: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x244560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x244564: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x244564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244568: 0x132140  sll         $a0, $s3, 5
    ctx->pc = 0x244568u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x24456c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x24456cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_244570:
    // 0x244570: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x244570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x244574: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x244574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x244578: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x244578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x24457c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x24457cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x244580: 0xe4e00038  swc1        $f0, 0x38($a3)
    ctx->pc = 0x244580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
    // 0x244584: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x244584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x244588: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x244588u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24458c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x24458Cu;
    {
        const bool branch_taken_0x24458c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24458Cu;
        // 0x244590: 0x831021  addu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24458c) {
            ctx->pc = 0x244570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244570;
        }
    }
    ctx->pc = 0x244594u;
label_244594:
    // 0x244594: 0x26c36690  addiu       $v1, $s6, 0x6690
    ctx->pc = 0x244594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 26256));
    // 0x244598: 0x8c62019c  lw          $v0, 0x19C($v1)
    ctx->pc = 0x244598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 412)));
    // 0x24459c: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x24459Cu;
    {
        const bool branch_taken_0x24459c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2445A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24459Cu;
        // 0x2445a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24459c) {
            ctx->pc = 0x2445F0u;
            goto label_2445f0;
        }
    }
    ctx->pc = 0x2445A4u;
    // 0x2445a4: 0xc7948858  lwc1        $f20, -0x77A8($gp)
    ctx->pc = 0x2445a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2445a8: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2445a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2445ac: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2445acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_2445b0:
    // 0x2445b0: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x2445b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x2445b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2445b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2445b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2445b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2445bc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2445bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2445c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2445c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2445c4: 0xc091114  jal         func_244450
    ctx->pc = 0x2445C4u;
    SET_GPR_U32(ctx, 31, 0x2445CCu);
    ctx->pc = 0x2445C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2445C4u;
    // 0x2445c8: 0x628021  addu        $s0, $v1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244450u, 0x2445C4u, 0x2445CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2445CCu;
label_2445cc:
    // 0x2445cc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2445ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2445d0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2445D0u;
    {
        const bool branch_taken_0x2445d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2445d0) {
            ctx->pc = 0x2445D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2445D0u;
            // 0x2445d4: 0xe600001c  swc1        $f0, 0x1C($s0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2445E0u;
            goto label_2445e0;
        }
    }
    ctx->pc = 0x2445D8u;
    // 0x2445d8: 0xc780885c  lwc1        $f0, -0x77A4($gp)
    ctx->pc = 0x2445d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2445dc: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x2445dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
label_2445e0:
    // 0x2445e0: 0x8e42019c  lw          $v0, 0x19C($s2)
    ctx->pc = 0x2445e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 412)));
    // 0x2445e4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2445e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2445e8: 0x5440fff1  bnel        $v0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x2445E8u;
    {
        const bool branch_taken_0x2445e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2445e8) {
            ctx->pc = 0x2445ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2445E8u;
            // 0x2445ec: 0x8e430104  lw          $v1, 0x104($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2445B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2445b0;
        }
    }
    ctx->pc = 0x2445F0u;
label_2445f0:
    // 0x2445f0: 0x26c46690  addiu       $a0, $s6, 0x6690
    ctx->pc = 0x2445f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 26256));
    // 0x2445f4: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x2445f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2445f8: 0x2442011c  addiu       $v0, $v0, 0x11C
    ctx->pc = 0x2445f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x2445fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2445fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x244600: 0x18600024  blez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x244600u;
    {
        const bool branch_taken_0x244600 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x244604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244600u;
        // 0x244604: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244600) {
            ctx->pc = 0x244694u;
            goto label_244694;
        }
    }
    ctx->pc = 0x244608u;
    // 0x244608: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x244608u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24460c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x24460cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244610: 0x134940  sll         $t1, $s3, 5
    ctx->pc = 0x244610u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x244614: 0x250b0004  addiu       $t3, $t0, 0x4
    ctx->pc = 0x244614u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x244618: 0x1261021  addu        $v0, $t1, $a2
    ctx->pc = 0x244618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x24461c: 0x0  nop
    ctx->pc = 0x24461cu;
    // NOP
label_244620:
    // 0x244620: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x244620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x244624: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x244624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x244628: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x244628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24462c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x24462cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x244630: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x244630u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x244634: 0x8ce30028  lw          $v1, 0x28($a3)
    ctx->pc = 0x244634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x244638: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x244638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x24463c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24463Cu;
    {
        const bool branch_taken_0x24463c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24463Cu;
        // 0x244640: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24463c) {
            ctx->pc = 0x244680u;
            goto label_244680;
        }
    }
    ctx->pc = 0x244644u;
    // 0x244644: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x244644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x244648: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x244648u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24464c: 0xc4e10038  lwc1        $f1, 0x38($a3)
    ctx->pc = 0x24464cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_244650:
    // 0x244650: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x244650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244654: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x244654u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244658: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x244658u;
    {
        const bool branch_taken_0x244658 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244658u;
        // 0x24465c: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244658) {
            ctx->pc = 0x24466Cu;
            goto label_24466c;
        }
    }
    ctx->pc = 0x244660u;
    // 0x244660: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x244660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244664: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x244664u;
    {
        const bool branch_taken_0x244664 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x244664) {
            ctx->pc = 0x244668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244664u;
            // 0x244668: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244674u;
            goto label_244674;
        }
    }
    ctx->pc = 0x24466Cu;
label_24466c:
    // 0x24466c: 0xe4e00038  swc1        $f0, 0x38($a3)
    ctx->pc = 0x24466cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
    // 0x244670: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x244670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_244674:
    // 0x244674: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x244674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x244678: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x244678u;
    {
        const bool branch_taken_0x244678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244678) {
            ctx->pc = 0x24467Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244678u;
            // 0x24467c: 0xc4e10038  lwc1        $f1, 0x38($a3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x244650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244650;
        }
    }
    ctx->pc = 0x244680u;
label_244680:
    // 0x244680: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x244680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x244684: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x244684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x244688: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x244688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24468c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x24468Cu;
    {
        const bool branch_taken_0x24468c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24468Cu;
        // 0x244690: 0x1261021  addu        $v0, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24468c) {
            ctx->pc = 0x244620u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244620;
        }
    }
    ctx->pc = 0x244694u;
label_244694:
    // 0x244694: 0x26c56690  addiu       $a1, $s6, 0x6690
    ctx->pc = 0x244694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 26256));
    // 0x244698: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x244698u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24469c: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x24469cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2446a0: 0x2463011c  addiu       $v1, $v1, 0x11C
    ctx->pc = 0x2446a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 284));
    // 0x2446a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2446a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2446a8: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2446A8u;
    {
        const bool branch_taken_0x2446a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2446ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446A8u;
        // 0x2446ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2446a8) {
            ctx->pc = 0x2446F8u;
            goto label_2446f8;
        }
    }
    ctx->pc = 0x2446B0u;
    // 0x2446b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2446b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2446b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2446b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2446b8: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x2446b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2446bc: 0x132940  sll         $a1, $s3, 5
    ctx->pc = 0x2446bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
label_2446c0:
    // 0x2446c0: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2446c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2446c4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2446c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2446c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2446c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2446cc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2446ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2446d0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2446d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2446d4: 0xc4e00038  lwc1        $f0, 0x38($a3)
    ctx->pc = 0x2446d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2446d8: 0x0  nop
    ctx->pc = 0x2446d8u;
    // NOP
    // 0x2446dc: 0x0  nop
    ctx->pc = 0x2446dcu;
    // NOP
    // 0x2446e0: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2446e0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x2446e4: 0xe4e00038  swc1        $f0, 0x38($a3)
    ctx->pc = 0x2446e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
    // 0x2446e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2446e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2446ec: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2446ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2446f0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2446F0u;
    {
        const bool branch_taken_0x2446f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2446F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446F0u;
        // 0x2446f4: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2446f0) {
            ctx->pc = 0x2446C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2446c0;
        }
    }
    ctx->pc = 0x2446F8u;
label_2446f8:
    // 0x2446f8: 0x26c66690  addiu       $a2, $s6, 0x6690
    ctx->pc = 0x2446f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 26256));
    // 0x2446fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2446fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x244700: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x244700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x244704: 0x2861021  addu        $v0, $s4, $a2
    ctx->pc = 0x244704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 6)));
    // 0x244708: 0x2443011c  addiu       $v1, $v0, 0x11C
    ctx->pc = 0x244708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 284));
    // 0x24470c: 0x0  nop
    ctx->pc = 0x24470cu;
    // NOP
    // 0x244710: 0x0  nop
    ctx->pc = 0x244710u;
    // NOP
    // 0x244714: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x244714u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x244718: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x244718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24471c: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x24471Cu;
    {
        const bool branch_taken_0x24471c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x244720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24471Cu;
        // 0x244720: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24471c) {
            ctx->pc = 0x24475Cu;
            goto label_24475c;
        }
    }
    ctx->pc = 0x244724u;
    // 0x244724: 0x132940  sll         $a1, $s3, 5
    ctx->pc = 0x244724u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x244728: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x244728u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x24472c: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x24472cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_244730:
    // 0x244730: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x244730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x244734: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x244734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x244738: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x244738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x24473c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x24473cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x244740: 0xc4e00038  lwc1        $f0, 0x38($a3)
    ctx->pc = 0x244740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244744: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x244744u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x244748: 0xe4e00038  swc1        $f0, 0x38($a3)
    ctx->pc = 0x244748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
    // 0x24474c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24474cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x244750: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x244750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x244754: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x244754u;
    {
        const bool branch_taken_0x244754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244754u;
        // 0x244758: 0xa41021  addu        $v0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244754) {
            ctx->pc = 0x244730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_244730;
        }
    }
    ctx->pc = 0x24475Cu;
label_24475c:
    // 0x24475c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24475cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x244760: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x244760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x244764: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x244764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x244768: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x244768u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24476c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x24476cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244770: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x244770u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x244774: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x244774u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x244778: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x244778u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24477c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x24477cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x244780: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x244780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x244784: 0x3e00008  jr          $ra
    ctx->pc = 0x244784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244784u;
        // 0x244788: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24478Cu;
    // 0x24478c: 0x0  nop
    ctx->pc = 0x24478cu;
    // NOP
    ctx->pc = 0x244790u;
}
