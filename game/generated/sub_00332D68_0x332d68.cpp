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

// Function: sub_00332D68
// Address: 0x332d68 - 0x333c60
void sub_00332D68_0x332d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332D68_0x332d68");
#endif

    switch (ctx->pc) {
        case 0x332dacu: goto label_332dac;
        case 0x332dc0u: goto label_332dc0;
        case 0x332dd4u: goto label_332dd4;
        case 0x332de8u: goto label_332de8;
        case 0x332e58u: goto label_332e58;
        case 0x332e88u: goto label_332e88;
        case 0x332eb8u: goto label_332eb8;
        case 0x332ee8u: goto label_332ee8;
        case 0x332f18u: goto label_332f18;
        case 0x332f48u: goto label_332f48;
        case 0x332f78u: goto label_332f78;
        case 0x332fa8u: goto label_332fa8;
        case 0x332fd8u: goto label_332fd8;
        case 0x333008u: goto label_333008;
        case 0x333038u: goto label_333038;
        case 0x333068u: goto label_333068;
        case 0x333098u: goto label_333098;
        case 0x3330c8u: goto label_3330c8;
        case 0x3330f8u: goto label_3330f8;
        case 0x33319cu: goto label_33319c;
        case 0x3331e8u: goto label_3331e8;
        case 0x333200u: goto label_333200;
        case 0x333218u: goto label_333218;
        case 0x333230u: goto label_333230;
        case 0x33324cu: goto label_33324c;
        case 0x333274u: goto label_333274;
        case 0x33329cu: goto label_33329c;
        case 0x3332bcu: goto label_3332bc;
        case 0x3332dcu: goto label_3332dc;
        case 0x3332fcu: goto label_3332fc;
        case 0x333328u: goto label_333328;
        case 0x333348u: goto label_333348;
        case 0x333368u: goto label_333368;
        case 0x333388u: goto label_333388;
        case 0x3333a8u: goto label_3333a8;
        case 0x3333e0u: goto label_3333e0;
        case 0x333408u: goto label_333408;
        case 0x333440u: goto label_333440;
        case 0x333478u: goto label_333478;
        case 0x3334c0u: goto label_3334c0;
        case 0x3334f0u: goto label_3334f0;
        case 0x333520u: goto label_333520;
        case 0x333550u: goto label_333550;
        case 0x3335b8u: goto label_3335b8;
        case 0x3335c8u: goto label_3335c8;
        case 0x333608u: goto label_333608;
        case 0x333614u: goto label_333614;
        case 0x333648u: goto label_333648;
        case 0x333654u: goto label_333654;
        case 0x333664u: goto label_333664;
        case 0x3336b8u: goto label_3336b8;
        case 0x333744u: goto label_333744;
        case 0x3337f0u: goto label_3337f0;
        case 0x333810u: goto label_333810;
        case 0x333840u: goto label_333840;
        case 0x3338a4u: goto label_3338a4;
        case 0x3338d0u: goto label_3338d0;
        case 0x3338f0u: goto label_3338f0;
        case 0x333958u: goto label_333958;
        case 0x333970u: goto label_333970;
        case 0x333988u: goto label_333988;
        case 0x3339b0u: goto label_3339b0;
        case 0x333a00u: goto label_333a00;
        case 0x333a58u: goto label_333a58;
        case 0x333bf8u: goto label_333bf8;
        case 0x333c04u: goto label_333c04;
        case 0x333c10u: goto label_333c10;
        case 0x333c24u: goto label_333c24;
        default: break;
    }

    ctx->pc = 0x332d68u;

    // 0x332d68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x332d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x332d6c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x332d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x332d70: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x332d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x332d74: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x332d74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332d78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x332d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x332d7c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x332d7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332d80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x332d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x332d84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x332d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x332d88: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x332d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x332d8c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x332d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x332d90: 0x16a200e6  bne         $s5, $v0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x332D90u;
    {
        const bool branch_taken_0x332d90 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x332D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332D90u;
        // 0x332d94: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332d90) {
            ctx->pc = 0x33312Cu;
            goto label_33312c;
        }
    }
    ctx->pc = 0x332D98u;
    // 0x332d98: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x332d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332d9c: 0x165000e3  bne         $s2, $s0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x332D9Cu;
    {
        const bool branch_taken_0x332d9c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x332DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332D9Cu;
        // 0x332da0: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332d9c) {
            ctx->pc = 0x33312Cu;
            goto label_33312c;
        }
    }
    ctx->pc = 0x332DA4u;
    // 0x332da4: 0xc0cbf3a  jal         func_32FCE8
    ctx->pc = 0x332DA4u;
    SET_GPR_U32(ctx, 31, 0x332DACu);
    ctx->pc = 0x332DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332DA4u;
    // 0x332da8: 0x24840380  addiu       $a0, $a0, 0x380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCE8u, 0x332DA4u, 0x332DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332DACu;
label_332dac:
    // 0x332dac: 0x165000df  bne         $s2, $s0, . + 4 + (0xDF << 2)
    ctx->pc = 0x332DACu;
    {
        const bool branch_taken_0x332dac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x332DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332DACu;
        // 0x332db0: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x332dac) {
            ctx->pc = 0x33312Cu;
            goto label_33312c;
        }
    }
    ctx->pc = 0x332DB4u;
    // 0x332db4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x332db4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x332db8: 0xc0cbf3a  jal         func_32FCE8
    ctx->pc = 0x332DB8u;
    SET_GPR_U32(ctx, 31, 0x332DC0u);
    ctx->pc = 0x332DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332DB8u;
    // 0x332dbc: 0x24840390  addiu       $a0, $a0, 0x390 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCE8u, 0x332DB8u, 0x332DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332DC0u;
label_332dc0:
    // 0x332dc0: 0x165000da  bne         $s2, $s0, . + 4 + (0xDA << 2)
    ctx->pc = 0x332DC0u;
    {
        const bool branch_taken_0x332dc0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x332DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332DC0u;
        // 0x332dc4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x332dc0) {
            ctx->pc = 0x33312Cu;
            goto label_33312c;
        }
    }
    ctx->pc = 0x332DC8u;
    // 0x332dc8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x332dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x332dcc: 0xc0cbf3a  jal         func_32FCE8
    ctx->pc = 0x332DCCu;
    SET_GPR_U32(ctx, 31, 0x332DD4u);
    ctx->pc = 0x332DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332DCCu;
    // 0x332dd0: 0x248403a0  addiu       $a0, $a0, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32FCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FCE8u, 0x332DCCu, 0x332DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332DD4u;
label_332dd4:
    // 0x332dd4: 0x165000d5  bne         $s2, $s0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x332DD4u;
    {
        const bool branch_taken_0x332dd4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x332DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332DD4u;
        // 0x332dd8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x332dd4) {
            ctx->pc = 0x33312Cu;
            goto label_33312c;
        }
    }
    ctx->pc = 0x332DDCu;
    // 0x332ddc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x332ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x332de0: 0xc0ce208  jal         func_338820
    ctx->pc = 0x332DE0u;
    SET_GPR_U32(ctx, 31, 0x332DE8u);
    ctx->pc = 0x332DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332DE0u;
    // 0x332de4: 0x248403c0  addiu       $a0, $a0, 0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338820u, 0x332DE0u, 0x332DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332DE8u;
label_332de8:
    // 0x332de8: 0x165000d0  bne         $s2, $s0, . + 4 + (0xD0 << 2)
    ctx->pc = 0x332DE8u;
    {
        const bool branch_taken_0x332de8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x332DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332DE8u;
        // 0x332dec: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x332de8) {
            ctx->pc = 0x33312Cu;
            goto label_33312c;
        }
    }
    ctx->pc = 0x332DF0u;
    // 0x332df0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x332df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x332df4: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x332df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x332df8: 0x2446003c  addiu       $a2, $v0, 0x3C
    ctx->pc = 0x332df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x332dfc: 0x24430024  addiu       $v1, $v0, 0x24
    ctx->pc = 0x332dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x332e00: 0x2444002c  addiu       $a0, $v0, 0x2C
    ctx->pc = 0x332e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x332e04: 0x24450034  addiu       $a1, $v0, 0x34
    ctx->pc = 0x332e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x332e08: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x332e08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400428u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400428u, _value); } while (0);
    // 0x332e0c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x332e0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400430u, _value); } while (0);
    // 0x332e10: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x332e10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400438u, _value); } while (0);
    // 0x332e14: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x332e14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400440u, _value); } while (0);
    // 0x332e18: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x332e18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400400u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400400u, _value); } while (0);
    // 0x332e1c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x332e1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400404u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400404u, _value); } while (0);
    // 0x332e20: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x332e20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400410u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400410u, _value); } while (0);
    // 0x332e24: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x332e24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400414u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400414u, _value); } while (0);
    // 0x332e28: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x332e28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400418u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400418u, _value); } while (0);
    // 0x332e2c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x332e2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400408u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400408u, _value); } while (0);
    // 0x332e30: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x332e30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x40040Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40040Cu, _value); } while (0);
    // 0x332e34: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x332e34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400424u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400424u, _value); } while (0);
    // 0x332e38: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x332e38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x40042Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40042Cu, _value); } while (0);
    // 0x332e3c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x332e3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400434u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400434u, _value); } while (0);
    // 0x332e40: 0x165000b9  bne         $s2, $s0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x332E40u;
    {
        const bool branch_taken_0x332e40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x332E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332E40u;
        // 0x332e44: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332e40) {
            ctx->pc = 0x333128u;
            goto label_333128;
        }
    }
    ctx->pc = 0x332E48u;
    // 0x332e48: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x332e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x332e4c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x332e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x332e50: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x332e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x332e54: 0x700024a9  por         $a0, $zero, $zero
    ctx->pc = 0x332e54u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_332e58:
    // 0x332e58: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x332e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x332e5c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x332e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x332e60: 0x0  nop
    ctx->pc = 0x332e60u;
    // NOP
    // 0x332e64: 0x0  nop
    ctx->pc = 0x332e64u;
    // NOP
    // 0x332e68: 0x0  nop
    ctx->pc = 0x332e68u;
    // NOP
    // 0x332e6c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x332E6Cu;
    {
        const bool branch_taken_0x332e6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x332E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332E6Cu;
        // 0x332e70: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332e6c) {
            ctx->pc = 0x332E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332e58;
        }
    }
    ctx->pc = 0x332E74u;
    // 0x332e74: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x332e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x332e78: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x332e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x332e7c: 0x244204c0  addiu       $v0, $v0, 0x4C0
    ctx->pc = 0x332e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1216));
    // 0x332e80: 0x700024a9  por         $a0, $zero, $zero
    ctx->pc = 0x332e80u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x332e84: 0x0  nop
    ctx->pc = 0x332e84u;
    // NOP
label_332e88:
    // 0x332e88: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x332e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x332e8c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x332e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x332e90: 0x0  nop
    ctx->pc = 0x332e90u;
    // NOP
    // 0x332e94: 0x0  nop
    ctx->pc = 0x332e94u;
    // NOP
    // 0x332e98: 0x0  nop
    ctx->pc = 0x332e98u;
    // NOP
    // 0x332e9c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x332E9Cu;
    {
        const bool branch_taken_0x332e9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x332EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332E9Cu;
        // 0x332ea0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332e9c) {
            ctx->pc = 0x332E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332e88;
        }
    }
    ctx->pc = 0x332EA4u;
    // 0x332ea4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x332ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x332ea8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x332ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x332eac: 0x24420500  addiu       $v0, $v0, 0x500
    ctx->pc = 0x332eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1280));
    // 0x332eb0: 0x700024a9  por         $a0, $zero, $zero
    ctx->pc = 0x332eb0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x332eb4: 0x0  nop
    ctx->pc = 0x332eb4u;
    // NOP
label_332eb8:
    // 0x332eb8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x332eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x332ebc: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x332ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x332ec0: 0x0  nop
    ctx->pc = 0x332ec0u;
    // NOP
    // 0x332ec4: 0x0  nop
    ctx->pc = 0x332ec4u;
    // NOP
    // 0x332ec8: 0x0  nop
    ctx->pc = 0x332ec8u;
    // NOP
    // 0x332ecc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x332ECCu;
    {
        const bool branch_taken_0x332ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x332ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332ECCu;
        // 0x332ed0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332ecc) {
            ctx->pc = 0x332EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332eb8;
        }
    }
    ctx->pc = 0x332ED4u;
    // 0x332ed4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x332ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x332ed8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x332ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x332edc: 0x24420540  addiu       $v0, $v0, 0x540
    ctx->pc = 0x332edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1344));
    // 0x332ee0: 0x700024a9  por         $a0, $zero, $zero
    ctx->pc = 0x332ee0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x332ee4: 0x0  nop
    ctx->pc = 0x332ee4u;
    // NOP
label_332ee8:
    // 0x332ee8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x332ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x332eec: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x332eecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x332ef0: 0x0  nop
    ctx->pc = 0x332ef0u;
    // NOP
    // 0x332ef4: 0x0  nop
    ctx->pc = 0x332ef4u;
    // NOP
    // 0x332ef8: 0x0  nop
    ctx->pc = 0x332ef8u;
    // NOP
    // 0x332efc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x332EFCu;
    {
        const bool branch_taken_0x332efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x332F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332EFCu;
        // 0x332f00: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332efc) {
            ctx->pc = 0x332EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332ee8;
        }
    }
    ctx->pc = 0x332F04u;
    // 0x332f04: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x332f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x332f08: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x332f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x332f0c: 0x24420580  addiu       $v0, $v0, 0x580
    ctx->pc = 0x332f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x332f10: 0x700024a9  por         $a0, $zero, $zero
    ctx->pc = 0x332f10u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x332f14: 0x0  nop
    ctx->pc = 0x332f14u;
    // NOP
label_332f18:
    // 0x332f18: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x332f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x332f1c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x332f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x332f20: 0x0  nop
    ctx->pc = 0x332f20u;
    // NOP
    // 0x332f24: 0x0  nop
    ctx->pc = 0x332f24u;
    // NOP
    // 0x332f28: 0x0  nop
    ctx->pc = 0x332f28u;
    // NOP
    // 0x332f2c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x332F2Cu;
    {
        const bool branch_taken_0x332f2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x332F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332F2Cu;
        // 0x332f30: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332f2c) {
            ctx->pc = 0x332F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332f18;
        }
    }
    ctx->pc = 0x332F34u;
    // 0x332f34: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x332f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x332f38: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x332f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x332f3c: 0x244205c0  addiu       $v0, $v0, 0x5C0
    ctx->pc = 0x332f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1472));
    // 0x332f40: 0x700024a9  por         $a0, $zero, $zero
    ctx->pc = 0x332f40u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x332f44: 0x0  nop
    ctx->pc = 0x332f44u;
    // NOP
label_332f48:
    // 0x332f48: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x332f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x332f4c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x332f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x332f50: 0x0  nop
    ctx->pc = 0x332f50u;
    // NOP
    // 0x332f54: 0x0  nop
    ctx->pc = 0x332f54u;
    // NOP
    // 0x332f58: 0x0  nop
    ctx->pc = 0x332f58u;
    // NOP
    // 0x332f5c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x332F5Cu;
    {
        const bool branch_taken_0x332f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x332F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332F5Cu;
        // 0x332f60: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332f5c) {
            ctx->pc = 0x332F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332f48;
        }
    }
    ctx->pc = 0x332F64u;
    // 0x332f64: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x332f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x332f68: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x332f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x332f6c: 0x24420600  addiu       $v0, $v0, 0x600
    ctx->pc = 0x332f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1536));
    // 0x332f70: 0x700024a9  por         $a0, $zero, $zero
    ctx->pc = 0x332f70u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x332f74: 0x0  nop
    ctx->pc = 0x332f74u;
    // NOP
label_332f78:
    // 0x332f78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x332f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x332f7c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x332f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x332f80: 0x0  nop
    ctx->pc = 0x332f80u;
    // NOP
    // 0x332f84: 0x0  nop
    ctx->pc = 0x332f84u;
    // NOP
    // 0x332f88: 0x0  nop
    ctx->pc = 0x332f88u;
    // NOP
    // 0x332f8c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x332F8Cu;
    {
        const bool branch_taken_0x332f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x332F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332F8Cu;
        // 0x332f90: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332f8c) {
            ctx->pc = 0x332F78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332f78;
        }
    }
    ctx->pc = 0x332F94u;
    // 0x332f94: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x332f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x332f98: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x332f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x332f9c: 0x24420640  addiu       $v0, $v0, 0x640
    ctx->pc = 0x332f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1600));
    // 0x332fa0: 0x700024a9  por         $a0, $zero, $zero
    ctx->pc = 0x332fa0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x332fa4: 0x0  nop
    ctx->pc = 0x332fa4u;
    // NOP
label_332fa8:
    // 0x332fa8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x332fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x332fac: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x332facu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x332fb0: 0x0  nop
    ctx->pc = 0x332fb0u;
    // NOP
    // 0x332fb4: 0x0  nop
    ctx->pc = 0x332fb4u;
    // NOP
    // 0x332fb8: 0x0  nop
    ctx->pc = 0x332fb8u;
    // NOP
    // 0x332fbc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x332FBCu;
    {
        const bool branch_taken_0x332fbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x332FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332FBCu;
        // 0x332fc0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332fbc) {
            ctx->pc = 0x332FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332fa8;
        }
    }
    ctx->pc = 0x332FC4u;
    // 0x332fc4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x332fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x332fc8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x332fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x332fcc: 0x24420680  addiu       $v0, $v0, 0x680
    ctx->pc = 0x332fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1664));
    // 0x332fd0: 0x700024a9  por         $a0, $zero, $zero
    ctx->pc = 0x332fd0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x332fd4: 0x0  nop
    ctx->pc = 0x332fd4u;
    // NOP
label_332fd8:
    // 0x332fd8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x332fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x332fdc: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x332fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x332fe0: 0x0  nop
    ctx->pc = 0x332fe0u;
    // NOP
    // 0x332fe4: 0x0  nop
    ctx->pc = 0x332fe4u;
    // NOP
    // 0x332fe8: 0x0  nop
    ctx->pc = 0x332fe8u;
    // NOP
    // 0x332fec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x332FECu;
    {
        const bool branch_taken_0x332fec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x332FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332FECu;
        // 0x332ff0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332fec) {
            ctx->pc = 0x332FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332fd8;
        }
    }
    ctx->pc = 0x332FF4u;
    // 0x332ff4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x332ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x332ff8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x332ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x332ffc: 0x244206c0  addiu       $v0, $v0, 0x6C0
    ctx->pc = 0x332ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1728));
    // 0x333000: 0x700024a9  por         $a0, $zero, $zero
    ctx->pc = 0x333000u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x333004: 0x0  nop
    ctx->pc = 0x333004u;
    // NOP
label_333008:
    // 0x333008: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x333008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33300c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x33300cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x333010: 0x0  nop
    ctx->pc = 0x333010u;
    // NOP
    // 0x333014: 0x0  nop
    ctx->pc = 0x333014u;
    // NOP
    // 0x333018: 0x0  nop
    ctx->pc = 0x333018u;
    // NOP
    // 0x33301c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33301Cu;
    {
        const bool branch_taken_0x33301c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x333020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33301Cu;
        // 0x333020: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33301c) {
            ctx->pc = 0x333008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333008;
        }
    }
    ctx->pc = 0x333024u;
    // 0x333024: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x333024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x333028: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x333028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33302c: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x33302cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x333030: 0x700024a9  por         $a0, $zero, $zero
    ctx->pc = 0x333030u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x333034: 0x0  nop
    ctx->pc = 0x333034u;
    // NOP
label_333038:
    // 0x333038: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x333038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33303c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x33303cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x333040: 0x0  nop
    ctx->pc = 0x333040u;
    // NOP
    // 0x333044: 0x0  nop
    ctx->pc = 0x333044u;
    // NOP
    // 0x333048: 0x0  nop
    ctx->pc = 0x333048u;
    // NOP
    // 0x33304c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33304Cu;
    {
        const bool branch_taken_0x33304c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x333050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33304Cu;
        // 0x333050: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33304c) {
            ctx->pc = 0x333038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333038;
        }
    }
    ctx->pc = 0x333054u;
    // 0x333054: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x333054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x333058: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x333058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33305c: 0x24420740  addiu       $v0, $v0, 0x740
    ctx->pc = 0x33305cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1856));
    // 0x333060: 0x700024a9  por         $a0, $zero, $zero
    ctx->pc = 0x333060u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x333064: 0x0  nop
    ctx->pc = 0x333064u;
    // NOP
label_333068:
    // 0x333068: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x333068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33306c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x33306cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x333070: 0x0  nop
    ctx->pc = 0x333070u;
    // NOP
    // 0x333074: 0x0  nop
    ctx->pc = 0x333074u;
    // NOP
    // 0x333078: 0x0  nop
    ctx->pc = 0x333078u;
    // NOP
    // 0x33307c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33307Cu;
    {
        const bool branch_taken_0x33307c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x333080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33307Cu;
        // 0x333080: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33307c) {
            ctx->pc = 0x333068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333068;
        }
    }
    ctx->pc = 0x333084u;
    // 0x333084: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x333084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x333088: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x333088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33308c: 0x24420780  addiu       $v0, $v0, 0x780
    ctx->pc = 0x33308cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1920));
    // 0x333090: 0x700024a9  por         $a0, $zero, $zero
    ctx->pc = 0x333090u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x333094: 0x0  nop
    ctx->pc = 0x333094u;
    // NOP
label_333098:
    // 0x333098: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x333098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33309c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x33309cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x3330a0: 0x0  nop
    ctx->pc = 0x3330a0u;
    // NOP
    // 0x3330a4: 0x0  nop
    ctx->pc = 0x3330a4u;
    // NOP
    // 0x3330a8: 0x0  nop
    ctx->pc = 0x3330a8u;
    // NOP
    // 0x3330ac: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3330ACu;
    {
        const bool branch_taken_0x3330ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3330B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3330ACu;
        // 0x3330b0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3330ac) {
            ctx->pc = 0x333098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333098;
        }
    }
    ctx->pc = 0x3330B4u;
    // 0x3330b4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3330b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3330b8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3330b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3330bc: 0x244207c0  addiu       $v0, $v0, 0x7C0
    ctx->pc = 0x3330bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1984));
    // 0x3330c0: 0x700024a9  por         $a0, $zero, $zero
    ctx->pc = 0x3330c0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3330c4: 0x0  nop
    ctx->pc = 0x3330c4u;
    // NOP
label_3330c8:
    // 0x3330c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3330c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3330cc: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x3330ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x3330d0: 0x0  nop
    ctx->pc = 0x3330d0u;
    // NOP
    // 0x3330d4: 0x0  nop
    ctx->pc = 0x3330d4u;
    // NOP
    // 0x3330d8: 0x0  nop
    ctx->pc = 0x3330d8u;
    // NOP
    // 0x3330dc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3330DCu;
    {
        const bool branch_taken_0x3330dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3330E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3330DCu;
        // 0x3330e0: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3330dc) {
            ctx->pc = 0x3330C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3330c8;
        }
    }
    ctx->pc = 0x3330E4u;
    // 0x3330e4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3330e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3330e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3330e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3330ec: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x3330ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x3330f0: 0x700024a9  por         $a0, $zero, $zero
    ctx->pc = 0x3330f0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3330f4: 0x0  nop
    ctx->pc = 0x3330f4u;
    // NOP
label_3330f8:
    // 0x3330f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3330f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3330fc: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x3330fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x333100: 0x0  nop
    ctx->pc = 0x333100u;
    // NOP
    // 0x333104: 0x0  nop
    ctx->pc = 0x333104u;
    // NOP
    // 0x333108: 0x0  nop
    ctx->pc = 0x333108u;
    // NOP
    // 0x33310c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33310Cu;
    {
        const bool branch_taken_0x33310c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x333110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33310Cu;
        // 0x333110: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33310c) {
            ctx->pc = 0x3330F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3330f8;
        }
    }
    ctx->pc = 0x333114u;
    // 0x333114: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x333114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x333118: 0x24420840  addiu       $v0, $v0, 0x840
    ctx->pc = 0x333118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x33311c: 0x7c440020  sq          $a0, 0x20($v0)
    ctx->pc = 0x33311cu;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x400860u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x400860u, _value); } while (0);
    // 0x333120: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x333120u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x400840u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x400840u, _value); } while (0);
    // 0x333124: 0x7c440010  sq          $a0, 0x10($v0)
    ctx->pc = 0x333124u;
    do { __m128i _value = (GPR_VEC(ctx, 4)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x400850u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x400850u, _value); } while (0);
label_333128:
    // 0x333128: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x333128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_33312c:
    // 0x33312c: 0x16a2001b  bne         $s5, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x33312Cu;
    {
        const bool branch_taken_0x33312c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x333130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33312Cu;
        // 0x333130: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33312c) {
            ctx->pc = 0x33319Cu;
            goto label_33319c;
        }
    }
    ctx->pc = 0x333134u;
    // 0x333134: 0x1646001a  bne         $s2, $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x333134u;
    {
        const bool branch_taken_0x333134 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 6));
        ctx->pc = 0x333138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333134u;
        // 0x333138: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x333134) {
            ctx->pc = 0x3331A0u;
            goto label_3331a0;
        }
    }
    ctx->pc = 0x33313Cu;
    // 0x33313c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33313cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x333140: 0x244208c0  addiu       $v0, $v0, 0x8C0
    ctx->pc = 0x333140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2240));
    // 0x333144: 0x24440200  addiu       $a0, $v0, 0x200
    ctx->pc = 0x333144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x333148: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x333148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x33314c: 0x24450410  addiu       $a1, $v0, 0x410
    ctx->pc = 0x33314cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1040));
    // 0x333150: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x333150u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400ACCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400ACCu, _value); } while (0);
    // 0x333154: 0xaca50004  sw          $a1, 0x4($a1)
    ctx->pc = 0x333154u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x400CD4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400CD4u, _value); } while (0);
    // 0x333158: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x333158u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400CE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400CE0u, _value); } while (0);
    // 0x33315c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x33315cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4008C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4008C0u, _value); } while (0);
    // 0x333160: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x333160u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4008C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4008C4u, _value); } while (0);
    // 0x333164: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x333164u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4008C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4008C8u, _value); } while (0);
    // 0x333168: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x333168u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4008CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4008CCu, _value); } while (0);
    // 0x33316c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x33316cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400AC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400AC0u, _value); } while (0);
    // 0x333170: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x333170u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400AC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400AC4u, _value); } while (0);
    // 0x333174: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x333174u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400AC8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400AC8u, _value); } while (0);
    // 0x333178: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x333178u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400CCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400CCCu, _value); } while (0);
    // 0x33317c: 0xac630000  sw          $v1, 0x0($v1)
    ctx->pc = 0x33317cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x400CC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400CC0u, _value); } while (0);
    // 0x333180: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x333180u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x400CC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400CC4u, _value); } while (0);
    // 0x333184: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x333184u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400CDCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400CDCu, _value); } while (0);
    // 0x333188: 0x16460004  bne         $s2, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x333188u;
    {
        const bool branch_taken_0x333188 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 6));
        ctx->pc = 0x33318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333188u;
        // 0x33318c: 0xaca50000  sw          $a1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333188) {
            ctx->pc = 0x33319Cu;
            goto label_33319c;
        }
    }
    ctx->pc = 0x333190u;
    // 0x333190: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x333190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x333194: 0xc0cfcde  jal         func_33F378
    ctx->pc = 0x333194u;
    SET_GPR_U32(ctx, 31, 0x33319Cu);
    ctx->pc = 0x333198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333194u;
    // 0x333198: 0x24840d00  addiu       $a0, $a0, 0xD00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F378u, 0x333194u, 0x33319Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33319Cu;
label_33319c:
    // 0x33319c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x33319cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3331a0:
    // 0x3331a0: 0x16a20009  bne         $s5, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3331A0u;
    {
        const bool branch_taken_0x3331a0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x3331A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3331A0u;
        // 0x3331a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3331a0) {
            ctx->pc = 0x3331C8u;
            goto label_3331c8;
        }
    }
    ctx->pc = 0x3331A8u;
    // 0x3331a8: 0x16430008  bne         $s2, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3331A8u;
    {
        const bool branch_taken_0x3331a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x3331ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3331A8u;
        // 0x3331ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3331a8) {
            ctx->pc = 0x3331CCu;
            goto label_3331cc;
        }
    }
    ctx->pc = 0x3331B0u;
    // 0x3331b0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3331b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3331b4: 0x24420f40  addiu       $v0, $v0, 0xF40
    ctx->pc = 0x3331b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
    // 0x3331b8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3331b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400F4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400F4Cu, _value); } while (0);
    // 0x3331bc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3331bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400F40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400F40u, _value); } while (0);
    // 0x3331c0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3331c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400F44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400F44u, _value); } while (0);
    // 0x3331c4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x3331c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x400F48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400F48u, _value); } while (0);
label_3331c8:
    // 0x3331c8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3331c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3331cc:
    // 0x3331cc: 0x16a20125  bne         $s5, $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x3331CCu;
    {
        const bool branch_taken_0x3331cc = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x3331D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3331CCu;
        // 0x3331d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3331cc) {
            ctx->pc = 0x333664u;
            goto label_333664;
        }
    }
    ctx->pc = 0x3331D4u;
    // 0x3331d4: 0x56430005  bnel        $s2, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3331D4u;
    {
        const bool branch_taken_0x3331d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x3331d4) {
            ctx->pc = 0x3331D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3331D4u;
            // 0x3331d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3331ECu;
            goto label_3331ec;
        }
    }
    ctx->pc = 0x3331DCu;
    // 0x3331dc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3331dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3331e0: 0xc0c8138  jal         func_3204E0
    ctx->pc = 0x3331E0u;
    SET_GPR_U32(ctx, 31, 0x3331E8u);
    ctx->pc = 0x3331E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3331E0u;
    // 0x3331e4: 0x24841180  addiu       $a0, $a0, 0x1180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3204E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3204E0u, 0x3331E0u, 0x3331E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3331E8u;
label_3331e8:
    // 0x3331e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3331e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3331ec:
    // 0x3331ec: 0x56420005  bnel        $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3331ECu;
    {
        const bool branch_taken_0x3331ec = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x3331ec) {
            ctx->pc = 0x3331F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3331ECu;
            // 0x3331f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333204u;
            goto label_333204;
        }
    }
    ctx->pc = 0x3331F4u;
    // 0x3331f4: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x3331f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x3331f8: 0xc0c79ce  jal         func_31E738
    ctx->pc = 0x3331F8u;
    SET_GPR_U32(ctx, 31, 0x333200u);
    ctx->pc = 0x3331FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3331F8u;
    // 0x3331fc: 0x2484d280  addiu       $a0, $a0, -0x2D80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E738u, 0x3331F8u, 0x333200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333200u;
label_333200:
    // 0x333200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x333200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_333204:
    // 0x333204: 0x56420005  bnel        $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x333204u;
    {
        const bool branch_taken_0x333204 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x333204) {
            ctx->pc = 0x333208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333204u;
            // 0x333208: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33321Cu;
            goto label_33321c;
        }
    }
    ctx->pc = 0x33320Cu;
    // 0x33320c: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x33320cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x333210: 0xc0c8388  jal         func_320E20
    ctx->pc = 0x333210u;
    SET_GPR_U32(ctx, 31, 0x333218u);
    ctx->pc = 0x333214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333210u;
    // 0x333214: 0x2484d6c0  addiu       $a0, $a0, -0x2940 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320E20u, 0x333210u, 0x333218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333218u;
label_333218:
    // 0x333218: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x333218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33321c:
    // 0x33321c: 0x56420005  bnel        $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33321Cu;
    {
        const bool branch_taken_0x33321c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x33321c) {
            ctx->pc = 0x333220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33321Cu;
            // 0x333220: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333234u;
            goto label_333234;
        }
    }
    ctx->pc = 0x333224u;
    // 0x333224: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x333224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x333228: 0xc0cdbd4  jal         func_336F50
    ctx->pc = 0x333228u;
    SET_GPR_U32(ctx, 31, 0x333230u);
    ctx->pc = 0x33322Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333228u;
    // 0x33322c: 0x2484ec80  addiu       $a0, $a0, -0x1380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336F50u, 0x333228u, 0x333230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333230u;
label_333230:
    // 0x333230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x333230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_333234:
    // 0x333234: 0x56420009  bnel        $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x333234u;
    {
        const bool branch_taken_0x333234 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x333234) {
            ctx->pc = 0x333238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333234u;
            // 0x333238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33325Cu;
            goto label_33325c;
        }
    }
    ctx->pc = 0x33323Cu;
    // 0x33323c: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x33323cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    // 0x333240: 0x2610f0c0  addiu       $s0, $s0, -0xF40
    ctx->pc = 0x333240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963392));
    // 0x333244: 0xc0d0b24  jal         func_342C90
    ctx->pc = 0x333244u;
    SET_GPR_U32(ctx, 31, 0x33324Cu);
    ctx->pc = 0x333248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333244u;
    // 0x333248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C90u, 0x333244u, 0x33324Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33324Cu;
label_33324c:
    // 0x33324c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x33324cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x333250: 0x24631fa0  addiu       $v1, $v1, 0x1FA0
    ctx->pc = 0x333250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8096));
    // 0x333254: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x333254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x333258: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x333258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33325c:
    // 0x33325c: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33325Cu;
    {
        const bool branch_taken_0x33325c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x333260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33325Cu;
        // 0x333260: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33325c) {
            ctx->pc = 0x333284u;
            goto label_333284;
        }
    }
    ctx->pc = 0x333264u;
    // 0x333264: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x333264u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    // 0x333268: 0x2610f100  addiu       $s0, $s0, -0xF00
    ctx->pc = 0x333268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963456));
    // 0x33326c: 0xc0d0b24  jal         func_342C90
    ctx->pc = 0x33326Cu;
    SET_GPR_U32(ctx, 31, 0x333274u);
    ctx->pc = 0x333270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33326Cu;
    // 0x333270: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C90u, 0x33326Cu, 0x333274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333274u;
label_333274:
    // 0x333274: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x333274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x333278: 0x24631f70  addiu       $v1, $v1, 0x1F70
    ctx->pc = 0x333278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8048));
    // 0x33327c: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x33327cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x333280: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x333280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_333284:
    // 0x333284: 0x16510020  bne         $s2, $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x333284u;
    {
        const bool branch_taken_0x333284 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x333288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333284u;
        // 0x333288: 0x3413ffff  ori         $s3, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x333284) {
            ctx->pc = 0x333308u;
            goto label_333308;
        }
    }
    ctx->pc = 0x33328Cu;
    // 0x33328c: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x33328cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    // 0x333290: 0x2610f140  addiu       $s0, $s0, -0xEC0
    ctx->pc = 0x333290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963520));
    // 0x333294: 0xc0d0b24  jal         func_342C90
    ctx->pc = 0x333294u;
    SET_GPR_U32(ctx, 31, 0x33329Cu);
    ctx->pc = 0x333298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333294u;
    // 0x333298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C90u, 0x333294u, 0x33329Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33329Cu;
label_33329c:
    // 0x33329c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x33329cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3332a0: 0x24631ed8  addiu       $v1, $v1, 0x1ED8
    ctx->pc = 0x3332a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7896));
    // 0x3332a4: 0x16510018  bne         $s2, $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x3332A4u;
    {
        const bool branch_taken_0x3332a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x3332A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3332A4u;
        // 0x3332a8: 0xae030024  sw          $v1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3332a4) {
            ctx->pc = 0x333308u;
            goto label_333308;
        }
    }
    ctx->pc = 0x3332ACu;
    // 0x3332ac: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x3332acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    // 0x3332b0: 0x2610f180  addiu       $s0, $s0, -0xE80
    ctx->pc = 0x3332b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963584));
    // 0x3332b4: 0xc0d0b24  jal         func_342C90
    ctx->pc = 0x3332B4u;
    SET_GPR_U32(ctx, 31, 0x3332BCu);
    ctx->pc = 0x3332B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3332B4u;
    // 0x3332b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C90u, 0x3332B4u, 0x3332BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3332BCu;
label_3332bc:
    // 0x3332bc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3332bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3332c0: 0x24631e80  addiu       $v1, $v1, 0x1E80
    ctx->pc = 0x3332c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7808));
    // 0x3332c4: 0x16510010  bne         $s2, $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3332C4u;
    {
        const bool branch_taken_0x3332c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x3332C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3332C4u;
        // 0x3332c8: 0xae030024  sw          $v1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3332c4) {
            ctx->pc = 0x333308u;
            goto label_333308;
        }
    }
    ctx->pc = 0x3332CCu;
    // 0x3332cc: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x3332ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    // 0x3332d0: 0x2610f1c0  addiu       $s0, $s0, -0xE40
    ctx->pc = 0x3332d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963648));
    // 0x3332d4: 0xc0d0b24  jal         func_342C90
    ctx->pc = 0x3332D4u;
    SET_GPR_U32(ctx, 31, 0x3332DCu);
    ctx->pc = 0x3332D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3332D4u;
    // 0x3332d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C90u, 0x3332D4u, 0x3332DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3332DCu;
label_3332dc:
    // 0x3332dc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3332dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3332e0: 0x24632188  addiu       $v1, $v1, 0x2188
    ctx->pc = 0x3332e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8584));
    // 0x3332e4: 0x16510008  bne         $s2, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3332E4u;
    {
        const bool branch_taken_0x3332e4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x3332E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3332E4u;
        // 0x3332e8: 0xae030024  sw          $v1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3332e4) {
            ctx->pc = 0x333308u;
            goto label_333308;
        }
    }
    ctx->pc = 0x3332ECu;
    // 0x3332ec: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x3332ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    // 0x3332f0: 0x2610f200  addiu       $s0, $s0, -0xE00
    ctx->pc = 0x3332f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963712));
    // 0x3332f4: 0xc0d0b24  jal         func_342C90
    ctx->pc = 0x3332F4u;
    SET_GPR_U32(ctx, 31, 0x3332FCu);
    ctx->pc = 0x3332F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3332F4u;
    // 0x3332f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C90u, 0x3332F4u, 0x3332FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3332FCu;
label_3332fc:
    // 0x3332fc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3332fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x333300: 0x246321b8  addiu       $v1, $v1, 0x21B8
    ctx->pc = 0x333300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8632));
    // 0x333304: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x333304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_333308:
    // 0x333308: 0x16b300d7  bne         $s5, $s3, . + 4 + (0xD7 << 2)
    ctx->pc = 0x333308u;
    {
        const bool branch_taken_0x333308 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 19));
        ctx->pc = 0x33330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333308u;
        // 0x33330c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x333308) {
            ctx->pc = 0x333668u;
            goto label_333668;
        }
    }
    ctx->pc = 0x333310u;
    // 0x333310: 0x165100c3  bne         $s2, $s1, . + 4 + (0xC3 << 2)
    ctx->pc = 0x333310u;
    {
        const bool branch_taken_0x333310 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        if (branch_taken_0x333310) {
            ctx->pc = 0x333620u;
            goto label_333620;
        }
    }
    ctx->pc = 0x333318u;
    // 0x333318: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x333318u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    // 0x33331c: 0x2610f240  addiu       $s0, $s0, -0xDC0
    ctx->pc = 0x33331cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963776));
    // 0x333320: 0xc0d0b24  jal         func_342C90
    ctx->pc = 0x333320u;
    SET_GPR_U32(ctx, 31, 0x333328u);
    ctx->pc = 0x333324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333320u;
    // 0x333324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C90u, 0x333320u, 0x333328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333328u;
label_333328:
    // 0x333328: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x333328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x33332c: 0x24632240  addiu       $v1, $v1, 0x2240
    ctx->pc = 0x33332cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8768));
    // 0x333330: 0x165100ba  bne         $s2, $s1, . + 4 + (0xBA << 2)
    ctx->pc = 0x333330u;
    {
        const bool branch_taken_0x333330 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x333334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333330u;
        // 0x333334: 0xae030024  sw          $v1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333330) {
            ctx->pc = 0x33361Cu;
            goto label_33361c;
        }
    }
    ctx->pc = 0x333338u;
    // 0x333338: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x333338u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    // 0x33333c: 0x2610f280  addiu       $s0, $s0, -0xD80
    ctx->pc = 0x33333cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963840));
    // 0x333340: 0xc0d0b24  jal         func_342C90
    ctx->pc = 0x333340u;
    SET_GPR_U32(ctx, 31, 0x333348u);
    ctx->pc = 0x333344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333340u;
    // 0x333344: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C90u, 0x333340u, 0x333348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333348u;
label_333348:
    // 0x333348: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x333348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x33334c: 0x24632220  addiu       $v1, $v1, 0x2220
    ctx->pc = 0x33334cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8736));
    // 0x333350: 0x165100b2  bne         $s2, $s1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x333350u;
    {
        const bool branch_taken_0x333350 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x333354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333350u;
        // 0x333354: 0xae030024  sw          $v1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333350) {
            ctx->pc = 0x33361Cu;
            goto label_33361c;
        }
    }
    ctx->pc = 0x333358u;
    // 0x333358: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x333358u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    // 0x33335c: 0x2610f2c0  addiu       $s0, $s0, -0xD40
    ctx->pc = 0x33335cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963904));
    // 0x333360: 0xc0d0b24  jal         func_342C90
    ctx->pc = 0x333360u;
    SET_GPR_U32(ctx, 31, 0x333368u);
    ctx->pc = 0x333364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333360u;
    // 0x333364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C90u, 0x333360u, 0x333368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333368u;
label_333368:
    // 0x333368: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x333368u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x33336c: 0x24632200  addiu       $v1, $v1, 0x2200
    ctx->pc = 0x33336cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8704));
    // 0x333370: 0x165100aa  bne         $s2, $s1, . + 4 + (0xAA << 2)
    ctx->pc = 0x333370u;
    {
        const bool branch_taken_0x333370 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x333374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333370u;
        // 0x333374: 0xae030024  sw          $v1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333370) {
            ctx->pc = 0x33361Cu;
            goto label_33361c;
        }
    }
    ctx->pc = 0x333378u;
    // 0x333378: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x333378u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    // 0x33337c: 0x2610f300  addiu       $s0, $s0, -0xD00
    ctx->pc = 0x33337cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963968));
    // 0x333380: 0xc0d0b24  jal         func_342C90
    ctx->pc = 0x333380u;
    SET_GPR_U32(ctx, 31, 0x333388u);
    ctx->pc = 0x333384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333380u;
    // 0x333384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C90u, 0x333380u, 0x333388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333388u;
label_333388:
    // 0x333388: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x333388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x33338c: 0x24632280  addiu       $v1, $v1, 0x2280
    ctx->pc = 0x33338cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8832));
    // 0x333390: 0x165100a2  bne         $s2, $s1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x333390u;
    {
        const bool branch_taken_0x333390 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x333394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333390u;
        // 0x333394: 0xae030024  sw          $v1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333390) {
            ctx->pc = 0x33361Cu;
            goto label_33361c;
        }
    }
    ctx->pc = 0x333398u;
    // 0x333398: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x333398u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
    // 0x33339c: 0x2610f340  addiu       $s0, $s0, -0xCC0
    ctx->pc = 0x33339cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294964032));
    // 0x3333a0: 0xc0d0b24  jal         func_342C90
    ctx->pc = 0x3333A0u;
    SET_GPR_U32(ctx, 31, 0x3333A8u);
    ctx->pc = 0x3333A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3333A0u;
    // 0x3333a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C90u, 0x3333A0u, 0x3333A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3333A8u;
label_3333a8:
    // 0x3333a8: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3333a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x3333ac: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x3333acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
    // 0x3333b0: 0x1651009a  bne         $s2, $s1, . + 4 + (0x9A << 2)
    ctx->pc = 0x3333B0u;
    {
        const bool branch_taken_0x3333b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x3333B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3333B0u;
        // 0x3333b4: 0xae030024  sw          $v1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3333b0) {
            ctx->pc = 0x33361Cu;
            goto label_33361c;
        }
    }
    ctx->pc = 0x3333B8u;
    // 0x3333b8: 0x3c0c0044  lui         $t4, 0x44
    ctx->pc = 0x3333b8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)68 << 16));
    // 0x3333bc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3333bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3333c0: 0x2587f380  addiu       $a3, $t4, -0xC80
    ctx->pc = 0x3333c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 4294964096));
    // 0x3333c4: 0x244220d8  addiu       $v0, $v0, 0x20D8
    ctx->pc = 0x3333c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8408));
    // 0x3333c8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x3333c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x43F380u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x43F380u, _value); } while (0);
    // 0x3333cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3333ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3333d0: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x3333d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x43F388u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x43F388u, _value); } while (0);
    // 0x3333d4: 0x24e20030  addiu       $v0, $a3, 0x30
    ctx->pc = 0x3333d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x3333d8: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x3333d8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3333dc: 0x0  nop
    ctx->pc = 0x3333dcu;
    // NOP
label_3333e0:
    // 0x3333e0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3333e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3333e4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3333e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3333e8: 0x0  nop
    ctx->pc = 0x3333e8u;
    // NOP
    // 0x3333ec: 0x0  nop
    ctx->pc = 0x3333ecu;
    // NOP
    // 0x3333f0: 0x0  nop
    ctx->pc = 0x3333f0u;
    // NOP
    // 0x3333f4: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3333F4u;
    {
        const bool branch_taken_0x3333f4 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x3333F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3333F4u;
        // 0x3333f8: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3333f4) {
            ctx->pc = 0x3333E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3333e0;
        }
    }
    ctx->pc = 0x3333FCu;
    // 0x3333fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3333fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x333400: 0x24e20060  addiu       $v0, $a3, 0x60
    ctx->pc = 0x333400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x333404: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x333404u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_333408:
    // 0x333408: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x333408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x33340c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33340cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x333410: 0x0  nop
    ctx->pc = 0x333410u;
    // NOP
    // 0x333414: 0x0  nop
    ctx->pc = 0x333414u;
    // NOP
    // 0x333418: 0x0  nop
    ctx->pc = 0x333418u;
    // NOP
    // 0x33341c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33341Cu;
    {
        const bool branch_taken_0x33341c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x333420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33341Cu;
        // 0x333420: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33341c) {
            ctx->pc = 0x333408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333408;
        }
    }
    ctx->pc = 0x333424u;
    // 0x333424: 0x24ea0004  addiu       $t2, $a3, 0x4
    ctx->pc = 0x333424u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x333428: 0x24eb0008  addiu       $t3, $a3, 0x8
    ctx->pc = 0x333428u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x33342c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33342cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333430: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x333430u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333434: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x333434u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333438: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x333438u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x33343c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x33343cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_333440:
    // 0x333440: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x333440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x333444: 0x1261821  addu        $v1, $t1, $a2
    ctx->pc = 0x333444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x333448: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x333448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x33344c: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x33344cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x333450: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x333450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x333454: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x333454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x333458: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x333458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x33345c: 0x4a1fff8  bgez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x33345Cu;
    {
        const bool branch_taken_0x33345c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x333460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33345Cu;
        // 0x333460: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33345c) {
            ctx->pc = 0x333440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333440;
        }
    }
    ctx->pc = 0x333464u;
    // 0x333464: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x333464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333468: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x333468u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33346c: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x33346cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333470: 0x240600d0  addiu       $a2, $zero, 0xD0
    ctx->pc = 0x333470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x333474: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x333474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_333478:
    // 0x333478: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x333478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x33347c: 0x1261821  addu        $v1, $t1, $a2
    ctx->pc = 0x33347cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x333480: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x333480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x333484: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x333484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x333488: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x333488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x33348c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x33348cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x333490: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x333490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x333494: 0x4a1fff8  bgez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x333494u;
    {
        const bool branch_taken_0x333494 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x333498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333494u;
        // 0x333498: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x333494) {
            ctx->pc = 0x333478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333478;
        }
    }
    ctx->pc = 0x33349Cu;
    // 0x33349c: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x33349cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x3334a0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3334a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3334a4: 0x2463f4b0  addiu       $v1, $v1, -0xB50
    ctx->pc = 0x3334a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964400));
    // 0x3334a8: 0x24422080  addiu       $v0, $v0, 0x2080
    ctx->pc = 0x3334a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8320));
    // 0x3334ac: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3334acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x43F4B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x43F4B8u, _value); } while (0);
    // 0x3334b0: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x3334b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x3334b4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3334b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x43F4B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x43F4B0u, _value); } while (0);
    // 0x3334b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3334b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3334bc: 0x700024a9  por         $a0, $zero, $zero
    ctx->pc = 0x3334bcu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_3334c0:
    // 0x3334c0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3334c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3334c4: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x3334c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x3334c8: 0x0  nop
    ctx->pc = 0x3334c8u;
    // NOP
    // 0x3334cc: 0x0  nop
    ctx->pc = 0x3334ccu;
    // NOP
    // 0x3334d0: 0x0  nop
    ctx->pc = 0x3334d0u;
    // NOP
    // 0x3334d4: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3334D4u;
    {
        const bool branch_taken_0x3334d4 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3334D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3334D4u;
        // 0x3334d8: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3334d4) {
            ctx->pc = 0x3334C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3334c0;
        }
    }
    ctx->pc = 0x3334DCu;
    // 0x3334dc: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x3334dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x3334e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3334e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3334e4: 0x2442f4b0  addiu       $v0, $v0, -0xB50
    ctx->pc = 0x3334e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964400));
    // 0x3334e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3334e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3334ec: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3334ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_3334f0:
    // 0x3334f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3334f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3334f4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x3334f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3334f8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x3334f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3334fc: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x3334fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x333500: 0x0  nop
    ctx->pc = 0x333500u;
    // NOP
    // 0x333504: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x333504u;
    {
        const bool branch_taken_0x333504 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x333508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333504u;
        // 0x333508: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333504) {
            ctx->pc = 0x3334F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3334f0;
        }
    }
    ctx->pc = 0x33350Cu;
    // 0x33350c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x33350cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x333510: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x333510u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333514: 0x2442f4b0  addiu       $v0, $v0, -0xB50
    ctx->pc = 0x333514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964400));
    // 0x333518: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x333518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33351c: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x33351cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_333520:
    // 0x333520: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x333520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x333524: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x333524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x333528: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x333528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x33352c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x33352cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x333530: 0x0  nop
    ctx->pc = 0x333530u;
    // NOP
    // 0x333534: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x333534u;
    {
        const bool branch_taken_0x333534 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x333538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333534u;
        // 0x333538: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333534) {
            ctx->pc = 0x333520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333520;
        }
    }
    ctx->pc = 0x33353Cu;
    // 0x33353c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x33353cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x333540: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x333540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x333544: 0x2442f4b0  addiu       $v0, $v0, -0xB50
    ctx->pc = 0x333544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964400));
    // 0x333548: 0x244200bc  addiu       $v0, $v0, 0xBC
    ctx->pc = 0x333548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x33354c: 0x0  nop
    ctx->pc = 0x33354cu;
    // NOP
label_333550:
    // 0x333550: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x333550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x333554: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x333554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x333558: 0x0  nop
    ctx->pc = 0x333558u;
    // NOP
    // 0x33355c: 0x0  nop
    ctx->pc = 0x33355cu;
    // NOP
    // 0x333560: 0x0  nop
    ctx->pc = 0x333560u;
    // NOP
    // 0x333564: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x333564u;
    {
        const bool branch_taken_0x333564 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x333568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333564u;
        // 0x333568: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333564) {
            ctx->pc = 0x333550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333550;
        }
    }
    ctx->pc = 0x33356Cu;
    // 0x33356c: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x33356cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x333570: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x333570u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x333574: 0x2484f570  addiu       $a0, $a0, -0xA90
    ctx->pc = 0x333574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964592));
    // 0x333578: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x333578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x33357c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x33357cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x333580: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x333580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x333584: 0x24a51fd0  addiu       $a1, $a1, 0x1FD0
    ctx->pc = 0x333584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8144));
    // 0x333588: 0x24632028  addiu       $v1, $v1, 0x2028
    ctx->pc = 0x333588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8232));
    // 0x33358c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x33358cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x43F590u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x43F590u, _value); } while (0); }
    // 0x333590: 0x24860030  addiu       $a2, $a0, 0x30
    ctx->pc = 0x333590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x333594: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x333594u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x43F578u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x43F578u, _value); } while (0);
    // 0x333598: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x333598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33359c: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x33359cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x43F588u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x43F588u, _value); } while (0);
    // 0x3335a0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3335a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3335a4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3335a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x43F570u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x43F570u, _value); } while (0);
    // 0x3335a8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3335a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x43F580u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x43F580u, _value); } while (0);
    // 0x3335ac: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x3335acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x43F598u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x43F598u, _value); } while (0); }
    // 0x3335b0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x3335b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x43F594u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x43F594u, _value); } while (0); }
    // 0x3335b4: 0x0  nop
    ctx->pc = 0x3335b4u;
    // NOP
label_3335b8:
    // 0x3335b8: 0xacc00020  sw          $zero, 0x20($a2)
    ctx->pc = 0x3335b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
    // 0x3335bc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3335bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3335c0: 0xacc00024  sw          $zero, 0x24($a2)
    ctx->pc = 0x3335c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 0));
    // 0x3335c4: 0x24c2001c  addiu       $v0, $a2, 0x1C
    ctx->pc = 0x3335c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
label_3335c8:
    // 0x3335c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3335c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3335cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3335ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3335d0: 0x0  nop
    ctx->pc = 0x3335d0u;
    // NOP
    // 0x3335d4: 0x0  nop
    ctx->pc = 0x3335d4u;
    // NOP
    // 0x3335d8: 0x0  nop
    ctx->pc = 0x3335d8u;
    // NOP
    // 0x3335dc: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3335DCu;
    {
        const bool branch_taken_0x3335dc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x3335E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3335DCu;
        // 0x3335e0: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3335dc) {
            ctx->pc = 0x3335C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3335c8;
        }
    }
    ctx->pc = 0x3335E4u;
    // 0x3335e4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3335e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3335e8: 0x14e5fff3  bne         $a3, $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x3335E8u;
    {
        const bool branch_taken_0x3335e8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 5));
        ctx->pc = 0x3335ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3335E8u;
        // 0x3335ec: 0x24c60028  addiu       $a2, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3335e8) {
            ctx->pc = 0x3335B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3335b8;
        }
    }
    ctx->pc = 0x3335F0u;
    // 0x3335f0: 0x2582f380  addiu       $v0, $t4, -0xC80
    ctx->pc = 0x3335f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 4294964096));
    // 0x3335f4: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x3335f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3335f8: 0x245002a0  addiu       $s0, $v0, 0x2A0
    ctx->pc = 0x3335f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 672));
    // 0x3335fc: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x3335fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x333600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333604: 0x0  nop
    ctx->pc = 0x333604u;
    // NOP
label_333608:
    // 0x333608: 0x26100060  addiu       $s0, $s0, 0x60
    ctx->pc = 0x333608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x33360c: 0xc0ca5be  jal         func_3296F8
    ctx->pc = 0x33360Cu;
    SET_GPR_U32(ctx, 31, 0x333614u);
    ctx->pc = 0x333610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33360Cu;
    // 0x333610: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3296F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3296F8u, 0x33360Cu, 0x333614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333614u;
label_333614:
    // 0x333614: 0x1633fffc  bne         $s1, $s3, . + 4 + (-0x4 << 2)
    ctx->pc = 0x333614u;
    {
        const bool branch_taken_0x333614 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x333618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333614u;
        // 0x333618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333614) {
            ctx->pc = 0x333608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333608;
        }
    }
    ctx->pc = 0x33361Cu;
label_33361c:
    // 0x33361c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x33361cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_333620:
    // 0x333620: 0x16a20011  bne         $s5, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x333620u;
    {
        const bool branch_taken_0x333620 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x333624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333620u;
        // 0x333624: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x333620) {
            ctx->pc = 0x333668u;
            goto label_333668;
        }
    }
    ctx->pc = 0x333628u;
    // 0x333628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x333628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33362c: 0x1642000e  bne         $s2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x33362Cu;
    {
        const bool branch_taken_0x33362c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x333630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33362Cu;
        // 0x333630: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33362c) {
            ctx->pc = 0x333668u;
            goto label_333668;
        }
    }
    ctx->pc = 0x333634u;
    // 0x333634: 0x3c140044  lui         $s4, 0x44
    ctx->pc = 0x333634u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)68 << 16));
    // 0x333638: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x333638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33363c: 0x2690f940  addiu       $s0, $s4, -0x6C0
    ctx->pc = 0x33363cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965568));
    // 0x333640: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x333640u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x333644: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_333648:
    // 0x333648: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x333648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x33364c: 0xc0cb632  jal         func_32D8C8
    ctx->pc = 0x33364Cu;
    SET_GPR_U32(ctx, 31, 0x333654u);
    ctx->pc = 0x333650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33364Cu;
    // 0x333650: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D8C8u, 0x33364Cu, 0x333654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333654u;
label_333654:
    // 0x333654: 0x5633fffc  bnel        $s1, $s3, . + 4 + (-0x4 << 2)
    ctx->pc = 0x333654u;
    {
        const bool branch_taken_0x333654 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        if (branch_taken_0x333654) {
            ctx->pc = 0x333658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333654u;
            // 0x333658: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333648u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333648;
        }
    }
    ctx->pc = 0x33365Cu;
    // 0x33365c: 0xc0cb616  jal         func_32D858
    ctx->pc = 0x33365Cu;
    SET_GPR_U32(ctx, 31, 0x333664u);
    ctx->pc = 0x333660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33365Cu;
    // 0x333660: 0x2684f940  addiu       $a0, $s4, -0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D858u, 0x33365Cu, 0x333664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333664u;
label_333664:
    // 0x333664: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x333664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_333668:
    // 0x333668: 0x16a20061  bne         $s5, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x333668u;
    {
        const bool branch_taken_0x333668 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x33366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333668u;
        // 0x33366c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333668) {
            ctx->pc = 0x3337F0u;
            goto label_3337f0;
        }
    }
    ctx->pc = 0x333670u;
    // 0x333670: 0x1643002c  bne         $s2, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x333670u;
    {
        const bool branch_taken_0x333670 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x333674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333670u;
        // 0x333674: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x333670) {
            ctx->pc = 0x333724u;
            goto label_333724;
        }
    }
    ctx->pc = 0x333678u;
    // 0x333678: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x333678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x33367c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x33367cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x333680: 0x2442fe10  addiu       $v0, $v0, -0x1F0
    ctx->pc = 0x333680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966800));
    // 0x333684: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x333684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333688: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x333688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x33368c: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x33368cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x43FE30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x43FE30u, _value); } while (0);
    // 0x333690: 0x24460024  addiu       $a2, $v0, 0x24
    ctx->pc = 0x333690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x333694: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x333694u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x43FE24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x43FE24u, _value); } while (0);
    // 0x333698: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x333698u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x43FE1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x43FE1Cu, _value); } while (0);
    // 0x33369c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x33369cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3336a0: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x3336a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x43FE10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x43FE10u, _value); } while (0);
    // 0x3336a4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3336a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3336a8: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x3336a8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x43FE14u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x43FE14u, _value); } while (0);
    // 0x3336ac: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3336acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x43FE2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x43FE2Cu, _value); } while (0);
    // 0x3336b0: 0xac630000  sw          $v1, 0x0($v1)
    ctx->pc = 0x3336b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x43FE20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x43FE20u, _value); } while (0);
    // 0x3336b4: 0x0  nop
    ctx->pc = 0x3336b4u;
    // NOP
label_3336b8:
    // 0x3336b8: 0x2482fff4  addiu       $v0, $a0, -0xC
    ctx->pc = 0x3336b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
    // 0x3336bc: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x3336bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x3336c0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3336c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3336c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3336c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3336c8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x3336c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x3336cc: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x3336ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3336d0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x3336d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3336d4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3336D4u;
    {
        const bool branch_taken_0x3336d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3336D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3336D4u;
        // 0x3336d8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3336d4) {
            ctx->pc = 0x3336B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3336b8;
        }
    }
    ctx->pc = 0x3336DCu;
    // 0x3336dc: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x3336dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x3336e0: 0x2442fe20  addiu       $v0, $v0, -0x1E0
    ctx->pc = 0x3336e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966816));
    // 0x3336e4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3336e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x43FE2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x43FE2Cu, _value); } while (0);
    // 0x3336e8: 0x2445fff0  addiu       $a1, $v0, -0x10
    ctx->pc = 0x3336e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3336ec: 0x8ca40020  lw          $a0, 0x20($a1)
    ctx->pc = 0x3336ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x43FE30u));
    // 0x3336f0: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x3336f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x43FE20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x43FE20u, _value); } while (0);
    // 0x3336f4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x3336f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3336f8: 0xac420004  sw          $v0, 0x4($v0)
    ctx->pc = 0x3336f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
    // 0x3336fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3336fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x333700: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x333700u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x333704: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x333704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x333708: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x333708u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
    // 0x33370c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x33370cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x333710: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x333710u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
    // 0x333714: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x333714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
    // 0x333718: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x333718u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x33371c: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x33371cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x333720: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x333720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_333724:
    // 0x333724: 0x56a20033  bnel        $s5, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x333724u;
    {
        const bool branch_taken_0x333724 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x333724) {
            ctx->pc = 0x333728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333724u;
            // 0x333728: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3337F4u;
            goto label_3337f4;
        }
    }
    ctx->pc = 0x33372Cu;
    // 0x33372c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x33372cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x333730: 0x56500030  bnel        $s2, $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x333730u;
    {
        const bool branch_taken_0x333730 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x333730) {
            ctx->pc = 0x333734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333730u;
            // 0x333734: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3337F4u;
            goto label_3337f4;
        }
    }
    ctx->pc = 0x333738u;
    // 0x333738: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x333738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x33373c: 0xc0cb324  jal         func_32CC90
    ctx->pc = 0x33373Cu;
    SET_GPR_U32(ctx, 31, 0x333744u);
    ctx->pc = 0x333740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33373Cu;
    // 0x333740: 0x2484ff00  addiu       $a0, $a0, -0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32CC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32CC90u, 0x33373Cu, 0x333744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333744u;
label_333744:
    // 0x333744: 0x1650002b  bne         $s2, $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x333744u;
    {
        const bool branch_taken_0x333744 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x333748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333744u;
        // 0x333748: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x333744) {
            ctx->pc = 0x3337F4u;
            goto label_3337f4;
        }
    }
    ctx->pc = 0x33374Cu;
    // 0x33374c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x33374cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x333750: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x333750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x333754: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x333754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x333758: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x333758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x33375c: 0xac400404  sw          $zero, 0x404($v0)
    ctx->pc = 0x33375cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x440384u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x440384u, _value); } while (0);
    // 0x333760: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x333760u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x333764: 0x24842360  addiu       $a0, $a0, 0x2360
    ctx->pc = 0x333764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9056));
    // 0x333768: 0x24490414  addiu       $t1, $v0, 0x414
    ctx->pc = 0x333768u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 1044));
    // 0x33376c: 0x8c430404  lw          $v1, 0x404($v0)
    ctx->pc = 0x33376cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x440384u));
    // 0x333770: 0x24470424  addiu       $a3, $v0, 0x424
    ctx->pc = 0x333770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 1060));
    // 0x333774: 0xac400408  sw          $zero, 0x408($v0)
    ctx->pc = 0x333774u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x440388u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x440388u, _value); } while (0);
    // 0x333778: 0x24480434  addiu       $t0, $v0, 0x434
    ctx->pc = 0x333778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1076));
    // 0x33377c: 0x240bfffe  addiu       $t3, $zero, -0x2
    ctx->pc = 0x33377cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x333780: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x333780u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x333784: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x333784u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x333788: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x333788u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x33378c: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x33378cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x333790: 0x24a52438  addiu       $a1, $a1, 0x2438
    ctx->pc = 0x333790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9272));
    // 0x333794: 0xdc430408  ld          $v1, 0x408($v0)
    ctx->pc = 0x333794u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 1032)));
    // 0x333798: 0x24c623f0  addiu       $a2, $a2, 0x23F0
    ctx->pc = 0x333798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9200));
    // 0x33379c: 0xad240000  sw          $a0, 0x0($t1)
    ctx->pc = 0x33379cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 4));
    // 0x3337a0: 0x240afffd  addiu       $t2, $zero, -0x3
    ctx->pc = 0x3337a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3337a4: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3337a4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x3337a8: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x3337a8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x3337ac: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3337acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x3337b0: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x3337b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x3337b4: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x3337b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x3337b8: 0x6b1824  and         $v1, $v1, $t3
    ctx->pc = 0x3337b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 11));
    // 0x3337bc: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x3337bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x3337c0: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x3337c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x3337c4: 0xac520400  sw          $s2, 0x400($v0)
    ctx->pc = 0x3337c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1024), GPR_U32(ctx, 18));
    // 0x3337c8: 0x8c440408  lw          $a0, 0x408($v0)
    ctx->pc = 0x3337c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1032)));
    // 0x3337cc: 0xac400410  sw          $zero, 0x410($v0)
    ctx->pc = 0x3337ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1040), GPR_U32(ctx, 0));
    // 0x3337d0: 0xfc430408  sd          $v1, 0x408($v0)
    ctx->pc = 0x3337d0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 1032), GPR_U64(ctx, 3));
    // 0x3337d4: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x3337d4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x3337d8: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x3337d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x3337dc: 0x16500004  bne         $s2, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3337DCu;
    {
        const bool branch_taken_0x3337dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x3337E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3337DCu;
        // 0x3337e0: 0xad000004  sw          $zero, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3337dc) {
            ctx->pc = 0x3337F0u;
            goto label_3337f0;
        }
    }
    ctx->pc = 0x3337E4u;
    // 0x3337e4: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x3337e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x3337e8: 0xc0c69b2  jal         func_31A6C8
    ctx->pc = 0x3337E8u;
    SET_GPR_U32(ctx, 31, 0x3337F0u);
    ctx->pc = 0x3337ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3337E8u;
    // 0x3337ec: 0x24840400  addiu       $a0, $a0, 0x400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A6C8u, 0x3337E8u, 0x3337F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3337F0u;
label_3337f0:
    // 0x3337f0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3337f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3337f4:
    // 0x3337f4: 0x16a2001e  bne         $s5, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3337F4u;
    {
        const bool branch_taken_0x3337f4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x3337F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3337F4u;
        // 0x3337f8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3337f4) {
            ctx->pc = 0x333870u;
            goto label_333870;
        }
    }
    ctx->pc = 0x3337FCu;
    // 0x3337fc: 0x5650001d  bnel        $s2, $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3337FCu;
    {
        const bool branch_taken_0x3337fc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x3337fc) {
            ctx->pc = 0x333800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3337FCu;
            // 0x333800: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x333874u;
            goto label_333874;
        }
    }
    ctx->pc = 0x333804u;
    // 0x333804: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x333804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x333808: 0xc0c68cc  jal         func_31A330
    ctx->pc = 0x333808u;
    SET_GPR_U32(ctx, 31, 0x333810u);
    ctx->pc = 0x33380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333808u;
    // 0x33380c: 0x24840440  addiu       $a0, $a0, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A330u, 0x333808u, 0x333810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333810u;
label_333810:
    // 0x333810: 0x16500018  bne         $s2, $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x333810u;
    {
        const bool branch_taken_0x333810 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x333814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333810u;
        // 0x333814: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x333810) {
            ctx->pc = 0x333874u;
            goto label_333874;
        }
    }
    ctx->pc = 0x333818u;
    // 0x333818: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x333818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x33381c: 0x244204a0  addiu       $v0, $v0, 0x4A0
    ctx->pc = 0x33381cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1184));
    // 0x333820: 0xac40020c  sw          $zero, 0x20C($v0)
    ctx->pc = 0x333820u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4406ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4406ACu, _value); } while (0);
    // 0x333824: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x333824u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x440520u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x440520u, _value); } while (0);
    // 0x333828: 0xac400104  sw          $zero, 0x104($v0)
    ctx->pc = 0x333828u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4405A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4405A4u, _value); } while (0);
    // 0x33382c: 0x16500010  bne         $s2, $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x33382Cu;
    {
        const bool branch_taken_0x33382c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x333830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33382Cu;
        // 0x333830: 0xac400188  sw          $zero, 0x188($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 392), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33382c) {
            ctx->pc = 0x333870u;
            goto label_333870;
        }
    }
    ctx->pc = 0x333834u;
    // 0x333834: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x333834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x333838: 0xc0c6faa  jal         func_31BEA8
    ctx->pc = 0x333838u;
    SET_GPR_U32(ctx, 31, 0x333840u);
    ctx->pc = 0x33383Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333838u;
    // 0x33383c: 0x24844f40  addiu       $a0, $a0, 0x4F40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31BEA8u, 0x333838u, 0x333840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333840u;
label_333840:
    // 0x333840: 0x1650000c  bne         $s2, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x333840u;
    {
        const bool branch_taken_0x333840 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x333844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333840u;
        // 0x333844: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x333840) {
            ctx->pc = 0x333874u;
            goto label_333874;
        }
    }
    ctx->pc = 0x333848u;
    // 0x333848: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x333848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x33384c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x33384cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x333850: 0x24420700  addiu       $v0, $v0, 0x700
    ctx->pc = 0x333850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1792));
    // 0x333854: 0x246321e8  addiu       $v1, $v1, 0x21E8
    ctx->pc = 0x333854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8680));
    // 0x333858: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x333858u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x44072Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x44072Cu, _value); } while (0);
    // 0x33385c: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x33385cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x333860: 0x7c430010  sq          $v1, 0x10($v0)
    ctx->pc = 0x333860u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
    // 0x333864: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x333864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x333868: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x333868u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x33386c: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x33386cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_333870:
    // 0x333870: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x333870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_333874:
    // 0x333874: 0x16a200f1  bne         $s5, $v0, . + 4 + (0xF1 << 2)
    ctx->pc = 0x333874u;
    {
        const bool branch_taken_0x333874 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x333878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333874u;
        // 0x333878: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333874) {
            ctx->pc = 0x333C3Cu;
            goto label_333c3c;
        }
    }
    ctx->pc = 0x33387Cu;
    // 0x33387c: 0x16430004  bne         $s2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33387Cu;
    {
        const bool branch_taken_0x33387c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x333880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33387Cu;
        // 0x333880: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33387c) {
            ctx->pc = 0x333890u;
            goto label_333890;
        }
    }
    ctx->pc = 0x333884u;
    // 0x333884: 0x24420740  addiu       $v0, $v0, 0x740
    ctx->pc = 0x333884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1856));
    // 0x333888: 0xac4000c4  sw          $zero, 0xC4($v0)
    ctx->pc = 0x333888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 0));
    // 0x33388c: 0xac4000b8  sw          $zero, 0xB8($v0)
    ctx->pc = 0x33388cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 0));
label_333890:
    // 0x333890: 0x16430004  bne         $s2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x333890u;
    {
        const bool branch_taken_0x333890 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x333890) {
            ctx->pc = 0x3338A4u;
            goto label_3338a4;
        }
    }
    ctx->pc = 0x333898u;
    // 0x333898: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x333898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x33389c: 0xc0cc5d4  jal         func_331750
    ctx->pc = 0x33389Cu;
    SET_GPR_U32(ctx, 31, 0x3338A4u);
    ctx->pc = 0x3338A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33389Cu;
    // 0x3338a0: 0x24840840  addiu       $a0, $a0, 0x840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331750u, 0x33389Cu, 0x3338A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3338A4u;
label_3338a4:
    // 0x3338a4: 0x1640001c  bnez        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x3338A4u;
    {
        const bool branch_taken_0x3338a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3338A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3338A4u;
        // 0x3338a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3338a4) {
            ctx->pc = 0x333918u;
            goto label_333918;
        }
    }
    ctx->pc = 0x3338ACu;
    // 0x3338ac: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x3338acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x3338b0: 0x24420740  addiu       $v0, $v0, 0x740
    ctx->pc = 0x3338b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1856));
    // 0x3338b4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x3338B4u;
    {
        const bool branch_taken_0x3338b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3338b4) {
            ctx->pc = 0x3338B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3338B4u;
            // 0x3338b8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x333918u;
            goto label_333918;
        }
    }
    ctx->pc = 0x3338BCu;
    // 0x3338bc: 0x244500b8  addiu       $a1, $v0, 0xB8
    ctx->pc = 0x3338bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    // 0x3338c0: 0x50a20015  beql        $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3338C0u;
    {
        const bool branch_taken_0x3338c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3338c0) {
            ctx->pc = 0x3338C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3338C0u;
            // 0x3338c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x333918u;
            goto label_333918;
        }
    }
    ctx->pc = 0x3338C8u;
    // 0x3338c8: 0x2406fff4  addiu       $a2, $zero, -0xC
    ctx->pc = 0x3338c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
    // 0x3338cc: 0x24a5ffa4  addiu       $a1, $a1, -0x5C
    ctx->pc = 0x3338ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967204));
label_3338d0:
    // 0x3338d0: 0x10a6000e  beq         $a1, $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x3338D0u;
    {
        const bool branch_taken_0x3338d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x3338d0) {
            ctx->pc = 0x33390Cu;
            goto label_33390c;
        }
    }
    ctx->pc = 0x3338D8u;
    // 0x3338d8: 0x24a3005c  addiu       $v1, $a1, 0x5C
    ctx->pc = 0x3338d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
    // 0x3338dc: 0x24a4000c  addiu       $a0, $a1, 0xC
    ctx->pc = 0x3338dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x3338e0: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3338E0u;
    {
        const bool branch_taken_0x3338e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3338e0) {
            ctx->pc = 0x33390Cu;
            goto label_33390c;
        }
    }
    ctx->pc = 0x3338E8u;
    // 0x3338e8: 0x2463ffb0  addiu       $v1, $v1, -0x50
    ctx->pc = 0x3338e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967216));
    // 0x3338ec: 0x0  nop
    ctx->pc = 0x3338ecu;
    // NOP
label_3338f0:
    // 0x3338f0: 0x0  nop
    ctx->pc = 0x3338f0u;
    // NOP
    // 0x3338f4: 0x0  nop
    ctx->pc = 0x3338f4u;
    // NOP
    // 0x3338f8: 0x0  nop
    ctx->pc = 0x3338f8u;
    // NOP
    // 0x3338fc: 0x0  nop
    ctx->pc = 0x3338fcu;
    // NOP
    // 0x333900: 0x0  nop
    ctx->pc = 0x333900u;
    // NOP
    // 0x333904: 0x5483fffa  bnel        $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x333904u;
    {
        const bool branch_taken_0x333904 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x333904) {
            ctx->pc = 0x333908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333904u;
            // 0x333908: 0x2463ffb0  addiu       $v1, $v1, -0x50 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967216));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3338F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3338f0;
        }
    }
    ctx->pc = 0x33390Cu;
label_33390c:
    // 0x33390c: 0x54a2fff0  bnel        $a1, $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x33390Cu;
    {
        const bool branch_taken_0x33390c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x33390c) {
            ctx->pc = 0x333910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33390Cu;
            // 0x333910: 0x24a5ffa4  addiu       $a1, $a1, -0x5C (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967204));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3338D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3338d0;
        }
    }
    ctx->pc = 0x333914u;
    // 0x333914: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x333914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_333918:
    // 0x333918: 0x16a200c9  bne         $s5, $v0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x333918u;
    {
        const bool branch_taken_0x333918 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x33391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333918u;
        // 0x33391c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333918) {
            ctx->pc = 0x333C40u;
            goto label_333c40;
        }
    }
    ctx->pc = 0x333920u;
    // 0x333920: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x333920u;
    {
        const bool branch_taken_0x333920 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x333924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333920u;
        // 0x333924: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333920) {
            ctx->pc = 0x333934u;
            goto label_333934;
        }
    }
    ctx->pc = 0x333928u;
    // 0x333928: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x333928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x33392c: 0x244221e8  addiu       $v0, $v0, 0x21E8
    ctx->pc = 0x33392cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8680));
    // 0x333930: 0xac62072c  sw          $v0, 0x72C($v1)
    ctx->pc = 0x333930u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x44072Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x44072Cu, _value); } while (0);
label_333934:
    // 0x333934: 0x16400014  bnez        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x333934u;
    {
        const bool branch_taken_0x333934 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x333938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333934u;
        // 0x333938: 0x3c100044  lui         $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333934) {
            ctx->pc = 0x333988u;
            goto label_333988;
        }
    }
    ctx->pc = 0x33393Cu;
    // 0x33393c: 0x3c110046  lui         $s1, 0x46
    ctx->pc = 0x33393cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)70 << 16));
    // 0x333940: 0x261003b4  addiu       $s0, $s0, 0x3B4
    ctx->pc = 0x333940u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 948));
    // 0x333944: 0x263123a8  addiu       $s1, $s1, 0x23A8
    ctx->pc = 0x333944u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 9128));
    // 0x333948: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x333948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x33394c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33394cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333950: 0xc0cd388  jal         func_334E20
    ctx->pc = 0x333950u;
    SET_GPR_U32(ctx, 31, 0x333958u);
    ctx->pc = 0x333954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333950u;
    // 0x333954: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334E20u, 0x333950u, 0x333958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333958u;
label_333958:
    // 0x333958: 0x2602fff0  addiu       $v0, $s0, -0x10
    ctx->pc = 0x333958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x33395c: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x33395cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x333960: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x333960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333964: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x333964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333968: 0xc0cd388  jal         func_334E20
    ctx->pc = 0x333968u;
    SET_GPR_U32(ctx, 31, 0x333970u);
    ctx->pc = 0x33396Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333968u;
    // 0x33396c: 0x2610ffe0  addiu       $s0, $s0, -0x20 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334E20u, 0x333968u, 0x333970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333970u;
label_333970:
    // 0x333970: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x333970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x333974: 0x24422318  addiu       $v0, $v0, 0x2318
    ctx->pc = 0x333974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8984));
    // 0x333978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33397c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x33397cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x333980: 0xc0cd388  jal         func_334E20
    ctx->pc = 0x333980u;
    SET_GPR_U32(ctx, 31, 0x333988u);
    ctx->pc = 0x333984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333980u;
    // 0x333984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334E20u, 0x333980u, 0x333988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333988u;
label_333988:
    // 0x333988: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x333988u;
    {
        const bool branch_taken_0x333988 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x33398Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333988u;
        // 0x33398c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x333988) {
            ctx->pc = 0x3339D0u;
            goto label_3339d0;
        }
    }
    ctx->pc = 0x333990u;
    // 0x333990: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x333990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x333994: 0x2442fd50  addiu       $v0, $v0, -0x2B0
    ctx->pc = 0x333994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966608));
    // 0x333998: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x333998u;
    {
        const bool branch_taken_0x333998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x333998) {
            ctx->pc = 0x33399Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333998u;
            // 0x33399c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3339D0u;
            goto label_3339d0;
        }
    }
    ctx->pc = 0x3339A0u;
    // 0x3339a0: 0x244300c0  addiu       $v1, $v0, 0xC0
    ctx->pc = 0x3339a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3339a4: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3339A4u;
    {
        const bool branch_taken_0x3339a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3339a4) {
            ctx->pc = 0x3339A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3339A4u;
            // 0x3339a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3339D0u;
            goto label_3339d0;
        }
    }
    ctx->pc = 0x3339ACu;
    // 0x3339ac: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x3339acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_3339b0:
    // 0x3339b0: 0x0  nop
    ctx->pc = 0x3339b0u;
    // NOP
    // 0x3339b4: 0x0  nop
    ctx->pc = 0x3339b4u;
    // NOP
    // 0x3339b8: 0x0  nop
    ctx->pc = 0x3339b8u;
    // NOP
    // 0x3339bc: 0x0  nop
    ctx->pc = 0x3339bcu;
    // NOP
    // 0x3339c0: 0x0  nop
    ctx->pc = 0x3339c0u;
    // NOP
    // 0x3339c4: 0x5462fffa  bnel        $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3339C4u;
    {
        const bool branch_taken_0x3339c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3339c4) {
            ctx->pc = 0x3339C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3339C4u;
            // 0x3339c8: 0x2463fff4  addiu       $v1, $v1, -0xC (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3339B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3339b0;
        }
    }
    ctx->pc = 0x3339CCu;
    // 0x3339cc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3339ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_3339d0:
    // 0x3339d0: 0x16a2009b  bne         $s5, $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x3339D0u;
    {
        const bool branch_taken_0x3339d0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x3339D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3339D0u;
        // 0x3339d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3339d0) {
            ctx->pc = 0x333C40u;
            goto label_333c40;
        }
    }
    ctx->pc = 0x3339D8u;
    // 0x3339d8: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x3339D8u;
    {
        const bool branch_taken_0x3339d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3339DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3339D8u;
        // 0x3339dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3339d8) {
            ctx->pc = 0x333A20u;
            goto label_333a20;
        }
    }
    ctx->pc = 0x3339E0u;
    // 0x3339e0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x3339e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x3339e4: 0x2442f940  addiu       $v0, $v0, -0x6C0
    ctx->pc = 0x3339e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965568));
    // 0x3339e8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x3339E8u;
    {
        const bool branch_taken_0x3339e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3339e8) {
            ctx->pc = 0x3339ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3339E8u;
            // 0x3339ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x333A20u;
            goto label_333a20;
        }
    }
    ctx->pc = 0x3339F0u;
    // 0x3339f0: 0x24430400  addiu       $v1, $v0, 0x400
    ctx->pc = 0x3339f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x3339f4: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3339F4u;
    {
        const bool branch_taken_0x3339f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3339f4) {
            ctx->pc = 0x3339F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3339F4u;
            // 0x3339f8: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x333A20u;
            goto label_333a20;
        }
    }
    ctx->pc = 0x3339FCu;
    // 0x3339fc: 0x2463ff00  addiu       $v1, $v1, -0x100
    ctx->pc = 0x3339fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
label_333a00:
    // 0x333a00: 0x0  nop
    ctx->pc = 0x333a00u;
    // NOP
    // 0x333a04: 0x0  nop
    ctx->pc = 0x333a04u;
    // NOP
    // 0x333a08: 0x0  nop
    ctx->pc = 0x333a08u;
    // NOP
    // 0x333a0c: 0x0  nop
    ctx->pc = 0x333a0cu;
    // NOP
    // 0x333a10: 0x0  nop
    ctx->pc = 0x333a10u;
    // NOP
    // 0x333a14: 0x5462fffa  bnel        $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x333A14u;
    {
        const bool branch_taken_0x333a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x333a14) {
            ctx->pc = 0x333A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333A14u;
            // 0x333a18: 0x2463ff00  addiu       $v1, $v1, -0x100 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967040));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333a00;
        }
    }
    ctx->pc = 0x333A1Cu;
    // 0x333a1c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x333a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_333a20:
    // 0x333a20: 0x16a20087  bne         $s5, $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x333A20u;
    {
        const bool branch_taken_0x333a20 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x333A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333A20u;
        // 0x333a24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333a20) {
            ctx->pc = 0x333C40u;
            goto label_333c40;
        }
    }
    ctx->pc = 0x333A28u;
    // 0x333a28: 0x1640001b  bnez        $s2, . + 4 + (0x1B << 2)
    ctx->pc = 0x333A28u;
    {
        const bool branch_taken_0x333a28 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x333A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333A28u;
        // 0x333a2c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x333a28) {
            ctx->pc = 0x333A98u;
            goto label_333a98;
        }
    }
    ctx->pc = 0x333A30u;
    // 0x333a30: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x333a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x333a34: 0x2403fde0  addiu       $v1, $zero, -0x220
    ctx->pc = 0x333a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966752));
    // 0x333a38: 0x2442f380  addiu       $v0, $v0, -0xC80
    ctx->pc = 0x333a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964096));
    // 0x333a3c: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x333A3Cu;
    {
        const bool branch_taken_0x333a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x333A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333A3Cu;
        // 0x333a40: 0x24430220  addiu       $v1, $v0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333a3c) {
            ctx->pc = 0x333A74u;
            goto label_333a74;
        }
    }
    ctx->pc = 0x333A44u;
    // 0x333a44: 0x24420298  addiu       $v0, $v0, 0x298
    ctx->pc = 0x333a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 664));
    // 0x333a48: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x333A48u;
    {
        const bool branch_taken_0x333a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x333a48) {
            ctx->pc = 0x333A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333A48u;
            // 0x333a4c: 0x3c030044  lui         $v1, 0x44 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333A78u;
            goto label_333a78;
        }
    }
    ctx->pc = 0x333A50u;
    // 0x333a50: 0x2442ffd8  addiu       $v0, $v0, -0x28
    ctx->pc = 0x333a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
    // 0x333a54: 0x0  nop
    ctx->pc = 0x333a54u;
    // NOP
label_333a58:
    // 0x333a58: 0x0  nop
    ctx->pc = 0x333a58u;
    // NOP
    // 0x333a5c: 0x0  nop
    ctx->pc = 0x333a5cu;
    // NOP
    // 0x333a60: 0x0  nop
    ctx->pc = 0x333a60u;
    // NOP
    // 0x333a64: 0x0  nop
    ctx->pc = 0x333a64u;
    // NOP
    // 0x333a68: 0x0  nop
    ctx->pc = 0x333a68u;
    // NOP
    // 0x333a6c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x333A6Cu;
    {
        const bool branch_taken_0x333a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x333A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333A6Cu;
        // 0x333a70: 0x2442ffd8  addiu       $v0, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333a6c) {
            ctx->pc = 0x333A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_333a58;
        }
    }
    ctx->pc = 0x333A74u;
label_333a74:
    // 0x333a74: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x333a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
label_333a78:
    // 0x333a78: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x333a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x333a7c: 0x2463f580  addiu       $v1, $v1, -0xA80
    ctx->pc = 0x333a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964608));
    // 0x333a80: 0x24422130  addiu       $v0, $v0, 0x2130
    ctx->pc = 0x333a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8496));
    // 0x333a84: 0xac62fe08  sw          $v0, -0x1F8($v1)
    ctx->pc = 0x333a84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966792), GPR_U32(ctx, 2));
    // 0x333a88: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x333a88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x333a8c: 0xac62fff8  sw          $v0, -0x8($v1)
    ctx->pc = 0x333a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), GPR_U32(ctx, 2));
    // 0x333a90: 0xac62ff38  sw          $v0, -0xC8($v1)
    ctx->pc = 0x333a90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967096), GPR_U32(ctx, 2));
    // 0x333a94: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x333a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_333a98:
    // 0x333a98: 0x16a20069  bne         $s5, $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x333A98u;
    {
        const bool branch_taken_0x333a98 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x333A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333A98u;
        // 0x333a9c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333a98) {
            ctx->pc = 0x333C40u;
            goto label_333c40;
        }
    }
    ctx->pc = 0x333AA0u;
    // 0x333aa0: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x333AA0u;
    {
        const bool branch_taken_0x333aa0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x333AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333AA0u;
        // 0x333aa4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333aa0) {
            ctx->pc = 0x333AB4u;
            goto label_333ab4;
        }
    }
    ctx->pc = 0x333AA8u;
    // 0x333aa8: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x333aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x333aac: 0x24421eb8  addiu       $v0, $v0, 0x1EB8
    ctx->pc = 0x333aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7864));
    // 0x333ab0: 0xac62f364  sw          $v0, -0xC9C($v1)
    ctx->pc = 0x333ab0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x43F364u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x43F364u, _value); } while (0);
label_333ab4:
    // 0x333ab4: 0x1640002d  bnez        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x333AB4u;
    {
        const bool branch_taken_0x333ab4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x333AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333AB4u;
        // 0x333ab8: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x333ab4) {
            ctx->pc = 0x333B6Cu;
            goto label_333b6c;
        }
    }
    ctx->pc = 0x333ABCu;
    // 0x333abc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x333abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x333ac0: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x333ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x333ac4: 0x24421eb8  addiu       $v0, $v0, 0x1EB8
    ctx->pc = 0x333ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7864));
    // 0x333ac8: 0x16400028  bnez        $s2, . + 4 + (0x28 << 2)
    ctx->pc = 0x333AC8u;
    {
        const bool branch_taken_0x333ac8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x333ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333AC8u;
        // 0x333acc: 0xac62f324  sw          $v0, -0xCDC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294964004), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333ac8) {
            ctx->pc = 0x333B6Cu;
            goto label_333b6c;
        }
    }
    ctx->pc = 0x333AD0u;
    // 0x333ad0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x333ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x333ad4: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x333ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x333ad8: 0x24421eb8  addiu       $v0, $v0, 0x1EB8
    ctx->pc = 0x333ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7864));
    // 0x333adc: 0x16400023  bnez        $s2, . + 4 + (0x23 << 2)
    ctx->pc = 0x333ADCu;
    {
        const bool branch_taken_0x333adc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x333AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333ADCu;
        // 0x333ae0: 0xac62f2e4  sw          $v0, -0xD1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963940), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333adc) {
            ctx->pc = 0x333B6Cu;
            goto label_333b6c;
        }
    }
    ctx->pc = 0x333AE4u;
    // 0x333ae4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x333ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x333ae8: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x333ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x333aec: 0x24421eb8  addiu       $v0, $v0, 0x1EB8
    ctx->pc = 0x333aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7864));
    // 0x333af0: 0x1640001e  bnez        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x333AF0u;
    {
        const bool branch_taken_0x333af0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x333AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333AF0u;
        // 0x333af4: 0xac62f2a4  sw          $v0, -0xD5C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963876), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333af0) {
            ctx->pc = 0x333B6Cu;
            goto label_333b6c;
        }
    }
    ctx->pc = 0x333AF8u;
    // 0x333af8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x333af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x333afc: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x333afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x333b00: 0x24421eb8  addiu       $v0, $v0, 0x1EB8
    ctx->pc = 0x333b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7864));
    // 0x333b04: 0x16400019  bnez        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x333B04u;
    {
        const bool branch_taken_0x333b04 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x333B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B04u;
        // 0x333b08: 0xac62f264  sw          $v0, -0xD9C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b04) {
            ctx->pc = 0x333B6Cu;
            goto label_333b6c;
        }
    }
    ctx->pc = 0x333B0Cu;
    // 0x333b0c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x333b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x333b10: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x333b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x333b14: 0x24421eb8  addiu       $v0, $v0, 0x1EB8
    ctx->pc = 0x333b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7864));
    // 0x333b18: 0x16400014  bnez        $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x333B18u;
    {
        const bool branch_taken_0x333b18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x333B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B18u;
        // 0x333b1c: 0xac62f224  sw          $v0, -0xDDC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963748), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b18) {
            ctx->pc = 0x333B6Cu;
            goto label_333b6c;
        }
    }
    ctx->pc = 0x333B20u;
    // 0x333b20: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x333b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x333b24: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x333b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x333b28: 0x24421eb8  addiu       $v0, $v0, 0x1EB8
    ctx->pc = 0x333b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7864));
    // 0x333b2c: 0x1640000f  bnez        $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x333B2Cu;
    {
        const bool branch_taken_0x333b2c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x333B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B2Cu;
        // 0x333b30: 0xac62f1e4  sw          $v0, -0xE1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b2c) {
            ctx->pc = 0x333B6Cu;
            goto label_333b6c;
        }
    }
    ctx->pc = 0x333B34u;
    // 0x333b34: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x333b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x333b38: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x333b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x333b3c: 0x24421eb8  addiu       $v0, $v0, 0x1EB8
    ctx->pc = 0x333b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7864));
    // 0x333b40: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x333B40u;
    {
        const bool branch_taken_0x333b40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x333B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B40u;
        // 0x333b44: 0xac62f1a4  sw          $v0, -0xE5C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b40) {
            ctx->pc = 0x333B6Cu;
            goto label_333b6c;
        }
    }
    ctx->pc = 0x333B48u;
    // 0x333b48: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x333b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x333b4c: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x333b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x333b50: 0x24421eb8  addiu       $v0, $v0, 0x1EB8
    ctx->pc = 0x333b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7864));
    // 0x333b54: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x333B54u;
    {
        const bool branch_taken_0x333b54 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x333B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B54u;
        // 0x333b58: 0xac62f164  sw          $v0, -0xE9C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b54) {
            ctx->pc = 0x333B6Cu;
            goto label_333b6c;
        }
    }
    ctx->pc = 0x333B5Cu;
    // 0x333b5c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x333b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x333b60: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x333b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x333b64: 0x24421eb8  addiu       $v0, $v0, 0x1EB8
    ctx->pc = 0x333b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7864));
    // 0x333b68: 0xac62f124  sw          $v0, -0xEDC($v1)
    ctx->pc = 0x333b68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x43F124u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x43F124u, _value); } while (0);
label_333b6c:
    // 0x333b6c: 0x16a40034  bne         $s5, $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x333B6Cu;
    {
        const bool branch_taken_0x333b6c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 4));
        ctx->pc = 0x333B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B6Cu;
        // 0x333b70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b6c) {
            ctx->pc = 0x333C40u;
            goto label_333c40;
        }
    }
    ctx->pc = 0x333B74u;
    // 0x333b74: 0x1640000e  bnez        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x333B74u;
    {
        const bool branch_taken_0x333b74 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x333B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B74u;
        // 0x333b78: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b74) {
            ctx->pc = 0x333BB0u;
            goto label_333bb0;
        }
    }
    ctx->pc = 0x333B7Cu;
    // 0x333b7c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x333b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x333b80: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x333b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x333b84: 0x24421eb8  addiu       $v0, $v0, 0x1EB8
    ctx->pc = 0x333b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7864));
    // 0x333b88: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x333B88u;
    {
        const bool branch_taken_0x333b88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x333B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B88u;
        // 0x333b8c: 0xac62f0e4  sw          $v0, -0xF1C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294963428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b88) {
            ctx->pc = 0x333BACu;
            goto label_333bac;
        }
    }
    ctx->pc = 0x333B90u;
    // 0x333b90: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x333b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x333b94: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x333b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x333b98: 0x2463ee48  addiu       $v1, $v1, -0x11B8
    ctx->pc = 0x333b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962760));
    // 0x333b9c: 0x244222a0  addiu       $v0, $v0, 0x22A0
    ctx->pc = 0x333b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8864));
    // 0x333ba0: 0xac62fe38  sw          $v0, -0x1C8($v1)
    ctx->pc = 0x333ba0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x43EC80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x43EC80u, _value); } while (0);
    // 0x333ba4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x333ba4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x43EE48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x43EE48u, _value); } while (0);
    // 0x333ba8: 0xac62fff4  sw          $v0, -0xC($v1)
    ctx->pc = 0x333ba8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x43EE3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x43EE3Cu, _value); } while (0);
label_333bac:
    // 0x333bac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x333bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_333bb0:
    // 0x333bb0: 0x16a20023  bne         $s5, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x333BB0u;
    {
        const bool branch_taken_0x333bb0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x333BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333BB0u;
        // 0x333bb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333bb0) {
            ctx->pc = 0x333C40u;
            goto label_333c40;
        }
    }
    ctx->pc = 0x333BB8u;
    // 0x333bb8: 0x16400015  bnez        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x333BB8u;
    {
        const bool branch_taken_0x333bb8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x333BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333BB8u;
        // 0x333bbc: 0x3c100044  lui         $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333bb8) {
            ctx->pc = 0x333C10u;
            goto label_333c10;
        }
    }
    ctx->pc = 0x333BC0u;
    // 0x333bc0: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x333bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x333bc4: 0x2610d6c0  addiu       $s0, $s0, -0x2940
    ctx->pc = 0x333bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956736));
    // 0x333bc8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x333bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x333bcc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x333bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x333bd0: 0x24c61a60  addiu       $a2, $a2, 0x1A60
    ctx->pc = 0x333bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6752));
    // 0x333bd4: 0x24421b08  addiu       $v0, $v0, 0x1B08
    ctx->pc = 0x333bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6920));
    // 0x333bd8: 0x24631be0  addiu       $v1, $v1, 0x1BE0
    ctx->pc = 0x333bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7136));
    // 0x333bdc: 0x26110080  addiu       $s1, $s0, 0x80
    ctx->pc = 0x333bdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x333be0: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x333be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x333be4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x333be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x333be8: 0x26040118  addiu       $a0, $s0, 0x118
    ctx->pc = 0x333be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x333bec: 0xae2300ec  sw          $v1, 0xEC($s1)
    ctx->pc = 0x333becu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 3));
    // 0x333bf0: 0xc0cec5c  jal         func_33B170
    ctx->pc = 0x333BF0u;
    SET_GPR_U32(ctx, 31, 0x333BF8u);
    ctx->pc = 0x333BF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333BF0u;
    // 0x333bf4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B170u, 0x333BF0u, 0x333BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333BF8u;
label_333bf8:
    // 0x333bf8: 0x260400cc  addiu       $a0, $s0, 0xCC
    ctx->pc = 0x333bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 204));
    // 0x333bfc: 0xc0cec5c  jal         func_33B170
    ctx->pc = 0x333BFCu;
    SET_GPR_U32(ctx, 31, 0x333C04u);
    ctx->pc = 0x333C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333BFCu;
    // 0x333c00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B170u, 0x333BFCu, 0x333C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333C04u;
label_333c04:
    // 0x333c04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x333c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333c08: 0xc0cec5c  jal         func_33B170
    ctx->pc = 0x333C08u;
    SET_GPR_U32(ctx, 31, 0x333C10u);
    ctx->pc = 0x333C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333C08u;
    // 0x333c0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B170u, 0x333C08u, 0x333C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333C10u;
label_333c10:
    // 0x333c10: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x333C10u;
    {
        const bool branch_taken_0x333c10 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x333C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333C10u;
        // 0x333c14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333c10) {
            ctx->pc = 0x333C24u;
            goto label_333c24;
        }
    }
    ctx->pc = 0x333C18u;
    // 0x333c18: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x333c18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x333c1c: 0xc0c79de  jal         func_31E778
    ctx->pc = 0x333C1Cu;
    SET_GPR_U32(ctx, 31, 0x333C24u);
    ctx->pc = 0x333C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333C1Cu;
    // 0x333c20: 0x2484d280  addiu       $a0, $a0, -0x2D80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E778u, 0x333C1Cu, 0x333C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333C24u;
label_333c24:
    // 0x333c24: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x333C24u;
    {
        const bool branch_taken_0x333c24 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x333C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333C24u;
        // 0x333c28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333c24) {
            ctx->pc = 0x333C40u;
            goto label_333c40;
        }
    }
    ctx->pc = 0x333C2Cu;
    // 0x333c2c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x333c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x333c30: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x333c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x333c34: 0x24421d88  addiu       $v0, $v0, 0x1D88
    ctx->pc = 0x333c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7560));
    // 0x333c38: 0xac620d68  sw          $v0, 0xD68($v1)
    ctx->pc = 0x333c38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x400D68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x400D68u, _value); } while (0);
label_333c3c:
    // 0x333c3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x333c3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_333c40:
    // 0x333c40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x333c40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x333c44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x333c44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333c48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x333c48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x333c4c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x333c4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x333c50: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x333c50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x333c54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x333c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x333c58: 0x3e00008  jr          $ra
    ctx->pc = 0x333C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333C58u;
        // 0x333c5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333C60u;
}
