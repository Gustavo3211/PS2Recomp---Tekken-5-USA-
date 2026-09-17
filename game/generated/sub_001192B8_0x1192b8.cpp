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

// Function: sub_001192B8
// Address: 0x1192b8 - 0x1194f8
void sub_001192B8_0x1192b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001192B8_0x1192b8");
#endif

    switch (ctx->pc) {
        case 0x119314u: goto label_119314;
        case 0x119328u: goto label_119328;
        case 0x119350u: goto label_119350;
        case 0x119368u: goto label_119368;
        case 0x119388u: goto label_119388;
        case 0x1193c0u: goto label_1193c0;
        case 0x1193c8u: goto label_1193c8;
        case 0x1193d0u: goto label_1193d0;
        case 0x1193d8u: goto label_1193d8;
        case 0x1193e8u: goto label_1193e8;
        case 0x119410u: goto label_119410;
        case 0x119464u: goto label_119464;
        case 0x119474u: goto label_119474;
        case 0x119484u: goto label_119484;
        case 0x11948cu: goto label_11948c;
        case 0x119494u: goto label_119494;
        case 0x1194acu: goto label_1194ac;
        case 0x1194c8u: goto label_1194c8;
        default: break;
    }

    ctx->pc = 0x1192b8u;

    // 0x1192b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1192b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1192bc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1192bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1192c0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1192c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1192c4: 0x3c120013  lui         $s2, 0x13
    ctx->pc = 0x1192c4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)19 << 16));
    // 0x1192c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1192c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1192cc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1192ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1192d0: 0x26512148  addiu       $s1, $s2, 0x2148
    ctx->pc = 0x1192d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 8520));
    // 0x1192d4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1192d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1192d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1192d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1192dc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1192dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x132150u));
    // 0x1192e0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1192E0u;
    {
        const bool branch_taken_0x1192e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1192E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1192E0u;
        // 0x1192e4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1192e0) {
            ctx->pc = 0x1192F4u;
            goto label_1192f4;
        }
    }
    ctx->pc = 0x1192E8u;
    // 0x1192e8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1192e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1192ec: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x1192ECu;
    {
        const bool branch_taken_0x1192ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1192F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1192ECu;
        // 0x1192f0: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1192ec) {
            ctx->pc = 0x1193ECu;
            goto label_1193ec;
        }
    }
    ctx->pc = 0x1192F4u;
label_1192f4:
    // 0x1192f4: 0x3c13001f  lui         $s3, 0x1F
    ctx->pc = 0x1192f4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)31 << 16));
    // 0x1192f8: 0xfe402148  sd          $zero, 0x2148($s2)
    ctx->pc = 0x1192f8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8520), GPR_U64(ctx, 0));
    // 0x1192fc: 0x2670bfc0  addiu       $s0, $s3, -0x4040
    ctx->pc = 0x1192fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950848));
    // 0x119300: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x119300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x119304: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x119304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119308: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x119308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11930c: 0xc04a151  jal         func_128544
    ctx->pc = 0x11930Cu;
    SET_GPR_U32(ctx, 31, 0x119314u);
    ctx->pc = 0x119310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11930Cu;
    // 0x119310: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x11930Cu, 0x119314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119314u;
label_119314:
    // 0x119314: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x119314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x119318: 0x26032000  addiu       $v1, $s0, 0x2000
    ctx->pc = 0x119318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
    // 0x11931c: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x11931cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x119320: 0x26101fc0  addiu       $s0, $s0, 0x1FC0
    ctx->pc = 0x119320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8128));
    // 0x119324: 0x0  nop
    ctx->pc = 0x119324u;
    // NOP
label_119328:
    // 0x119328: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x119328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x11932c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11932cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x119330: 0x2610ffc0  addiu       $s0, $s0, -0x40
    ctx->pc = 0x119330u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
    // 0x119334: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x119334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x119338: 0x0  nop
    ctx->pc = 0x119338u;
    // NOP
    // 0x11933c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11933Cu;
    {
        const bool branch_taken_0x11933c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11933c) {
            ctx->pc = 0x119328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_119328;
        }
    }
    ctx->pc = 0x119344u;
    // 0x119344: 0x2662bfc0  addiu       $v0, $s3, -0x4040
    ctx->pc = 0x119344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950848));
    // 0x119348: 0xc046962  jal         func_11A588
    ctx->pc = 0x119348u;
    SET_GPR_U32(ctx, 31, 0x119350u);
    ctx->pc = 0x11934Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119348u;
    // 0x11934c: 0xac401fc0  sw          $zero, 0x1FC0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8128), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A588u, 0x119348u, 0x119350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119350u;
label_119350:
    // 0x119350: 0x3c050012  lui         $a1, 0x12
    ctx->pc = 0x119350u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18 << 16));
    // 0x119354: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x119354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x119358: 0x24a59858  addiu       $a1, $a1, -0x67A8
    ctx->pc = 0x119358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940760));
    // 0x11935c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11935cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119360: 0xc043c24  jal         func_10F090
    ctx->pc = 0x119360u;
    SET_GPR_U32(ctx, 31, 0x119368u);
    ctx->pc = 0x119364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119360u;
    // 0x119364: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F090u, 0x119360u, 0x119368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119368u;
label_119368:
    // 0x119368: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x119368u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11936c: 0x4630004  bgezl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x11936Cu;
    {
        const bool branch_taken_0x11936c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x11936c) {
            ctx->pc = 0x119370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11936Cu;
            // 0x119370: 0x26422148  addiu       $v0, $s2, 0x2148 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8520));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119380u;
            goto label_119380;
        }
    }
    ctx->pc = 0x119374u;
    // 0x119374: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x119374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x119378: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x119378u;
    {
        const bool branch_taken_0x119378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119378u;
        // 0x11937c: 0x34429021  ori         $v0, $v0, 0x9021 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36897);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119378) {
            ctx->pc = 0x1193ECu;
            goto label_1193ec;
        }
    }
    ctx->pc = 0x119380u;
label_119380:
    // 0x119380: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x119380u;
    SET_GPR_U32(ctx, 31, 0x119388u);
    ctx->pc = 0x119384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119380u;
    // 0x119384: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x119380u, 0x119388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119388u;
label_119388:
    // 0x119388: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x119388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x11938c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11938cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119390: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x119390u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
    // 0x119394: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x119394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x119398: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x119398u;
    SET_GPR_S32(ctx, 16, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x11939c: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x11939cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x1193a0: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x1193a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x1193a4: 0x548025  or          $s0, $v0, $s4
    ctx->pc = 0x1193a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x1193a8: 0x36100300  ori         $s0, $s0, 0x300
    ctx->pc = 0x1193a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)768);
    // 0x1193ac: 0x32020080  andi        $v0, $s0, 0x80
    ctx->pc = 0x1193acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
    // 0x1193b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1193B0u;
    {
        const bool branch_taken_0x1193b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1193B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1193B0u;
        // 0x1193b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1193b0) {
            ctx->pc = 0x1193C8u;
            goto label_1193c8;
        }
    }
    ctx->pc = 0x1193B8u;
    // 0x1193b8: 0xc0464a2  jal         func_119288
    ctx->pc = 0x1193B8u;
    SET_GPR_U32(ctx, 31, 0x1193C0u);
    ctx->pc = 0x1193BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1193B8u;
    // 0x1193bc: 0x36100c80  ori         $s0, $s0, 0xC80 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)3200);
    ctx->in_delay_slot = false;
    ctx->pc = 0x119288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119288u, 0x1193B8u, 0x1193C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1193C0u;
label_1193c0:
    // 0x1193c0: 0xc0464aa  jal         func_1192A8
    ctx->pc = 0x1193C0u;
    SET_GPR_U32(ctx, 31, 0x1193C8u);
    ctx->pc = 0x1193C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1193C0u;
    // 0x1193c4: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1192A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1192A8u, 0x1193C0u, 0x1193C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1193C8u;
label_1193c8:
    // 0x1193c8: 0xc0464a6  jal         func_119298
    ctx->pc = 0x1193C8u;
    SET_GPR_U32(ctx, 31, 0x1193D0u);
    ctx->pc = 0x1193CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1193C8u;
    // 0x1193cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119298u, 0x1193C8u, 0x1193D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1193D0u;
label_1193d0:
    // 0x1193d0: 0xc043fba  jal         func_10FEE8
    ctx->pc = 0x1193D0u;
    SET_GPR_U32(ctx, 31, 0x1193D8u);
    ctx->pc = 0x1193D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1193D0u;
    // 0x1193d4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FEE8u, 0x1193D0u, 0x1193D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1193D8u;
label_1193d8:
    // 0x1193d8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1193D8u;
    {
        const bool branch_taken_0x1193d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1193DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1193D8u;
        // 0x1193dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1193d8) {
            ctx->pc = 0x1193ECu;
            goto label_1193ec;
        }
    }
    ctx->pc = 0x1193E0u;
    // 0x1193e0: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x1193E0u;
    SET_GPR_U32(ctx, 31, 0x1193E8u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x1193E0u, 0x1193E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1193E8u;
label_1193e8:
    // 0x1193e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1193e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1193ec:
    // 0x1193ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1193ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1193f0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1193f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1193f4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1193f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1193f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1193f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1193fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1193fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119400: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119404: 0x3e00008  jr          $ra
    ctx->pc = 0x119404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119404u;
        // 0x119408: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11940Cu;
    // 0x11940c: 0x0  nop
    ctx->pc = 0x11940cu;
    // NOP
label_119410:
    // 0x119410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x119410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x119414: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x119414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x119418: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11941c: 0x3c120013  lui         $s2, 0x13
    ctx->pc = 0x11941cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)19 << 16));
    // 0x119420: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x119420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x119424: 0x26502148  addiu       $s0, $s2, 0x2148
    ctx->pc = 0x119424u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 8520));
    // 0x119428: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x119428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11942c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x11942cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x132150u));
    // 0x119430: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119430u;
    {
        const bool branch_taken_0x119430 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x119430) {
            ctx->pc = 0x119444u;
            goto label_119444;
        }
    }
    ctx->pc = 0x119438u;
    // 0x119438: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x119438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11943c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x11943Cu;
    {
        const bool branch_taken_0x11943c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11943Cu;
        // 0x119440: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11943c) {
            ctx->pc = 0x1194B0u;
            goto label_1194b0;
        }
    }
    ctx->pc = 0x119444u;
label_119444:
    // 0x119444: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x119444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x119448: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119448u;
    {
        const bool branch_taken_0x119448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119448) {
            ctx->pc = 0x11945Cu;
            goto label_11945c;
        }
    }
    ctx->pc = 0x119450u;
    // 0x119450: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x119450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x119454: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x119454u;
    {
        const bool branch_taken_0x119454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x119458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119454u;
        // 0x119458: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119454) {
            ctx->pc = 0x1194B0u;
            goto label_1194b0;
        }
    }
    ctx->pc = 0x11945Cu;
label_11945c:
    // 0x11945c: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x11945Cu;
    SET_GPR_U32(ctx, 31, 0x119464u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x11945Cu, 0x119464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119464u;
label_119464:
    // 0x119464: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x119464u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x119468: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x119468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11946c: 0xc043c28  jal         func_10F0A0
    ctx->pc = 0x11946Cu;
    SET_GPR_U32(ctx, 31, 0x119474u);
    ctx->pc = 0x119470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11946Cu;
    // 0x119470: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F0A0u, 0x11946Cu, 0x119474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119474u;
label_119474:
    // 0x119474: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x119474u;
    {
        const bool branch_taken_0x119474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119474u;
        // 0x119478: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119474) {
            ctx->pc = 0x119498u;
            goto label_119498;
        }
    }
    ctx->pc = 0x11947Cu;
    // 0x11947c: 0xc043fa0  jal         func_10FE80
    ctx->pc = 0x11947Cu;
    SET_GPR_U32(ctx, 31, 0x119484u);
    ctx->pc = 0x119480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11947Cu;
    // 0x119480: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE80u, 0x11947Cu, 0x119484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119484u;
label_119484:
    // 0x119484: 0xc0464a6  jal         func_119298
    ctx->pc = 0x119484u;
    SET_GPR_U32(ctx, 31, 0x11948Cu);
    ctx->pc = 0x119488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119484u;
    // 0x119488: 0x24040c00  addiu       $a0, $zero, 0xC00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119298u, 0x119484u, 0x11948Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11948Cu;
label_11948c:
    // 0x11948c: 0xc0464a2  jal         func_119288
    ctx->pc = 0x11948Cu;
    SET_GPR_U32(ctx, 31, 0x119494u);
    ctx->pc = 0x119490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11948Cu;
    // 0x119490: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119288u, 0x11948Cu, 0x119494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119494u;
label_119494:
    // 0x119494: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x119494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_119498:
    // 0x119498: 0xfe402148  sd          $zero, 0x2148($s2)
    ctx->pc = 0x119498u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 8520), GPR_U64(ctx, 0));
    // 0x11949c: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11949Cu;
    {
        const bool branch_taken_0x11949c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1194A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11949Cu;
        // 0x1194a0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11949c) {
            ctx->pc = 0x1194ACu;
            goto label_1194ac;
        }
    }
    ctx->pc = 0x1194A4u;
    // 0x1194a4: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x1194A4u;
    SET_GPR_U32(ctx, 31, 0x1194ACu);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x1194A4u, 0x1194ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1194ACu;
label_1194ac:
    // 0x1194ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1194acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1194b0:
    // 0x1194b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1194b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1194b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1194b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1194b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1194b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1194bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1194bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1194c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1194C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1194C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194C0u;
        // 0x1194c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1194C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1194C8u;
label_1194c8:
    // 0x1194c8: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x1194c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x1194cc: 0x8c432150  lw          $v1, 0x2150($v0)
    ctx->pc = 0x1194ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x132150u));
    // 0x1194d0: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1194D0u;
    {
        const bool branch_taken_0x1194d0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1194D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194D0u;
        // 0x1194d4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1194d0) {
            ctx->pc = 0x1194E4u;
            goto label_1194e4;
        }
    }
    ctx->pc = 0x1194D8u;
    // 0x1194d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1194d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1194dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1194DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1194E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194DCu;
        // 0x1194e0: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1194DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1194E4u;
label_1194e4:
    // 0x1194e4: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x1194e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
    // 0x1194e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1194e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1194ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1194ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1194F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1194ECu;
        // 0x1194f0: 0x30420003  andi        $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1194ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1194F4u;
    // 0x1194f4: 0x0  nop
    ctx->pc = 0x1194f4u;
    // NOP
    ctx->pc = 0x1194f8u;
}
