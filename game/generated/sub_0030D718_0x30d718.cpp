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

// Function: sub_0030D718
// Address: 0x30d718 - 0x30d8a8
void sub_0030D718_0x30d718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D718_0x30d718");
#endif

    switch (ctx->pc) {
        case 0x30d758u: goto label_30d758;
        case 0x30d7e8u: goto label_30d7e8;
        case 0x30d828u: goto label_30d828;
        default: break;
    }

    ctx->pc = 0x30d718u;

    // 0x30d718: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30d718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30d71c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30d71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30d720: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30d720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30d724: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x30d724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x30d728: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30d728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30d72c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x30d72cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d730: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x30d730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x30d734: 0x24130005  addiu       $s3, $zero, 0x5
    ctx->pc = 0x30d734u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30d738: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x30d738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x30d73c: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x30d73cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30d740: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x30d740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x30d744: 0x24150040  addiu       $s5, $zero, 0x40
    ctx->pc = 0x30d744u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30d748: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x30d748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x30d74c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x30d74cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d750: 0x241022c0  addiu       $s0, $zero, 0x22C0
    ctx->pc = 0x30d750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8896));
    // 0x30d754: 0x0  nop
    ctx->pc = 0x30d754u;
    // NOP
label_30d758:
    // 0x30d758: 0x3c02108b  lui         $v0, 0x108B
    ctx->pc = 0x30d758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4235 << 16));
    // 0x30d75c: 0x2501818  mult        $v1, $s2, $s0
    ctx->pc = 0x30d75cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x30d760: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x30d760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x30d764: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x30d764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x30d768: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x30d768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30d76c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x30d76cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x30d770: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x30d770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x30d774: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x30d774u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30d778: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x30d778u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x30d77c: 0x768021  addu        $s0, $v1, $s6
    ctx->pc = 0x30d77cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x30d780: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x30d780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30d784: 0x261122a0  addiu       $s1, $s0, 0x22A0
    ctx->pc = 0x30d784u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8864));
    // 0x30d788: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x30d788u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x30d78c: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x30d78cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
    // 0x30d790: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x30d790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x30d794: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x30d794u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x30d798: 0x261122b0  addiu       $s1, $s0, 0x22B0
    ctx->pc = 0x30d798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8880));
    // 0x30d79c: 0xfe250008  sd          $a1, 0x8($s1)
    ctx->pc = 0x30d79cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 5));
    // 0x30d7a0: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30d7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30d7a4: 0x261122c0  addiu       $s1, $s0, 0x22C0
    ctx->pc = 0x30d7a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8896));
    // 0x30d7a8: 0xfe270008  sd          $a3, 0x8($s1)
    ctx->pc = 0x30d7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 7));
    // 0x30d7ac: 0xfe260000  sd          $a2, 0x0($s1)
    ctx->pc = 0x30d7acu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 6));
    // 0x30d7b0: 0x261122d0  addiu       $s1, $s0, 0x22D0
    ctx->pc = 0x30d7b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8912));
    // 0x30d7b4: 0xfe280008  sd          $t0, 0x8($s1)
    ctx->pc = 0x30d7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 8));
    // 0x30d7b8: 0x8f82c544  lw          $v0, -0x3ABC($gp)
    ctx->pc = 0x30d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952260)));
    // 0x30d7bc: 0x8f83c548  lw          $v1, -0x3AB8($gp)
    ctx->pc = 0x30d7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952264)));
    // 0x30d7c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30d7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30d7c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30d7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30d7c8: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x30d7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x30d7cc: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x30d7ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x30d7d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30d7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30d7d4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x30d7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x30d7d8: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x30d7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x30d7dc: 0x261122e0  addiu       $s1, $s0, 0x22E0
    ctx->pc = 0x30d7dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8928));
    // 0x30d7e0: 0xc0c468c  jal         func_311A30
    ctx->pc = 0x30D7E0u;
    SET_GPR_U32(ctx, 31, 0x30D7E8u);
    ctx->pc = 0x30D7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D7E0u;
    // 0x30d7e4: 0xfe2a0008  sd          $t2, 0x8($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311A30u, 0x30D7E0u, 0x30D7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D7E8u;
label_30d7e8:
    // 0x30d7e8: 0x8f83c55c  lw          $v1, -0x3AA4($gp)
    ctx->pc = 0x30d7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952284)));
    // 0x30d7ec: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x30d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x30d7f0: 0x3405ea80  ori         $a1, $zero, 0xEA80
    ctx->pc = 0x30d7f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60032);
    // 0x30d7f4: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x30d7f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x30d7f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30d7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30d7fc: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x30d7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x30d800: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x30d800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30d804: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x30d804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x30d808: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30d808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30d80c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x30d80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30d810: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x30d810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x30d814: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x30d814u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x30d818: 0x261122f0  addiu       $s1, $s0, 0x22F0
    ctx->pc = 0x30d818u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8944));
    // 0x30d81c: 0xfe240008  sd          $a0, 0x8($s1)
    ctx->pc = 0x30d81cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 4));
    // 0x30d820: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30d820u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30d824: 0x26112300  addiu       $s1, $s0, 0x2300
    ctx->pc = 0x30d824u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8960));
label_30d828:
    // 0x30d828: 0xfe350008  sd          $s5, 0x8($s1)
    ctx->pc = 0x30d828u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 21));
    // 0x30d82c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30d82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30d830: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30d830u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30d834: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x30d834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x30d838: 0xfe340008  sd          $s4, 0x8($s1)
    ctx->pc = 0x30d838u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 20));
    // 0x30d83c: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30d83cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30d840: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x30d840u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x30d844: 0xfe330008  sd          $s3, 0x8($s1)
    ctx->pc = 0x30d844u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 19));
    // 0x30d848: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30d848u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30d84c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x30d84cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x30d850: 0xfe340008  sd          $s4, 0x8($s1)
    ctx->pc = 0x30d850u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 20));
    // 0x30d854: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30d854u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30d858: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x30d858u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x30d85c: 0xfe330008  sd          $s3, 0x8($s1)
    ctx->pc = 0x30d85cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 19));
    // 0x30d860: 0xfe200000  sd          $zero, 0x0($s1)
    ctx->pc = 0x30d860u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 0));
    // 0x30d864: 0x461fff0  bgez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x30D864u;
    {
        const bool branch_taken_0x30d864 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x30D868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D864u;
        // 0x30d868: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d864) {
            ctx->pc = 0x30D828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d828;
        }
    }
    ctx->pc = 0x30D86Cu;
    // 0x30d86c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x30d86cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x30d870: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x30d870u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x30d874: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x30D874u;
    {
        const bool branch_taken_0x30d874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D874u;
        // 0x30d878: 0x241022c0  addiu       $s0, $zero, 0x22C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d874) {
            ctx->pc = 0x30D758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d758;
        }
    }
    ctx->pc = 0x30D87Cu;
    // 0x30d87c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30d87cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d880: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30d880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30d884: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30d884u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d888: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x30d888u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d88c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x30d88cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d890: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x30d890u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d894: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x30d894u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30d898: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x30d898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x30d89c: 0x3e00008  jr          $ra
    ctx->pc = 0x30D89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D89Cu;
        // 0x30d8a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D8A4u;
    // 0x30d8a4: 0x0  nop
    ctx->pc = 0x30d8a4u;
    // NOP
    ctx->pc = 0x30d8a8u;
}
