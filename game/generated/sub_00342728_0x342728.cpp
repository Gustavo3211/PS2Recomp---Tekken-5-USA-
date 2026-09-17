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

// Function: sub_00342728
// Address: 0x342728 - 0x3427d8
void sub_00342728_0x342728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342728_0x342728");
#endif

    switch (ctx->pc) {
        case 0x342778u: goto label_342778;
        case 0x3427ccu: goto label_3427cc;
        default: break;
    }

    ctx->pc = 0x342728u;

    // 0x342728: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34272c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x34272cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x342734: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x342734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x342738: 0x34840500  ori         $a0, $a0, 0x500
    ctx->pc = 0x342738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1280);
    // 0x34273c: 0x24050070  addiu       $a1, $zero, 0x70
    ctx->pc = 0x34273cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x342740: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x342740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x342744: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x342744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x342748: 0x2446000c  addiu       $a2, $v0, 0xC
    ctx->pc = 0x342748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x34274c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x34274cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x342750: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x342750u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x342754: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x342754u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x342758: 0x1445001a  bne         $v0, $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x342758u;
    {
        const bool branch_taken_0x342758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x34275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342758u;
        // 0x34275c: 0x3067000f  andi        $a3, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x342758) {
            ctx->pc = 0x3427C4u;
            goto label_3427c4;
        }
    }
    ctx->pc = 0x342760u;
    // 0x342760: 0x340c8001  ori         $t4, $zero, 0x8001
    ctx->pc = 0x342760u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x342764: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x342764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x342768: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x342768u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34276c: 0x240a000b  addiu       $t2, $zero, 0xB
    ctx->pc = 0x34276cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x342770: 0x24090070  addiu       $t1, $zero, 0x70
    ctx->pc = 0x342770u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x342774: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x342774u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_342778:
    // 0x342778: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x342778u;
    {
        const bool branch_taken_0x342778 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x342778) {
            ctx->pc = 0x34277Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x342778u;
            // 0x34277c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x342780u;
            goto label_342780;
        }
    }
    ctx->pc = 0x342780u;
label_342780:
    // 0x342780: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x342780u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x342784: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x342784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x342788: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x342788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x34278c: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x34278cu;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x342790: 0x1812  mflo        $v1
    ctx->pc = 0x342790u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x342794: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x342794u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x342798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x342798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x34279c: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x34279cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x3427a0: 0x14850003  bne         $a0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3427A0u;
    {
        const bool branch_taken_0x3427a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x3427A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3427A0u;
        // 0x3427a4: 0xa4c20000  sh          $v0, 0x0($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3427a0) {
            ctx->pc = 0x3427B0u;
            goto label_3427b0;
        }
    }
    ctx->pc = 0x3427A8u;
    // 0x3427a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3427A8u;
    {
        const bool branch_taken_0x3427a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3427ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3427A8u;
        // 0x3427ac: 0xa0cb0002  sb          $t3, 0x2($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3427a8) {
            ctx->pc = 0x3427B4u;
            goto label_3427b4;
        }
    }
    ctx->pc = 0x3427B0u;
label_3427b0:
    // 0x3427b0: 0xa0ca0002  sb          $t2, 0x2($a2)
    ctx->pc = 0x3427b0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 10));
label_3427b4:
    // 0x3427b4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3427b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3427b8: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x3427b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x3427bc: 0x5049ffee  beql        $v0, $t1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3427BCu;
    {
        const bool branch_taken_0x3427bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x3427bc) {
            ctx->pc = 0x3427C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3427BCu;
            // 0x3427c0: 0x94c30000  lhu         $v1, 0x0($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x342778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342778;
        }
    }
    ctx->pc = 0x3427C4u;
label_3427c4:
    // 0x3427c4: 0xc0d07b6  jal         func_341ED8
    ctx->pc = 0x3427C4u;
    SET_GPR_U32(ctx, 31, 0x3427CCu);
    ctx->pc = 0x3427C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3427C4u;
    // 0x3427c8: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341ED8u, 0x3427C4u, 0x3427CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3427CCu;
label_3427cc:
    // 0x3427cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3427ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3427d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3427D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3427D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3427D0u;
        // 0x3427d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3427D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3427D8u;
}
