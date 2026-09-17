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

// Function: sub_00336450
// Address: 0x336450 - 0x336780
void sub_00336450_0x336450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336450_0x336450");
#endif

    switch (ctx->pc) {
        case 0x336490u: goto label_336490;
        default: break;
    }

    ctx->pc = 0x336450u;

    // 0x336450: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x336450u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336454: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x336454u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x336458: 0x258b0004  addiu       $t3, $t4, 0x4
    ctx->pc = 0x336458u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x33645c: 0x2587001c  addiu       $a3, $t4, 0x1C
    ctx->pc = 0x33645cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 28));
    // 0x336460: 0x8d66001c  lw          $a2, 0x1C($t3)
    ctx->pc = 0x336460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 28)));
    // 0x336464: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x336464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x336468: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x336468u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33646c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x33646cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x336470: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x336470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x336474: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x336474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336478: 0x106700be  beq         $v1, $a3, . + 4 + (0xBE << 2)
    ctx->pc = 0x336478u;
    {
        const bool branch_taken_0x336478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x33647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336478u;
        // 0x33647c: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336478) {
            ctx->pc = 0x336774u;
            goto label_336774;
        }
    }
    ctx->pc = 0x336480u;
    // 0x336480: 0x27af0020  addiu       $t7, $sp, 0x20
    ctx->pc = 0x336480u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x336484: 0xe0702d  daddu       $t6, $a3, $zero
    ctx->pc = 0x336484u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336488: 0x1e0682d  daddu       $t5, $t7, $zero
    ctx->pc = 0x336488u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33648c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x33648cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_336490:
    // 0x336490: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x336490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x336494: 0x544500ae  bnel        $v0, $a1, . + 4 + (0xAE << 2)
    ctx->pc = 0x336494u;
    {
        const bool branch_taken_0x336494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x336494) {
            ctx->pc = 0x336498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336494u;
            // 0x336498: 0xada30000  sw          $v1, 0x0($t5) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336750u;
            goto label_336750;
        }
    }
    ctx->pc = 0x33649Cu;
    // 0x33649c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x33649cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3364a0: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x3364a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x3364a4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3364a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3364a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3364a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3364ac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3364acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3364b0: 0xada70000  sw          $a3, 0x0($t5)
    ctx->pc = 0x3364b0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 7));
    // 0x3364b4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3364b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3364b8: 0x10870004  beq         $a0, $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3364B8u;
    {
        const bool branch_taken_0x3364b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x3364BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3364B8u;
        // 0x3364bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3364b8) {
            ctx->pc = 0x3364CCu;
            goto label_3364cc;
        }
    }
    ctx->pc = 0x3364C0u;
    // 0x3364c0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3364c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3364c4: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x3364c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3364c8: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x3364c8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3364cc:
    // 0x3364cc: 0x10a00034  beqz        $a1, . + 4 + (0x34 << 2)
    ctx->pc = 0x3364CCu;
    {
        const bool branch_taken_0x3364cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3364D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3364CCu;
        // 0x3364d0: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3364cc) {
            ctx->pc = 0x3365A0u;
            goto label_3365a0;
        }
    }
    ctx->pc = 0x3364D4u;
    // 0x3364d4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3364d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3364d8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3364d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3364dc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3364dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3364e0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x3364e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3364e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3364e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3364e8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x3364e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x3364ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3364ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3364f0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x3364f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x3364f4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3364f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x3364f8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3364f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3364fc: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x3364fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x336500: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x336500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x336504: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x336504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x336508: 0x54a20005  bnel        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x336508u;
    {
        const bool branch_taken_0x336508 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x336508) {
            ctx->pc = 0x33650Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336508u;
            // 0x33650c: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336520u;
            goto label_336520;
        }
    }
    ctx->pc = 0x336510u;
    // 0x336510: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x336510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x336514: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x336514u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x336518: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x336518u;
    {
        const bool branch_taken_0x336518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33651Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336518u;
        // 0x33651c: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336518) {
            ctx->pc = 0x33654Cu;
            goto label_33654c;
        }
    }
    ctx->pc = 0x336520u;
label_336520:
    // 0x336520: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x336520u;
    {
        const bool branch_taken_0x336520 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x336524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336520u;
        // 0x336524: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336520) {
            ctx->pc = 0x336538u;
            goto label_336538;
        }
    }
    ctx->pc = 0x336528u;
    // 0x336528: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x336528u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x33652c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33652Cu;
    {
        const bool branch_taken_0x33652c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33652Cu;
        // 0x336530: 0xac670004  sw          $a3, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33652c) {
            ctx->pc = 0x33654Cu;
            goto label_33654c;
        }
    }
    ctx->pc = 0x336534u;
    // 0x336534: 0x0  nop
    ctx->pc = 0x336534u;
    // NOP
label_336538:
    // 0x336538: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x336538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33653c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x33653cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x336540: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x336540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x336544: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x336544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x336548: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x336548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_33654c:
    // 0x33654c: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x33654cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x336550: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x336550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x336554: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x336554u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x336558: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x336558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x33655c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x33655Cu;
    {
        const bool branch_taken_0x33655c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33655c) {
            ctx->pc = 0x336560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33655Cu;
            // 0x336560: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336570u;
            goto label_336570;
        }
    }
    ctx->pc = 0x336564u;
    // 0x336564: 0xad050004  sw          $a1, 0x4($t0)
    ctx->pc = 0x336564u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 5));
    // 0x336568: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x336568u;
    {
        const bool branch_taken_0x336568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336568u;
        // 0x33656c: 0xaca80000  sw          $t0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336568) {
            ctx->pc = 0x33657Cu;
            goto label_33657c;
        }
    }
    ctx->pc = 0x336570u;
label_336570:
    // 0x336570: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x336570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x336574: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x336574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x336578: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x336578u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_33657c:
    // 0x33657c: 0xaca80004  sw          $t0, 0x4($a1)
    ctx->pc = 0x33657cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 8));
    // 0x336580: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x336580u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x336584: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x336584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x336588: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x336588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33658c: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x33658cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
    // 0x336590: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x336590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x336594: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x336594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336598: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x336598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x33659c: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x33659cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_3365a0:
    // 0x3365a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3365a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3365a4: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x3365a4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x3365a8: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x3365a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x3365ac: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x3365acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3365b0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3365b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3365b4: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x3365b4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x3365b8: 0xafae0070  sw          $t6, 0x70($sp)
    ctx->pc = 0x3365b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 14));
    // 0x3365bc: 0x8da40000  lw          $a0, 0x0($t5)
    ctx->pc = 0x3365bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x3365c0: 0x108e0004  beq         $a0, $t6, . + 4 + (0x4 << 2)
    ctx->pc = 0x3365C0u;
    {
        const bool branch_taken_0x3365c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 14));
        ctx->pc = 0x3365C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3365C0u;
        // 0x3365c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3365c0) {
            ctx->pc = 0x3365D4u;
            goto label_3365d4;
        }
    }
    ctx->pc = 0x3365C8u;
    // 0x3365c8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3365c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3365cc: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x3365ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3365d0: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x3365d0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3365d4:
    // 0x3365d4: 0x10a0004c  beqz        $a1, . + 4 + (0x4C << 2)
    ctx->pc = 0x3365D4u;
    {
        const bool branch_taken_0x3365d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3365D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3365D4u;
        // 0x3365d8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3365d4) {
            ctx->pc = 0x336708u;
            goto label_336708;
        }
    }
    ctx->pc = 0x3365DCu;
    // 0x3365dc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x3365dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3365e0: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x3365e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x3365e4: 0x8de40000  lw          $a0, 0x0($t7)
    ctx->pc = 0x3365e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x3365e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3365e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3365ec: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3365ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3365f0: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x3365f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3365f4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3365f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3365f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3365f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3365fc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x3365fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x336600: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x336600u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336604: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x336604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x336608: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x336608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x33660c: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x33660Cu;
    {
        const bool branch_taken_0x33660c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x336610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33660Cu;
        // 0x336610: 0x27a700b0  addiu       $a3, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33660c) {
            ctx->pc = 0x336658u;
            goto label_336658;
        }
    }
    ctx->pc = 0x336614u;
    // 0x336614: 0x8d8201b8  lw          $v0, 0x1B8($t4)
    ctx->pc = 0x336614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 440)));
    // 0x336618: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x336618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x33661c: 0xad8201b8  sw          $v0, 0x1B8($t4)
    ctx->pc = 0x33661cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 440), GPR_U32(ctx, 2));
    // 0x336620: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x336620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x336624: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x336624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x336628: 0x8c440178  lw          $a0, 0x178($v0)
    ctx->pc = 0x336628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x33662c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x33662cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x336630: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x336630u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x336634: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x336634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336638: 0x8d8201b8  lw          $v0, 0x1B8($t4)
    ctx->pc = 0x336638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 440)));
    // 0x33663c: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x33663cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x336640: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x336640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x336644: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x336644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x336648: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x336648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33664c: 0x8c440178  lw          $a0, 0x178($v0)
    ctx->pc = 0x33664cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x336650: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x336650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x336654: 0xac640178  sw          $a0, 0x178($v1)
    ctx->pc = 0x336654u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 376), GPR_U32(ctx, 4));
label_336658:
    // 0x336658: 0xafa600a0  sw          $a2, 0xA0($sp)
    ctx->pc = 0x336658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 6));
    // 0x33665c: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x33665cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x336660: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x336660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x336664: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x336664u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x336668: 0x8dc30004  lw          $v1, 0x4($t6)
    ctx->pc = 0x336668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x33666c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x33666cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x336670: 0x54a30005  bnel        $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x336670u;
    {
        const bool branch_taken_0x336670 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x336670) {
            ctx->pc = 0x336674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336670u;
            // 0x336674: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336688u;
            goto label_336688;
        }
    }
    ctx->pc = 0x336678u;
    // 0x336678: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x336678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33667c: 0xad430004  sw          $v1, 0x4($t2)
    ctx->pc = 0x33667cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
    // 0x336680: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x336680u;
    {
        const bool branch_taken_0x336680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336680u;
        // 0x336684: 0xac6a0000  sw          $t2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336680) {
            ctx->pc = 0x3366B4u;
            goto label_3366b4;
        }
    }
    ctx->pc = 0x336688u;
label_336688:
    // 0x336688: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x336688u;
    {
        const bool branch_taken_0x336688 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x33668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336688u;
        // 0x33668c: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336688) {
            ctx->pc = 0x3366A0u;
            goto label_3366a0;
        }
    }
    ctx->pc = 0x336690u;
    // 0x336690: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x336690u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x336694: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x336694u;
    {
        const bool branch_taken_0x336694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336694u;
        // 0x336698: 0xac6a0004  sw          $t2, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336694) {
            ctx->pc = 0x3366B4u;
            goto label_3366b4;
        }
    }
    ctx->pc = 0x33669Cu;
    // 0x33669c: 0x0  nop
    ctx->pc = 0x33669cu;
    // NOP
label_3366a0:
    // 0x3366a0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x3366a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3366a4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x3366a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x3366a8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x3366a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3366ac: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3366acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3366b0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3366b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_3366b4:
    // 0x3366b4: 0x8d420014  lw          $v0, 0x14($t2)
    ctx->pc = 0x3366b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x3366b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3366b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3366bc: 0xad420014  sw          $v0, 0x14($t2)
    ctx->pc = 0x3366bcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 2));
    // 0x3366c0: 0x8d620014  lw          $v0, 0x14($t3)
    ctx->pc = 0x3366c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x3366c4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3366C4u;
    {
        const bool branch_taken_0x3366c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3366c4) {
            ctx->pc = 0x3366C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3366C4u;
            // 0x3366c8: 0x8d620000  lw          $v0, 0x0($t3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3366D8u;
            goto label_3366d8;
        }
    }
    ctx->pc = 0x3366CCu;
    // 0x3366cc: 0xad650004  sw          $a1, 0x4($t3)
    ctx->pc = 0x3366ccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 5));
    // 0x3366d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3366D0u;
    {
        const bool branch_taken_0x3366d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3366D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3366D0u;
        // 0x3366d4: 0xacab0000  sw          $t3, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3366d0) {
            ctx->pc = 0x3366E4u;
            goto label_3366e4;
        }
    }
    ctx->pc = 0x3366D8u;
label_3366d8:
    // 0x3366d8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x3366d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x3366dc: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x3366dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3366e0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3366e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_3366e4:
    // 0x3366e4: 0xacab0004  sw          $t3, 0x4($a1)
    ctx->pc = 0x3366e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 11));
    // 0x3366e8: 0xad650000  sw          $a1, 0x0($t3)
    ctx->pc = 0x3366e8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 5));
    // 0x3366ec: 0x8d620014  lw          $v0, 0x14($t3)
    ctx->pc = 0x3366ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20)));
    // 0x3366f0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3366f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3366f4: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x3366f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3366f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3366f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3366fc: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x3366fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    // 0x336700: 0xad620014  sw          $v0, 0x14($t3)
    ctx->pc = 0x336700u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 2));
    // 0x336704: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x336704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_336708:
    // 0x336708: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x336708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33670c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x33670cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x336710: 0x4410018  bgez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x336710u;
    {
        const bool branch_taken_0x336710 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x336710) {
            ctx->pc = 0x336774u;
            goto label_336774;
        }
    }
    ctx->pc = 0x336718u;
    // 0x336718: 0x8d8201b8  lw          $v0, 0x1B8($t4)
    ctx->pc = 0x336718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 440)));
    // 0x33671c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33671cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x336720: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x336720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x336724: 0xac430178  sw          $v1, 0x178($v0)
    ctx->pc = 0x336724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 376), GPR_U32(ctx, 3));
    // 0x336728: 0x8d8401b8  lw          $a0, 0x1B8($t4)
    ctx->pc = 0x336728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 440)));
    // 0x33672c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x33672cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x336730: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x336730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x336734: 0x8c430178  lw          $v1, 0x178($v0)
    ctx->pc = 0x336734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 376)));
    // 0x336738: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x336738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
    // 0x33673c: 0x8d8201b8  lw          $v0, 0x1B8($t4)
    ctx->pc = 0x33673cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 440)));
    // 0x336740: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x336740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x336744: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x336744u;
    {
        const bool branch_taken_0x336744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336744u;
        // 0x336748: 0xad8201b8  sw          $v0, 0x1B8($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336744) {
            ctx->pc = 0x336774u;
            goto label_336774;
        }
    }
    ctx->pc = 0x33674Cu;
    // 0x33674c: 0x0  nop
    ctx->pc = 0x33674cu;
    // NOP
label_336750:
    // 0x336750: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x336750u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336754: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x336754u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336758: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x336758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33675c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x33675cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336760: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x336760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x336764: 0xad270000  sw          $a3, 0x0($t1)
    ctx->pc = 0x336764u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 7));
    // 0x336768: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x336768u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33676c: 0x1467ff48  bne         $v1, $a3, . + 4 + (-0xB8 << 2)
    ctx->pc = 0x33676Cu;
    {
        const bool branch_taken_0x33676c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x336770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33676Cu;
        // 0x336770: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33676c) {
            ctx->pc = 0x336490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336490;
        }
    }
    ctx->pc = 0x336774u;
label_336774:
    // 0x336774: 0x3e00008  jr          $ra
    ctx->pc = 0x336774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336774u;
        // 0x336778: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33677Cu;
    // 0x33677c: 0x0  nop
    ctx->pc = 0x33677cu;
    // NOP
    ctx->pc = 0x336780u;
}
