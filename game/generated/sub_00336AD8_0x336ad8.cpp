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

// Function: sub_00336AD8
// Address: 0x336ad8 - 0x336ce8
void sub_00336AD8_0x336ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336AD8_0x336ad8");
#endif

    switch (ctx->pc) {
        case 0x336b18u: goto label_336b18;
        default: break;
    }

    ctx->pc = 0x336ad8u;

    // 0x336ad8: 0x248c0004  addiu       $t4, $a0, 0x4
    ctx->pc = 0x336ad8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x336adc: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x336adcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x336ae0: 0x8d890018  lw          $t1, 0x18($t4)
    ctx->pc = 0x336ae0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x336ae4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x336ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x336ae8: 0x248a0018  addiu       $t2, $a0, 0x18
    ctx->pc = 0x336ae8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x336aec: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x336aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
    // 0x336af0: 0xac4a0000  sw          $t2, 0x0($v0)
    ctx->pc = 0x336af0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 10));
    // 0x336af4: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x336af4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336af8: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x336af8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336afc: 0x50ea0077  beql        $a3, $t2, . + 4 + (0x77 << 2)
    ctx->pc = 0x336AFCu;
    {
        const bool branch_taken_0x336afc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        if (branch_taken_0x336afc) {
            ctx->pc = 0x336B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336AFCu;
            // 0x336b00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336CDCu;
            goto label_336cdc;
        }
    }
    ctx->pc = 0x336B04u;
    // 0x336b04: 0x40c02d  daddu       $t8, $v0, $zero
    ctx->pc = 0x336b04u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336b08: 0x180682d  daddu       $t5, $t4, $zero
    ctx->pc = 0x336b08u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336b0c: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x336b0cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336b10: 0x27af0060  addiu       $t7, $sp, 0x60
    ctx->pc = 0x336b10u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x336b14: 0x0  nop
    ctx->pc = 0x336b14u;
    // NOP
label_336b18:
    // 0x336b18: 0x24e80008  addiu       $t0, $a3, 0x8
    ctx->pc = 0x336b18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x336b1c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x336b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x336b20: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x336b20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x336b24: 0x1460006d  bnez        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x336B24u;
    {
        const bool branch_taken_0x336b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x336B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B24u;
        // 0x336b28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336b24) {
            ctx->pc = 0x336CDCu;
            goto label_336cdc;
        }
    }
    ctx->pc = 0x336B2Cu;
    // 0x336b2c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x336b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x336b30: 0xa67021  addu        $t6, $a1, $a2
    ctx->pc = 0x336b30u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x336b34: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x336b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x336b38: 0x4e102b  sltu        $v0, $v0, $t6
    ctx->pc = 0x336b38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 14)) ? 1 : 0);
    // 0x336b3c: 0x54400060  bnel        $v0, $zero, . + 4 + (0x60 << 2)
    ctx->pc = 0x336B3Cu;
    {
        const bool branch_taken_0x336b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336b3c) {
            ctx->pc = 0x336B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336B3Cu;
            // 0x336b40: 0xade70000  sw          $a3, 0x0($t7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336CC0u;
            goto label_336cc0;
        }
    }
    ctx->pc = 0x336B44u;
    // 0x336b44: 0x10850025  beq         $a0, $a1, . + 4 + (0x25 << 2)
    ctx->pc = 0x336B44u;
    {
        const bool branch_taken_0x336b44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x336B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B44u;
        // 0x336b48: 0x25230008  addiu       $v1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336b44) {
            ctx->pc = 0x336BDCu;
            goto label_336bdc;
        }
    }
    ctx->pc = 0x336B4Cu;
    // 0x336b4c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x336b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x336b50: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x336b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x336b54: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x336b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x336b58: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x336b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x336b5c: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x336b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x336b60: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x336b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336b64: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x336b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x336b68: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x336b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x336b6c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x336b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x336b70: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x336b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x336b74: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x336b74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x336b78: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x336b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336b7c: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x336b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x336b80: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x336b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x336b84: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x336b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x336b88: 0xada40000  sw          $a0, 0x0($t5)
    ctx->pc = 0x336b88u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 4));
    // 0x336b8c: 0xac8d0004  sw          $t5, 0x4($a0)
    ctx->pc = 0x336b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 13));
    // 0x336b90: 0x8da20010  lw          $v0, 0x10($t5)
    ctx->pc = 0x336b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 16)));
    // 0x336b94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x336b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x336b98: 0xada20010  sw          $v0, 0x10($t5)
    ctx->pc = 0x336b98u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 2));
    // 0x336b9c: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x336b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x336ba0: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x336ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x336ba4: 0xb062000f  sdl         $v0, 0xF($v1)
    ctx->pc = 0x336ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x336ba8: 0xb4620008  sdr         $v0, 0x8($v1)
    ctx->pc = 0x336ba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x336bac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x336bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x336bb0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x336bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x336bb4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x336bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x336bb8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x336bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x336bbc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x336bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x336bc0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x336bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x336bc4: 0xaf030000  sw          $v1, 0x0($t8)
    ctx->pc = 0x336bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 3));
    // 0x336bc8: 0x8d620010  lw          $v0, 0x10($t3)
    ctx->pc = 0x336bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x336bcc: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x336bccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336bd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x336bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x336bd4: 0xad620010  sw          $v0, 0x10($t3)
    ctx->pc = 0x336bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 2));
    // 0x336bd8: 0x25230008  addiu       $v1, $t1, 0x8
    ctx->pc = 0x336bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_336bdc:
    // 0x336bdc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x336bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x336be0: 0x5446002f  bnel        $v0, $a2, . + 4 + (0x2F << 2)
    ctx->pc = 0x336BE0u;
    {
        const bool branch_taken_0x336be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x336be0) {
            ctx->pc = 0x336BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336BE0u;
            // 0x336be4: 0xac6e0000  sw          $t6, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 14));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336CA0u;
            goto label_336ca0;
        }
    }
    ctx->pc = 0x336BE8u;
    // 0x336be8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x336be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x336bec: 0xafa90040  sw          $t1, 0x40($sp)
    ctx->pc = 0x336becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 9));
    // 0x336bf0: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x336bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x336bf4: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x336bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x336bf8: 0x8d630004  lw          $v1, 0x4($t3)
    ctx->pc = 0x336bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x336bfc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x336bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x336c00: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x336c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x336c04: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x336C04u;
    {
        const bool branch_taken_0x336c04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x336c04) {
            ctx->pc = 0x336C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336C04u;
            // 0x336c08: 0x8d420000  lw          $v0, 0x0($t2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336C20u;
            goto label_336c20;
        }
    }
    ctx->pc = 0x336C0Cu;
    // 0x336c0c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x336c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x336c10: 0xad430004  sw          $v1, 0x4($t2)
    ctx->pc = 0x336c10u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
    // 0x336c14: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x336C14u;
    {
        const bool branch_taken_0x336c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336C14u;
        // 0x336c18: 0xac6a0000  sw          $t2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336c14) {
            ctx->pc = 0x336C4Cu;
            goto label_336c4c;
        }
    }
    ctx->pc = 0x336C1Cu;
    // 0x336c1c: 0x0  nop
    ctx->pc = 0x336c1cu;
    // NOP
label_336c20:
    // 0x336c20: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x336C20u;
    {
        const bool branch_taken_0x336c20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x336C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336C20u;
        // 0x336c24: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336c20) {
            ctx->pc = 0x336C38u;
            goto label_336c38;
        }
    }
    ctx->pc = 0x336C28u;
    // 0x336c28: 0xad430000  sw          $v1, 0x0($t2)
    ctx->pc = 0x336c28u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 3));
    // 0x336c2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x336C2Cu;
    {
        const bool branch_taken_0x336c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336C2Cu;
        // 0x336c30: 0xac6a0004  sw          $t2, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336c2c) {
            ctx->pc = 0x336C4Cu;
            goto label_336c4c;
        }
    }
    ctx->pc = 0x336C34u;
    // 0x336c34: 0x0  nop
    ctx->pc = 0x336c34u;
    // NOP
label_336c38:
    // 0x336c38: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x336c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x336c3c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x336c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x336c40: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x336c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x336c44: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x336c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x336c48: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x336c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_336c4c:
    // 0x336c4c: 0x8d420010  lw          $v0, 0x10($t2)
    ctx->pc = 0x336c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x336c50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x336c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x336c54: 0xad420010  sw          $v0, 0x10($t2)
    ctx->pc = 0x336c54u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 2));
    // 0x336c58: 0x8d820010  lw          $v0, 0x10($t4)
    ctx->pc = 0x336c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x336c5c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x336C5Cu;
    {
        const bool branch_taken_0x336c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x336c5c) {
            ctx->pc = 0x336C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336C5Cu;
            // 0x336c60: 0x8d820000  lw          $v0, 0x0($t4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336C70u;
            goto label_336c70;
        }
    }
    ctx->pc = 0x336C64u;
    // 0x336c64: 0xad850004  sw          $a1, 0x4($t4)
    ctx->pc = 0x336c64u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 5));
    // 0x336c68: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x336C68u;
    {
        const bool branch_taken_0x336c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336C68u;
        // 0x336c6c: 0xacac0000  sw          $t4, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336c68) {
            ctx->pc = 0x336C7Cu;
            goto label_336c7c;
        }
    }
    ctx->pc = 0x336C70u;
label_336c70:
    // 0x336c70: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x336c70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x336c74: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x336c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x336c78: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x336c78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_336c7c:
    // 0x336c7c: 0xacac0004  sw          $t4, 0x4($a1)
    ctx->pc = 0x336c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 12));
    // 0x336c80: 0xad850000  sw          $a1, 0x0($t4)
    ctx->pc = 0x336c80u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 5));
    // 0x336c84: 0x8d820010  lw          $v0, 0x10($t4)
    ctx->pc = 0x336c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x336c88: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x336c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x336c8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x336c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x336c90: 0xad820010  sw          $v0, 0x10($t4)
    ctx->pc = 0x336c90u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 16), GPR_U32(ctx, 2));
    // 0x336c94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x336C94u;
    {
        const bool branch_taken_0x336c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336C94u;
        // 0x336c98: 0xaf030000  sw          $v1, 0x0($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336c94) {
            ctx->pc = 0x336CB4u;
            goto label_336cb4;
        }
    }
    ctx->pc = 0x336C9Cu;
    // 0x336c9c: 0x0  nop
    ctx->pc = 0x336c9cu;
    // NOP
label_336ca0:
    // 0x336ca0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x336ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336ca4: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x336ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x336ca8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x336ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x336cac: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x336cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x336cb0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x336cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_336cb4:
    // 0x336cb4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x336CB4u;
    {
        const bool branch_taken_0x336cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336CB4u;
        // 0x336cb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336cb4) {
            ctx->pc = 0x336CDCu;
            goto label_336cdc;
        }
    }
    ctx->pc = 0x336CBCu;
    // 0x336cbc: 0x0  nop
    ctx->pc = 0x336cbcu;
    // NOP
label_336cc0:
    // 0x336cc0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x336cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336cc4: 0x8c490004  lw          $t1, 0x4($v0)
    ctx->pc = 0x336cc4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x336cc8: 0xaf0b0000  sw          $t3, 0x0($t8)
    ctx->pc = 0x336cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 11));
    // 0x336ccc: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x336cccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336cd0: 0x14ebff91  bne         $a3, $t3, . + 4 + (-0x6F << 2)
    ctx->pc = 0x336CD0u;
    {
        const bool branch_taken_0x336cd0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 11));
        ctx->pc = 0x336CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336CD0u;
        // 0x336cd4: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336cd0) {
            ctx->pc = 0x336B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336b18;
        }
    }
    ctx->pc = 0x336CD8u;
    // 0x336cd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x336cd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_336cdc:
    // 0x336cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x336CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336CDCu;
        // 0x336ce0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336CE4u;
    // 0x336ce4: 0x0  nop
    ctx->pc = 0x336ce4u;
    // NOP
    ctx->pc = 0x336ce8u;
}
