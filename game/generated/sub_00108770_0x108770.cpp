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

// Function: sub_00108770
// Address: 0x108770 - 0x108898
void sub_00108770_0x108770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108770_0x108770");
#endif

    switch (ctx->pc) {
        case 0x1087a8u: goto label_1087a8;
        case 0x1087c8u: goto label_1087c8;
        case 0x108800u: goto label_108800;
        case 0x10881cu: goto label_10881c;
        case 0x10886cu: goto label_10886c;
        default: break;
    }

    ctx->pc = 0x108770u;

    // 0x108770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x108770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x108774: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x108774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x108778: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10877c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10877cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x108780: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108784: 0x8e020828  lw          $v0, 0x828($s0)
    ctx->pc = 0x108784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x108788: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x108788u;
    {
        const bool branch_taken_0x108788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10878Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108788u;
        // 0x10878c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108788) {
            ctx->pc = 0x1087A0u;
            goto label_1087a0;
        }
    }
    ctx->pc = 0x108790u;
    // 0x108790: 0x8e02084c  lw          $v0, 0x84C($s0)
    ctx->pc = 0x108790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2124)));
    // 0x108794: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x108794u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x108798: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x108798u;
    {
        const bool branch_taken_0x108798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108798) {
            ctx->pc = 0x10879Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108798u;
            // 0x10879c: 0x8e030848  lw          $v1, 0x848($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1087E0u;
            goto label_1087e0;
        }
    }
    ctx->pc = 0x1087A0u;
label_1087a0:
    // 0x1087a0: 0xc042226  jal         func_108898
    ctx->pc = 0x1087A0u;
    SET_GPR_U32(ctx, 31, 0x1087A8u);
    ctx->pc = 0x1087A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1087A0u;
    // 0x1087a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108898u, 0x1087A0u, 0x1087A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1087A8u;
label_1087a8:
    // 0x1087a8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1087a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1087ac: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1087acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1087b0: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1087b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1087b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1087b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1087b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1087b8u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x1087bc: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x1087bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x1087c0: 0xc042142  jal         func_108508
    ctx->pc = 0x1087C0u;
    SET_GPR_U32(ctx, 31, 0x1087C8u);
    ctx->pc = 0x1087C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1087C0u;
    // 0x1087c4: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108508u, 0x1087C0u, 0x1087C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1087C8u;
label_1087c8:
    // 0x1087c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1087c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1087cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1087ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1087d0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1087d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1087d4: 0xae020848  sw          $v0, 0x848($s0)
    ctx->pc = 0x1087d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
    // 0x1087d8: 0xae03084c  sw          $v1, 0x84C($s0)
    ctx->pc = 0x1087d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 3));
    // 0x1087dc: 0x8e030848  lw          $v1, 0x848($s0)
    ctx->pc = 0x1087dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
label_1087e0:
    // 0x1087e0: 0x111023  negu        $v0, $s1
    ctx->pc = 0x1087e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
    // 0x1087e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1087e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1087e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1087e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1087ec: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x1087ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x1087f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1087f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1087f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1087F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1087F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1087F4u;
        // 0x1087f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1087F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1087FCu;
    // 0x1087fc: 0x0  nop
    ctx->pc = 0x1087fcu;
    // NOP
label_108800:
    // 0x108800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x108800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x108804: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x108804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x108808: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10880c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10880cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108810: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x108810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x108814: 0xc042226  jal         func_108898
    ctx->pc = 0x108814u;
    SET_GPR_U32(ctx, 31, 0x10881Cu);
    ctx->pc = 0x108818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108814u;
    // 0x108818: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108898u, 0x108814u, 0x10881Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10881Cu;
label_10881c:
    // 0x10881c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x10881cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x108820: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x108820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x108824: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x108824u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x108828: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x108828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x10882c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x10882cu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 16)); // MMIO: 0x10002000
    // 0x108830: 0x3c03f000  lui         $v1, 0xF000
    ctx->pc = 0x108830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61440 << 16));
    // 0x108834: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x108834u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x108838: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x108838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x10883c: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10883Cu;
    {
        const bool branch_taken_0x10883c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x108840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10883Cu;
        // 0x108840: 0xae30082c  sw          $s0, 0x82C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10883c) {
            ctx->pc = 0x108858u;
            goto label_108858;
        }
    }
    ctx->pc = 0x108844u;
    // 0x108844: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x108844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x108848: 0x52020006  beql        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x108848u;
    {
        const bool branch_taken_0x108848 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x108848) {
            ctx->pc = 0x10884Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108848u;
            // 0x10884c: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108864u;
            goto label_108864;
        }
    }
    ctx->pc = 0x108850u;
    // 0x108850: 0x16040003  bne         $s0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x108850u;
    {
        const bool branch_taken_0x108850 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x108854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108850u;
        // 0x108854: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108850) {
            ctx->pc = 0x108860u;
            goto label_108860;
        }
    }
    ctx->pc = 0x108858u;
label_108858:
    // 0x108858: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x108858u;
    {
        const bool branch_taken_0x108858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108858u;
        // 0x10885c: 0xae200828  sw          $zero, 0x828($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108858) {
            ctx->pc = 0x108864u;
            goto label_108864;
        }
    }
    ctx->pc = 0x108860u;
label_108860:
    // 0x108860: 0xae220828  sw          $v0, 0x828($s1)
    ctx->pc = 0x108860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
label_108864:
    // 0x108864: 0xc042142  jal         func_108508
    ctx->pc = 0x108864u;
    SET_GPR_U32(ctx, 31, 0x10886Cu);
    ctx->pc = 0x108868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108864u;
    // 0x108868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108508u, 0x108864u, 0x10886Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10886Cu;
label_10886c:
    // 0x10886c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10886cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x108870: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x108870u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x108874: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x108874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x108878: 0xae23084c  sw          $v1, 0x84C($s1)
    ctx->pc = 0x108878u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 3));
    // 0x10887c: 0xae220848  sw          $v0, 0x848($s1)
    ctx->pc = 0x10887cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
    // 0x108880: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x108880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108884: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x108884u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108888: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108888u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10888c: 0x3e00008  jr          $ra
    ctx->pc = 0x10888Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10888Cu;
        // 0x108890: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10888Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108894u;
    // 0x108894: 0x0  nop
    ctx->pc = 0x108894u;
    // NOP
    ctx->pc = 0x108898u;
}
