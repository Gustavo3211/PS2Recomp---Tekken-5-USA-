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

// Function: sub_005037B8
// Address: 0x5037b8 - 0x503ab8
void sub_005037B8_0x5037b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005037B8_0x5037b8");
#endif

    switch (ctx->pc) {
        case 0x5037f4u: goto label_5037f4;
        case 0x503868u: goto label_503868;
        case 0x503898u: goto label_503898;
        case 0x5038a4u: goto label_5038a4;
        case 0x5038c0u: goto label_5038c0;
        case 0x5038ccu: goto label_5038cc;
        case 0x5038d8u: goto label_5038d8;
        case 0x5038e4u: goto label_5038e4;
        case 0x5038f0u: goto label_5038f0;
        case 0x5038fcu: goto label_5038fc;
        case 0x503928u: goto label_503928;
        case 0x503964u: goto label_503964;
        case 0x50396cu: goto label_50396c;
        case 0x50397cu: goto label_50397c;
        case 0x503980u: goto label_503980;
        case 0x50399cu: goto label_50399c;
        case 0x5039b0u: goto label_5039b0;
        case 0x5039c4u: goto label_5039c4;
        case 0x5039d8u: goto label_5039d8;
        case 0x5039f0u: goto label_5039f0;
        case 0x503a18u: goto label_503a18;
        case 0x503a20u: goto label_503a20;
        case 0x503a44u: goto label_503a44;
        case 0x503a70u: goto label_503a70;
        default: break;
    }

    ctx->pc = 0x5037b8u;

label_5037b8:
    // 0x5037b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x5037b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x5037bc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x5037bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x5037c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x5037c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5037c4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x5037c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x5037c8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x5037c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5037cc: 0x34048010  ori         $a0, $zero, 0x8010
    ctx->pc = 0x5037ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x5037d0: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x5037d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x5037d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x5037d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x5037d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x5037d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x5037dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x5037dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x5037e0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x5037e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5037e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x5037e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x5037e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x5037e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x5037ec: 0xc140f5c  jal         func_503D70
    ctx->pc = 0x5037ECu;
    SET_GPR_U32(ctx, 31, 0x5037F4u);
    ctx->pc = 0x5037F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5037ECu;
    // 0x5037f0: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503D70u, 0x5037ECu, 0x5037F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5037F4u;
label_5037f4:
    // 0x5037f4: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x5037f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x5037f8: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x5037f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x5037fc: 0x3c07008f  lui         $a3, 0x8F
    ctx->pc = 0x5037fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)143 << 16));
    // 0x503800: 0x3c06008f  lui         $a2, 0x8F
    ctx->pc = 0x503800u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
    // 0x503804: 0x2463bf00  addiu       $v1, $v1, -0x4100
    ctx->pc = 0x503804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950656));
    // 0x503808: 0x24a5bf18  addiu       $a1, $a1, -0x40E8
    ctx->pc = 0x503808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950680));
    // 0x50380c: 0x24c6bf40  addiu       $a2, $a2, -0x40C0
    ctx->pc = 0x50380cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950720));
    // 0x503810: 0x24e7bf28  addiu       $a3, $a3, -0x40D8
    ctx->pc = 0x503810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950696));
    // 0x503814: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x503814u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x503818: 0x3c0b008f  lui         $t3, 0x8F
    ctx->pc = 0x503818u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)143 << 16));
    // 0x50381c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x50381cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x503820: 0x240900f4  addiu       $t1, $zero, 0xF4
    ctx->pc = 0x503820u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x503824: 0xad62c3c8  sw          $v0, -0x3C38($t3)
    ctx->pc = 0x503824u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8EC3C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC3C8u, _value); } while (0);
    // 0x503828: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x503828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50382c: 0xacca00fc  sw          $t2, 0xFC($a2)
    ctx->pc = 0x50382cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x8EC03Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC03Cu, _value); } while (0);
    // 0x503830: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x503830u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x8EBF00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EBF00u, _value); } while (0);
    // 0x503834: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x503834u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x8EBF24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EBF24u, _value); } while (0);
    // 0x503838: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x503838u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x8EBF2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EBF2Cu, _value); } while (0);
    // 0x50383c: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x50383cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x8EBF40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EBF40u, _value); } while (0);
    // 0x503840: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x503840u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8EBF10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EBF10u, _value); } while (0);
    // 0x503844: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x503844u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8EBF0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EBF0Cu, _value); } while (0);
    // 0x503848: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x503848u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8EBF08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EBF08u, _value); } while (0);
    // 0x50384c: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x50384cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x8EBF04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EBF04u, _value); } while (0);
    // 0x503850: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x503850u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8EBF18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EBF18u, _value); } while (0);
    // 0x503854: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x503854u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8EBF1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EBF1Cu, _value); } while (0);
    // 0x503858: 0xacaa0008  sw          $t2, 0x8($a1)
    ctx->pc = 0x503858u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x8EBF20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EBF20u, _value); } while (0);
    // 0x50385c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x50385cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x8EBF28u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EBF28u, _value); } while (0);
    // 0x503860: 0xc1453ea  jal         func_514FA8
    ctx->pc = 0x503860u;
    SET_GPR_U32(ctx, 31, 0x503868u);
    ctx->pc = 0x503864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503860u;
    // 0x503864: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x514FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x514FA8u, 0x503860u, 0x503868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503868u;
label_503868:
    // 0x503868: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x503868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x50386c: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50386cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x503870: 0x2490c340  addiu       $s0, $a0, -0x3CC0
    ctx->pc = 0x503870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951744));
    // 0x503874: 0x2471c3c0  addiu       $s1, $v1, -0x3C40
    ctx->pc = 0x503874u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951872));
    // 0x503878: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x503878u;
    {
        const bool branch_taken_0x503878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x50387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503878u;
        // 0x50387c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x503878) {
            ctx->pc = 0x503888u;
            goto label_503888;
        }
    }
    ctx->pc = 0x503880u;
    // 0x503880: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x503880u;
    {
        const bool branch_taken_0x503880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x503884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503880u;
        // 0x503884: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x503880) {
            ctx->pc = 0x503900u;
            goto label_503900;
        }
    }
    ctx->pc = 0x503888u;
label_503888:
    // 0x503888: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x503888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x50388c: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x50388cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
    // 0x503890: 0xc043d88  jal         func_10F620
    ctx->pc = 0x503890u;
    SET_GPR_U32(ctx, 31, 0x503898u);
    ctx->pc = 0x503894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503890u;
    // 0x503894: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0x503890u, 0x503898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503898u;
label_503898:
    // 0x503898: 0x34049080  ori         $a0, $zero, 0x9080
    ctx->pc = 0x503898u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36992);
    // 0x50389c: 0xc140f5c  jal         func_503D70
    ctx->pc = 0x50389Cu;
    SET_GPR_U32(ctx, 31, 0x5038A4u);
    ctx->pc = 0x5038A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50389Cu;
    // 0x5038a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503D70u, 0x50389Cu, 0x5038A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5038A4u;
label_5038a4:
    // 0x5038a4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x5038a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x5038a8: 0x24025010  addiu       $v0, $zero, 0x5010
    ctx->pc = 0x5038a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20496));
    // 0x5038ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x5038acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5038b0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x5038b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x5038b4: 0xae150008  sw          $s5, 0x8($s0)
    ctx->pc = 0x5038b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 21));
    // 0x5038b8: 0xc043d88  jal         func_10F620
    ctx->pc = 0x5038B8u;
    SET_GPR_U32(ctx, 31, 0x5038C0u);
    ctx->pc = 0x5038BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5038B8u;
    // 0x5038bc: 0xae14000c  sw          $s4, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F620u, 0x5038B8u, 0x5038C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5038C0u;
label_5038c0:
    // 0x5038c0: 0x34049070  ori         $a0, $zero, 0x9070
    ctx->pc = 0x5038c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36976);
    // 0x5038c4: 0xc140f5c  jal         func_503D70
    ctx->pc = 0x5038C4u;
    SET_GPR_U32(ctx, 31, 0x5038CCu);
    ctx->pc = 0x5038C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5038C4u;
    // 0x5038c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503D70u, 0x5038C4u, 0x5038CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5038CCu;
label_5038cc:
    // 0x5038cc: 0x34049050  ori         $a0, $zero, 0x9050
    ctx->pc = 0x5038ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36944);
    // 0x5038d0: 0xc140f5c  jal         func_503D70
    ctx->pc = 0x5038D0u;
    SET_GPR_U32(ctx, 31, 0x5038D8u);
    ctx->pc = 0x5038D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5038D0u;
    // 0x5038d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503D70u, 0x5038D0u, 0x5038D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5038D8u;
label_5038d8:
    // 0x5038d8: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x5038d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x5038dc: 0xc140f5c  jal         func_503D70
    ctx->pc = 0x5038DCu;
    SET_GPR_U32(ctx, 31, 0x5038E4u);
    ctx->pc = 0x5038E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5038DCu;
    // 0x5038e0: 0x24051840  addiu       $a1, $zero, 0x1840 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503D70u, 0x5038DCu, 0x5038E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5038E4u;
label_5038e4:
    // 0x5038e4: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x5038e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x5038e8: 0xc140f5c  jal         func_503D70
    ctx->pc = 0x5038E8u;
    SET_GPR_U32(ctx, 31, 0x5038F0u);
    ctx->pc = 0x5038ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5038E8u;
    // 0x5038ec: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503D70u, 0x5038E8u, 0x5038F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5038F0u;
label_5038f0:
    // 0x5038f0: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x5038f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x5038f4: 0xc140f5c  jal         func_503D70
    ctx->pc = 0x5038F4u;
    SET_GPR_U32(ctx, 31, 0x5038FCu);
    ctx->pc = 0x5038F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5038F4u;
    // 0x5038f8: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503D70u, 0x5038F4u, 0x5038FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5038FCu;
label_5038fc:
    // 0x5038fc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x5038fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_503900:
    // 0x503900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x503900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x503904: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x503904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x503908: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x503908u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x50390c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x50390cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x503910: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x503910u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x503914: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x503914u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x503918: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x503918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x50391c: 0x3e00008  jr          $ra
    ctx->pc = 0x50391Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50391Cu;
        // 0x503920: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50391Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x503924u;
    // 0x503924: 0x0  nop
    ctx->pc = 0x503924u;
    // NOP
label_503928:
    // 0x503928: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x503928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x50392c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x50392cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x503930: 0x24100100  addiu       $s0, $zero, 0x100
    ctx->pc = 0x503930u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x503934: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x503934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x503938: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x503938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50393c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x50393cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x503940: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x503940u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503944: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x503944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x503948: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x503948u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50394c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x50394cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x503950: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x503950u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503954: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x503954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x503958: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x503958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x50395c: 0xc140f1e  jal         func_503C78
    ctx->pc = 0x50395Cu;
    SET_GPR_U32(ctx, 31, 0x503964u);
    ctx->pc = 0x503960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50395Cu;
    // 0x503960: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503C78u, 0x50395Cu, 0x503964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503964u;
label_503964:
    // 0x503964: 0xc1451ca  jal         func_514728
    ctx->pc = 0x503964u;
    SET_GPR_U32(ctx, 31, 0x50396Cu);
    ctx->pc = 0x514728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x514728u, 0x503964u, 0x50396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50396Cu;
label_50396c:
    // 0x50396c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x50396cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x503970: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x503970u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x503974: 0xc145220  jal         func_514880
    ctx->pc = 0x503974u;
    SET_GPR_U32(ctx, 31, 0x50397Cu);
    ctx->pc = 0x503978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503974u;
    // 0x503978: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x514880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x514880u, 0x503974u, 0x50397Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50397Cu;
label_50397c:
    // 0x50397c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x50397cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_503980:
    // 0x503980: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x503980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503984: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x503984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x503988: 0x34058130  ori         $a1, $zero, 0x8130
    ctx->pc = 0x503988u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33072);
    // 0x50398c: 0xa7a00008  sh          $zero, 0x8($sp)
    ctx->pc = 0x50398cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x503990: 0xa7a0000a  sh          $zero, 0xA($sp)
    ctx->pc = 0x503990u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x503994: 0xc145220  jal         func_514880
    ctx->pc = 0x503994u;
    SET_GPR_U32(ctx, 31, 0x50399Cu);
    ctx->pc = 0x503998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503994u;
    // 0x503998: 0xafb00004  sw          $s0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x514880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x514880u, 0x503994u, 0x50399Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50399Cu;
label_50399c:
    // 0x50399c: 0x36260b80  ori         $a2, $s1, 0xB80
    ctx->pc = 0x50399cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2944);
    // 0x5039a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x5039a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5039a4: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x5039a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x5039a8: 0xc145220  jal         func_514880
    ctx->pc = 0x5039A8u;
    SET_GPR_U32(ctx, 31, 0x5039B0u);
    ctx->pc = 0x5039ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5039A8u;
    // 0x5039ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x514880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x514880u, 0x5039A8u, 0x5039B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5039B0u;
label_5039b0:
    // 0x5039b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x5039b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5039b4: 0x36260c80  ori         $a2, $s1, 0xC80
    ctx->pc = 0x5039b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)3200);
    // 0x5039b8: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x5039b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x5039bc: 0xc145220  jal         func_514880
    ctx->pc = 0x5039BCu;
    SET_GPR_U32(ctx, 31, 0x5039C4u);
    ctx->pc = 0x5039C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5039BCu;
    // 0x5039c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x514880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x514880u, 0x5039BCu, 0x5039C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5039C4u;
label_5039c4:
    // 0x5039c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x5039c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5039c8: 0x36260980  ori         $a2, $s1, 0x980
    ctx->pc = 0x5039c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2432);
    // 0x5039cc: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x5039ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x5039d0: 0xc145220  jal         func_514880
    ctx->pc = 0x5039D0u;
    SET_GPR_U32(ctx, 31, 0x5039D8u);
    ctx->pc = 0x5039D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5039D0u;
    // 0x5039d4: 0x24072fff  addiu       $a3, $zero, 0x2FFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12287));
    ctx->in_delay_slot = false;
    ctx->pc = 0x514880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x514880u, 0x5039D0u, 0x5039D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5039D8u;
label_5039d8:
    // 0x5039d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x5039d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x5039dc: 0x36260a80  ori         $a2, $s1, 0xA80
    ctx->pc = 0x5039dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2688);
    // 0x5039e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x5039e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x5039e4: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x5039e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x5039e8: 0xc145220  jal         func_514880
    ctx->pc = 0x5039E8u;
    SET_GPR_U32(ctx, 31, 0x5039F0u);
    ctx->pc = 0x5039ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5039E8u;
    // 0x5039ec: 0x24072fff  addiu       $a3, $zero, 0x2FFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12287));
    ctx->in_delay_slot = false;
    ctx->pc = 0x514880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x514880u, 0x5039E8u, 0x5039F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x5039F0u;
label_5039f0:
    // 0x5039f0: 0x2a230002  slti        $v1, $s1, 0x2
    ctx->pc = 0x5039f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x5039f4: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x5039F4u;
    {
        const bool branch_taken_0x5039f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5039F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5039F4u;
        // 0x5039f8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5039f4) {
            ctx->pc = 0x503980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_503980;
        }
    }
    ctx->pc = 0x5039FCu;
    // 0x5039fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5039fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503a00: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x503a00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x503a04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x503a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503a08: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x503a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503a0c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x503a0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503a10: 0xc140dee  jal         func_5037B8
    ctx->pc = 0x503A10u;
    SET_GPR_U32(ctx, 31, 0x503A18u);
    ctx->pc = 0x503A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503A10u;
    // 0x503a14: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5037B8u;
    goto label_5037b8;
    ctx->pc = 0x503A18u;
label_503a18:
    // 0x503a18: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x503a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x503a1c: 0x2473bc80  addiu       $s3, $v1, -0x4380
    ctx->pc = 0x503a1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950016));
label_503a20:
    // 0x503a20: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x503a20u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x503a24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x503a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503a28: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x503a28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x503a2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x503a2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x503a30: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x503a30u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x503a34: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x503a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x503a38: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x503a38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x503a3c: 0xc04a151  jal         func_128544
    ctx->pc = 0x503A3Cu;
    SET_GPR_U32(ctx, 31, 0x503A44u);
    ctx->pc = 0x503A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503A3Cu;
    // 0x503a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128544u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128544u, 0x503A3Cu, 0x503A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503A44u;
label_503a44:
    // 0x503a44: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x503a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x503a48: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x503a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x503a4c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x503A4Cu;
    {
        const bool branch_taken_0x503a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x503A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503A4Cu;
        // 0x503a50: 0xae120004  sw          $s2, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x503a4c) {
            ctx->pc = 0x503A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_503a20;
        }
    }
    ctx->pc = 0x503A54u;
    // 0x503a54: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x503a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x503a58: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x503a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x503a5c: 0x2442a740  addiu       $v0, $v0, -0x58C0
    ctx->pc = 0x503a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944576));
    // 0x503a60: 0x2464a880  addiu       $a0, $v1, -0x5780
    ctx->pc = 0x503a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944896));
    // 0x503a64: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x503a64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x8EA740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EA740u, _value); } while (0);
    // 0x503a68: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x503a68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503a6c: 0x0  nop
    ctx->pc = 0x503a6cu;
    // NOP
label_503a70:
    // 0x503a70: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x503a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x503a74: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x503a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x503a78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x503a78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x503a7c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x503a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x503a80: 0x2a230010  slti        $v1, $s1, 0x10
    ctx->pc = 0x503a80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x503a84: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x503a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x503a88: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x503A88u;
    {
        const bool branch_taken_0x503a88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x503A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503A88u;
        // 0x503a8c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x503a88) {
            ctx->pc = 0x503A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_503a70;
        }
    }
    ctx->pc = 0x503A90u;
    // 0x503a90: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x503a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x503a94: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x503a94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x503a98: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x503a98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x503a9c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x503a9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x503aa0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x503aa0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x503aa4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x503aa4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x503aa8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x503aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x503aac: 0x3e00008  jr          $ra
    ctx->pc = 0x503AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x503AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x503AACu;
        // 0x503ab0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x503AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x503AB4u;
    // 0x503ab4: 0x0  nop
    ctx->pc = 0x503ab4u;
    // NOP
    ctx->pc = 0x503ab8u;
}
