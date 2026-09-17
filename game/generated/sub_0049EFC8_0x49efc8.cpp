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

// Function: sub_0049EFC8
// Address: 0x49efc8 - 0x49f160
void sub_0049EFC8_0x49efc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049EFC8_0x49efc8");
#endif

    ctx->pc = 0x49efc8u;

    // 0x49efc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49efc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49efcc: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x49efccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x49efd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49efd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49efd4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x49efd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49efd8: 0x25ed0bb0  addiu       $t5, $t7, 0xBB0
    ctx->pc = 0x49efd8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 2992));
    // 0x49efdc: 0x2518015a  addiu       $t8, $t0, 0x15A
    ctx->pc = 0x49efdcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 8), 346));
    // 0x49efe0: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x49efe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49efe4: 0x87020000  lh          $v0, 0x0($t8)
    ctx->pc = 0x49efe4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x49efe8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49efe8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0BB0u));
    // 0x49efec: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x49efecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x49eff0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x49eff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x49eff4: 0x250b015c  addiu       $t3, $t0, 0x15C
    ctx->pc = 0x49eff4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 348));
    // 0x49eff8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49eff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49effc: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x49effcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x49f000: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49f000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49f004: 0x254e0bb4  addiu       $t6, $t2, 0xBB4
    ctx->pc = 0x49f004u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), 2996));
    // 0x49f008: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x49f008u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x49f00c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49f00cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49f010: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x49f010u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49f014: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x49f014u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49f018: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x49f018u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49f01c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49f020: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49F020u;
    {
        const bool branch_taken_0x49f020 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x49F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F020u;
        // 0x49f024: 0x1c0282d  daddu       $a1, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f020) {
            ctx->pc = 0x49F038u;
            goto label_49f038;
        }
    }
    ctx->pc = 0x49F028u;
    // 0x49f028: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49f028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49f02c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x49F02Cu;
    {
        const bool branch_taken_0x49f02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F02Cu;
        // 0x49f030: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f02c) {
            ctx->pc = 0x49F040u;
            goto label_49f040;
        }
    }
    ctx->pc = 0x49F034u;
    // 0x49f034: 0x0  nop
    ctx->pc = 0x49f034u;
    // NOP
label_49f038:
    // 0x49f038: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49f038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x49f03c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x49f03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_49f040:
    // 0x49f040: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x49f040u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x49f044: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x49f044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x49f048: 0x24840bb8  addiu       $a0, $a0, 0xBB8
    ctx->pc = 0x49f048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3000));
    // 0x49f04c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x49f04cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x49f050: 0x85020158  lh          $v0, 0x158($t0)
    ctx->pc = 0x49f050u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 344)));
    // 0x49f054: 0x3c19007f  lui         $t9, 0x7F
    ctx->pc = 0x49f054u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)127 << 16));
    // 0x49f058: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49f058u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0BB8u));
    // 0x49f05c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x49f05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x49f060: 0x85a70000  lh          $a3, 0x0($t5)
    ctx->pc = 0x49f060u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x49f064: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49f064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49f068: 0x8da60000  lw          $a2, 0x0($t5)
    ctx->pc = 0x49f068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x49f06c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49f06cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49f070: 0x95480bb4  lhu         $t0, 0xBB4($t2)
    ctx->pc = 0x49f070u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2996)));
    // 0x49f074: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x49f074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x49f078: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49f078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49f07c: 0x82c00  sll         $a1, $t0, 16
    ctx->pc = 0x49f07cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x49f080: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x49f080u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x49f084: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x49f084u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49f088: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x49f088u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x49f08c: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x49f08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x49f090: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49f090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49f094: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x49f094u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x49f098: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x49f098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x49f09c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49f09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49f0a0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x49f0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x49f0a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49f0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49f0a8: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x49f0a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49f0ac: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x49f0acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x49f0b0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x49f0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x49f0b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49f0b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49f0b8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x49f0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x49f0bc: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x49f0bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49f0c0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x49f0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x49f0c4: 0xe93825  or          $a3, $a3, $t1
    ctx->pc = 0x49f0c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x49f0c8: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x49f0c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x49f0cc: 0xada60000  sw          $a2, 0x0($t5)
    ctx->pc = 0x49f0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 6));
    // 0x49f0d0: 0x95a20000  lhu         $v0, 0x0($t5)
    ctx->pc = 0x49f0d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x49f0d4: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x49f0d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49f0d8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x49f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x49f0dc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x49f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x49f0e0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x49F0E0u;
    {
        const bool branch_taken_0x49f0e0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x49F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F0E0u;
        // 0x49f0e4: 0x272c0bbc  addiu       $t4, $t9, 0xBBC (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 25), 3004));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f0e0) {
            ctx->pc = 0x49F0F8u;
            goto label_49f0f8;
        }
    }
    ctx->pc = 0x49F0E8u;
    // 0x49f0e8: 0x8d820000  lw          $v0, 0x0($t4)
    ctx->pc = 0x49f0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x49f0ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x49F0ECu;
    {
        const bool branch_taken_0x49f0ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F0ECu;
        // 0x49f0f0: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f0ec) {
            ctx->pc = 0x49F104u;
            goto label_49f104;
        }
    }
    ctx->pc = 0x49F0F4u;
    // 0x49f0f4: 0x0  nop
    ctx->pc = 0x49f0f4u;
    // NOP
label_49f0f8:
    // 0x49f0f8: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x49f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x49f0fc: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x49f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x49f100: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x49f100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_49f104:
    // 0x49f104: 0xad820000  sw          $v0, 0x0($t4)
    ctx->pc = 0x49f104u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 2));
    // 0x49f108: 0x2404ff00  addiu       $a0, $zero, -0x100
    ctx->pc = 0x49f108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x49f10c: 0x8dc30000  lw          $v1, 0x0($t6)
    ctx->pc = 0x49f10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x49f110: 0x91c50000  lbu         $a1, 0x0($t6)
    ctx->pc = 0x49f110u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x49f114: 0x93220bbc  lbu         $v0, 0xBBC($t9)
    ctx->pc = 0x49f114u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 25), 3004)));
    // 0x49f118: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x49f118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x49f11c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x49f11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x49f120: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x49f120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x49f124: 0xadc30000  sw          $v1, 0x0($t6)
    ctx->pc = 0x49f124u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 3));
    // 0x49f128: 0x81c20000  lb          $v0, 0x0($t6)
    ctx->pc = 0x49f128u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x49f12c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x49F12Cu;
    {
        const bool branch_taken_0x49f12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F12Cu;
        // 0x49f130: 0x3c04ffff  lui         $a0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49f12c) {
            ctx->pc = 0x49F14Cu;
            goto label_49f14c;
        }
    }
    ctx->pc = 0x49F134u;
    // 0x49f134: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x49f134u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x49f138: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x49f138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x49f13c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x49f13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x49f140: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49f140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x49f144: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x49f144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x49f148: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49f148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_49f14c:
    // 0x49f14c: 0x95e20bb0  lhu         $v0, 0xBB0($t7)
    ctx->pc = 0x49f14cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 2992)));
    // 0x49f150: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49f150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49f154: 0xa7020000  sh          $v0, 0x0($t8)
    ctx->pc = 0x49f154u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49f158: 0x3e00008  jr          $ra
    ctx->pc = 0x49F158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49F158u;
        // 0x49f15c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49F158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49F160u;
}
