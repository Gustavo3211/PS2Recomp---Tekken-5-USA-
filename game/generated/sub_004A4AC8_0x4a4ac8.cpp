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

// Function: sub_004A4AC8
// Address: 0x4a4ac8 - 0x4a4d50
void sub_004A4AC8_0x4a4ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4AC8_0x4a4ac8");
#endif

    switch (ctx->pc) {
        case 0x4a4b74u: goto label_4a4b74;
        case 0x4a4c60u: goto label_4a4c60;
        case 0x4a4c74u: goto label_4a4c74;
        case 0x4a4cccu: goto label_4a4ccc;
        default: break;
    }

    ctx->pc = 0x4a4ac8u;

    // 0x4a4ac8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a4ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x4a4acc: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4a4accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4a4ad0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a4ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a4ad4: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x4a4ad4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x4a4ad8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4a4ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4a4adc: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x4a4adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x4a4ae0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4a4ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4a4ae4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a4ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4ae8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4a4ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4a4aec: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4a4aecu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4a4af0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x4a4af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x4a4af4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x4a4af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x4a4af8: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x4a4af8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x4a4afc: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x4a4afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x4a4b00: 0x26170064  addiu       $s7, $s0, 0x64
    ctx->pc = 0x4a4b00u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4a4b04: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4a4b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4a4b08: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4a4b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x4a4b0c: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x4a4b0cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72D684u));
    // 0x4a4b10: 0x2610226a  addiu       $s0, $s0, 0x226A
    ctx->pc = 0x4a4b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8810));
    // 0x4a4b14: 0x8ef40000  lw          $s4, 0x0($s7)
    ctx->pc = 0x4a4b14u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x72D6E4u));
    // 0x4a4b18: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x4a4b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x4a4b1c: 0x30460002  andi        $a2, $v0, 0x2
    ctx->pc = 0x4a4b1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x4a4b20: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x4a4b20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4a4b24: 0x26290003  addiu       $t1, $s1, 0x3
    ctx->pc = 0x4a4b24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x4a4b28: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x4a4b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4b2c: 0x3622ffff  ori         $v0, $s1, 0xFFFF
    ctx->pc = 0x4a4b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4a4b30: 0x2362824  and         $a1, $s1, $s6
    ctx->pc = 0x4a4b30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 22));
    // 0x4a4b34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4a4b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4b38: 0x26880006  addiu       $t0, $s4, 0x6
    ctx->pc = 0x4a4b38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 6));
    // 0x4a4b3c: 0xa6880a  movz        $s1, $a1, $a2
    ctx->pc = 0x4a4b3cu;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
    // 0x4a4b40: 0x240500e1  addiu       $a1, $zero, 0xE1
    ctx->pc = 0x4a4b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
    // 0x4a4b44: 0x2231825  or          $v1, $s1, $v1
    ctx->pc = 0x4a4b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x4a4b48: 0x3622ffff  ori         $v0, $s1, 0xFFFF
    ctx->pc = 0x4a4b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4a4b4c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a4b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a4b50: 0x3232ffff  andi        $s2, $s1, 0xFFFF
    ctx->pc = 0x4a4b50u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x4a4b54: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4a4b54u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4a4b58: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4a4b58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4b5c: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4a4b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4a4b60: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x4a4b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x4a4b64: 0x438824  and         $s1, $v0, $v1
    ctx->pc = 0x4a4b64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a4b68: 0x3135ffff  andi        $s5, $t1, 0xFFFF
    ctx->pc = 0x4a4b68u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x4a4b6c: 0xc122288  jal         func_488A20
    ctx->pc = 0x4A4B6Cu;
    SET_GPR_U32(ctx, 31, 0x4A4B74u);
    ctx->pc = 0x4A4B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4B6Cu;
    // 0x4a4b70: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488A20u, 0x4A4B6Cu, 0x4A4B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4B74u;
label_4a4b74:
    // 0x4a4b74: 0x3624ffff  ori         $a0, $s1, 0xFFFF
    ctx->pc = 0x4a4b74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4a4b78: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x4a4b78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a4b7c: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4a4b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4a4b80: 0x838824  and         $s1, $a0, $v1
    ctx->pc = 0x4a4b80u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a4b84: 0x111400  sll         $v0, $s1, 16
    ctx->pc = 0x4a4b84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x4a4b88: 0x3624ffff  ori         $a0, $s1, 0xFFFF
    ctx->pc = 0x4a4b88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4a4b8c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a4b8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a4b90: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4a4b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4a4b94: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4a4b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4a4b98: 0x828824  and         $s1, $a0, $v0
    ctx->pc = 0x4a4b98u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a4b9c: 0x3223ffff  andi        $v1, $s1, 0xFFFF
    ctx->pc = 0x4a4b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
    // 0x4a4ba0: 0x2c630089  sltiu       $v1, $v1, 0x89
    ctx->pc = 0x4a4ba0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)137) ? 1 : 0);
    // 0x4a4ba4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A4BA4u;
    {
        const bool branch_taken_0x4a4ba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A4BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4BA4u;
        // 0x4a4ba8: 0x111400  sll         $v0, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4ba4) {
            ctx->pc = 0x4A4BB8u;
            goto label_4a4bb8;
        }
    }
    ctx->pc = 0x4A4BACu;
    // 0x4a4bac: 0x3622ffff  ori         $v0, $s1, 0xFFFF
    ctx->pc = 0x4a4bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4a4bb0: 0x538824  and         $s1, $v0, $s3
    ctx->pc = 0x4a4bb0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4a4bb4: 0x111400  sll         $v0, $s1, 16
    ctx->pc = 0x4a4bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
label_4a4bb8:
    // 0x4a4bb8: 0x3624ffff  ori         $a0, $s1, 0xFFFF
    ctx->pc = 0x4a4bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4a4bbc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a4bbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a4bc0: 0xa6110000  sh          $s1, 0x0($s0)
    ctx->pc = 0x4a4bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x4a4bc4: 0x2442ffbc  addiu       $v0, $v0, -0x44
    ctx->pc = 0x4a4bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967228));
    // 0x4a4bc8: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x4a4bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4a4bcc: 0x561025  or          $v0, $v0, $s6
    ctx->pc = 0x4a4bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x4a4bd0: 0x2562824  and         $a1, $s2, $s6
    ctx->pc = 0x4a4bd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 22));
    // 0x4a4bd4: 0x828824  and         $s1, $a0, $v0
    ctx->pc = 0x4a4bd4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4a4bd8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a4bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4bdc: 0x32228000  andi        $v0, $s1, 0x8000
    ctx->pc = 0x4a4bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
    // 0x4a4be0: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x4a4be0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4be4: 0xa2900a  movz        $s2, $a1, $v0
    ctx->pc = 0x4a4be4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 5));
    // 0x4a4be8: 0x240500e2  addiu       $a1, $zero, 0xE2
    ctx->pc = 0x4a4be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 226));
    // 0x4a4bec: 0x2321026  xor         $v0, $s1, $s2
    ctx->pc = 0x4a4becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 18));
    // 0x4a4bf0: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4a4bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4a4bf4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a4bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a4bf8: 0x3626ffff  ori         $a2, $s1, 0xFFFF
    ctx->pc = 0x4a4bf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4a4bfc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a4bfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a4c00: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x4a4c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4a4c04: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a4c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4a4c08: 0x709024  and         $s2, $v1, $s0
    ctx->pc = 0x4a4c08u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x4a4c0c: 0xc28824  and         $s1, $a2, $v0
    ctx->pc = 0x4a4c0cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4a4c10: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x4a4c10u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x4a4c14: 0x111400  sll         $v0, $s1, 16
    ctx->pc = 0x4a4c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x4a4c18: 0x3626ffff  ori         $a2, $s1, 0xFFFF
    ctx->pc = 0x4a4c18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4a4c1c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a4c1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a4c20: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4a4c20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4c24: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x4a4c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x4a4c28: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x4a4c28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4a4c2c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a4c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4a4c30: 0xc28824  and         $s1, $a2, $v0
    ctx->pc = 0x4a4c30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4a4c34: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x4a4c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x4a4c38: 0x3626ffff  ori         $a2, $s1, 0xFFFF
    ctx->pc = 0x4a4c38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4a4c3c: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4a4c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4a4c40: 0xc38824  and         $s1, $a2, $v1
    ctx->pc = 0x4a4c40u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4a4c44: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x4a4c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x4a4c48: 0x3623ffff  ori         $v1, $s1, 0xFFFF
    ctx->pc = 0x4a4c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4a4c4c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x4a4c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x4a4c50: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4a4c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4a4c54: 0x628824  and         $s1, $v1, $v0
    ctx->pc = 0x4a4c54u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a4c58: 0xc122288  jal         func_488A20
    ctx->pc = 0x4A4C58u;
    SET_GPR_U32(ctx, 31, 0x4A4C60u);
    ctx->pc = 0x4A4C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4C58u;
    // 0x4a4c5c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488A20u, 0x4A4C58u, 0x4A4C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4C60u;
label_4a4c60:
    // 0x4a4c60: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4a4c60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4c64: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4A4C64u;
    {
        const bool branch_taken_0x4a4c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4C64u;
        // 0x4a4c68: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4c64) {
            ctx->pc = 0x4A4CD0u;
            goto label_4a4cd0;
        }
    }
    ctx->pc = 0x4A4C6Cu;
    // 0x4a4c6c: 0xc129354  jal         func_4A4D50
    ctx->pc = 0x4A4C6Cu;
    SET_GPR_U32(ctx, 31, 0x4A4C74u);
    ctx->pc = 0x4A4C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4C6Cu;
    // 0x4a4c70: 0x36520080  ori         $s2, $s2, 0x80 (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)128);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4D50u, 0x4A4C6Cu, 0x4A4C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4C74u;
label_4a4c74:
    // 0x4a4c74: 0x3624ffff  ori         $a0, $s1, 0xFFFF
    ctx->pc = 0x4a4c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4a4c78: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4a4c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4a4c7c: 0x346360a0  ori         $v1, $v1, 0x60A0
    ctx->pc = 0x4a4c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)24736);
    // 0x4a4c80: 0x2553824  and         $a3, $s2, $s5
    ctx->pc = 0x4a4c80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 18) & GPR_U64(ctx, 21));
    // 0x4a4c84: 0x838824  and         $s1, $a0, $v1
    ctx->pc = 0x4a4c84u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a4c88: 0x3643ffff  ori         $v1, $s2, 0xFFFF
    ctx->pc = 0x4a4c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4a4c8c: 0x3053007f  andi        $s3, $v0, 0x7F
    ctx->pc = 0x4a4c8cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
    // 0x4a4c90: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x4a4c90u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4a4c94: 0x2353024  and         $a2, $s1, $s5
    ctx->pc = 0x4a4c94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & GPR_U64(ctx, 21));
    // 0x4a4c98: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4a4c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4c9c: 0x30c660a0  andi        $a2, $a2, 0x60A0
    ctx->pc = 0x4a4c9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)24736);
    // 0x4a4ca0: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x4a4ca0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x4a4ca4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4a4ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4a4ca8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x4a4ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4a4cac: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x4a4cacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x4a4cb0: 0xf03825  or          $a3, $a3, $s0
    ctx->pc = 0x4a4cb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 16));
    // 0x4a4cb4: 0x3622ffff  ori         $v0, $s1, 0xFFFF
    ctx->pc = 0x4a4cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4a4cb8: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x4a4cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x4a4cbc: 0x463024  and         $a2, $v0, $a2
    ctx->pc = 0x4a4cbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4a4cc0: 0x673824  and         $a3, $v1, $a3
    ctx->pc = 0x4a4cc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x4a4cc4: 0xc122288  jal         func_488A20
    ctx->pc = 0x4A4CC4u;
    SET_GPR_U32(ctx, 31, 0x4A4CCCu);
    ctx->pc = 0x4A4CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A4CC4u;
    // 0x4a4cc8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488A20u, 0x4A4CC4u, 0x4A4CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A4CCCu;
label_4a4ccc:
    // 0x4a4ccc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4a4cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a4cd0:
    // 0x4a4cd0: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x4a4cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4a4cd4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a4cd4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a4cd8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4A4CD8u;
    {
        const bool branch_taken_0x4a4cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4CD8u;
        // 0x4a4cdc: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4cd8) {
            ctx->pc = 0x4A4D20u;
            goto label_4a4d20;
        }
    }
    ctx->pc = 0x4A4CE0u;
    // 0x4a4ce0: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x4a4ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a4ce4: 0x24638e30  addiu       $v1, $v1, -0x71D0
    ctx->pc = 0x4a4ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938160));
    // 0x4a4ce8: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x4a4ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a4cec: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a4cecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a4cf0: 0x2c31024  and         $v0, $s6, $v1
    ctx->pc = 0x4a4cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 3));
    // 0x4a4cf4: 0x852824  and         $a1, $a0, $a1
    ctx->pc = 0x4a4cf4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4a4cf8: 0x26840002  addiu       $a0, $s4, 0x2
    ctx->pc = 0x4a4cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
    // 0x4a4cfc: 0x26870004  addiu       $a3, $s4, 0x4
    ctx->pc = 0x4a4cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x4a4d00: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x4a4d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x4a4d04: 0xaee60000  sw          $a2, 0x0($s7)
    ctx->pc = 0x4a4d04u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
    // 0x4a4d08: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x4a4d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
    // 0x4a4d0c: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x4a4d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a4d10: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x4a4d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x4a4d14: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x4a4d14u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a4d18: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x4a4d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
    // 0x4a4d1c: 0xa4e50000  sh          $a1, 0x0($a3)
    ctx->pc = 0x4a4d1cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 5));
label_4a4d20:
    // 0x4a4d20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a4d20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a4d24: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4a4d24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a4d28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4a4d28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a4d2c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4a4d2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a4d30: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4a4d30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a4d34: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x4a4d34u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4a4d38: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x4a4d38u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a4d3c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x4a4d3cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4a4d40: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4a4d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a4d44: 0x3e00008  jr          $ra
    ctx->pc = 0x4A4D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A4D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4D44u;
        // 0x4a4d48: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A4D4Cu;
    // 0x4a4d4c: 0x0  nop
    ctx->pc = 0x4a4d4cu;
    // NOP
    ctx->pc = 0x4a4d50u;
}
