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

// Function: sub_002DBF08
// Address: 0x2dbf08 - 0x2dc050
void sub_002DBF08_0x2dbf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBF08_0x2dbf08");
#endif

    switch (ctx->pc) {
        case 0x2dbf70u: goto label_2dbf70;
        case 0x2dbf78u: goto label_2dbf78;
        default: break;
    }

    ctx->pc = 0x2dbf08u;

    // 0x2dbf08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dbf08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dbf0c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2dbf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2dbf10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dbf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dbf14: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x2dbf14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x2dbf18: 0x242188d0  addiu       $at, $at, -0x7730
    ctx->pc = 0x2dbf18u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 4294936784));
    // 0x2dbf1c: 0x252821  addu        $a1, $at, $a1
    ctx->pc = 0x2dbf1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x2dbf20: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x2dbf20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x2dbf24: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x2dbf24u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf28: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2dbf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2dbf2c: 0x244e7e68  addiu       $t6, $v0, 0x7E68
    ctx->pc = 0x2dbf2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 32360));
    // 0x2dbf30: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2dbf30u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf34: 0x25d00002  addiu       $s0, $t6, 0x2
    ctx->pc = 0x2dbf34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 14), 2));
    // 0x2dbf38: 0x246a08b0  addiu       $t2, $v1, 0x8B0
    ctx->pc = 0x2dbf38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 2224));
    // 0x2dbf3c: 0x24190001  addiu       $t9, $zero, 0x1
    ctx->pc = 0x2dbf3cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dbf40: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x2dbf40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2dbf44: 0x24180002  addiu       $t8, $zero, 0x2
    ctx->pc = 0x2dbf44u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dbf48: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x2dbf48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dbf4c: 0xa1620000  sb          $v0, 0x0($t3)
    ctx->pc = 0x2dbf4cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dbf50: 0x91420001  lbu         $v0, 0x1($t2)
    ctx->pc = 0x2dbf50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x2dbf54: 0xa1620001  sb          $v0, 0x1($t3)
    ctx->pc = 0x2dbf54u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dbf58: 0x91430002  lbu         $v1, 0x2($t2)
    ctx->pc = 0x2dbf58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x2dbf5c: 0xa1630002  sb          $v1, 0x2($t3)
    ctx->pc = 0x2dbf5cu;
    WRITE8(ADD32(GPR_U32(ctx, 11), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2dbf60: 0x91420003  lbu         $v0, 0x3($t2)
    ctx->pc = 0x2dbf60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 3)));
    // 0x2dbf64: 0xa1620003  sb          $v0, 0x3($t3)
    ctx->pc = 0x2dbf64u;
    WRITE8(ADD32(GPR_U32(ctx, 11), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2dbf68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2dbf68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dbf6c: 0x0  nop
    ctx->pc = 0x2dbf6cu;
    // NOP
label_2dbf70:
    // 0x2dbf70: 0x14c6821  addu        $t5, $t2, $t4
    ctx->pc = 0x2dbf70u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x2dbf74: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x2dbf74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_2dbf78:
    // 0x2dbf78: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2dbf78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2dbf7c: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x2dbf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2dbf80: 0x6e2021  addu        $a0, $v1, $t6
    ctx->pc = 0x2dbf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x2dbf84: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x2dbf84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dbf88: 0x54460027  bnel        $v0, $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x2DBF88u;
    {
        const bool branch_taken_0x2dbf88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x2dbf88) {
            ctx->pc = 0x2DBF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBF88u;
            // 0x2dbf8c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC028u;
            goto label_2dc028;
        }
    }
    ctx->pc = 0x2DBF90u;
    // 0x2dbf90: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2dbf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2dbf94: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x2dbf94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dbf98: 0x54670023  bnel        $v1, $a3, . + 4 + (0x23 << 2)
    ctx->pc = 0x2DBF98u;
    {
        const bool branch_taken_0x2dbf98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        if (branch_taken_0x2dbf98) {
            ctx->pc = 0x2DBF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBF98u;
            // 0x2dbf9c: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC028u;
            goto label_2dc028;
        }
    }
    ctx->pc = 0x2DBFA0u;
    // 0x2dbfa0: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x2dbfa0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2dbfa4: 0x544c0020  bnel        $v0, $t4, . + 4 + (0x20 << 2)
    ctx->pc = 0x2DBFA4u;
    {
        const bool branch_taken_0x2dbfa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 12));
        if (branch_taken_0x2dbfa4) {
            ctx->pc = 0x2DBFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBFA4u;
            // 0x2dbfa8: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC028u;
            goto label_2dc028;
        }
    }
    ctx->pc = 0x2DBFACu;
    // 0x2dbfac: 0x80830005  lb          $v1, 0x5($a0)
    ctx->pc = 0x2dbfacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x2dbfb0: 0x81a20000  lb          $v0, 0x0($t5)
    ctx->pc = 0x2dbfb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x2dbfb4: 0x5462001c  bnel        $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2DBFB4u;
    {
        const bool branch_taken_0x2dbfb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dbfb4) {
            ctx->pc = 0x2DBFB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBFB4u;
            // 0x2dbfb8: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC028u;
            goto label_2dc028;
        }
    }
    ctx->pc = 0x2DBFBCu;
    // 0x2dbfbc: 0x80830006  lb          $v1, 0x6($a0)
    ctx->pc = 0x2dbfbcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x2dbfc0: 0x10790013  beq         $v1, $t9, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DBFC0u;
    {
        const bool branch_taken_0x2dbfc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 25));
        ctx->pc = 0x2DBFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBFC0u;
        // 0x2dbfc4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbfc0) {
            ctx->pc = 0x2DC010u;
            goto label_2dc010;
        }
    }
    ctx->pc = 0x2DBFC8u;
    // 0x2dbfc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DBFC8u;
    {
        const bool branch_taken_0x2dbfc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbfc8) {
            ctx->pc = 0x2DBFE0u;
            goto label_2dbfe0;
        }
    }
    ctx->pc = 0x2DBFD0u;
    // 0x2dbfd0: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DBFD0u;
    {
        const bool branch_taken_0x2dbfd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dbfd0) {
            ctx->pc = 0x2DBFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBFD0u;
            // 0x2dbfd4: 0x80880007  lb          $t0, 0x7($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBFF0u;
            goto label_2dbff0;
        }
    }
    ctx->pc = 0x2DBFD8u;
    // 0x2dbfd8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2DBFD8u;
    {
        const bool branch_taken_0x2dbfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBFD8u;
        // 0x2dbfdc: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbfd8) {
            ctx->pc = 0x2DC028u;
            goto label_2dc028;
        }
    }
    ctx->pc = 0x2DBFE0u;
label_2dbfe0:
    // 0x2dbfe0: 0x5078000f  beql        $v1, $t8, . + 4 + (0xF << 2)
    ctx->pc = 0x2DBFE0u;
    {
        const bool branch_taken_0x2dbfe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 24));
        if (branch_taken_0x2dbfe0) {
            ctx->pc = 0x2DBFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBFE0u;
            // 0x2dbfe4: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC020u;
            goto label_2dc020;
        }
    }
    ctx->pc = 0x2DBFE8u;
    // 0x2dbfe8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2DBFE8u;
    {
        const bool branch_taken_0x2dbfe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DBFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBFE8u;
        // 0x2dbfec: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dbfe8) {
            ctx->pc = 0x2DC028u;
            goto label_2dc028;
        }
    }
    ctx->pc = 0x2DBFF0u;
label_2dbff0:
    // 0x2dbff0: 0x80820008  lb          $v0, 0x8($a0)
    ctx->pc = 0x2dbff0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2dbff4: 0x1481821  addu        $v1, $t2, $t0
    ctx->pc = 0x2dbff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x2dbff8: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x2dbff8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dbffc: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2DBFFCu;
    {
        const bool branch_taken_0x2dbffc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2dbffc) {
            ctx->pc = 0x2DC000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DBFFCu;
            // 0x2dc000: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC028u;
            goto label_2dc028;
        }
    }
    ctx->pc = 0x2DC004u;
    // 0x2dc004: 0x1681021  addu        $v0, $t3, $t0
    ctx->pc = 0x2dc004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x2dc008: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2DC008u;
    {
        const bool branch_taken_0x2dc008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC008u;
        // 0x2dc00c: 0xa04f0000  sb          $t7, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc008) {
            ctx->pc = 0x2DC024u;
            goto label_2dc024;
        }
    }
    ctx->pc = 0x2DC010u;
label_2dc010:
    // 0x2dc010: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2dc010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2dc014: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DC014u;
    {
        const bool branch_taken_0x2dc014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC014u;
        // 0x2dc018: 0xac400828  sw          $zero, 0x828($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc014) {
            ctx->pc = 0x2DC024u;
            goto label_2dc024;
        }
    }
    ctx->pc = 0x2DC01Cu;
    // 0x2dc01c: 0x0  nop
    ctx->pc = 0x2dc01cu;
    // NOP
label_2dc020:
    // 0x2dc020: 0xac400878  sw          $zero, 0x878($v0)
    ctx->pc = 0x2dc020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2168), GPR_U32(ctx, 0));
label_2dc024:
    // 0x2dc024: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2dc024u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2dc028:
    // 0x2dc028: 0x2d220024  sltiu       $v0, $t1, 0x24
    ctx->pc = 0x2dc028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
    // 0x2dc02c: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x2DC02Cu;
    {
        const bool branch_taken_0x2dc02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC02Cu;
        // 0x2dc030: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc02c) {
            ctx->pc = 0x2DBF78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dbf78;
        }
    }
    ctx->pc = 0x2DC034u;
    // 0x2dc034: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2dc034u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x2dc038: 0x29820004  slti        $v0, $t4, 0x4
    ctx->pc = 0x2dc038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2dc03c: 0x5440ffcc  bnel        $v0, $zero, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2DC03Cu;
    {
        const bool branch_taken_0x2dc03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc03c) {
            ctx->pc = 0x2DC040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC03Cu;
            // 0x2dc040: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DBF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dbf70;
        }
    }
    ctx->pc = 0x2DC044u;
    // 0x2dc044: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dc044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc048: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC048u;
        // 0x2dc04c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC050u;
}
