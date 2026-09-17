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

// Function: sub_004ACF50
// Address: 0x4acf50 - 0x4ad5e0
void sub_004ACF50_0x4acf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ACF50_0x4acf50");
#endif

    switch (ctx->pc) {
        case 0x4acf68u: goto label_4acf68;
        case 0x4ad0b8u: goto label_4ad0b8;
        case 0x4ad228u: goto label_4ad228;
        case 0x4ad248u: goto label_4ad248;
        case 0x4ad250u: goto label_4ad250;
        case 0x4ad270u: goto label_4ad270;
        case 0x4ad358u: goto label_4ad358;
        case 0x4ad380u: goto label_4ad380;
        case 0x4ad3e0u: goto label_4ad3e0;
        case 0x4ad4b0u: goto label_4ad4b0;
        case 0x4ad4c0u: goto label_4ad4c0;
        case 0x4ad4c8u: goto label_4ad4c8;
        case 0x4ad4f0u: goto label_4ad4f0;
        case 0x4ad530u: goto label_4ad530;
        case 0x4ad540u: goto label_4ad540;
        case 0x4ad560u: goto label_4ad560;
        case 0x4ad580u: goto label_4ad580;
        case 0x4ad5acu: goto label_4ad5ac;
        case 0x4ad5b4u: goto label_4ad5b4;
        case 0x4ad5bcu: goto label_4ad5bc;
        default: break;
    }

    ctx->pc = 0x4acf50u;

    // 0x4acf50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4acf50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4acf54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4acf54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acf58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4acf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4acf5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4acf5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4acf60: 0x812b3da  j           func_4ACF68
    ctx->pc = 0x4ACF60u;
    ctx->pc = 0x4ACF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACF60u;
    // 0x4acf64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACF68u;
    goto label_4acf68;
    ctx->pc = 0x4ACF68u;
label_4acf68:
    // 0x4acf68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4acf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4acf6c: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x4acf6cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acf70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4acf70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4acf74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4acf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4acf78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4acf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4acf7c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4acf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4acf80: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4acf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4acf84: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4acf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4acf88: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4acf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4acf8c: 0x14a00044  bnez        $a1, . + 4 + (0x44 << 2)
    ctx->pc = 0x4ACF8Cu;
    {
        const bool branch_taken_0x4acf8c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4ACF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACF8Cu;
        // 0x4acf90: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acf8c) {
            ctx->pc = 0x4AD0A0u;
            goto label_4ad0a0;
        }
    }
    ctx->pc = 0x4ACF94u;
    // 0x4acf94: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4acf94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4acf98: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x4acf98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
    // 0x4acf9c: 0x26090cd4  addiu       $t1, $s0, 0xCD4
    ctx->pc = 0x4acf9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 3284));
    // 0x4acfa0: 0x84a2f980  lh          $v0, -0x680($a1)
    ctx->pc = 0x4acfa0u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72F980u));
    // 0x4acfa4: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x4acfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0CD4u));
    // 0x4acfa8: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4acfa8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4acfac: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4acfacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4acfb0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4acfb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4acfb4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4acfb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4acfb8: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x4acfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x4acfbc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4acfbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4acfc0: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x4acfc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4acfc4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x4acfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x4acfc8: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4acfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4acfcc: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x4acfccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4acfd0: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4acfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x4acfd4: 0x85220000  lh          $v0, 0x0($t1)
    ctx->pc = 0x4acfd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4acfd8: 0x544000d5  bnel        $v0, $zero, . + 4 + (0xD5 << 2)
    ctx->pc = 0x4ACFD8u;
    {
        const bool branch_taken_0x4acfd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4acfd8) {
            ctx->pc = 0x4ACFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4ACFD8u;
            // 0x4acfdc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD330u;
            goto label_4ad330;
        }
    }
    ctx->pc = 0x4ACFE0u;
    // 0x4acfe0: 0x8d820010  lw          $v0, 0x10($t4)
    ctx->pc = 0x4acfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x4acfe4: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4acfe4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4acfe8: 0x26a70cdc  addiu       $a3, $s5, 0xCDC
    ctx->pc = 0x4acfe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 3292));
    // 0x4acfec: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4acfecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4acff0: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4acff0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0CDCu));
    // 0x4acff4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4acff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4acff8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4acff8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4acffc: 0x268b0ce0  addiu       $t3, $s4, 0xCE0
    ctx->pc = 0x4acffcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 20), 3296));
    // 0x4ad000: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4ad000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4ad004: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ad004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ad008: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ad008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ad00c: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x4ad00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ad010: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4ad010u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4ad014: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4ad014u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
    // 0x4ad018: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4ad018u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4ad01c: 0x26670ce4  addiu       $a3, $s3, 0xCE4
    ctx->pc = 0x4ad01cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 3300));
    // 0x4ad020: 0x8d820014  lw          $v0, 0x14($t4)
    ctx->pc = 0x4ad020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 20)));
    // 0x4ad024: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ad024u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ad028: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4ad028u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0CE4u));
    // 0x4ad02c: 0xc83024  and         $a2, $a2, $t0
    ctx->pc = 0x4ad02cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 8));
    // 0x4ad030: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4ad030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4ad034: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ad034u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ad038: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ad038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ad03c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4ad03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4ad040: 0xa25024  and         $t2, $a1, $v0
    ctx->pc = 0x4ad040u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4ad044: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x4ad044u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x4ad048: 0x8d820018  lw          $v0, 0x18($t4)
    ctx->pc = 0x4ad048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 24)));
    // 0x4ad04c: 0xad260000  sw          $a2, 0x0($t1)
    ctx->pc = 0x4ad04cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    // 0x4ad050: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4ad050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4ad054: 0x85660000  lh          $a2, 0x0($t3)
    ctx->pc = 0x4ad054u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ad058: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ad058u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ad05c: 0x85250000  lh          $a1, 0x0($t1)
    ctx->pc = 0x4ad05cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ad060: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4ad060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4ad064: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ad064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ad068: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x4ad068u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x4ad06c: 0x44000af  bltz        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x4AD06Cu;
    {
        const bool branch_taken_0x4ad06c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4AD070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD06Cu;
        // 0x4ad070: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad06c) {
            ctx->pc = 0x4AD32Cu;
            goto label_4ad32c;
        }
    }
    ctx->pc = 0x4AD074u;
    // 0x4ad074: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4ad074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4ad078: 0x3543ffff  ori         $v1, $t2, 0xFFFF
    ctx->pc = 0x4ad078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4ad07c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ad07cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ad080: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4ad080u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4ad084: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4ad084u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4ad088: 0x2442ff00  addiu       $v0, $v0, -0x100
    ctx->pc = 0x4ad088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967040));
    // 0x4ad08c: 0x44300a8  bgezl       $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x4AD08Cu;
    {
        const bool branch_taken_0x4ad08c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4ad08c) {
            ctx->pc = 0x4AD090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AD08Cu;
            // 0x4ad090: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD330u;
            goto label_4ad330;
        }
    }
    ctx->pc = 0x4AD094u;
    // 0x4ad094: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4AD094u;
    {
        const bool branch_taken_0x4ad094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ad094) {
            ctx->pc = 0x4AD0B0u;
            goto label_4ad0b0;
        }
    }
    ctx->pc = 0x4AD09Cu;
    // 0x4ad09c: 0x0  nop
    ctx->pc = 0x4ad09cu;
    // NOP
label_4ad0a0:
    // 0x4ad0a0: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4ad0a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4ad0a4: 0x3c15007f  lui         $s5, 0x7F
    ctx->pc = 0x4ad0a4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)127 << 16));
    // 0x4ad0a8: 0x3c14007f  lui         $s4, 0x7F
    ctx->pc = 0x4ad0a8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)127 << 16));
    // 0x4ad0ac: 0x3c13007f  lui         $s3, 0x7F
    ctx->pc = 0x4ad0acu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)127 << 16));
label_4ad0b0:
    // 0x4ad0b0: 0xc12b5dc  jal         func_4AD770
    ctx->pc = 0x4AD0B0u;
    SET_GPR_U32(ctx, 31, 0x4AD0B8u);
    ctx->pc = 0x4AD0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD0B0u;
    // 0x4ad0b4: 0x86110cd4  lh          $s1, 0xCD4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 3284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD770u, 0x4AD0B0u, 0x4AD0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD0B8u;
label_4ad0b8:
    // 0x4ad0b8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4ad0b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad0bc: 0x240200c2  addiu       $v0, $zero, 0xC2
    ctx->pc = 0x4ad0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
    // 0x4ad0c0: 0xa6c20008  sh          $v0, 0x8($s6)
    ctx->pc = 0x4ad0c0u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ad0c4: 0x26840ce0  addiu       $a0, $s4, 0xCE0
    ctx->pc = 0x4ad0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 3296));
    // 0x4ad0c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4ad0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ad0cc: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4ad0ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4ad0d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AD0D0u;
    {
        const bool branch_taken_0x4ad0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AD0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD0D0u;
        // 0x4ad0d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad0d0) {
            ctx->pc = 0x4AD0E8u;
            goto label_4ad0e8;
        }
    }
    ctx->pc = 0x4AD0D8u;
    // 0x4ad0d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4ad0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4ad0dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4AD0DCu;
    {
        const bool branch_taken_0x4ad0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD0DCu;
        // 0x4ad0e0: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad0dc) {
            ctx->pc = 0x4AD0ECu;
            goto label_4ad0ec;
        }
    }
    ctx->pc = 0x4AD0E4u;
    // 0x4ad0e4: 0x0  nop
    ctx->pc = 0x4ad0e4u;
    // NOP
label_4ad0e8:
    // 0x4ad0e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4ad0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_4ad0ec:
    // 0x4ad0ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ad0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ad0f0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4ad0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4ad0f4: 0x26940ce0  addiu       $s4, $s4, 0xCE0
    ctx->pc = 0x4ad0f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3296));
    // 0x4ad0f8: 0x26100cd4  addiu       $s0, $s0, 0xCD4
    ctx->pc = 0x4ad0f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3284));
    // 0x4ad0fc: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4ad0fcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4ad100: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4ad100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ad104: 0x26b50cdc  addiu       $s5, $s5, 0xCDC
    ctx->pc = 0x4ad104u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 3292));
    // 0x4ad108: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x4ad108u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ad10c: 0x26c80010  addiu       $t0, $s6, 0x10
    ctx->pc = 0x4ad10cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x4ad110: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ad110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad114: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ad114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ad118: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ad118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ad11c: 0x26c90014  addiu       $t1, $s6, 0x14
    ctx->pc = 0x4ad11cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), 20));
    // 0x4ad120: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4ad120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4ad124: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4ad124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4ad128: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x4ad128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x4ad12c: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x4ad12cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
    // 0x4ad130: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4ad130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4ad134: 0x113400  sll         $a2, $s1, 16
    ctx->pc = 0x4ad134u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x4ad138: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ad138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ad13c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ad13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ad140: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4ad140u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4ad144: 0x26730ce4  addiu       $s3, $s3, 0xCE4
    ctx->pc = 0x4ad144u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3300));
    // 0x4ad148: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ad148u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad14c: 0x26c70018  addiu       $a3, $s6, 0x18
    ctx->pc = 0x4ad14cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
    // 0x4ad150: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x4ad150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4ad154: 0x3c11007f  lui         $s1, 0x7F
    ctx->pc = 0x4ad154u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)127 << 16));
    // 0x4ad158: 0x304200e0  andi        $v0, $v0, 0xE0
    ctx->pc = 0x4ad158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)224);
    // 0x4ad15c: 0x26310cd8  addiu       $s1, $s1, 0xCD8
    ctx->pc = 0x4ad15cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3288));
    // 0x4ad160: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ad160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ad164: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ad164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ad168: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ad168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ad16c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ad16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ad170: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ad170u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad174: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ad174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ad178: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x4ad178u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
    // 0x4ad17c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ad17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ad180: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ad180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ad184: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ad184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ad188: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ad188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ad18c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ad18cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad190: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x4ad190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x4ad194: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ad194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ad198: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ad198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ad19c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ad19cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ad1a0: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x4ad1a0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad1a4: 0xa6c501be  sh          $a1, 0x1BE($s6)
    ctx->pc = 0x4ad1a4u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 446), (uint16_t)GPR_U32(ctx, 5));
    // 0x4ad1a8: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x4ad1a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ad1ac: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4ad1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4ad1b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ad1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ad1b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4ad1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4ad1b8: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4ad1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4ad1bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ad1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ad1c0: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4ad1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4ad1c4: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4ad1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4ad1c8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ad1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ad1cc: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4ad1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4ad1d0: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4ad1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x4ad1d4: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4ad1d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ad1d8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4ad1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4ad1dc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4ad1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ad1e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ad1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ad1e4: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ad1e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ad1e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4ad1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4ad1ec: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4ad1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4ad1f0: 0xa6c00162  sh          $zero, 0x162($s6)
    ctx->pc = 0x4ad1f0u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 354), (uint16_t)GPR_U32(ctx, 0));
    // 0x4ad1f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ad1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad1f8: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4ad1f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ad1fc: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4ad1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4ad200: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4ad200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4ad204: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ad204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ad208: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ad208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ad20c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ad20cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad210: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x4ad210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x4ad214: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ad214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ad218: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ad218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ad21c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ad21cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ad220: 0xc13e438  jal         func_4F90E0
    ctx->pc = 0x4AD220u;
    SET_GPR_U32(ctx, 31, 0x4AD228u);
    ctx->pc = 0x4AD224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD220u;
    // 0x4ad224: 0x86050000  lh          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F90E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F90E0u, 0x4AD220u, 0x4AD228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD228u;
label_4ad228:
    // 0x4ad228: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ad228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad22c: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ad22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ad230: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ad230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ad234: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ad234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ad238: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ad238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ad23c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ad23cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad240: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4AD240u;
    SET_GPR_U32(ctx, 31, 0x4AD248u);
    ctx->pc = 0x4AD244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD240u;
    // 0x4ad244: 0xa6c20164  sh          $v0, 0x164($s6) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 22), 356), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4AD240u, 0x4AD248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD248u;
label_4ad248:
    // 0x4ad248: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4AD248u;
    SET_GPR_U32(ctx, 31, 0x4AD250u);
    ctx->pc = 0x4AD24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD248u;
    // 0x4ad24c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4AD248u, 0x4AD250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD250u;
label_4ad250:
    // 0x4ad250: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x4ad250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ad254: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x4ad254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4ad258: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4ad258u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4ad25c: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4ad25cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4ad260: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ad260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad264: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4ad264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4ad268: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4AD268u;
    SET_GPR_U32(ctx, 31, 0x4AD270u);
    ctx->pc = 0x4AD26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD268u;
    // 0x4ad26c: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4AD268u, 0x4AD270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD270u;
label_4ad270:
    // 0x4ad270: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ad270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad274: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x4ad274u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4ad278: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4ad278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4ad27c: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x4ad27cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4ad280: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4ad280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4ad284: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4ad284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ad288: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ad288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ad28c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ad28cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ad290: 0x922024  and         $a0, $a0, $s2
    ctx->pc = 0x4ad290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 18));
    // 0x4ad294: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ad294u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad298: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4ad298u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x4ad29c: 0x86660000  lh          $a2, 0x0($s3)
    ctx->pc = 0x4ad29cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ad2a0: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x4ad2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x4ad2a4: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x4ad2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
    // 0x4ad2a8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ad2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ad2ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ad2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ad2b0: 0x86a50000  lh          $a1, 0x0($s5)
    ctx->pc = 0x4ad2b0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ad2b4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ad2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ad2b8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ad2b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ad2bc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ad2bcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad2c0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4ad2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4ad2c4: 0x21583  sra         $v0, $v0, 22
    ctx->pc = 0x4ad2c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x4ad2c8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ad2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ad2cc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ad2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ad2d0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ad2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ad2d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4ad2d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4ad2d8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ad2d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad2dc: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x4ad2dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x4ad2e0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4ad2e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4ad2e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4ad2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ad2e8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4ad2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4ad2ec: 0x86040000  lh          $a0, 0x0($s0)
    ctx->pc = 0x4ad2ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad2f0: 0xa42818  mult        $a1, $a1, $a0
    ctx->pc = 0x4ad2f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4ad2f4: 0x70c43018  mult1       $a2, $a2, $a0
    ctx->pc = 0x4ad2f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x4ad2f8: 0xb21024  and         $v0, $a1, $s2
    ctx->pc = 0x4ad2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
    // 0x4ad2fc: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x4ad2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
    // 0x4ad300: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4ad300u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4ad304: 0xaea50000  sw          $a1, 0x0($s5)
    ctx->pc = 0x4ad304u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 5));
    // 0x4ad308: 0xa6c2015e  sh          $v0, 0x15E($s6)
    ctx->pc = 0x4ad308u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 350), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ad30c: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x4ad30cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4ad310: 0xa6c30160  sh          $v1, 0x160($s6)
    ctx->pc = 0x4ad310u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 352), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ad314: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4ad314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ad318: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4ad318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4ad31c: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4ad31cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4ad320: 0xa6c20166  sh          $v0, 0x166($s6)
    ctx->pc = 0x4ad320u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 358), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ad324: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x4ad324u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x4ad328: 0xa6c30168  sh          $v1, 0x168($s6)
    ctx->pc = 0x4ad328u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 360), (uint16_t)GPR_U32(ctx, 3));
label_4ad32c:
    // 0x4ad32c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ad32cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ad330:
    // 0x4ad330: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4ad330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ad334: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4ad334u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ad338: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4ad338u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4ad33c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4ad33cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ad340: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4ad340u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4ad344: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4ad344u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ad348: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4ad348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4ad34c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD34Cu;
        // 0x4ad350: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD354u;
    // 0x4ad354: 0x0  nop
    ctx->pc = 0x4ad354u;
    // NOP
label_4ad358:
    // 0x4ad358: 0x3c0a0073  lui         $t2, 0x73
    ctx->pc = 0x4ad358u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)115 << 16));
    // 0x4ad35c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4ad35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4ad360: 0x2543d680  addiu       $v1, $t2, -0x2980
    ctx->pc = 0x4ad360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956672));
    // 0x4ad364: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x4ad364u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x4ad368: 0x8c6421f8  lw          $a0, 0x21F8($v1)
    ctx->pc = 0x4ad368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8696)));
    // 0x4ad36c: 0x2484f448  addiu       $a0, $a0, -0xBB8
    ctx->pc = 0x4ad36cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964296));
    // 0x4ad370: 0x480000e  bltz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x4AD370u;
    {
        const bool branch_taken_0x4ad370 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x4AD374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD370u;
        // 0x4ad374: 0x24070007  addiu       $a3, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad370) {
            ctx->pc = 0x4AD3ACu;
            goto label_4ad3ac;
        }
    }
    ctx->pc = 0x4AD378u;
    // 0x4ad378: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4ad378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4ad37c: 0x81400  sll         $v0, $t0, 16
    ctx->pc = 0x4ad37cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
label_4ad380:
    // 0x4ad380: 0x3503ffff  ori         $v1, $t0, 0xFFFF
    ctx->pc = 0x4ad380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4ad384: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ad384u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ad388: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4ad388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4ad38c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4ad38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4ad390: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ad390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4ad394: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AD394u;
    {
        const bool branch_taken_0x4ad394 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x4AD398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD394u;
        // 0x4ad398: 0x624024  and         $t0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad394) {
            ctx->pc = 0x4AD3A8u;
            goto label_4ad3a8;
        }
    }
    ctx->pc = 0x4AD39Cu;
    // 0x4ad39c: 0x2484f448  addiu       $a0, $a0, -0xBB8
    ctx->pc = 0x4ad39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964296));
    // 0x4ad3a0: 0x483fff7  bgezl       $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4AD3A0u;
    {
        const bool branch_taken_0x4ad3a0 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x4ad3a0) {
            ctx->pc = 0x4AD3A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AD3A0u;
            // 0x4ad3a4: 0x81400  sll         $v0, $t0, 16 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ad380;
        }
    }
    ctx->pc = 0x4AD3A8u;
label_4ad3a8:
    // 0x4ad3a8: 0x2543d680  addiu       $v1, $t2, -0x2980
    ctx->pc = 0x4ad3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956672));
label_4ad3ac:
    // 0x4ad3ac: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4ad3acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4ad3b0: 0x84622214  lh          $v0, 0x2214($v1)
    ctx->pc = 0x4ad3b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8724)));
    // 0x4ad3b4: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x4ad3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x4ad3b8: 0x3485ffff  ori         $a1, $a0, 0xFFFF
    ctx->pc = 0x4ad3b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ad3bc: 0x3524ffff  ori         $a0, $t1, 0xFFFF
    ctx->pc = 0x4ad3bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4ad3c0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ad3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ad3c4: 0x834824  and         $t1, $a0, $v1
    ctx->pc = 0x4ad3c4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4ad3c8: 0xa22024  and         $a0, $a1, $v0
    ctx->pc = 0x4ad3c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4ad3cc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x4ad3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4ad3d0: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x4ad3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4ad3d4: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x4ad3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ad3d8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4AD3D8u;
    {
        const bool branch_taken_0x4ad3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD3D8u;
        // 0x4ad3dc: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad3d8) {
            ctx->pc = 0x4AD404u;
            goto label_4ad404;
        }
    }
    ctx->pc = 0x4AD3E0u;
label_4ad3e0:
    // 0x4ad3e0: 0x3523ffff  ori         $v1, $t1, 0xFFFF
    ctx->pc = 0x4ad3e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4ad3e4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ad3e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ad3e8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x4ad3e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x4ad3ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4ad3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4ad3f0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ad3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ad3f4: 0x4e00009  bltz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AD3F4u;
    {
        const bool branch_taken_0x4ad3f4 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x4AD3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD3F4u;
        // 0x4ad3f8: 0x624824  and         $t1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad3f4) {
            ctx->pc = 0x4AD41Cu;
            goto label_4ad41c;
        }
    }
    ctx->pc = 0x4AD3FCu;
    // 0x4ad3fc: 0x51403  sra         $v0, $a1, 16
    ctx->pc = 0x4ad3fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4ad400: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x4ad400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_4ad404:
    // 0x4ad404: 0x2442e000  addiu       $v0, $v0, -0x2000
    ctx->pc = 0x4ad404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
    // 0x4ad408: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4ad408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4ad40c: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4ad40cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4ad410: 0x42c00  sll         $a1, $a0, 16
    ctx->pc = 0x4ad410u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4ad414: 0x4a1fff2  bgez        $a1, . + 4 + (-0xE << 2)
    ctx->pc = 0x4AD414u;
    {
        const bool branch_taken_0x4ad414 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x4AD418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD414u;
        // 0x4ad418: 0x91400  sll         $v0, $t1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad414) {
            ctx->pc = 0x4AD3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4ad3e0;
        }
    }
    ctx->pc = 0x4AD41Cu;
label_4ad41c:
    // 0x4ad41c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4ad41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4ad420: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ad420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ad424: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x4ad424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x4ad428: 0x81c00  sll         $v1, $t0, 16
    ctx->pc = 0x4ad428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x4ad42c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4ad42cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4ad430: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4ad430u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4ad434: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x4ad434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x4ad438: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ad438u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ad43c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4ad43cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4ad440: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ad440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ad444: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ad444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4ad448: 0x91c00  sll         $v1, $t1, 16
    ctx->pc = 0x4ad448u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x4ad44c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4ad44cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4ad450: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4ad450u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4ad454: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x4ad454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4ad458: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4ad458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ad45c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4ad45cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4ad460: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ad460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4ad464: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4ad464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4ad468: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4ad468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4ad46c: 0x41c00  sll         $v1, $a0, 16
    ctx->pc = 0x4ad46cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4ad470: 0x31403  sra         $v0, $v1, 16
    ctx->pc = 0x4ad470u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4ad474: 0x442000a  bltzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4AD474u;
    {
        const bool branch_taken_0x4ad474 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4ad474) {
            ctx->pc = 0x4AD478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AD474u;
            // 0x4ad478: 0x3482ffff  ori         $v0, $a0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD4A0u;
            goto label_4ad4a0;
        }
    }
    ctx->pc = 0x4AD47Cu;
    // 0x4ad47c: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x4ad47cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x4ad480: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AD480u;
    {
        const bool branch_taken_0x4ad480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ad480) {
            ctx->pc = 0x4AD484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AD480u;
            // 0x4ad484: 0x2542d680  addiu       $v0, $t2, -0x2980 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956672));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AD4A8u;
            goto label_4ad4a8;
        }
    }
    ctx->pc = 0x4AD488u;
    // 0x4ad488: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4ad488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4ad48c: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x4ad48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4ad490: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x4ad490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x4ad494: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4AD494u;
    {
        const bool branch_taken_0x4ad494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD494u;
        // 0x4ad498: 0x622024  and         $a0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad494) {
            ctx->pc = 0x4AD4A4u;
            goto label_4ad4a4;
        }
    }
    ctx->pc = 0x4AD49Cu;
    // 0x4ad49c: 0x0  nop
    ctx->pc = 0x4ad49cu;
    // NOP
label_4ad4a0:
    // 0x4ad4a0: 0x452024  and         $a0, $v0, $a1
    ctx->pc = 0x4ad4a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_4ad4a4:
    // 0x4ad4a4: 0x2542d680  addiu       $v0, $t2, -0x2980
    ctx->pc = 0x4ad4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956672));
label_4ad4a8:
    // 0x4ad4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD4A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD4A8u;
        // 0x4ad4ac: 0xa4440038  sh          $a0, 0x38($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 56), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD4A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD4B0u;
label_4ad4b0:
    // 0x4ad4b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ad4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ad4b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ad4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ad4b8: 0xc127998  jal         func_49E660
    ctx->pc = 0x4AD4B8u;
    SET_GPR_U32(ctx, 31, 0x4AD4C0u);
    ctx->pc = 0x49E660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49E660u, 0x4AD4B8u, 0x4AD4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD4C0u;
label_4ad4c0:
    // 0x4ad4c0: 0xc124910  jal         func_492440
    ctx->pc = 0x4AD4C0u;
    SET_GPR_U32(ctx, 31, 0x4AD4C8u);
    ctx->pc = 0x4AD4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD4C0u;
    // 0x4ad4c4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x492440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492440u, 0x4AD4C0u, 0x4AD4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD4C8u;
label_4ad4c8:
    // 0x4ad4c8: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x4ad4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x4ad4cc: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x4ad4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x4ad4d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ad4d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad4d4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x4ad4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x4ad4d8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4ad4d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72D690u));
    // 0x4ad4dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4ad4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4ad4e0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4ad4e0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72D690u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D690u, _value); } while (0);
    // 0x4ad4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD4E4u;
        // 0x4ad4e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD4ECu;
    // 0x4ad4ec: 0x0  nop
    ctx->pc = 0x4ad4ecu;
    // NOP
label_4ad4f0:
    // 0x4ad4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ad4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ad4f4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4ad4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4ad4f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ad4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ad4fc: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4ad4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4ad500: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x4ad500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x4ad504: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4ad504u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x72D698u));
    // 0x4ad508: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4ad508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4ad50c: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x4ad50cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4ad510: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AD510u;
    {
        const bool branch_taken_0x4ad510 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AD514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD510u;
        // 0x4ad514: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad510) {
            ctx->pc = 0x4AD528u;
            goto label_4ad528;
        }
    }
    ctx->pc = 0x4AD518u;
    // 0x4ad518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ad518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad51c: 0x812b52c  j           func_4AD4B0
    ctx->pc = 0x4AD51Cu;
    ctx->pc = 0x4AD520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD51Cu;
    // 0x4ad520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD4B0u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4ad4b0;
    ctx->pc = 0x4AD524u;
    // 0x4ad524: 0x0  nop
    ctx->pc = 0x4ad524u;
    // NOP
label_4ad528:
    // 0x4ad528: 0xc124c3c  jal         func_4930F0
    ctx->pc = 0x4AD528u;
    SET_GPR_U32(ctx, 31, 0x4AD530u);
    ctx->pc = 0x4930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4930F0u, 0x4AD528u, 0x4AD530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD530u;
label_4ad530:
    // 0x4ad530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ad530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad534: 0x8124642  j           func_491908
    ctx->pc = 0x4AD534u;
    ctx->pc = 0x4AD538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD534u;
    // 0x4ad538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491908u;
    sub_00491908_0x491908(rdram, ctx, runtime); return;
    ctx->pc = 0x4AD53Cu;
    // 0x4ad53c: 0x0  nop
    ctx->pc = 0x4ad53cu;
    // NOP
label_4ad540:
    // 0x4ad540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ad540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ad544: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ad544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ad548: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4ad548u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4ad54c: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4ad54cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4ad550: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ad550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ad554: 0xa6000096  sh          $zero, 0x96($s0)
    ctx->pc = 0x4ad554u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72D716u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D716u, _value); } while (0);
    // 0x4ad558: 0xc122cc6  jal         func_48B318
    ctx->pc = 0x4AD558u;
    SET_GPR_U32(ctx, 31, 0x4AD560u);
    ctx->pc = 0x4AD55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD558u;
    // 0x4ad55c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B318u, 0x4AD558u, 0x4AD560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD560u;
label_4ad560:
    // 0x4ad560: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4ad560u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad564: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ad564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ad568: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4ad568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4ad56c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4ad56cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ad570: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ad570u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad574: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD574u;
        // 0x4ad578: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD57Cu;
    // 0x4ad57c: 0x0  nop
    ctx->pc = 0x4ad57cu;
    // NOP
label_4ad580:
    // 0x4ad580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ad580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ad584: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4ad584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4ad588: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ad588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ad58c: 0x2450d680  addiu       $s0, $v0, -0x2980
    ctx->pc = 0x4ad58cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4ad590: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x4ad590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x4ad594: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4ad594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4ad598: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4ad598u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72D698u));
    // 0x4ad59c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4AD59Cu;
    {
        const bool branch_taken_0x4ad59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AD5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD59Cu;
        // 0x4ad5a0: 0x94640000  lhu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad59c) {
            ctx->pc = 0x4AD5C8u;
            goto label_4ad5c8;
        }
    }
    ctx->pc = 0x4AD5A4u;
    // 0x4ad5a4: 0xc123c54  jal         func_48F150
    ctx->pc = 0x4AD5A4u;
    SET_GPR_U32(ctx, 31, 0x4AD5ACu);
    ctx->pc = 0x48F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48F150u, 0x4AD5A4u, 0x4AD5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD5ACu;
label_4ad5ac:
    // 0x4ad5ac: 0xc123ac8  jal         func_48EB20
    ctx->pc = 0x4AD5ACu;
    SET_GPR_U32(ctx, 31, 0x4AD5B4u);
    ctx->pc = 0x48EB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48EB20u, 0x4AD5ACu, 0x4AD5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD5B4u;
label_4ad5b4:
    // 0x4ad5b4: 0xc12413e  jal         func_4904F8
    ctx->pc = 0x4AD5B4u;
    SET_GPR_U32(ctx, 31, 0x4AD5BCu);
    ctx->pc = 0x4AD5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD5B4u;
    // 0x4ad5b8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4904F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4904F8u, 0x4AD5B4u, 0x4AD5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD5BCu;
label_4ad5bc:
    // 0x4ad5bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4AD5BCu;
    {
        const bool branch_taken_0x4ad5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD5BCu;
        // 0x4ad5c0: 0xa60021fe  sh          $zero, 0x21FE($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 8702), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad5bc) {
            ctx->pc = 0x4AD5D0u;
            goto label_4ad5d0;
        }
    }
    ctx->pc = 0x4AD5C4u;
    // 0x4ad5c4: 0x0  nop
    ctx->pc = 0x4ad5c4u;
    // NOP
label_4ad5c8:
    // 0x4ad5c8: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x4ad5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x4ad5cc: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4ad5ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_4ad5d0:
    // 0x4ad5d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ad5d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad5d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4ad5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4ad5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD5D8u;
        // 0x4ad5dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD5E0u;
}
