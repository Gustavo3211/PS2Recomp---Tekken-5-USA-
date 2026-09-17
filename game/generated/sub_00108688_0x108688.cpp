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

// Function: sub_00108688
// Address: 0x108688 - 0x108770
void sub_00108688_0x108688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108688_0x108688");
#endif

    switch (ctx->pc) {
        case 0x1086a4u: goto label_1086a4;
        case 0x1086dcu: goto label_1086dc;
        case 0x10874cu: goto label_10874c;
        default: break;
    }

    ctx->pc = 0x108688u;

    // 0x108688: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x108688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10868c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10868cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108690: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x108690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x108694: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108698: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x108698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10869c: 0xc042226  jal         func_108898
    ctx->pc = 0x10869Cu;
    SET_GPR_U32(ctx, 31, 0x1086A4u);
    ctx->pc = 0x1086A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10869Cu;
    // 0x1086a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108898u, 0x10869Cu, 0x1086A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1086A4u;
label_1086a4:
    // 0x1086a4: 0x8e020828  lw          $v0, 0x828($s0)
    ctx->pc = 0x1086a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2088)));
    // 0x1086a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1086A8u;
    {
        const bool branch_taken_0x1086a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1086ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1086A8u;
        // 0x1086ac: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1086a8) {
            ctx->pc = 0x1086C0u;
            goto label_1086c0;
        }
    }
    ctx->pc = 0x1086B0u;
    // 0x1086b0: 0x8e02084c  lw          $v0, 0x84C($s0)
    ctx->pc = 0x1086b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2124)));
    // 0x1086b4: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x1086b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1086b8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1086B8u;
    {
        const bool branch_taken_0x1086b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1086BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1086B8u;
        // 0x1086bc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1086b8) {
            ctx->pc = 0x1086E8u;
            goto label_1086e8;
        }
    }
    ctx->pc = 0x1086C0u;
label_1086c0:
    // 0x1086c0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1086c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1086c4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1086c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x1086c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1086c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1086cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1086ccu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x1086d0: 0xae000828  sw          $zero, 0x828($s0)
    ctx->pc = 0x1086d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
    // 0x1086d4: 0xc042142  jal         func_108508
    ctx->pc = 0x1086D4u;
    SET_GPR_U32(ctx, 31, 0x1086DCu);
    ctx->pc = 0x1086D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1086D4u;
    // 0x1086d8: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108508u, 0x1086D4u, 0x1086DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1086DCu;
label_1086dc:
    // 0x1086dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1086dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1086e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1086e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1086e4: 0xae020848  sw          $v0, 0x848($s0)
    ctx->pc = 0x1086e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
label_1086e8:
    // 0x1086e8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1086e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1086ec: 0x3c084000  lui         $t0, 0x4000
    ctx->pc = 0x1086ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16384 << 16));
    // 0x1086f0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1086f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1086f4: 0x2282825  or          $a1, $s1, $t0
    ctx->pc = 0x1086f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 8));
    // 0x1086f8: 0xae04084c  sw          $a0, 0x84C($s0)
    ctx->pc = 0x1086f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2124), GPR_U32(ctx, 4));
    // 0x1086fc: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x1086fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x108700: 0x8e060848  lw          $a2, 0x848($s0)
    ctx->pc = 0x108700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2120)));
    // 0x108704: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x108704u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x108708: 0xa23824  and         $a3, $a1, $v0
    ctx->pc = 0x108708u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x10870c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x10870cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x108710: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x108710u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x108714: 0xae07082c  sw          $a3, 0x82C($s0)
    ctx->pc = 0x108714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 7));
    // 0x108718: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x108718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x10871c: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10871Cu;
    {
        const bool branch_taken_0x10871c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x108720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10871Cu;
        // 0x108720: 0x868806  srlv        $s1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 6), GPR_U32(ctx, 4) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10871c) {
            ctx->pc = 0x108738u;
            goto label_108738;
        }
    }
    ctx->pc = 0x108724u;
    // 0x108724: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x108724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x108728: 0x50e20006  beql        $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x108728u;
    {
        const bool branch_taken_0x108728 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x108728) {
            ctx->pc = 0x10872Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108728u;
            // 0x10872c: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108744u;
            goto label_108744;
        }
    }
    ctx->pc = 0x108730u;
    // 0x108730: 0x14e80003  bne         $a3, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x108730u;
    {
        const bool branch_taken_0x108730 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        ctx->pc = 0x108734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108730u;
        // 0x108734: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108730) {
            ctx->pc = 0x108740u;
            goto label_108740;
        }
    }
    ctx->pc = 0x108738u;
label_108738:
    // 0x108738: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x108738u;
    {
        const bool branch_taken_0x108738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108738u;
        // 0x10873c: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108738) {
            ctx->pc = 0x108744u;
            goto label_108744;
        }
    }
    ctx->pc = 0x108740u;
label_108740:
    // 0x108740: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x108740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_108744:
    // 0x108744: 0xc042142  jal         func_108508
    ctx->pc = 0x108744u;
    SET_GPR_U32(ctx, 31, 0x10874Cu);
    ctx->pc = 0x108748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108744u;
    // 0x108748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108508u, 0x108744u, 0x10874Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10874Cu;
label_10874c:
    // 0x10874c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x10874cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x108750: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x108750u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x108754: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x108754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x108758: 0xae020848  sw          $v0, 0x848($s0)
    ctx->pc = 0x108758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2120), GPR_U32(ctx, 2));
    // 0x10875c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10875cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108760: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108760u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108764: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x108764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108768: 0x3e00008  jr          $ra
    ctx->pc = 0x108768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10876Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108768u;
        // 0x10876c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108770u;
}
