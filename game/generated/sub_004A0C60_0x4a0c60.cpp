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

// Function: sub_004A0C60
// Address: 0x4a0c60 - 0x4a0df0
void sub_004A0C60_0x4a0c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0C60_0x4a0c60");
#endif

    switch (ctx->pc) {
        case 0x4a0da4u: goto label_4a0da4;
        default: break;
    }

    ctx->pc = 0x4a0c60u;

    // 0x4a0c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a0c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a0c64: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4a0c64u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4a0c68: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4a0c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4a0c6c: 0x78c03  sra         $s1, $a3, 16
    ctx->pc = 0x4a0c6cu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 7), 16));
    // 0x4a0c70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4a0c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4a0c74: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4a0c74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0c78: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a0c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a0c7c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4a0c7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0c80: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4a0c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4a0c84: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A0C84u;
    {
        const bool branch_taken_0x4a0c84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A0C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0C84u;
        // 0x4a0c88: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0c84) {
            ctx->pc = 0x4A0CA0u;
            goto label_4a0ca0;
        }
    }
    ctx->pc = 0x4A0C8Cu;
    // 0x4a0c8c: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x4a0c8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a0c90: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a0c90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a0c94: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x4a0c94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x4a0c98: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x4A0C98u;
    {
        const bool branch_taken_0x4a0c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0C98u;
        // 0x4a0c9c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0c98) {
            ctx->pc = 0x4A0DD8u;
            goto label_4a0dd8;
        }
    }
    ctx->pc = 0x4A0CA0u;
label_4a0ca0:
    // 0x4a0ca0: 0x84e2007e  lh          $v0, 0x7E($a3)
    ctx->pc = 0x4a0ca0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 126)));
    // 0x4a0ca4: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x4a0ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x4a0ca8: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x4a0ca8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a0cac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a0cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a0cb0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x4a0cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4a0cb4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a0cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a0cb8: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x4a0cb8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a0cbc: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A0CBCu;
    {
        const bool branch_taken_0x4a0cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4A0CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0CBCu;
        // 0x4a0cc0: 0x8605000c  lh          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0cbc) {
            ctx->pc = 0x4A0CD0u;
            goto label_4a0cd0;
        }
    }
    ctx->pc = 0x4A0CC4u;
    // 0x4a0cc4: 0x24a24000  addiu       $v0, $a1, 0x4000
    ctx->pc = 0x4a0cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16384));
    // 0x4a0cc8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a0cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a0ccc: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x4a0cccu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_4a0cd0:
    // 0x4a0cd0: 0x84e4007c  lh          $a0, 0x7C($a3)
    ctx->pc = 0x4a0cd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 124)));
    // 0x4a0cd4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x4a0cd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0cd8: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A0CD8u;
    {
        const bool branch_taken_0x4a0cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0CD8u;
        // 0x4a0cdc: 0x44102a  slt         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0cd8) {
            ctx->pc = 0x4A0CE8u;
            goto label_4a0ce8;
        }
    }
    ctx->pc = 0x4A0CE0u;
    // 0x4a0ce0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4A0CE0u;
    {
        const bool branch_taken_0x4a0ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0CE0u;
        // 0x4a0ce4: 0x30820001  andi        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0ce0) {
            ctx->pc = 0x4A0D50u;
            goto label_4a0d50;
        }
    }
    ctx->pc = 0x4A0CE8u;
label_4a0ce8:
    // 0x4a0ce8: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x4a0ce8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a0cec: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x4a0cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x4a0cf0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a0cf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0cf4: 0xa61823  subu        $v1, $a1, $a2
    ctx->pc = 0x4a0cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4a0cf8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a0cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a0cfc: 0x32c03  sra         $a1, $v1, 16
    ctx->pc = 0x4a0cfcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4a0d00: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x4a0d00u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x4a0d04: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x4a0d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4a0d08: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x4a0d08u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x4a0d0c: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x4a0d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a0d10: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A0D10u;
    {
        const bool branch_taken_0x4a0d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0D10u;
        // 0x4a0d14: 0x32c03  sra         $a1, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0d10) {
            ctx->pc = 0x4A0D2Cu;
            goto label_4a0d2c;
        }
    }
    ctx->pc = 0x4A0D18u;
    // 0x4a0d18: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x4a0d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x4a0d1c: 0x32230002  andi        $v1, $s1, 0x2
    ctx->pc = 0x4a0d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x4a0d20: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4a0d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4a0d24: 0x3280a  movz        $a1, $zero, $v1
    ctx->pc = 0x4a0d24u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
    // 0x4a0d28: 0x23843  sra         $a3, $v0, 1
    ctx->pc = 0x4a0d28u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
label_4a0d2c:
    // 0x4a0d2c: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x4a0d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x4a0d30: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a0d30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a0d34: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a0d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a0d38: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x4a0d38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x4a0d3c: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x4a0d3cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a0d40: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x4a0d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x4a0d44: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x4A0D44u;
    {
        const bool branch_taken_0x4a0d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0D44u;
        // 0x4a0d48: 0x21400  sll         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0d44) {
            ctx->pc = 0x4A0DD4u;
            goto label_4a0dd4;
        }
    }
    ctx->pc = 0x4A0D4Cu;
    // 0x4a0d4c: 0x0  nop
    ctx->pc = 0x4a0d4cu;
    // NOP
label_4a0d50:
    // 0x4a0d50: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A0D50u;
    {
        const bool branch_taken_0x4a0d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a0d50) {
            ctx->pc = 0x4A0D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A0D50u;
            // 0x4a0d54: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A0D78u;
            goto label_4a0d78;
        }
    }
    ctx->pc = 0x4A0D58u;
    // 0x4a0d58: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4a0d58u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a0d5c: 0xa41023  subu        $v0, $a1, $a0
    ctx->pc = 0x4a0d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4a0d60: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a0d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a0d64: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x4a0d64u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a0d68: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x4a0d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x4a0d6c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x4a0d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4a0d70: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4A0D70u;
    {
        const bool branch_taken_0x4a0d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0D70u;
        // 0x4a0d74: 0x32843  sra         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0d70) {
            ctx->pc = 0x4A0DC4u;
            goto label_4a0dc4;
        }
    }
    ctx->pc = 0x4A0D78u;
label_4a0d78:
    // 0x4a0d78: 0x24032aaa  addiu       $v1, $zero, 0x2AAA
    ctx->pc = 0x4a0d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10922));
    // 0x4a0d7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a0d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a0d80: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x4a0d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4a0d84: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a0d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a0d88: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x4a0d88u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a0d8c: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4a0d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4a0d90: 0x87a20000  lh          $v0, 0x0($sp)
    ctx->pc = 0x4a0d90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a0d94: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x4a0d94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a0d98: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a0d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a0d9c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4A0D9Cu;
    SET_GPR_U32(ctx, 31, 0x4A0DA4u);
    ctx->pc = 0x4A0DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0D9Cu;
    // 0x4a0da0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4A0D9Cu, 0x4A0DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A0DA4u;
label_4a0da4:
    // 0x4a0da4: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x4a0da4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x4a0da8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A0DA8u;
    {
        const bool branch_taken_0x4a0da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A0DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0DA8u;
        // 0x4a0dac: 0x87a50000  lh          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0da8) {
            ctx->pc = 0x4A0DC0u;
            goto label_4a0dc0;
        }
    }
    ctx->pc = 0x4A0DB0u;
    // 0x4a0db0: 0x51440  sll         $v0, $a1, 17
    ctx->pc = 0x4a0db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 17));
    // 0x4a0db4: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4a0db4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a0db8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A0DB8u;
    {
        const bool branch_taken_0x4a0db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0DB8u;
        // 0x4a0dbc: 0x22c03  sra         $a1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a0db8) {
            ctx->pc = 0x4A0DC4u;
            goto label_4a0dc4;
        }
    }
    ctx->pc = 0x4A0DC0u;
label_4a0dc0:
    // 0x4a0dc0: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x4a0dc0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_4a0dc4:
    // 0x4a0dc4: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x4a0dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x4a0dc8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x4a0dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x4a0dcc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a0dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a0dd0: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x4a0dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_4a0dd4:
    // 0x4a0dd4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a0dd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_4a0dd8:
    // 0x4a0dd8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a0dd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a0ddc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4a0ddcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a0de0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4a0de0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a0de4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4a0de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a0de8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0DE8u;
        // 0x4a0dec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0DF0u;
}
