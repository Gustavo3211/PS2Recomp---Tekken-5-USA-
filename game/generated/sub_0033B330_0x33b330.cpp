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

// Function: sub_0033B330
// Address: 0x33b330 - 0x33b540
void sub_0033B330_0x33b330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B330_0x33b330");
#endif

    switch (ctx->pc) {
        case 0x33b368u: goto label_33b368;
        default: break;
    }

    ctx->pc = 0x33b330u;

    // 0x33b330: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x33b330u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b334: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33b334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33b338: 0x258a0014  addiu       $t2, $t4, 0x14
    ctx->pc = 0x33b338u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 20));
    // 0x33b33c: 0x27a90004  addiu       $t1, $sp, 0x4
    ctx->pc = 0x33b33cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x33b340: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x33b340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x33b344: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x33b344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b348: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x33b348u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x33b34c: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x33b34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x33b350: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x33b350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b354: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x33b354u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x33b358: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x33b358u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b35c: 0x10e2000e  beq         $a3, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x33B35Cu;
    {
        const bool branch_taken_0x33b35c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x33B360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B35Cu;
        // 0x33b360: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b35c) {
            ctx->pc = 0x33B398u;
            goto label_33b398;
        }
    }
    ctx->pc = 0x33B364u;
    // 0x33b364: 0x94a40008  lhu         $a0, 0x8($a1)
    ctx->pc = 0x33b364u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
label_33b368:
    // 0x33b368: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x33b368u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x33b36c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x33b36cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33b370: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x33B370u;
    {
        const bool branch_taken_0x33b370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b370) {
            ctx->pc = 0x33B374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B370u;
            // 0x33b374: 0xaca70000  sw          $a3, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B39Cu;
            goto label_33b39c;
        }
    }
    ctx->pc = 0x33B378u;
    // 0x33b378: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x33b378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x33b37c: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x33b37cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33b380: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x33b380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x33b384: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x33b384u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x33b388: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x33b388u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b38c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x33b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x33b390: 0x14e2fff5  bne         $a3, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x33B390u;
    {
        const bool branch_taken_0x33b390 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x33B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B390u;
        // 0x33b394: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b390) {
            ctx->pc = 0x33B368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33b368;
        }
    }
    ctx->pc = 0x33B398u;
label_33b398:
    // 0x33b398: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x33b398u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_33b39c:
    // 0x33b39c: 0x27ad0008  addiu       $t5, $sp, 0x8
    ctx->pc = 0x33b39cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x33b3a0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x33b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x33b3a4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x33b3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x33b3a8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x33b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x33b3ac: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x33b3acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x33b3b0: 0xace50004  sw          $a1, 0x4($a3)
    ctx->pc = 0x33b3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
    // 0x33b3b4: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x33b3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x33b3b8: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x33b3b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x33b3bc: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x33b3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x33b3c0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x33b3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x33b3c4: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x33b3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x33b3c8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x33b3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x33b3cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33b3d0: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x33b3d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b3d4: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x33b3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x33b3d8: 0xadaa0000  sw          $t2, 0x0($t5)
    ctx->pc = 0x33b3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 10));
    // 0x33b3dc: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x33b3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x33b3e0: 0x10430027  beq         $v0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x33B3E0u;
    {
        const bool branch_taken_0x33b3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x33B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B3E0u;
        // 0x33b3e4: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b3e0) {
            ctx->pc = 0x33B480u;
            goto label_33b480;
        }
    }
    ctx->pc = 0x33B3E8u;
    // 0x33b3e8: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x33b3e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x33b3ec: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x33b3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x33b3f0: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x33b3f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b3f4: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x33b3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x33b3f8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x33b3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x33b3fc: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x33b3fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b400: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x33b400u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x33b404: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x33b404u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33b408: 0x94c40008  lhu         $a0, 0x8($a2)
    ctx->pc = 0x33b408u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x33b40c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x33b40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x33b410: 0x1444001b  bne         $v0, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x33B410u;
    {
        const bool branch_taken_0x33b410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x33B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B410u;
        // 0x33b414: 0x27ab000c  addiu       $t3, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b410) {
            ctx->pc = 0x33B480u;
            goto label_33b480;
        }
    }
    ctx->pc = 0x33B418u;
    // 0x33b418: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x33b418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x33b41c: 0x27ae0010  addiu       $t6, $sp, 0x10
    ctx->pc = 0x33b41cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33b420: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x33b420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x33b424: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x33b424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x33b428: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x33b428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x33b42c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x33b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x33b430: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x33b430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x33b434: 0xadc40000  sw          $a0, 0x0($t6)
    ctx->pc = 0x33b434u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 4));
    // 0x33b438: 0x8d850028  lw          $a1, 0x28($t4)
    ctx->pc = 0x33b438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 40)));
    // 0x33b43c: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x33b43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x33b440: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x33b440u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x33b444: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x33b444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33b448: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x33b448u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x33b44c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x33b44cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33b450: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x33b450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x33b454: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x33b454u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x33b458: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x33b458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x33b45c: 0x8d640000  lw          $a0, 0x0($t3)
    ctx->pc = 0x33b45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x33b460: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x33b460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x33b464: 0x9485000a  lhu         $a1, 0xA($a0)
    ctx->pc = 0x33b464u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x33b468: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x33b468u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x33b46c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x33b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x33b470: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x33b470u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x33b474: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33B474u;
    {
        const bool branch_taken_0x33b474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B474u;
        // 0x33b478: 0x8fa70000  lw          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b474) {
            ctx->pc = 0x33B484u;
            goto label_33b484;
        }
    }
    ctx->pc = 0x33B47Cu;
    // 0x33b47c: 0x0  nop
    ctx->pc = 0x33b47cu;
    // NOP
label_33b480:
    // 0x33b480: 0x27ae0010  addiu       $t6, $sp, 0x10
    ctx->pc = 0x33b480u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_33b484:
    // 0x33b484: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x33b484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x33b488: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x33b488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x33b48c: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x33b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x33b490: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x33b490u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x33b494: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x33b494u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x33b498: 0xadc20000  sw          $v0, 0x0($t6)
    ctx->pc = 0x33b498u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 2));
    // 0x33b49c: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x33b49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x33b4a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x33b4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33b4a4: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x33B4A4u;
    {
        const bool branch_taken_0x33b4a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33B4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B4A4u;
        // 0x33b4a8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b4a4) {
            ctx->pc = 0x33B534u;
            goto label_33b534;
        }
    }
    ctx->pc = 0x33B4ACu;
    // 0x33b4ac: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x33b4acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x33b4b0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x33b4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x33b4b4: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x33b4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x33b4b8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x33b4b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b4bc: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x33b4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x33b4c0: 0x94c40008  lhu         $a0, 0x8($a2)
    ctx->pc = 0x33b4c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x33b4c4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x33b4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x33b4c8: 0x94650002  lhu         $a1, 0x2($v1)
    ctx->pc = 0x33b4c8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x33b4cc: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x33b4ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33b4d0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x33b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x33b4d4: 0x14440017  bne         $v0, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x33B4D4u;
    {
        const bool branch_taken_0x33b4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x33B4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B4D4u;
        // 0x33b4d8: 0x27a8000c  addiu       $t0, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b4d4) {
            ctx->pc = 0x33B534u;
            goto label_33b534;
        }
    }
    ctx->pc = 0x33B4DCu;
    // 0x33b4dc: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x33b4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33b4e0: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x33b4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x33b4e4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x33b4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x33b4e8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x33b4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x33b4ec: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x33b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33b4f0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x33b4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x33b4f4: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x33b4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x33b4f8: 0x8d850028  lw          $a1, 0x28($t4)
    ctx->pc = 0x33b4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 40)));
    // 0x33b4fc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x33b4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x33b500: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x33b500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x33b504: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x33b504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33b508: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x33b508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x33b50c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x33b50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33b510: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x33b510u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x33b514: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x33b514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x33b518: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x33b518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x33b51c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x33b51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x33b520: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x33b520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x33b524: 0x9485000a  lhu         $a1, 0xA($a0)
    ctx->pc = 0x33b524u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x33b528: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x33b528u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x33b52c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x33b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x33b530: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x33b530u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
label_33b534:
    // 0x33b534: 0x3e00008  jr          $ra
    ctx->pc = 0x33B534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B534u;
        // 0x33b538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B53Cu;
    // 0x33b53c: 0x0  nop
    ctx->pc = 0x33b53cu;
    // NOP
    ctx->pc = 0x33b540u;
}
