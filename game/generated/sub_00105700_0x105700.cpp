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

// Function: sub_00105700
// Address: 0x105700 - 0x105bd8
void sub_00105700_0x105700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105700_0x105700");
#endif

    switch (ctx->pc) {
        case 0x10574cu: goto label_10574c;
        case 0x105778u: goto label_105778;
        case 0x1057b8u: goto label_1057b8;
        case 0x1057e0u: goto label_1057e0;
        case 0x105820u: goto label_105820;
        case 0x10583cu: goto label_10583c;
        case 0x105844u: goto label_105844;
        case 0x105880u: goto label_105880;
        case 0x1058c0u: goto label_1058c0;
        case 0x1058e4u: goto label_1058e4;
        case 0x105928u: goto label_105928;
        case 0x105984u: goto label_105984;
        case 0x105990u: goto label_105990;
        case 0x1059b8u: goto label_1059b8;
        case 0x1059ecu: goto label_1059ec;
        case 0x1059f4u: goto label_1059f4;
        case 0x105a00u: goto label_105a00;
        case 0x105a10u: goto label_105a10;
        case 0x105a50u: goto label_105a50;
        case 0x105a70u: goto label_105a70;
        case 0x105a94u: goto label_105a94;
        case 0x105ad8u: goto label_105ad8;
        case 0x105b34u: goto label_105b34;
        case 0x105b40u: goto label_105b40;
        case 0x105b68u: goto label_105b68;
        case 0x105b9cu: goto label_105b9c;
        case 0x105bb0u: goto label_105bb0;
        default: break;
    }

    ctx->pc = 0x105700u;

    // 0x105700: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x105700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x105704: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x105704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x105708: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x105708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x10570c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x10570cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x105710: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x105710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x105714: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x105714u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105718: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x105718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x10571c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10571cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105720: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x105720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x105724: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x105724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105728: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x105728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x10572c: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x10572cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x105730: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x105730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x105734: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x105734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x105738: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x105738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x10573c: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x10573cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x105740: 0x629818  mult        $s3, $v1, $v0
    ctx->pc = 0x105740u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x105744: 0xc041186  jal         func_104618
    ctx->pc = 0x105744u;
    SET_GPR_U32(ctx, 31, 0x10574Cu);
    ctx->pc = 0x105748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105744u;
    // 0x105748: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104618u, 0x105744u, 0x10574Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10574Cu;
label_10574c:
    // 0x10574c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10574cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x105750: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x105750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x105754: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x105754u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x105758: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x105758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x10575c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10575Cu;
    {
        const bool branch_taken_0x10575c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10575Cu;
        // 0x105760: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10575c) {
            ctx->pc = 0x10576Cu;
            goto label_10576c;
        }
    }
    ctx->pc = 0x105764u;
    // 0x105764: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x105764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x105768: 0xac222010  sw          $v0, 0x2010($at)
    ctx->pc = 0x105768u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 2)); // MMIO: 0x10002010
label_10576c:
    // 0x10576c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x10576cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x105770: 0x2a750400  slti        $s5, $s3, 0x400
    ctx->pc = 0x105770u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x105774: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x105774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_105778:
    // 0x105778: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x105778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10577c: 0x0  nop
    ctx->pc = 0x10577cu;
    // NOP
    // 0x105780: 0x0  nop
    ctx->pc = 0x105780u;
    // NOP
    // 0x105784: 0x0  nop
    ctx->pc = 0x105784u;
    // NOP
    // 0x105788: 0x0  nop
    ctx->pc = 0x105788u;
    // NOP
    // 0x10578c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10578Cu;
    {
        const bool branch_taken_0x10578c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x10578c) {
            ctx->pc = 0x105778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105778;
        }
    }
    ctx->pc = 0x105794u;
    // 0x105794: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105798: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x105798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10579c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x10579cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1057a0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1057a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1057a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1057a4u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 0)); // MMIO: 0x10002000
    // 0x1057a8: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x1057a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x1057ac: 0xae030828  sw          $v1, 0x828($s0)
    ctx->pc = 0x1057acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 3));
    // 0x1057b0: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x1057b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
    // 0x1057b4: 0x0  nop
    ctx->pc = 0x1057b4u;
    // NOP
label_1057b8:
    // 0x1057b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1057b8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10002010
    // 0x1057bc: 0x0  nop
    ctx->pc = 0x1057bcu;
    // NOP
    // 0x1057c0: 0x0  nop
    ctx->pc = 0x1057c0u;
    // NOP
    // 0x1057c4: 0x0  nop
    ctx->pc = 0x1057c4u;
    // NOP
    // 0x1057c8: 0x0  nop
    ctx->pc = 0x1057c8u;
    // NOP
    // 0x1057cc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1057CCu;
    {
        const bool branch_taken_0x1057cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1057cc) {
            ctx->pc = 0x1057B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1057b8;
        }
    }
    ctx->pc = 0x1057D4u;
    // 0x1057d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1057d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1057d8: 0xc043d88  jal         func_10F620
    ctx->pc = 0x1057D8u;
    SET_GPR_U32(ctx, 31, 0x1057E0u);
    ctx->pc = 0x1057DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1057D8u;
    // 0x1057dc: 0x3c110fff  lui         $s1, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4095 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0x1057D8u, 0x1057E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1057E0u;
label_1057e0:
    // 0x1057e0: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x1057e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x1057e4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1057e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1057e8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1057e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1057ec: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x1057ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1057f0: 0x3414ffff  ori         $s4, $zero, 0xFFFF
    ctx->pc = 0x1057f0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1057f4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x1057f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x1057f8: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1057f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1057fc: 0x283202b  sltu        $a0, $s4, $v1
    ctx->pc = 0x1057fcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x105800: 0x10800081  beqz        $a0, . + 4 + (0x81 << 2)
    ctx->pc = 0x105800u;
    {
        const bool branch_taken_0x105800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x105804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105800u;
        // 0x105804: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105800) {
            ctx->pc = 0x105A08u;
            goto label_105a08;
        }
    }
    ctx->pc = 0x105808u;
    // 0x105808: 0x3c050010  lui         $a1, 0x10
    ctx->pc = 0x105808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16 << 16));
    // 0x10580c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x10580cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x105810: 0x24a55d20  addiu       $a1, $a1, 0x5D20
    ctx->pc = 0x105810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23840));
    // 0x105814: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x105814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105818: 0xc043c30  jal         func_10F0C0
    ctx->pc = 0x105818u;
    SET_GPR_U32(ctx, 31, 0x105820u);
    ctx->pc = 0x10581Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105818u;
    // 0x10581c: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F0C0u, 0x105818u, 0x105820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105820u;
label_105820:
    // 0x105820: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x105820u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105824: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x105824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x105828: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x10582c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x10582cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x105830: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x105830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x105834: 0xc043fee  jal         func_10FFB8
    ctx->pc = 0x105834u;
    SET_GPR_U32(ctx, 31, 0x10583Cu);
    ctx->pc = 0x105838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105834u;
    // 0x105838: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FFB8u, 0x105834u, 0x10583Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10583Cu;
label_10583c:
    // 0x10583c: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x10583Cu;
    SET_GPR_U32(ctx, 31, 0x105844u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x10583Cu, 0x105844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105844u;
label_105844:
    // 0x105844: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x105844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x105848: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x105848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10584c: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x10584cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x105850: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x105850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x105854: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x105854u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 5)); // MMIO: 0x1000b410
    // 0x105858: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x105858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x10585c: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x10585cu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 20)); // MMIO: 0x1000b420
    // 0x105860: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x105860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x105864: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x105864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x105868: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x105868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x10586c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x10586cu;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 4)); // MMIO: 0x1000b400
    // 0x105870: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105870u;
    {
        const bool branch_taken_0x105870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105870u;
        // 0x105874: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105870) {
            ctx->pc = 0x105884u;
            goto label_105884;
        }
    }
    ctx->pc = 0x105878u;
    // 0x105878: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x105878u;
    SET_GPR_U32(ctx, 31, 0x105880u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x105878u, 0x105880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105880u;
label_105880:
    // 0x105880: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x105880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_105884:
    // 0x105884: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x105884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x105888: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x105888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10588c: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x10588cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x105890: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105894: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x105894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x105898: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x105898u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x10589c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x10589cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1058a0: 0x12a0004e  beqz        $s5, . + 4 + (0x4E << 2)
    ctx->pc = 0x1058A0u;
    {
        const bool branch_taken_0x1058a0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1058A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1058A0u;
        // 0x1058a4: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1058a0) {
            ctx->pc = 0x1059DCu;
            goto label_1059dc;
        }
    }
    ctx->pc = 0x1058A8u;
    // 0x1058a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1058a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1058ac: 0x8e1100ec  lw          $s1, 0xEC($s0)
    ctx->pc = 0x1058acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x1058b0: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x1058b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1058b4: 0x139180  sll         $s2, $s3, 6
    ctx->pc = 0x1058b4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x1058b8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1058b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1058bc: 0x0  nop
    ctx->pc = 0x1058bcu;
    // NOP
label_1058c0:
    // 0x1058c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1058c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1058c4: 0x0  nop
    ctx->pc = 0x1058c4u;
    // NOP
    // 0x1058c8: 0x0  nop
    ctx->pc = 0x1058c8u;
    // NOP
    // 0x1058cc: 0x0  nop
    ctx->pc = 0x1058ccu;
    // NOP
    // 0x1058d0: 0x0  nop
    ctx->pc = 0x1058d0u;
    // NOP
    // 0x1058d4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1058D4u;
    {
        const bool branch_taken_0x1058d4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1058d4) {
            ctx->pc = 0x1058C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1058c0;
        }
    }
    ctx->pc = 0x1058DCu;
    // 0x1058dc: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x1058DCu;
    SET_GPR_U32(ctx, 31, 0x1058E4u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x1058DCu, 0x1058E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1058E4u;
label_1058e4:
    // 0x1058e4: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x1058e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x1058e8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1058e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1058ec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1058ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1058f0: 0x34a5b010  ori         $a1, $a1, 0xB010
    ctx->pc = 0x1058f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45072);
    // 0x1058f4: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x1058f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x1058f8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1058f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1058fc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1058fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x105900: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x105900u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x105904: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x105904u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 18)); // MMIO: 0x1000b020
    // 0x105908: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x105908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x10590c: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x10590cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x105910: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x105910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x105914: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x105914u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 4)); // MMIO: 0x1000b000
    // 0x105918: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105918u;
    {
        const bool branch_taken_0x105918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10591Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105918u;
        // 0x10591c: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105918) {
            ctx->pc = 0x10592Cu;
            goto label_10592c;
        }
    }
    ctx->pc = 0x105920u;
    // 0x105920: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x105920u;
    SET_GPR_U32(ctx, 31, 0x105928u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x105920u, 0x105928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105928u;
label_105928:
    // 0x105928: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x105928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_10592c:
    // 0x10592c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x10592cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105930: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x105930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x105934: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x105934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x105938: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x105938u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x10593c: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x10593cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x105940: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x105940u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x105944: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x105944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x105948: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105948u;
    {
        const bool branch_taken_0x105948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105948u;
        // 0x10594c: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105948) {
            ctx->pc = 0x105964u;
            goto label_105964;
        }
    }
    ctx->pc = 0x105950u;
    // 0x105950: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x105950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x105954: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105954u;
    {
        const bool branch_taken_0x105954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x105958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105954u;
        // 0x105958: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105954) {
            ctx->pc = 0x105964u;
            goto label_105964;
        }
    }
    ctx->pc = 0x10595Cu;
    // 0x10595c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10595Cu;
    {
        const bool branch_taken_0x10595c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x105960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10595Cu;
        // 0x105960: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10595c) {
            ctx->pc = 0x10596Cu;
            goto label_10596c;
        }
    }
    ctx->pc = 0x105964u;
label_105964:
    // 0x105964: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105964u;
    {
        const bool branch_taken_0x105964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105964u;
        // 0x105968: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105964) {
            ctx->pc = 0x105970u;
            goto label_105970;
        }
    }
    ctx->pc = 0x10596Cu;
label_10596c:
    // 0x10596c: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x10596cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_105970:
    // 0x105970: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x105970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x105974: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x105974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x105978: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x105978u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x10597c: 0xc041186  jal         func_104618
    ctx->pc = 0x10597Cu;
    SET_GPR_U32(ctx, 31, 0x105984u);
    ctx->pc = 0x105980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10597Cu;
    // 0x105980: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104618u, 0x10597Cu, 0x105984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105984u;
label_105984:
    // 0x105984: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x105984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x105988: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x105988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x10598c: 0x0  nop
    ctx->pc = 0x10598cu;
    // NOP
label_105990:
    // 0x105990: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x105990u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000b000
    // 0x105994: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x105994u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x105998: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x105998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10599c: 0x0  nop
    ctx->pc = 0x10599cu;
    // NOP
    // 0x1059a0: 0x0  nop
    ctx->pc = 0x1059a0u;
    // NOP
    // 0x1059a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1059A4u;
    {
        const bool branch_taken_0x1059a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1059a4) {
            ctx->pc = 0x105990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105990;
        }
    }
    ctx->pc = 0x1059ACu;
    // 0x1059ac: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1059acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1059b0: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x1059b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x1059b4: 0x0  nop
    ctx->pc = 0x1059b4u;
    // NOP
label_1059b8:
    // 0x1059b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1059b8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10002010
    // 0x1059bc: 0x0  nop
    ctx->pc = 0x1059bcu;
    // NOP
    // 0x1059c0: 0x0  nop
    ctx->pc = 0x1059c0u;
    // NOP
    // 0x1059c4: 0x0  nop
    ctx->pc = 0x1059c4u;
    // NOP
    // 0x1059c8: 0x0  nop
    ctx->pc = 0x1059c8u;
    // NOP
    // 0x1059cc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1059CCu;
    {
        const bool branch_taken_0x1059cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1059cc) {
            ctx->pc = 0x1059B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1059b8;
        }
    }
    ctx->pc = 0x1059D4u;
    // 0x1059d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1059D4u;
    {
        const bool branch_taken_0x1059d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1059d4) {
            ctx->pc = 0x1059ECu;
            goto label_1059ec;
        }
    }
    ctx->pc = 0x1059DCu;
label_1059dc:
    // 0x1059dc: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x1059dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x1059e0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1059e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1059e4: 0xc041550  jal         func_105540
    ctx->pc = 0x1059E4u;
    SET_GPR_U32(ctx, 31, 0x1059ECu);
    ctx->pc = 0x1059E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1059E4u;
    // 0x1059e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105540u, 0x1059E4u, 0x1059ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1059ECu;
label_1059ec:
    // 0x1059ec: 0xc043fd4  jal         func_10FF50
    ctx->pc = 0x1059ECu;
    SET_GPR_U32(ctx, 31, 0x1059F4u);
    ctx->pc = 0x1059F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1059ECu;
    // 0x1059f0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FF50u, 0x1059ECu, 0x1059F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1059F4u;
label_1059f4:
    // 0x1059f4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1059f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1059f8: 0xc043c34  jal         func_10F0D0
    ctx->pc = 0x1059F8u;
    SET_GPR_U32(ctx, 31, 0x105A00u);
    ctx->pc = 0x1059FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1059F8u;
    // 0x1059fc: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F0D0u, 0x1059F8u, 0x105A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105A00u;
label_105a00:
    // 0x105a00: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x105A00u;
    {
        const bool branch_taken_0x105a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A00u;
        // 0x105a04: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a00) {
            ctx->pc = 0x105BA0u;
            goto label_105ba0;
        }
    }
    ctx->pc = 0x105A08u;
label_105a08:
    // 0x105a08: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x105A08u;
    SET_GPR_U32(ctx, 31, 0x105A10u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x105A08u, 0x105A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105A10u;
label_105a10:
    // 0x105a10: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x105a10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x105a14: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x105a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x105a18: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x105a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x105a1c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x105a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x105a20: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x105a20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x105a24: 0x34c6b420  ori         $a2, $a2, 0xB420
    ctx->pc = 0x105a24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46112);
    // 0x105a28: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x105a28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x105a2c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x105a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x105a30: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x105a30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x105a34: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x105a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x105a38: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x105a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x105a3c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x105a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x105a40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105A40u;
    {
        const bool branch_taken_0x105a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A40u;
        // 0x105a44: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a40) {
            ctx->pc = 0x105A50u;
            goto label_105a50;
        }
    }
    ctx->pc = 0x105A48u;
    // 0x105a48: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x105A48u;
    SET_GPR_U32(ctx, 31, 0x105A50u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x105A48u, 0x105A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105A50u;
label_105a50:
    // 0x105a50: 0x12a0004e  beqz        $s5, . + 4 + (0x4E << 2)
    ctx->pc = 0x105A50u;
    {
        const bool branch_taken_0x105a50 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x105A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105A50u;
        // 0x105a54: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105a50) {
            ctx->pc = 0x105B8Cu;
            goto label_105b8c;
        }
    }
    ctx->pc = 0x105A58u;
    // 0x105a58: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x105a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x105a5c: 0x8e1100ec  lw          $s1, 0xEC($s0)
    ctx->pc = 0x105a5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x105a60: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x105a60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x105a64: 0x139180  sll         $s2, $s3, 6
    ctx->pc = 0x105a64u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x105a68: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x105a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x105a6c: 0x0  nop
    ctx->pc = 0x105a6cu;
    // NOP
label_105a70:
    // 0x105a70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x105a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105a74: 0x0  nop
    ctx->pc = 0x105a74u;
    // NOP
    // 0x105a78: 0x0  nop
    ctx->pc = 0x105a78u;
    // NOP
    // 0x105a7c: 0x0  nop
    ctx->pc = 0x105a7cu;
    // NOP
    // 0x105a80: 0x0  nop
    ctx->pc = 0x105a80u;
    // NOP
    // 0x105a84: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x105A84u;
    {
        const bool branch_taken_0x105a84 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x105a84) {
            ctx->pc = 0x105A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105a70;
        }
    }
    ctx->pc = 0x105A8Cu;
    // 0x105a8c: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x105A8Cu;
    SET_GPR_U32(ctx, 31, 0x105A94u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x105A8Cu, 0x105A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105A94u;
label_105a94:
    // 0x105a94: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x105a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x105a98: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x105a98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x105a9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x105a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x105aa0: 0x34a5b010  ori         $a1, $a1, 0xB010
    ctx->pc = 0x105aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45072);
    // 0x105aa4: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x105aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x105aa8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x105aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x105aac: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x105aacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x105ab0: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x105ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x105ab4: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x105ab4u;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 18)); // MMIO: 0x1000b020
    // 0x105ab8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x105ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x105abc: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x105abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x105ac0: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x105ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x105ac4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x105ac4u;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 4)); // MMIO: 0x1000b000
    // 0x105ac8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x105AC8u;
    {
        const bool branch_taken_0x105ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x105ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105AC8u;
        // 0x105acc: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105ac8) {
            ctx->pc = 0x105ADCu;
            goto label_105adc;
        }
    }
    ctx->pc = 0x105AD0u;
    // 0x105ad0: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x105AD0u;
    SET_GPR_U32(ctx, 31, 0x105AD8u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x105AD0u, 0x105AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105AD8u;
label_105ad8:
    // 0x105ad8: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x105ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_105adc:
    // 0x105adc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x105adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x105ae0: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x105ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x105ae4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x105ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x105ae8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x105ae8u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x105aec: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x105aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x105af0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x105af0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x105af4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x105af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x105af8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x105AF8u;
    {
        const bool branch_taken_0x105af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x105AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105AF8u;
        // 0x105afc: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105af8) {
            ctx->pc = 0x105B14u;
            goto label_105b14;
        }
    }
    ctx->pc = 0x105B00u;
    // 0x105b00: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x105b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x105b04: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105B04u;
    {
        const bool branch_taken_0x105b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x105B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B04u;
        // 0x105b08: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b04) {
            ctx->pc = 0x105B14u;
            goto label_105b14;
        }
    }
    ctx->pc = 0x105B0Cu;
    // 0x105b0c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105B0Cu;
    {
        const bool branch_taken_0x105b0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x105B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B0Cu;
        // 0x105b10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b0c) {
            ctx->pc = 0x105B1Cu;
            goto label_105b1c;
        }
    }
    ctx->pc = 0x105B14u;
label_105b14:
    // 0x105b14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105B14u;
    {
        const bool branch_taken_0x105b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B14u;
        // 0x105b18: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b14) {
            ctx->pc = 0x105B20u;
            goto label_105b20;
        }
    }
    ctx->pc = 0x105B1Cu;
label_105b1c:
    // 0x105b1c: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x105b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_105b20:
    // 0x105b20: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x105b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x105b24: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x105b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x105b28: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x105b28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x105b2c: 0xc041186  jal         func_104618
    ctx->pc = 0x105B2Cu;
    SET_GPR_U32(ctx, 31, 0x105B34u);
    ctx->pc = 0x105B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105B2Cu;
    // 0x105b30: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104618u, 0x105B2Cu, 0x105B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B34u;
label_105b34:
    // 0x105b34: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x105b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x105b38: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x105b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x105b3c: 0x0  nop
    ctx->pc = 0x105b3cu;
    // NOP
label_105b40:
    // 0x105b40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x105b40u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000b000
    // 0x105b44: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x105b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x105b48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x105b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x105b4c: 0x0  nop
    ctx->pc = 0x105b4cu;
    // NOP
    // 0x105b50: 0x0  nop
    ctx->pc = 0x105b50u;
    // NOP
    // 0x105b54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x105B54u;
    {
        const bool branch_taken_0x105b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x105b54) {
            ctx->pc = 0x105B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105b40;
        }
    }
    ctx->pc = 0x105B5Cu;
    // 0x105b5c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x105b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x105b60: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x105b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x105b64: 0x0  nop
    ctx->pc = 0x105b64u;
    // NOP
label_105b68:
    // 0x105b68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x105b68u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10002010
    // 0x105b6c: 0x0  nop
    ctx->pc = 0x105b6cu;
    // NOP
    // 0x105b70: 0x0  nop
    ctx->pc = 0x105b70u;
    // NOP
    // 0x105b74: 0x0  nop
    ctx->pc = 0x105b74u;
    // NOP
    // 0x105b78: 0x0  nop
    ctx->pc = 0x105b78u;
    // NOP
    // 0x105b7c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x105B7Cu;
    {
        const bool branch_taken_0x105b7c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x105b7c) {
            ctx->pc = 0x105B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_105b68;
        }
    }
    ctx->pc = 0x105B84u;
    // 0x105b84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x105B84u;
    {
        const bool branch_taken_0x105b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B84u;
        // 0x105b88: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105b84) {
            ctx->pc = 0x105BA0u;
            goto label_105ba0;
        }
    }
    ctx->pc = 0x105B8Cu;
label_105b8c:
    // 0x105b8c: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x105b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x105b90: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x105b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105b94: 0xc041550  jal         func_105540
    ctx->pc = 0x105B94u;
    SET_GPR_U32(ctx, 31, 0x105B9Cu);
    ctx->pc = 0x105B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105B94u;
    // 0x105b98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105540u, 0x105B94u, 0x105B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105B9Cu;
label_105b9c:
    // 0x105b9c: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x105b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
label_105ba0:
    // 0x105ba0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x105ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x105ba4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x105ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x105ba8: 0xc041186  jal         func_104618
    ctx->pc = 0x105BA8u;
    SET_GPR_U32(ctx, 31, 0x105BB0u);
    ctx->pc = 0x105BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105BA8u;
    // 0x105bac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104618u, 0x105BA8u, 0x105BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105BB0u;
label_105bb0:
    // 0x105bb0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x105bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x105bb4: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x105bb4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x105bb8: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x105bb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x105bbc: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x105bbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x105bc0: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x105bc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x105bc4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x105bc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x105bc8: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x105bc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x105bcc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x105bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x105bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x105BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105BD0u;
        // 0x105bd4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105BD8u;
}
