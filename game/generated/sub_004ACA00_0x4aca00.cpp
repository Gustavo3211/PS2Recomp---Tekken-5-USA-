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

// Function: sub_004ACA00
// Address: 0x4aca00 - 0x4acd30
void sub_004ACA00_0x4aca00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ACA00_0x4aca00");
#endif

    switch (ctx->pc) {
        case 0x4acbc0u: goto label_4acbc0;
        case 0x4acbccu: goto label_4acbcc;
        case 0x4acc74u: goto label_4acc74;
        default: break;
    }

    ctx->pc = 0x4aca00u;

    // 0x4aca00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4aca00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x4aca04: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x4aca04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x4aca08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4aca08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aca0c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x4aca0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x4aca10: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x4aca10u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x4aca14: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x4aca14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x4aca18: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x4aca18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4aca1c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x4aca1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x4aca20: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x4aca20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x4aca24: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x4aca24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x4aca28: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x4aca28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x4aca2c: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x4aca2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x4aca30: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x4aca30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x4aca34: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x4aca34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x4aca38: 0x862301b4  lh          $v1, 0x1B4($s1)
    ctx->pc = 0x4aca38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 436)));
    // 0x4aca3c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4aca3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4aca40: 0x833824  and         $a3, $a0, $v1
    ctx->pc = 0x4aca40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4aca44: 0x30e20100  andi        $v0, $a3, 0x100
    ctx->pc = 0x4aca44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
    // 0x4aca48: 0x34e4ffff  ori         $a0, $a3, 0xFFFF
    ctx->pc = 0x4aca48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4aca4c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4aca4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4aca50: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4aca50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4aca54: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4aca54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4aca58: 0x823824  and         $a3, $a0, $v0
    ctx->pc = 0x4aca58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4aca5c: 0x30e30100  andi        $v1, $a3, 0x100
    ctx->pc = 0x4aca5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
    // 0x4aca60: 0x106000a6  beqz        $v1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x4ACA60u;
    {
        const bool branch_taken_0x4aca60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4ACA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACA60u;
        // 0x4aca64: 0xa0502d  daddu       $t2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aca60) {
            ctx->pc = 0x4ACCFCu;
            goto label_4accfc;
        }
    }
    ctx->pc = 0x4ACA68u;
    // 0x4aca68: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x4aca68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4aca6c: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x4aca6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x4aca70: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x4aca70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x4aca74: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x4aca74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x4aca78: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x4aca78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x4aca7c: 0x3525ffff  ori         $a1, $t1, 0xFFFF
    ctx->pc = 0x4aca7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4aca80: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4aca80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4aca84: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x4aca84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x4aca88: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4aca88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4aca8c: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x4aca8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x4aca90: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4aca90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4aca94: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4aca94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4aca98: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4aca98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4aca9c: 0x36c6ffff  ori         $a2, $s6, 0xFFFF
    ctx->pc = 0x4aca9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x4acaa0: 0x922024  and         $a0, $a0, $s2
    ctx->pc = 0x4acaa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 18));
    // 0x4acaa4: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4acaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x4acaa8: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x4acaa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x4acaac: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4acaacu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4acab0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4acab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4acab4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4acab4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4acab8: 0xa24824  and         $t1, $a1, $v0
    ctx->pc = 0x4acab8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4acabc: 0x3665ffff  ori         $a1, $s3, 0xFFFF
    ctx->pc = 0x4acabcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x4acac0: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x4acac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x4acac4: 0x92400  sll         $a0, $t1, 16
    ctx->pc = 0x4acac4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x4acac8: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x4acac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x4acacc: 0x44403  sra         $t0, $a0, 16
    ctx->pc = 0x4acaccu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4acad0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4acad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4acad4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x4acad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4acad8: 0x721025  or          $v0, $v1, $s2
    ctx->pc = 0x4acad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4acadc: 0x921825  or          $v1, $a0, $s2
    ctx->pc = 0x4acadcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x4acae0: 0xa29824  and         $s3, $a1, $v0
    ctx->pc = 0x4acae0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4acae4: 0x5000085  bltz        $t0, . + 4 + (0x85 << 2)
    ctx->pc = 0x4ACAE4u;
    {
        const bool branch_taken_0x4acae4 = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x4ACAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACAE4u;
        // 0x4acae8: 0xc3b024  and         $s6, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acae4) {
            ctx->pc = 0x4ACCFCu;
            goto label_4accfc;
        }
    }
    ctx->pc = 0x4ACAECu;
    // 0x4acaec: 0x1121025  or          $v0, $t0, $s2
    ctx->pc = 0x4acaecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | GPR_U64(ctx, 18));
    // 0x4acaf0: 0x3524ffff  ori         $a0, $t1, 0xFFFF
    ctx->pc = 0x4acaf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x4acaf4: 0x824824  and         $t1, $a0, $v0
    ctx->pc = 0x4acaf4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4acaf8: 0x91c00  sll         $v1, $t1, 16
    ctx->pc = 0x4acaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x4acafc: 0x33c03  sra         $a3, $v1, 16
    ctx->pc = 0x4acafcu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4acb00: 0x24e2f800  addiu       $v0, $a3, -0x800
    ctx->pc = 0x4acb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965248));
    // 0x4acb04: 0x441007e  bgez        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x4ACB04u;
    {
        const bool branch_taken_0x4acb04 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4ACB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACB04u;
        // 0x4acb08: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acb04) {
            ctx->pc = 0x4ACD00u;
            goto label_4acd00;
        }
    }
    ctx->pc = 0x4ACB0Cu;
    // 0x4acb0c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4acb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4acb10: 0x3143ffff  andi        $v1, $t2, 0xFFFF
    ctx->pc = 0x4acb10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x4acb14: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x4acb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4acb18: 0x2405e001  addiu       $a1, $zero, -0x1FFF
    ctx->pc = 0x4acb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959105));
    // 0x4acb1c: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x4acb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x4acb20: 0x26300022  addiu       $s0, $s1, 0x22
    ctx->pc = 0x4acb20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 34));
    // 0x4acb24: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4acb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4acb28: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4acb28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4acb2c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4acb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4acb30: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4acb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4acb34: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4acb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4acb38: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4acb38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4acb3c: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x4acb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x4acb40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4acb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acb44: 0x87a30000  lh          $v1, 0x0($sp)
    ctx->pc = 0x4acb44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4acb48: 0x263e0024  addiu       $fp, $s1, 0x24
    ctx->pc = 0x4acb48u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x4acb4c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x4acb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x4acb50: 0x2634002a  addiu       $s4, $s1, 0x2A
    ctx->pc = 0x4acb50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 42));
    // 0x4acb54: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4acb54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4acb58: 0x2635002c  addiu       $s5, $s1, 0x2C
    ctx->pc = 0x4acb58u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    // 0x4acb5c: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4acb5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4acb60: 0x2637000c  addiu       $s7, $s1, 0xC
    ctx->pc = 0x4acb60u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x4acb64: 0x87a50000  lh          $a1, 0x0($sp)
    ctx->pc = 0x4acb64u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4acb68: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x4acb68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x4acb6c: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x4acb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
    // 0x4acb70: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x4acb70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x4acb74: 0x94c66700  lhu         $a2, 0x6700($a2)
    ctx->pc = 0x4acb74u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 26368)));
    // 0x4acb78: 0xa72818  mult        $a1, $a1, $a3
    ctx->pc = 0x4acb78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x4acb7c: 0x87c30000  lh          $v1, 0x0($fp)
    ctx->pc = 0x4acb7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x4acb80: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x4acb80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x4acb84: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4acb84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4acb88: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4acb88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4acb8c: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x4acb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4acb90: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x4acb90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x4acb94: 0x87a20004  lh          $v0, 0x4($sp)
    ctx->pc = 0x4acb94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4acb98: 0x86a30000  lh          $v1, 0x0($s5)
    ctx->pc = 0x4acb98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4acb9c: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x4acb9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4acba0: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x4acba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x4acba4: 0x86e30000  lh          $v1, 0x0($s7)
    ctx->pc = 0x4acba4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x4acba8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4acba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4acbac: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x4acbacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x4acbb0: 0xa6e60000  sh          $a2, 0x0($s7)
    ctx->pc = 0x4acbb0u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x4acbb4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4acbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x4acbb8: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4ACBB8u;
    SET_GPR_U32(ctx, 31, 0x4ACBC0u);
    ctx->pc = 0x4ACBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACBB8u;
    // 0x4acbbc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4ACBB8u, 0x4ACBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACBC0u;
label_4acbc0:
    // 0x4acbc0: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x4acbc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4acbc4: 0xc13e49c  jal         func_4F9270
    ctx->pc = 0x4ACBC4u;
    SET_GPR_U32(ctx, 31, 0x4ACBCCu);
    ctx->pc = 0x4ACBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACBC4u;
    // 0x4acbc8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9270u, 0x4ACBC4u, 0x4ACBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACBCCu;
label_4acbcc:
    // 0x4acbcc: 0x3667ffff  ori         $a3, $s3, 0xFFFF
    ctx->pc = 0x4acbccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x4acbd0: 0x131400  sll         $v0, $s3, 16
    ctx->pc = 0x4acbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x4acbd4: 0x161c00  sll         $v1, $s6, 16
    ctx->pc = 0x4acbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x4acbd8: 0x87a40000  lh          $a0, 0x0($sp)
    ctx->pc = 0x4acbd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4acbdc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4acbdcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4acbe0: 0x87a50004  lh          $a1, 0x4($sp)
    ctx->pc = 0x4acbe0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4acbe4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4acbe4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4acbe8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4acbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4acbec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4acbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acbf0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4acbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4acbf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4acbf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acbf8: 0x36c6ffff  ori         $a2, $s6, 0xFFFF
    ctx->pc = 0x4acbf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
    // 0x4acbfc: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4acbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4acc00: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4acc00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4acc04: 0xe29824  and         $s3, $a3, $v0
    ctx->pc = 0x4acc04u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4acc08: 0x14a4001a  bne         $a1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4ACC08u;
    {
        const bool branch_taken_0x4acc08 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x4ACC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACC08u;
        // 0x4acc0c: 0xc3b024  and         $s6, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4acc08) {
            ctx->pc = 0x4ACC74u;
            goto label_4acc74;
        }
    }
    ctx->pc = 0x4ACC10u;
    // 0x4acc10: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x4acc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x4acc14: 0x162c00  sll         $a1, $s6, 16
    ctx->pc = 0x4acc14u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 16));
    // 0x4acc18: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x4acc18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x4acc1c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4acc1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4acc20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4acc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4acc24: 0x131400  sll         $v0, $s3, 16
    ctx->pc = 0x4acc24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x4acc28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4acc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4acc2c: 0x24077fff  addiu       $a3, $zero, 0x7FFF
    ctx->pc = 0x4acc2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x4acc30: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4acc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4acc34: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4acc34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4acc38: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4acc38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4acc3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4acc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4acc40: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x4acc40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4acc44: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x4acc44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4acc48: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4acc48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4acc4c: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x4acc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x4acc50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4acc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4acc54: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4acc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4acc58: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4acc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4acc5c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4acc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4acc60: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x4acc60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4acc64: 0xa7c70000  sh          $a3, 0x0($fp)
    ctx->pc = 0x4acc64u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x4acc68: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x4acc68u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x4acc6c: 0xc128b10  jal         func_4A2C40
    ctx->pc = 0x4ACC6Cu;
    SET_GPR_U32(ctx, 31, 0x4ACC74u);
    ctx->pc = 0x4ACC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACC6Cu;
    // 0x4acc70: 0xa6a70000  sh          $a3, 0x0($s5) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2C40u, 0x4ACC6Cu, 0x4ACC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACC74u;
label_4acc74:
    // 0x4acc74: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x4acc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4acc78: 0xa6e40000  sh          $a0, 0x0($s7)
    ctx->pc = 0x4acc78u;
    WRITE16(ADD32(GPR_U32(ctx, 23), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4acc7c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4acc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4acc80: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x4acc80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4acc84: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x4acc84u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4acc88: 0x61c00  sll         $v1, $a2, 16
    ctx->pc = 0x4acc88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4acc8c: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x4acc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4acc90: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4acc90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4acc94: 0xa6a40000  sh          $a0, 0x0($s5)
    ctx->pc = 0x4acc94u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x4acc98: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x4acc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4acc9c: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x4acc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4acca0: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x4acca0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4acca4: 0x62400  sll         $a0, $a2, 16
    ctx->pc = 0x4acca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x4acca8: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x4acca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4accac: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4accacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4accb0: 0xa7c60000  sh          $a2, 0x0($fp)
    ctx->pc = 0x4accb0u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x4accb4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4accb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4accb8: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x4accb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x4accbc: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x4accbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4accc0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4accc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4accc4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4accc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4accc8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4accc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4acccc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4accccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4accd0: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4accd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4accd4: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x4accd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4accd8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4accd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4accdc: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x4accdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x4acce0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4acce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4acce4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4acce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4acce8: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x4acce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x4accec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4accecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4accf0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x4accf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x4accf4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4accf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4accf8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4accf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4accfc:
    // 0x4accfc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x4accfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4acd00:
    // 0x4acd00: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x4acd00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4acd04: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x4acd04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4acd08: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x4acd08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x4acd0c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x4acd0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4acd10: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x4acd10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x4acd14: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x4acd14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4acd18: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x4acd18u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4acd1c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x4acd1cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4acd20: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x4acd20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x4acd24: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACD24u;
        // 0x4acd28: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACD2Cu;
    // 0x4acd2c: 0x0  nop
    ctx->pc = 0x4acd2cu;
    // NOP
    ctx->pc = 0x4acd30u;
}
