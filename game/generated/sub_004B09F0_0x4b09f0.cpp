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

// Function: sub_004B09F0
// Address: 0x4b09f0 - 0x4b11e0
void sub_004B09F0_0x4b09f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B09F0_0x4b09f0");
#endif

    switch (ctx->pc) {
        case 0x4b0e98u: goto label_4b0e98;
        case 0x4b0f74u: goto label_4b0f74;
        case 0x4b0f84u: goto label_4b0f84;
        case 0x4b0f98u: goto label_4b0f98;
        case 0x4b0fbcu: goto label_4b0fbc;
        case 0x4b0fccu: goto label_4b0fcc;
        case 0x4b0fe0u: goto label_4b0fe0;
        case 0x4b1004u: goto label_4b1004;
        case 0x4b1014u: goto label_4b1014;
        case 0x4b1028u: goto label_4b1028;
        case 0x4b10b0u: goto label_4b10b0;
        case 0x4b1110u: goto label_4b1110;
        default: break;
    }

    ctx->pc = 0x4b09f0u;

    // 0x4b09f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b09f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b09f4: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b09f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b09f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b09f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b09fc: 0x24680d30  addiu       $t0, $v1, 0xD30
    ctx->pc = 0x4b09fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 3376));
    // 0x4b0a00: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4b0a00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0a04: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4b0a04u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4b0a08: 0x852201b6  lh          $v0, 0x1B6($t1)
    ctx->pc = 0x4b0a08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 438)));
    // 0x4b0a0c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4b0a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4b0a10: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x4b0a10u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b0a14: 0x24e70d34  addiu       $a3, $a3, 0xD34
    ctx->pc = 0x4b0a14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3380));
    // 0x4b0a18: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4b0a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4b0a1c: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x4b0a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0D34u));
    // 0x4b0a20: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b0a20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b0a24: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b0a24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b0a28: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b0a28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b0a2c: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x4b0a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x4b0a30: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b0a30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b0a34: 0x85220160  lh          $v0, 0x160($t1)
    ctx->pc = 0x4b0a34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 352)));
    // 0x4b0a38: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x4b0a38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b0a3c: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4b0a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4b0a40: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b0a40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b0a44: 0x30630600  andi        $v1, $v1, 0x600
    ctx->pc = 0x4b0a44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1536);
    // 0x4b0a48: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4b0a48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4b0a4c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b0a4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b0a50: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4b0a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4b0a54: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4b0a54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b0a58: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x4b0a58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4b0a5c: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x4b0a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x4b0a60: 0x30420600  andi        $v0, $v0, 0x600
    ctx->pc = 0x4b0a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1536);
    // 0x4b0a64: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4b0a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4b0a68: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4b0a68u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b0a6c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b0a6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b0a70: 0x95060000  lhu         $a2, 0x0($t0)
    ctx->pc = 0x4b0a70u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b0a74: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x4b0a74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x4b0a78: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4b0a78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b0a7c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B0A7Cu;
    {
        const bool branch_taken_0x4b0a7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B0A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0A7Cu;
        // 0x4b0a80: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0a7c) {
            ctx->pc = 0x4B0A90u;
            goto label_4b0a90;
        }
    }
    ctx->pc = 0x4B0A84u;
    // 0x4b0a84: 0x8c430d60  lw          $v1, 0xD60($v0)
    ctx->pc = 0x4b0a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3424)));
    // 0x4b0a88: 0xa4600162  sh          $zero, 0x162($v1)
    ctx->pc = 0x4b0a88u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 354), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b0a8c: 0x95060000  lhu         $a2, 0x0($t0)
    ctx->pc = 0x4b0a8cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4b0a90:
    // 0x4b0a90: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B0A90u;
    {
        const bool branch_taken_0x4b0a90 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0A90u;
        // 0x4b0a94: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0a90) {
            ctx->pc = 0x4B0AA0u;
            goto label_4b0aa0;
        }
    }
    ctx->pc = 0x4B0A98u;
    // 0x4b0a98: 0xa522015e  sh          $v0, 0x15E($t1)
    ctx->pc = 0x4b0a98u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b0a9c: 0x95060000  lhu         $a2, 0x0($t0)
    ctx->pc = 0x4b0a9cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_4b0aa0:
    // 0x4b0aa0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4b0aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b0aa4: 0x61400  sll         $v0, $a2, 16
    ctx->pc = 0x4b0aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4b0aa8: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x4b0aa8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x4b0aac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4b0aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b0ab0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4b0ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4b0ab4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b0ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b0ab8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b0ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b0abc: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4b0abcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4b0ac0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b0ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b0ac4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x4b0ac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b0ac8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4b0ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4b0acc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b0accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b0ad0: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4b0ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4b0ad4: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4b0ad4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b0ad8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b0ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b0adc: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4b0adcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4b0ae0: 0x1065000f  beq         $v1, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x4B0AE0u;
    {
        const bool branch_taken_0x4b0ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x4B0AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0AE0u;
        // 0x4b0ae4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0ae0) {
            ctx->pc = 0x4B0B20u;
            goto label_4b0b20;
        }
    }
    ctx->pc = 0x4B0AE8u;
    // 0x4b0ae8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B0AE8u;
    {
        const bool branch_taken_0x4b0ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0ae8) {
            ctx->pc = 0x4B0AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0AE8u;
            // 0x4b0aec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0B00u;
            goto label_4b0b00;
        }
    }
    ctx->pc = 0x4B0AF0u;
    // 0x4b0af0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B0AF0u;
    {
        const bool branch_taken_0x4b0af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0AF0u;
        // 0x4b0af4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0af0) {
            ctx->pc = 0x4B0B18u;
            goto label_4b0b18;
        }
    }
    ctx->pc = 0x4B0AF8u;
    // 0x4b0af8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x4B0AF8u;
    {
        const bool branch_taken_0x4b0af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0af8) {
            ctx->pc = 0x4B0B48u;
            goto label_4b0b48;
        }
    }
    ctx->pc = 0x4B0B00u;
label_4b0b00:
    // 0x4b0b00: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4B0B00u;
    {
        const bool branch_taken_0x4b0b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B0B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0B00u;
        // 0x4b0b04: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0b00) {
            ctx->pc = 0x4B0B30u;
            goto label_4b0b30;
        }
    }
    ctx->pc = 0x4B0B08u;
    // 0x4b0b08: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B0B08u;
    {
        const bool branch_taken_0x4b0b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B0B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0B08u;
        // 0x4b0b0c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0b08) {
            ctx->pc = 0x4B0B40u;
            goto label_4b0b40;
        }
    }
    ctx->pc = 0x4B0B10u;
    // 0x4b0b10: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4B0B10u;
    {
        const bool branch_taken_0x4b0b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0b10) {
            ctx->pc = 0x4B0B48u;
            goto label_4b0b48;
        }
    }
    ctx->pc = 0x4B0B18u;
label_4b0b18:
    // 0x4b0b18: 0x812c476  j           func_4B11D8
    ctx->pc = 0x4B0B18u;
    ctx->pc = 0x4B0B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0B18u;
    // 0x4b0b1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B11D8u;
    goto label_4b11d8;
    ctx->pc = 0x4B0B20u;
label_4b0b20:
    // 0x4b0b20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0b24: 0x812c2d4  j           func_4B0B50
    ctx->pc = 0x4B0B24u;
    ctx->pc = 0x4B0B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0B24u;
    // 0x4b0b28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0B50u;
    goto label_4b0b50;
    ctx->pc = 0x4B0B2Cu;
    // 0x4b0b2c: 0x0  nop
    ctx->pc = 0x4b0b2cu;
    // NOP
label_4b0b30:
    // 0x4b0b30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0b34: 0x812c302  j           func_4B0C08
    ctx->pc = 0x4B0B34u;
    ctx->pc = 0x4B0B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0B34u;
    // 0x4b0b38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0C08u;
    goto label_4b0c08;
    ctx->pc = 0x4B0B3Cu;
    // 0x4b0b3c: 0x0  nop
    ctx->pc = 0x4b0b3cu;
    // NOP
label_4b0b40:
    // 0x4b0b40: 0x812c476  j           func_4B11D8
    ctx->pc = 0x4B0B40u;
    ctx->pc = 0x4B0B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0B40u;
    // 0x4b0b44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B11D8u;
    goto label_4b11d8;
    ctx->pc = 0x4B0B48u;
label_4b0b48:
    // 0x4b0b48: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0B48u;
        // 0x4b0b4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0B50u;
label_4b0b50:
    // 0x4b0b50: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b0b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b0b54: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b0b54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b0b58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b0b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b0b5c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b0b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b0b60: 0x8c460d60  lw          $a2, 0xD60($v0)
    ctx->pc = 0x4b0b60u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b0b64: 0x24a50d30  addiu       $a1, $a1, 0xD30
    ctx->pc = 0x4b0b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3376));
    // 0x4b0b68: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4b0b68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b0b6c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4b0b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4b0b70: 0x84c20162  lh          $v0, 0x162($a2)
    ctx->pc = 0x4b0b70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 354)));
    // 0x4b0b74: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4b0b74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b0b78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b0b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b0b7c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4b0b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4b0b80: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b0b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b0b84: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4b0b84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4b0b88: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4b0b88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b0b8c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b0b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b0b90: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4b0b90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4b0b94: 0x10680010  beq         $v1, $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4B0B94u;
    {
        const bool branch_taken_0x4b0b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x4B0B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0B94u;
        // 0x4b0b98: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0b94) {
            ctx->pc = 0x4B0BD8u;
            goto label_4b0bd8;
        }
    }
    ctx->pc = 0x4B0B9Cu;
    // 0x4b0b9c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B0B9Cu;
    {
        const bool branch_taken_0x4b0b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0b9c) {
            ctx->pc = 0x4B0BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0B9Cu;
            // 0x4b0ba0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0BB8u;
            goto label_4b0bb8;
        }
    }
    ctx->pc = 0x4B0BA4u;
    // 0x4b0ba4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4B0BA4u;
    {
        const bool branch_taken_0x4b0ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0BA4u;
        // 0x4b0ba8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0ba4) {
            ctx->pc = 0x4B0BD0u;
            goto label_4b0bd0;
        }
    }
    ctx->pc = 0x4B0BACu;
    // 0x4b0bac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4B0BACu;
    {
        const bool branch_taken_0x4b0bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0bac) {
            ctx->pc = 0x4B0C00u;
            goto label_4b0c00;
        }
    }
    ctx->pc = 0x4B0BB4u;
    // 0x4b0bb4: 0x0  nop
    ctx->pc = 0x4b0bb4u;
    // NOP
label_4b0bb8:
    // 0x4b0bb8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4B0BB8u;
    {
        const bool branch_taken_0x4b0bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B0BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0BB8u;
        // 0x4b0bbc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0bb8) {
            ctx->pc = 0x4B0BE8u;
            goto label_4b0be8;
        }
    }
    ctx->pc = 0x4B0BC0u;
    // 0x4b0bc0: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B0BC0u;
    {
        const bool branch_taken_0x4b0bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B0BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0BC0u;
        // 0x4b0bc4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0bc0) {
            ctx->pc = 0x4B0BF8u;
            goto label_4b0bf8;
        }
    }
    ctx->pc = 0x4B0BC8u;
    // 0x4b0bc8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4B0BC8u;
    {
        const bool branch_taken_0x4b0bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0bc8) {
            ctx->pc = 0x4B0C00u;
            goto label_4b0c00;
        }
    }
    ctx->pc = 0x4B0BD0u;
label_4b0bd0:
    // 0x4b0bd0: 0x812c364  j           func_4B0D90
    ctx->pc = 0x4B0BD0u;
    ctx->pc = 0x4B0BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0BD0u;
    // 0x4b0bd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0D90u;
    goto label_4b0d90;
    ctx->pc = 0x4B0BD8u;
label_4b0bd8:
    // 0x4b0bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0bdc: 0x812c330  j           func_4B0CC0
    ctx->pc = 0x4B0BDCu;
    ctx->pc = 0x4B0BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0BDCu;
    // 0x4b0be0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0CC0u;
    goto label_4b0cc0;
    ctx->pc = 0x4B0BE4u;
    // 0x4b0be4: 0x0  nop
    ctx->pc = 0x4b0be4u;
    // NOP
label_4b0be8:
    // 0x4b0be8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0bec: 0x812c350  j           func_4B0D40
    ctx->pc = 0x4B0BECu;
    ctx->pc = 0x4B0BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0BECu;
    // 0x4b0bf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0D40u;
    goto label_4b0d40;
    ctx->pc = 0x4B0BF4u;
    // 0x4b0bf4: 0x0  nop
    ctx->pc = 0x4b0bf4u;
    // NOP
label_4b0bf8:
    // 0x4b0bf8: 0x812c470  j           func_4B11C0
    ctx->pc = 0x4B0BF8u;
    ctx->pc = 0x4B0BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0BF8u;
    // 0x4b0bfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B11C0u;
    goto label_4b11c0;
    ctx->pc = 0x4B0C00u;
label_4b0c00:
    // 0x4b0c00: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0C00u;
        // 0x4b0c04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0C08u;
label_4b0c08:
    // 0x4b0c08: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b0c08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b0c0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b0c0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b0c10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b0c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b0c14: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b0c14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b0c18: 0x8c460d60  lw          $a2, 0xD60($v0)
    ctx->pc = 0x4b0c18u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b0c1c: 0x24a50d30  addiu       $a1, $a1, 0xD30
    ctx->pc = 0x4b0c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3376));
    // 0x4b0c20: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4b0c20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b0c24: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4b0c24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4b0c28: 0x84c20162  lh          $v0, 0x162($a2)
    ctx->pc = 0x4b0c28u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 354)));
    // 0x4b0c2c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4b0c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b0c30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b0c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b0c34: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4b0c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4b0c38: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b0c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b0c3c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x4b0c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x4b0c40: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4b0c40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b0c44: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b0c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b0c48: 0x21c43  sra         $v1, $v0, 17
    ctx->pc = 0x4b0c48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4b0c4c: 0x10680010  beq         $v1, $t0, . + 4 + (0x10 << 2)
    ctx->pc = 0x4B0C4Cu;
    {
        const bool branch_taken_0x4b0c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x4B0C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0C4Cu;
        // 0x4b0c50: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0c4c) {
            ctx->pc = 0x4B0C90u;
            goto label_4b0c90;
        }
    }
    ctx->pc = 0x4B0C54u;
    // 0x4b0c54: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4B0C54u;
    {
        const bool branch_taken_0x4b0c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0c54) {
            ctx->pc = 0x4B0C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B0C54u;
            // 0x4b0c58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0C70u;
            goto label_4b0c70;
        }
    }
    ctx->pc = 0x4B0C5Cu;
    // 0x4b0c5c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x4B0C5Cu;
    {
        const bool branch_taken_0x4b0c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B0C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0C5Cu;
        // 0x4b0c60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0c5c) {
            ctx->pc = 0x4B0C88u;
            goto label_4b0c88;
        }
    }
    ctx->pc = 0x4B0C64u;
    // 0x4b0c64: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x4B0C64u;
    {
        const bool branch_taken_0x4b0c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0c64) {
            ctx->pc = 0x4B0CB8u;
            goto label_4b0cb8;
        }
    }
    ctx->pc = 0x4B0C6Cu;
    // 0x4b0c6c: 0x0  nop
    ctx->pc = 0x4b0c6cu;
    // NOP
label_4b0c70:
    // 0x4b0c70: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4B0C70u;
    {
        const bool branch_taken_0x4b0c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B0C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0C70u;
        // 0x4b0c74: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0c70) {
            ctx->pc = 0x4B0CA0u;
            goto label_4b0ca0;
        }
    }
    ctx->pc = 0x4B0C78u;
    // 0x4b0c78: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x4B0C78u;
    {
        const bool branch_taken_0x4b0c78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4B0C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0C78u;
        // 0x4b0c7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0c78) {
            ctx->pc = 0x4B0CB0u;
            goto label_4b0cb0;
        }
    }
    ctx->pc = 0x4B0C80u;
    // 0x4b0c80: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4B0C80u;
    {
        const bool branch_taken_0x4b0c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b0c80) {
            ctx->pc = 0x4B0CB8u;
            goto label_4b0cb8;
        }
    }
    ctx->pc = 0x4B0C88u;
label_4b0c88:
    // 0x4b0c88: 0x812c364  j           func_4B0D90
    ctx->pc = 0x4B0C88u;
    ctx->pc = 0x4B0C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0C88u;
    // 0x4b0c8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0D90u;
    goto label_4b0d90;
    ctx->pc = 0x4B0C90u;
label_4b0c90:
    // 0x4b0c90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0c94: 0x812c340  j           func_4B0D00
    ctx->pc = 0x4B0C94u;
    ctx->pc = 0x4B0C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0C94u;
    // 0x4b0c98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0D00u;
    goto label_4b0d00;
    ctx->pc = 0x4B0C9Cu;
    // 0x4b0c9c: 0x0  nop
    ctx->pc = 0x4b0c9cu;
    // NOP
label_4b0ca0:
    // 0x4b0ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0ca4: 0x812c350  j           func_4B0D40
    ctx->pc = 0x4B0CA4u;
    ctx->pc = 0x4B0CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0CA4u;
    // 0x4b0ca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B0D40u;
    goto label_4b0d40;
    ctx->pc = 0x4B0CACu;
    // 0x4b0cac: 0x0  nop
    ctx->pc = 0x4b0cacu;
    // NOP
label_4b0cb0:
    // 0x4b0cb0: 0x812c468  j           func_4B11A0
    ctx->pc = 0x4B0CB0u;
    ctx->pc = 0x4B0CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0CB0u;
    // 0x4b0cb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B11A0u;
    goto label_4b11a0;
    ctx->pc = 0x4B0CB8u;
label_4b0cb8:
    // 0x4b0cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B0CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B0CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0CB8u;
        // 0x4b0cbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B0CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B0CC0u;
label_4b0cc0:
    // 0x4b0cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b0cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b0cc4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b0cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b0cc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b0cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b0ccc: 0x24420d60  addiu       $v0, $v0, 0xD60
    ctx->pc = 0x4b0cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3424));
    // 0x4b0cd0: 0x2406005a  addiu       $a2, $zero, 0x5A
    ctx->pc = 0x4b0cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x4b0cd4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4b0cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b0cd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0cdc: 0xa4a60134  sh          $a2, 0x134($a1)
    ctx->pc = 0x4b0cdcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 308), (uint16_t)GPR_U32(ctx, 6));
    // 0x4b0ce0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4b0ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b0ce4: 0x24630162  addiu       $v1, $v1, 0x162
    ctx->pc = 0x4b0ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 354));
    // 0x4b0ce8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b0ce8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b0cec: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b0cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b0cf0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b0cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b0cf4: 0x812c476  j           func_4B11D8
    ctx->pc = 0x4B0CF4u;
    ctx->pc = 0x4B0CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0CF4u;
    // 0x4b0cf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B11D8u;
    goto label_4b11d8;
    ctx->pc = 0x4B0CFCu;
    // 0x4b0cfc: 0x0  nop
    ctx->pc = 0x4b0cfcu;
    // NOP
label_4b0d00:
    // 0x4b0d00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b0d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b0d04: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b0d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b0d08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b0d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b0d0c: 0x24420d60  addiu       $v0, $v0, 0xD60
    ctx->pc = 0x4b0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3424));
    // 0x4b0d10: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x4b0d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x4b0d14: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4b0d14u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b0d18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0d1c: 0xa4a60134  sh          $a2, 0x134($a1)
    ctx->pc = 0x4b0d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 308), (uint16_t)GPR_U32(ctx, 6));
    // 0x4b0d20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4b0d20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b0d24: 0x24630162  addiu       $v1, $v1, 0x162
    ctx->pc = 0x4b0d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 354));
    // 0x4b0d28: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b0d28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b0d2c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b0d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b0d30: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b0d30u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b0d34: 0x812c476  j           func_4B11D8
    ctx->pc = 0x4B0D34u;
    ctx->pc = 0x4B0D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0D34u;
    // 0x4b0d38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B11D8u;
    goto label_4b11d8;
    ctx->pc = 0x4B0D3Cu;
    // 0x4b0d3c: 0x0  nop
    ctx->pc = 0x4b0d3cu;
    // NOP
label_4b0d40:
    // 0x4b0d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b0d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b0d44: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4b0d44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4b0d48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b0d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b0d4c: 0x24c60d60  addiu       $a2, $a2, 0xD60
    ctx->pc = 0x4b0d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3424));
    // 0x4b0d50: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4b0d50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b0d54: 0x24630134  addiu       $v1, $v1, 0x134
    ctx->pc = 0x4b0d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 308));
    // 0x4b0d58: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b0d58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b0d5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4b0d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4b0d60: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b0d60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b0d64: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x4b0d64u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b0d68: 0x84a20134  lh          $v0, 0x134($a1)
    ctx->pc = 0x4b0d68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 308)));
    // 0x4b0d6c: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B0D6Cu;
    {
        const bool branch_taken_0x4b0d6c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B0D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0D6Cu;
        // 0x4b0d70: 0x24a30162  addiu       $v1, $a1, 0x162 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 354));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0d6c) {
            ctx->pc = 0x4B0D80u;
            goto label_4b0d80;
        }
    }
    ctx->pc = 0x4B0D74u;
    // 0x4b0d74: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b0d74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b0d78: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b0d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b0d7c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b0d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4b0d80:
    // 0x4b0d80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b0d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0d84: 0x812c476  j           func_4B11D8
    ctx->pc = 0x4B0D84u;
    ctx->pc = 0x4B0D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0D84u;
    // 0x4b0d88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B11D8u;
    goto label_4b11d8;
    ctx->pc = 0x4B0D8Cu;
    // 0x4b0d8c: 0x0  nop
    ctx->pc = 0x4b0d8cu;
    // NOP
label_4b0d90:
    // 0x4b0d90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4b0d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x4b0d94: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x4b0d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x4b0d98: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x4b0d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x4b0d9c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4b0d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4b0da0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x4b0da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x4b0da4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x4b0da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x4b0da8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x4b0da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x4b0dac: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x4b0dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x4b0db0: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x4b0db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x4b0db4: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x4b0db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x4b0db8: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x4b0db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x4b0dbc: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x4b0dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x4b0dc0: 0x8c620d60  lw          $v0, 0xD60($v1)
    ctx->pc = 0x4b0dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b0dc4: 0x84430120  lh          $v1, 0x120($v0)
    ctx->pc = 0x4b0dc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x4b0dc8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x4B0DC8u;
    {
        const bool branch_taken_0x4b0dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B0DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0DC8u;
        // 0x4b0dcc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0dc8) {
            ctx->pc = 0x4B0E00u;
            goto label_4b0e00;
        }
    }
    ctx->pc = 0x4B0DD0u;
    // 0x4b0dd0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4b0dd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b0dd4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4b0dd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b0dd8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4b0dd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b0ddc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4b0ddcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b0de0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4b0de0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b0de4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4b0de4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b0de8: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4b0de8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b0dec: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x4b0decu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4b0df0: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x4b0df0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b0df4: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x4b0df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4b0df8: 0x812c476  j           func_4B11D8
    ctx->pc = 0x4B0DF8u;
    ctx->pc = 0x4B0DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0DF8u;
    // 0x4b0dfc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B11D8u;
    goto label_4b11d8;
    ctx->pc = 0x4B0E00u;
label_4b0e00:
    // 0x4b0e00: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b0e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b0e04: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4b0e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4b0e08: 0x244a0d48  addiu       $t2, $v0, 0xD48
    ctx->pc = 0x4b0e08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 3400));
    // 0x4b0e0c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x4b0e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x4b0e10: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4b0e10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D48u));
    // 0x4b0e14: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b0e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b0e18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b0e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b0e1c: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x4b0e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
    // 0x4b0e20: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x4b0e20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b0e24: 0x46000cb  bltz        $v1, . + 4 + (0xCB << 2)
    ctx->pc = 0x4B0E24u;
    {
        const bool branch_taken_0x4b0e24 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4B0E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B0E24u;
        // 0x4b0e28: 0x3c08007f  lui         $t0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b0e24) {
            ctx->pc = 0x4B1154u;
            goto label_4b1154;
        }
    }
    ctx->pc = 0x4B0E2Cu;
    // 0x4b0e2c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4b0e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4b0e30: 0x26640120  addiu       $a0, $s3, 0x120
    ctx->pc = 0x4b0e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
    // 0x4b0e34: 0x25160d44  addiu       $s6, $t0, 0xD44
    ctx->pc = 0x4b0e34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 8), 3396));
    // 0x4b0e38: 0x26680164  addiu       $t0, $s3, 0x164
    ctx->pc = 0x4b0e38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 356));
    // 0x4b0e3c: 0x2452d680  addiu       $s2, $v0, -0x2980
    ctx->pc = 0x4b0e3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4b0e40: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x4b0e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x4b0e44: 0x26640014  addiu       $a0, $s3, 0x14
    ctx->pc = 0x4b0e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x4b0e48: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x4b0e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x4b0e4c: 0x26680018  addiu       $t0, $s3, 0x18
    ctx->pc = 0x4b0e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x4b0e50: 0x26620166  addiu       $v0, $s3, 0x166
    ctx->pc = 0x4b0e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 358));
    // 0x4b0e54: 0x26630010  addiu       $v1, $s3, 0x10
    ctx->pc = 0x4b0e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x4b0e58: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4b0e58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4b0e5c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4b0e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4b0e60: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4b0e60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4b0e64: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4b0e64u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4b0e68: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4b0e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x4b0e6c: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x4b0e6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0e70: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x4b0e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x4b0e74: 0x24b00d30  addiu       $s0, $a1, 0xD30
    ctx->pc = 0x4b0e74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 3376));
    // 0x4b0e78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x4b0e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x4b0e7c: 0x24de0d3c  addiu       $fp, $a2, 0xD3C
    ctx->pc = 0x4b0e7cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 6), 3388));
    // 0x4b0e80: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x4b0e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
    // 0x4b0e84: 0x24f70d40  addiu       $s7, $a3, 0xD40
    ctx->pc = 0x4b0e84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 7), 3392));
    // 0x4b0e88: 0x25350d34  addiu       $s5, $t1, 0xD34
    ctx->pc = 0x4b0e88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 9), 3380));
    // 0x4b0e8c: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4b0e8cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4b0e90: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4b0e90u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b0e94: 0x0  nop
    ctx->pc = 0x4b0e94u;
    // NOP
label_4b0e98:
    // 0x4b0e98: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4b0e98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b0e9c: 0xd13024  and         $a2, $a2, $s1
    ctx->pc = 0x4b0e9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
    // 0x4b0ea0: 0x8fc90000  lw          $t1, 0x0($fp)
    ctx->pc = 0x4b0ea0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4b0ea4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4b0ea4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x4b0ea8: 0x8ee80000  lw          $t0, 0x0($s7)
    ctx->pc = 0x4b0ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4b0eac: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4b0eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4b0eb0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b0eb0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b0eb4: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x4b0eb4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4b0eb8: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4b0eb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4b0ebc: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4b0ebcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b0ec0: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x4b0ec0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b0ec4: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x4b0ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4b0ec8: 0x8ec70000  lw          $a3, 0x0($s6)
    ctx->pc = 0x4b0ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b0ecc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4b0eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4b0ed0: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4b0ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4b0ed4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4b0ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4b0ed8: 0x24840d54  addiu       $a0, $a0, 0xD54
    ctx->pc = 0x4b0ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3412));
    // 0x4b0edc: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b0edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b0ee0: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x4b0ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b0ee4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b0ee4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b0ee8: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x4b0ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x4b0eec: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4b0eecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4b0ef0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b0ef0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b0ef4: 0x24636d18  addiu       $v1, $v1, 0x6D18
    ctx->pc = 0x4b0ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27928));
    // 0x4b0ef8: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4b0ef8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4b0efc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4b0efcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b0f00: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b0f00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b0f04: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4b0f04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4b0f08: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4b0f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4b0f0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b0f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4b0f10: 0x244b0004  addiu       $t3, $v0, 0x4
    ctx->pc = 0x4b0f10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x4b0f14: 0x244a0002  addiu       $t2, $v0, 0x2
    ctx->pc = 0x4b0f14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b0f18: 0x85640000  lh          $a0, 0x0($t3)
    ctx->pc = 0x4b0f18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b0f1c: 0x244c0006  addiu       $t4, $v0, 0x6
    ctx->pc = 0x4b0f1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x4b0f20: 0x85430000  lh          $v1, 0x0($t2)
    ctx->pc = 0x4b0f20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b0f24: 0x84450000  lh          $a1, 0x0($v0)
    ctx->pc = 0x4b0f24u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b0f28: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4b0f28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4b0f2c: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4b0f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4b0f30: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x4b0f30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x4b0f34: 0xb12825  or          $a1, $a1, $s1
    ctx->pc = 0x4b0f34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x4b0f38: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4b0f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4b0f3c: 0x1254824  and         $t1, $t1, $a1
    ctx->pc = 0x4b0f3cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x4b0f40: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4b0f40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4b0f44: 0x24840d68  addiu       $a0, $a0, 0xD68
    ctx->pc = 0x4b0f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3432));
    // 0x4b0f48: 0xaee80000  sw          $t0, 0x0($s7)
    ctx->pc = 0x4b0f48u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 8));
    // 0x4b0f4c: 0xafc90000  sw          $t1, 0x0($fp)
    ctx->pc = 0x4b0f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 9));
    // 0x4b0f50: 0xaec70000  sw          $a3, 0x0($s6)
    ctx->pc = 0x4b0f50u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 7));
    // 0x4b0f54: 0xac8c0000  sw          $t4, 0x0($a0)
    ctx->pc = 0x4b0f54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 12));
    // 0x4b0f58: 0x8fa80008  lw          $t0, 0x8($sp)
    ctx->pc = 0x4b0f58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b0f5c: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4b0f5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b0f60: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b0f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b0f64: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b0f64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b0f68: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x4b0f68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x4b0f6c: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B0F6Cu;
    SET_GPR_U32(ctx, 31, 0x4B0F74u);
    ctx->pc = 0x4B0F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0F6Cu;
    // 0x4b0f70: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B0F6Cu, 0x4B0F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0F74u;
label_4b0f74:
    // 0x4b0f74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b0f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0f78: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b0f78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b0f7c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B0F7Cu;
    SET_GPR_U32(ctx, 31, 0x4B0F84u);
    ctx->pc = 0x4B0F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0F7Cu;
    // 0x4b0f80: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B0F7Cu, 0x4B0F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0F84u;
label_4b0f84:
    // 0x4b0f84: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4b0f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0f88: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4b0f88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b0f8c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4b0f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0f90: 0xc12b8a8  jal         func_4AE2A0
    ctx->pc = 0x4B0F90u;
    SET_GPR_U32(ctx, 31, 0x4B0F98u);
    ctx->pc = 0x4B0F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0F90u;
    // 0x4b0f94: 0x8ea70000  lw          $a3, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE2A0u, 0x4B0F90u, 0x4B0F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0F98u;
label_4b0f98:
    // 0x4b0f98: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b0f98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b0f9c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4b0f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b0fa0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b0fa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b0fa4: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4b0fa4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b0fa8: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b0fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b0fac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b0facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b0fb0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b0fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b0fb4: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B0FB4u;
    SET_GPR_U32(ctx, 31, 0x4B0FBCu);
    ctx->pc = 0x4B0FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0FB4u;
    // 0x4b0fb8: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B0FB4u, 0x4B0FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0FBCu;
label_4b0fbc:
    // 0x4b0fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b0fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0fc0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b0fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b0fc4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B0FC4u;
    SET_GPR_U32(ctx, 31, 0x4B0FCCu);
    ctx->pc = 0x4B0FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0FC4u;
    // 0x4b0fc8: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B0FC4u, 0x4B0FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0FCCu;
label_4b0fcc:
    // 0x4b0fcc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4b0fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0fd0: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4b0fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b0fd4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4b0fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b0fd8: 0xc12b84e  jal         func_4AE138
    ctx->pc = 0x4B0FD8u;
    SET_GPR_U32(ctx, 31, 0x4B0FE0u);
    ctx->pc = 0x4B0FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0FD8u;
    // 0x4b0fdc: 0x8ea70000  lw          $a3, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE138u, 0x4B0FD8u, 0x4B0FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0FE0u;
label_4b0fe0:
    // 0x4b0fe0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4b0fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b0fe4: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x4b0fe4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4b0fe8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b0fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b0fec: 0x85020000  lh          $v0, 0x0($t0)
    ctx->pc = 0x4b0fecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b0ff0: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b0ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b0ff4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b0ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b0ff8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b0ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4b0ffc: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B0FFCu;
    SET_GPR_U32(ctx, 31, 0x4B1004u);
    ctx->pc = 0x4B1000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0FFCu;
    // 0x4b1000: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B0FFCu, 0x4B1004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1004u;
label_4b1004:
    // 0x4b1004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b1004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1008: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b1008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b100c: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4B100Cu;
    SET_GPR_U32(ctx, 31, 0x4B1014u);
    ctx->pc = 0x4B1010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B100Cu;
    // 0x4b1010: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4B100Cu, 0x4B1014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1014u;
label_4b1014:
    // 0x4b1014: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x4b1014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1018: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x4b1018u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b101c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4b101cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b1020: 0xc12b87a  jal         func_4AE1E8
    ctx->pc = 0x4B1020u;
    SET_GPR_U32(ctx, 31, 0x4B1028u);
    ctx->pc = 0x4B1024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1020u;
    // 0x4b1024: 0x8ea70000  lw          $a3, 0x0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE1E8u, 0x4B1020u, 0x4B1028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1028u;
label_4b1028:
    // 0x4b1028: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4b1028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4b102c: 0x3c080073  lui         $t0, 0x73
    ctx->pc = 0x4b102cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)115 << 16));
    // 0x4b1030: 0x96c30000  lhu         $v1, 0x0($s6)
    ctx->pc = 0x4b1030u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4b1034: 0x2508fb18  addiu       $t0, $t0, -0x4E8
    ctx->pc = 0x4b1034u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966040));
    // 0x4b1038: 0x2442fb14  addiu       $v0, $v0, -0x4EC
    ctx->pc = 0x4b1038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966036));
    // 0x4b103c: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4b103cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x72FB18u));
    // 0x4b1040: 0x3c080073  lui         $t0, 0x73
    ctx->pc = 0x4b1040u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)115 << 16));
    // 0x4b1044: 0x2508fb1c  addiu       $t0, $t0, -0x4E4
    ctx->pc = 0x4b1044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966044));
    // 0x4b1048: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x4b1048u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x72FB14u));
    // 0x4b104c: 0x97c50000  lhu         $a1, 0x0($fp)
    ctx->pc = 0x4b104cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4b1050: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4b1050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4b1054: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4b1054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b1058: 0x3c080073  lui         $t0, 0x73
    ctx->pc = 0x4b1058u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)115 << 16));
    // 0x4b105c: 0x96e60000  lhu         $a2, 0x0($s7)
    ctx->pc = 0x4b105cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4b1060: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b1060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b1064: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4b1064u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4b1068: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b1068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b106c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b106cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b1070: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4b1070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4b1074: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b1074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b1078: 0xf13825  or          $a3, $a3, $s1
    ctx->pc = 0x4b1078u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 17));
    // 0x4b107c: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x4b107cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x4b1080: 0x2463fb14  addiu       $v1, $v1, -0x4EC
    ctx->pc = 0x4b1080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966036));
    // 0x4b1084: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x4b1084u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4b1088: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x4b1088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x4b108c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b108cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b1090: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4b1090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4b1094: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4b1094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4b1098: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x4b1098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x4b109c: 0x2508fb18  addiu       $t0, $t0, -0x4E8
    ctx->pc = 0x4b109cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966040));
    // 0x4b10a0: 0x2463fb1c  addiu       $v1, $v1, -0x4E4
    ctx->pc = 0x4b10a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966044));
    // 0x4b10a4: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4b10a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4b10a8: 0xc12b8da  jal         func_4AE368
    ctx->pc = 0x4B10A8u;
    SET_GPR_U32(ctx, 31, 0x4B10B0u);
    ctx->pc = 0x4B10ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B10A8u;
    // 0x4b10ac: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AE368u, 0x4B10A8u, 0x4B10B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B10B0u;
label_4b10b0:
    // 0x4b10b0: 0x964324a0  lhu         $v1, 0x24A0($s2)
    ctx->pc = 0x4b10b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 9376)));
    // 0x4b10b4: 0x964224a2  lhu         $v0, 0x24A2($s2)
    ctx->pc = 0x4b10b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 9378)));
    // 0x4b10b8: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x4b10b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x4b10bc: 0xa643233a  sh          $v1, 0x233A($s2)
    ctx->pc = 0x4b10bcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9018), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b10c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b10c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b10c4: 0xa642233c  sh          $v0, 0x233C($s2)
    ctx->pc = 0x4b10c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9020), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b10c8: 0xa640233e  sh          $zero, 0x233E($s2)
    ctx->pc = 0x4b10c8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9022), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b10cc: 0x8fa8000c  lw          $t0, 0xC($sp)
    ctx->pc = 0x4b10ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4b10d0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4b10d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b10d4: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4b10d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4b10d8: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4b10d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b10dc: 0xa6422334  sh          $v0, 0x2334($s2)
    ctx->pc = 0x4b10dcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9012), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b10e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4b10e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b10e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4b10e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4b10e8: 0x711824  and         $v1, $v1, $s1
    ctx->pc = 0x4b10e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
    // 0x4b10ec: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4b10ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4b10f0: 0xa6432336  sh          $v1, 0x2336($s2)
    ctx->pc = 0x4b10f0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9014), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b10f4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x4b10f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4b10f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4b10f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b10fc: 0xa6452330  sh          $a1, 0x2330($s2)
    ctx->pc = 0x4b10fcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 9008), (uint16_t)GPR_U32(ctx, 5));
    // 0x4b1100: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x4b1100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4b1104: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4b1104u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4b1108: 0xc127ac8  jal         func_49EB20
    ctx->pc = 0x4B1108u;
    SET_GPR_U32(ctx, 31, 0x4B1110u);
    ctx->pc = 0x4B110Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1108u;
    // 0x4b110c: 0xa6422338  sh          $v0, 0x2338($s2) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 18), 9016), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49EB20u, 0x4B1108u, 0x4B1110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B1110u;
label_4b1110:
    // 0x4b1110: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x4b1110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b1114: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4b1114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4b1118: 0x24840d54  addiu       $a0, $a0, 0xD54
    ctx->pc = 0x4b1118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3412));
    // 0x4b111c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b111cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b1120: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4b1120u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x7F0D54u));
    // 0x4b1124: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b1124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b1128: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b1128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b112c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4b112cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4b1130: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b1130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b1134: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4b1134u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b1138: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4b1138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4b113c: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x4b113cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x4b1140: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b1140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b1144: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x4b1144u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x4b1148: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4b1148u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b114c: 0x443ff52  bgezl       $v0, . + 4 + (-0xAE << 2)
    ctx->pc = 0x4B114Cu;
    {
        const bool branch_taken_0x4b114c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4b114c) {
            ctx->pc = 0x4B1150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B114Cu;
            // 0x4b1150: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B0E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4b0e98;
        }
    }
    ctx->pc = 0x4B1154u;
label_4b1154:
    // 0x4b1154: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4b1154u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4b1158: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b1158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b115c: 0x8d030d60  lw          $v1, 0xD60($t0)
    ctx->pc = 0x4b115cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b1160: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4b1160u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b1164: 0x24630162  addiu       $v1, $v1, 0x162
    ctx->pc = 0x4b1164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 354));
    // 0x4b1168: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x4b1168u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b116c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4b116cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4b1170: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x4b1170u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4b1174: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x4b1174u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4b1178: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4b1178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4b117c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x4b117cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4b1180: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x4b1180u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4b1184: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x4b1184u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4b1188: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x4b1188u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4b118c: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x4b118cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4b1190: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x4b1190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4b1194: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4b1194u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b1198: 0x812c476  j           func_4B11D8
    ctx->pc = 0x4B1198u;
    ctx->pc = 0x4B119Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B1198u;
    // 0x4b119c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B11D8u;
    goto label_4b11d8;
    ctx->pc = 0x4B11A0u;
label_4b11a0:
    // 0x4b11a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b11a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b11a4: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b11a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b11a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b11ac: 0x8c430d60  lw          $v1, 0xD60($v0)
    ctx->pc = 0x4b11acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b11b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b11b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b11b4: 0xa4600162  sh          $zero, 0x162($v1)
    ctx->pc = 0x4b11b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 354), (uint16_t)GPR_U32(ctx, 0));
    // 0x4b11b8: 0x812c476  j           func_4B11D8
    ctx->pc = 0x4B11B8u;
    ctx->pc = 0x4B11BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B11B8u;
    // 0x4b11bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B11D8u;
    goto label_4b11d8;
    ctx->pc = 0x4B11C0u;
label_4b11c0:
    // 0x4b11c0: 0x248401b6  addiu       $a0, $a0, 0x1B6
    ctx->pc = 0x4b11c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 438));
    // 0x4b11c4: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4b11c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b11c8: 0x3042f9ff  andi        $v0, $v0, 0xF9FF
    ctx->pc = 0x4b11c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63999);
    // 0x4b11cc: 0x3e00008  jr          $ra
    ctx->pc = 0x4B11CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B11D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B11CCu;
        // 0x4b11d0: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B11CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B11D4u;
    // 0x4b11d4: 0x0  nop
    ctx->pc = 0x4b11d4u;
    // NOP
label_4b11d8:
    // 0x4b11d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4B11D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B11D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B11E0u;
}
