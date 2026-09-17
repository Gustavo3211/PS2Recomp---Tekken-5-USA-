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

// Function: sub_004F2380
// Address: 0x4f2380 - 0x4f2888
void sub_004F2380_0x4f2380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2380_0x4f2380");
#endif

    switch (ctx->pc) {
        case 0x4f23a4u: goto label_4f23a4;
        case 0x4f2580u: goto label_4f2580;
        case 0x4f2734u: goto label_4f2734;
        default: break;
    }

    ctx->pc = 0x4f2380u;

    // 0x4f2380: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4f2380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4f2384: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f2384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f2388: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f2388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f238c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f238cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f2390: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4f2390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4f2394: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4f2394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4f2398: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4f2398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4f239c: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x4F239Cu;
    SET_GPR_U32(ctx, 31, 0x4F23A4u);
    ctx->pc = 0x4F23A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F239Cu;
    // 0x4f23a0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x4F239Cu, 0x4F23A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F23A4u;
label_4f23a4:
    // 0x4f23a4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4f23a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4f23a8: 0x264601b4  addiu       $a2, $s2, 0x1B4
    ctx->pc = 0x4f23a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 436));
    // 0x4f23ac: 0x246d122c  addiu       $t5, $v1, 0x122C
    ctx->pc = 0x4f23acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), 4652));
    // 0x4f23b0: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x4f23b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7F122Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F122Cu, _value); } while (0);
    // 0x4f23b4: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4f23b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f23b8: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4F23B8u;
    {
        const bool branch_taken_0x4f23b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4F23BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F23B8u;
        // 0x4f23bc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f23b8) {
            ctx->pc = 0x4F2408u;
            goto label_4f2408;
        }
    }
    ctx->pc = 0x4F23C0u;
    // 0x4f23c0: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4f23c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4f23c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4f23c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4f23c8: 0x26241210  addiu       $a0, $s1, 0x1210
    ctx->pc = 0x4f23c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4624));
    // 0x4f23cc: 0x24058000  addiu       $a1, $zero, -0x8000
    ctx->pc = 0x4f23ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x4f23d0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f23d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F1210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1210u, _value); } while (0);
    // 0x4f23d4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4f23d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F1210u));
    // 0x4f23d8: 0xa642000e  sh          $v0, 0xE($s2)
    ctx->pc = 0x4f23d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f23dc: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4f23dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x7F1210u));
    // 0x4f23e0: 0xa643015e  sh          $v1, 0x15E($s2)
    ctx->pc = 0x4f23e0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 350), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f23e4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4f23e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x7F1210u));
    // 0x4f23e8: 0xa6400164  sh          $zero, 0x164($s2)
    ctx->pc = 0x4f23e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 356), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f23ec: 0xa6420162  sh          $v0, 0x162($s2)
    ctx->pc = 0x4f23ecu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 354), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f23f0: 0xa64001b6  sh          $zero, 0x1B6($s2)
    ctx->pc = 0x4f23f0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 438), (uint16_t)GPR_U32(ctx, 0));
    // 0x4f23f4: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4f23f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f23f8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4f23f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4f23fc: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4f23fcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f2400: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4F2400u;
    {
        const bool branch_taken_0x4f2400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2400u;
        // 0x4f2404: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2400) {
            ctx->pc = 0x4F2410u;
            goto label_4f2410;
        }
    }
    ctx->pc = 0x4F2408u;
label_4f2408:
    // 0x4f2408: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4f2408u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4f240c: 0x26241210  addiu       $a0, $s1, 0x1210
    ctx->pc = 0x4f240cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4624));
label_4f2410:
    // 0x4f2410: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x4f2410u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4f2414: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4f2414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f2418: 0x3c0fffff  lui         $t7, 0xFFFF
    ctx->pc = 0x4f2418u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)65535 << 16));
    // 0x4f241c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f241cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f2420: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x4f2420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x4f2424: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f2424u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f2428: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f2428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f242c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f242cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4f2430: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f2430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f2434: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4f2434u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f2438: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4f2438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4f243c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f243cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f2440: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f2440u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f2444: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x4f2444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x4f2448: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f2448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f244c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f244cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4f2450: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4f2450u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f2454: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x4F2454u;
    {
        const bool branch_taken_0x4f2454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2454u;
        // 0x4f2458: 0x3c0a007f  lui         $t2, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2454) {
            ctx->pc = 0x4F25B0u;
            goto label_4f25b0;
        }
    }
    ctx->pc = 0x4F245Cu;
    // 0x4f245c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x4f245cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4f2460: 0x254a121c  addiu       $t2, $t2, 0x121C
    ctx->pc = 0x4f2460u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4636));
    // 0x4f2464: 0x3c0c007f  lui         $t4, 0x7F
    ctx->pc = 0x4f2464u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)127 << 16));
    // 0x4f2468: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x4f2468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f246c: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x4f246cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x4f2470: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f2470u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f2474: 0x258c1220  addiu       $t4, $t4, 0x1220
    ctx->pc = 0x4f2474u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4640));
    // 0x4f2478: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x4f2478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x4f247c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f247cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f2480: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4f2480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4f2484: 0x8d860000  lw          $a2, 0x0($t4)
    ctx->pc = 0x4f2484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f2488: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x4f2488u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x4f248c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f248cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f2490: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4f2490u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4f2494: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f2494u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f2498: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x4f2498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4f249c: 0x256b1224  addiu       $t3, $t3, 0x1224
    ctx->pc = 0x4f249cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4644));
    // 0x4f24a0: 0x8dad0000  lw          $t5, 0x0($t5)
    ctx->pc = 0x4f24a0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4f24a4: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4f24a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4f24a8: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x4f24a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x4f24ac: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x4f24acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4f24b0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f24b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f24b4: 0x85440000  lh          $a0, 0x0($t2)
    ctx->pc = 0x4f24b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4f24b8: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x4f24b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x4f24bc: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4f24bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4f24c0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4f24c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4f24c4: 0x260e1214  addiu       $t6, $s0, 0x1214
    ctx->pc = 0x4f24c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 16), 4628));
    // 0x4f24c8: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4f24c8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x4f24cc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4f24ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4f24d0: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x4f24d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x4f24d4: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x4f24d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4f24d8: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x4f24d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x4f24dc: 0x85890000  lh          $t1, 0x0($t4)
    ctx->pc = 0x4f24dcu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4f24e0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f24e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f24e4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f24e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f24e8: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x4f24e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x4f24ec: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4f24ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4f24f0: 0xad670000  sw          $a3, 0x0($t3)
    ctx->pc = 0x4f24f0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
    // 0x4f24f4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4f24f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4f24f8: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x4f24f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4f24fc: 0x85680000  lh          $t0, 0x0($t3)
    ctx->pc = 0x4f24fcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4f2500: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x4f2500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x4f2504: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f2504u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f2508: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x4f2508u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4f250c: 0x8f2025  or          $a0, $a0, $t7
    ctx->pc = 0x4f250cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 15));
    // 0x4f2510: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4f2510u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4f2514: 0xad450000  sw          $a1, 0x0($t2)
    ctx->pc = 0x4f2514u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 5));
    // 0x4f2518: 0x8da20004  lw          $v0, 0x4($t5)
    ctx->pc = 0x4f2518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x4f251c: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x4f251cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x4f2520: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f2520u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f2524: 0x1224823  subu        $t1, $t1, $v0
    ctx->pc = 0x4f2524u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x4f2528: 0x12f4825  or          $t1, $t1, $t7
    ctx->pc = 0x4f2528u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 15));
    // 0x4f252c: 0xc93024  and         $a2, $a2, $t1
    ctx->pc = 0x4f252cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 9));
    // 0x4f2530: 0xad860000  sw          $a2, 0x0($t4)
    ctx->pc = 0x4f2530u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 6));
    // 0x4f2534: 0x8da20008  lw          $v0, 0x8($t5)
    ctx->pc = 0x4f2534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x4f2538: 0x4f1024  and         $v0, $v0, $t7
    ctx->pc = 0x4f2538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 15));
    // 0x4f253c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f253cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f2540: 0x1024023  subu        $t0, $t0, $v0
    ctx->pc = 0x4f2540u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x4f2544: 0x10f4025  or          $t0, $t0, $t7
    ctx->pc = 0x4f2544u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 15));
    // 0x4f2548: 0xe83824  and         $a3, $a3, $t0
    ctx->pc = 0x4f2548u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 8));
    // 0x4f254c: 0xad670000  sw          $a3, 0x0($t3)
    ctx->pc = 0x4f254cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 7));
    // 0x4f2550: 0x864201b8  lh          $v0, 0x1B8($s2)
    ctx->pc = 0x4f2550u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x4f2554: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x4f2554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x4f2558: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f2558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f255c: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x4f255cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x4f2560: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f2560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f2564: 0x85c20000  lh          $v0, 0x0($t6)
    ctx->pc = 0x4f2564u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4f2568: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x4f2568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x4f256c: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x4f256cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x4f2570: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f2570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f2574: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4f2574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2578: 0xc122d6e  jal         func_48B5B8
    ctx->pc = 0x4F2578u;
    SET_GPR_U32(ctx, 31, 0x4F2580u);
    ctx->pc = 0x4F257Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2578u;
    // 0x4f257c: 0xadc30000  sw          $v1, 0x0($t6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B5B8u, 0x4F2578u, 0x4F2580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2580u;
label_4f2580:
    // 0x4f2580: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4F2580u;
    {
        const bool branch_taken_0x4f2580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F2584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2580u;
        // 0x4f2584: 0x26241210  addiu       $a0, $s1, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2580) {
            ctx->pc = 0x4F25B8u;
            goto label_4f25b8;
        }
    }
    ctx->pc = 0x4F2588u;
    // 0x4f2588: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f2588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f258c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f258cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f2590: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f2590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f2594: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f2594u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f2598: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f2598u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f259c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f259cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f25a0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4f25a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f25a4: 0x813caae  j           func_4F2AB8
    ctx->pc = 0x4F25A4u;
    ctx->pc = 0x4F25A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F25A4u;
    // 0x4f25a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F2AB8u;
    sub_004F2AB8_0x4f2ab8(rdram, ctx, runtime); return;
    ctx->pc = 0x4F25ACu;
    // 0x4f25ac: 0x0  nop
    ctx->pc = 0x4f25acu;
    // NOP
label_4f25b0:
    // 0x4f25b0: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4f25b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4f25b4: 0x26241210  addiu       $a0, $s1, 0x1210
    ctx->pc = 0x4f25b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4624));
label_4f25b8:
    // 0x4f25b8: 0x26470162  addiu       $a3, $s2, 0x162
    ctx->pc = 0x4f25b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 354));
    // 0x4f25bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4f25bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f25c0: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4f25c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4f25c4: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4f25c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f25c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f25c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f25cc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4f25ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4f25d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f25d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f25d4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f25d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4f25d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f25d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f25dc: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4f25dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f25e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4f25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4f25e4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4f25e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4f25e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f25e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f25ec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4f25ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4f25f0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4f25f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4f25f4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x4f25f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4f25f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F25F8u;
    {
        const bool branch_taken_0x4f25f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F25FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F25F8u;
        // 0x4f25fc: 0x26061214  addiu       $a2, $s0, 0x1214 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4628));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f25f8) {
            ctx->pc = 0x4F2610u;
            goto label_4f2610;
        }
    }
    ctx->pc = 0x4F2600u;
    // 0x4f2600: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4f2600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f2604: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4F2604u;
    {
        const bool branch_taken_0x4f2604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2604u;
        // 0x4f2608: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f2604) {
            ctx->pc = 0x4F261Cu;
            goto label_4f261c;
        }
    }
    ctx->pc = 0x4F260Cu;
    // 0x4f260c: 0x0  nop
    ctx->pc = 0x4f260cu;
    // NOP
label_4f2610:
    // 0x4f2610: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4f2610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f2614: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4f2614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4f2618: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4f2618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4f261c:
    // 0x4f261c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4f261cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4f2620: 0x26261210  addiu       $a2, $s1, 0x1210
    ctx->pc = 0x4f2620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4624));
    // 0x4f2624: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x4f2624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4f2628: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4f2628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f262c: 0x92021214  lbu         $v0, 0x1214($s0)
    ctx->pc = 0x4f262cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4628)));
    // 0x4f2630: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x4f2630u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f2634: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4f2634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4f2638: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4f2638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4f263c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f263cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f2640: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4f2640u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4f2644: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4f2644u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f2648: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4f2648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f264c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4F264Cu;
    {
        const bool branch_taken_0x4f264c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F2650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F264Cu;
        // 0x4f2650: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f264c) {
            ctx->pc = 0x4F2678u;
            goto label_4f2678;
        }
    }
    ctx->pc = 0x4F2654u;
    // 0x4f2654: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f2654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f2658: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f2658u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f265c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f265cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f2660: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f2660u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f2664: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f2664u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f2668: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f2668u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f266c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4f266cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f2670: 0x813cab4  j           func_4F2AD0
    ctx->pc = 0x4F2670u;
    ctx->pc = 0x4F2674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F2670u;
    // 0x4f2674: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F2AD0u;
    sub_004F2AD0_0x4f2ad0(rdram, ctx, runtime); return;
    ctx->pc = 0x4F2678u;
label_4f2678:
    // 0x4f2678: 0x26540164  addiu       $s4, $s2, 0x164
    ctx->pc = 0x4f2678u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 356));
    // 0x4f267c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4f267cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f2680: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4f2680u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4f2684: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4f2684u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4f2688: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f2688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f268c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4f268cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4f2690: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4f2690u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f2694: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4f2694u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4f2698: 0x964301b8  lhu         $v1, 0x1B8($s2)
    ctx->pc = 0x4f2698u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x4f269c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4f269cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f26a0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x4f26a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4f26a4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4F26A4u;
    {
        const bool branch_taken_0x4f26a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F26A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F26A4u;
        // 0x4f26a8: 0x2650015e  addiu       $s0, $s2, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f26a4) {
            ctx->pc = 0x4F26D0u;
            goto label_4f26d0;
        }
    }
    ctx->pc = 0x4F26ACu;
    // 0x4f26ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f26acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f26b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f26b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f26b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f26b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f26b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f26b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f26bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f26bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f26c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f26c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f26c4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4f26c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f26c8: 0x813cab4  j           func_4F2AD0
    ctx->pc = 0x4F26C8u;
    ctx->pc = 0x4F26CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F26C8u;
    // 0x4f26cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F2AD0u;
    sub_004F2AD0_0x4f2ad0(rdram, ctx, runtime); return;
    ctx->pc = 0x4F26D0u;
label_4f26d0:
    // 0x4f26d0: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x4f26d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f26d4: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4f26d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f26d8: 0x26510160  addiu       $s1, $s2, 0x160
    ctx->pc = 0x4f26d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
    // 0x4f26dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4f26dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f26e0: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4f26e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4f26e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f26e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f26e8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4f26e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4f26ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f26ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f26f0: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4f26f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f26f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4f26f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4f26f8: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4f26f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4f26fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f26fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f2700: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4f2700u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4f2704: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x4f2704u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f2708: 0xa6050000  sh          $a1, 0x0($s0)
    ctx->pc = 0x4f2708u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x4f270c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4f270cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f2710: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4f2710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f2714: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x4f2714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x4f2718: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4f2718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4f271c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f271cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f2720: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f2720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f2724: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4f2724u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4f2728: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4f2728u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f272c: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4F272Cu;
    SET_GPR_U32(ctx, 31, 0x4F2734u);
    ctx->pc = 0x4F2730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F272Cu;
    // 0x4f2730: 0xa6220000  sh          $v0, 0x0($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4F272Cu, 0x4F2734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F2734u;
label_4f2734:
    // 0x4f2734: 0x240300a7  addiu       $v1, $zero, 0xA7
    ctx->pc = 0x4f2734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
    // 0x4f2738: 0xa4430008  sh          $v1, 0x8($v0)
    ctx->pc = 0x4f2738u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f273c: 0x24470010  addiu       $a3, $v0, 0x10
    ctx->pc = 0x4f273cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x4f2740: 0x24480014  addiu       $t0, $v0, 0x14
    ctx->pc = 0x4f2740u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x4f2744: 0x24490018  addiu       $t1, $v0, 0x18
    ctx->pc = 0x4f2744u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4f2748: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4f2748u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f274c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4f274cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4f2750: 0x24a51220  addiu       $a1, $a1, 0x1220
    ctx->pc = 0x4f2750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4640));
    // 0x4f2754: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4f2754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4f2758: 0xa443015e  sh          $v1, 0x15E($v0)
    ctx->pc = 0x4f2758u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 350), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f275c: 0x34843333  ori         $a0, $a0, 0x3333
    ctx->pc = 0x4f275cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
    // 0x4f2760: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4f2760u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4f2764: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4f2764u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4f2768: 0x24c61224  addiu       $a2, $a2, 0x1224
    ctx->pc = 0x4f2768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4644));
    // 0x4f276c: 0xac520140  sw          $s2, 0x140($v0)
    ctx->pc = 0x4f276cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 18));
    // 0x4f2770: 0xa4430160  sh          $v1, 0x160($v0)
    ctx->pc = 0x4f2770u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 352), (uint16_t)GPR_U32(ctx, 3));
    // 0x4f2774: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x4f2774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x4f2778: 0x94e30000  lhu         $v1, 0x0($a3)
    ctx->pc = 0x4f2778u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f277c: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4f277cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4f2780: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4f2780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4f2784: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4f2784u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4f2788: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4f2788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f278c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f278cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f2790: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4f2790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4f2794: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4f2794u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4f2798: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4f2798u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f279c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4f279cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f27a0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x4f27a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4f27a4: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x4f27a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x4f27a8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f27a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f27ac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f27acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f27b0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x4f27b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x4f27b4: 0x84a40000  lh          $a0, 0x0($a1)
    ctx->pc = 0x4f27b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f27b8: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4f27b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4f27bc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f27bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f27c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f27c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4f27c4: 0x932025  or          $a0, $a0, $s3
    ctx->pc = 0x4f27c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
    // 0x4f27c8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4f27c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4f27cc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4f27ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4f27d0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4f27d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f27d4: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4f27d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f27d8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f27d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f27dc: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4f27dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4f27e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f27e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f27e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f27e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f27e8: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4f27e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4f27ec: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4f27ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4f27f0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4f27f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f27f4: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4f27f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4f27f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f27f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f27fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f27fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f2800: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4f2800u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4f2804: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f2804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f2808: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4f2808u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f280c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x4f280cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x4f2810: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4f2810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4f2814: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f2814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f2818: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4f2818u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4f281c: 0x94c40000  lhu         $a0, 0x0($a2)
    ctx->pc = 0x4f281cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f2820: 0xa6840000  sh          $a0, 0x0($s4)
    ctx->pc = 0x4f2820u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4f2824: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x4f2824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x4f2828: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x4f2828u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f282c: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4f282cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4f2830: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4f2830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f2834: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f2834u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f2838: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f2838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4f283c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4f283cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4f2840: 0x932025  or          $a0, $a0, $s3
    ctx->pc = 0x4f2840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
    // 0x4f2844: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4f2844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4f2848: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4f2848u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4f284c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4f284cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f2850: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4f2850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f2854: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f2854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f2858: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4f2858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4f285c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4f285cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4f2860: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4f2860u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f2864: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4f2864u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4f2868: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f2868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f286c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f286cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f2870: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f2870u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f2874: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4f2874u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f2878: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4f2878u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4f287c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4f287cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4f2880: 0x3e00008  jr          $ra
    ctx->pc = 0x4F2880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F2884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2880u;
        // 0x4f2884: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F2888u;
}
