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

// Function: sub_004A4FD8
// Address: 0x4a4fd8 - 0x4a51b8
void sub_004A4FD8_0x4a4fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4FD8_0x4a4fd8");
#endif

    switch (ctx->pc) {
        case 0x4a5118u: goto label_4a5118;
        case 0x4a5144u: goto label_4a5144;
        case 0x4a5158u: goto label_4a5158;
        default: break;
    }

    ctx->pc = 0x4a4fd8u;

    // 0x4a4fd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a4fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4a4fdc: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4a4fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4a4fe0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4a4fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4a4fe4: 0x24c60c1c  addiu       $a2, $a2, 0xC1C
    ctx->pc = 0x4a4fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3100));
    // 0x4a4fe8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a4fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a4fec: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x4a4fecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x4a4ff0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4a4ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4a4ff4: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x4a4ff4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x4a4ff8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x4a4ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x4a4ffc: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4a4ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4a5000: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x4a5000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x4a5004: 0x3c0b007f  lui         $t3, 0x7F
    ctx->pc = 0x4a5004u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)127 << 16));
    // 0x4a5008: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x4a5008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x4a500c: 0x24ed0c34  addiu       $t5, $a3, 0xC34
    ctx->pc = 0x4a500cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 3124));
    // 0x4a5010: 0x8482f938  lh          $v0, -0x6C8($a0)
    ctx->pc = 0x4a5010u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x72F938u));
    // 0x4a5014: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4a5014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4a5018: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4a5018u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0C1Cu));
    // 0x4a501c: 0x256b0c2c  addiu       $t3, $t3, 0xC2C
    ctx->pc = 0x4a501cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 3116));
    // 0x4a5020: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4a5020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4a5024: 0x8c8c0c3c  lw          $t4, 0xC3C($a0)
    ctx->pc = 0x4a5024u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x7F0C3Cu));
    // 0x4a5028: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a5028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a502c: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4a502cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4a5030: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a5030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a5034: 0x248e0c28  addiu       $t6, $a0, 0xC28
    ctx->pc = 0x4a5034u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 3112));
    // 0x4a5038: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4a5038u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4a503c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a503cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a5040: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4a5040u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4a5044: 0x84c40000  lh          $a0, 0x0($a2)
    ctx->pc = 0x4a5044u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a5048: 0x25290c30  addiu       $t1, $t1, 0xC30
    ctx->pc = 0x4a5048u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3120));
    // 0x4a504c: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x4a504cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4a5050: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x4a5050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4a5054: 0x8dc50000  lw          $a1, 0x0($t6)
    ctx->pc = 0x4a5054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4a5058: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4a5058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4a505c: 0x8da70000  lw          $a3, 0x0($t5)
    ctx->pc = 0x4a505cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4a5060: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a5060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a5064: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a5064u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a5068: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4a5068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4a506c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4a506cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4a5070: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a5070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a5074: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a5074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a5078: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4a5078u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4a507c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x4a507cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x4a5080: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4a5080u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4a5084: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4a5084u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4a5088: 0x85830002  lh          $v1, 0x2($t4)
    ctx->pc = 0x4a5088u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x4a508c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4a508cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a5090: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4a5090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4a5094: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4a5094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4a5098: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4a5098u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4a509c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a509cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a50a0: 0xadc50000  sw          $a1, 0x0($t6)
    ctx->pc = 0x4a50a0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 5));
    // 0x4a50a4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a50a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a50a8: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4a50a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4a50ac: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4a50acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4a50b0: 0x85840004  lh          $a0, 0x4($t4)
    ctx->pc = 0x4a50b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x4a50b4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a50b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a50b8: 0x85c30000  lh          $v1, 0x0($t6)
    ctx->pc = 0x4a50b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x4a50bc: 0x3c120052  lui         $s2, 0x52
    ctx->pc = 0x4a50bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)82 << 16));
    // 0x4a50c0: 0x26528d80  addiu       $s2, $s2, -0x7280
    ctx->pc = 0x4a50c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294937984));
    // 0x4a50c4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x4a50c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x4a50c8: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x4a50c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
    // 0x4a50cc: 0x1044024  and         $t0, $t0, $a0
    ctx->pc = 0x4a50ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
    // 0x4a50d0: 0x2463f200  addiu       $v1, $v1, -0xE00
    ctx->pc = 0x4a50d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963712));
    // 0x4a50d4: 0xad680000  sw          $t0, 0x0($t3)
    ctx->pc = 0x4a50d4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 8));
    // 0x4a50d8: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x4a50d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x4a50dc: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x4a50dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x4a50e0: 0x85820006  lh          $v0, 0x6($t4)
    ctx->pc = 0x4a50e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 6)));
    // 0x4a50e4: 0xada70000  sw          $a3, 0x0($t5)
    ctx->pc = 0x4a50e4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 7));
    // 0x4a50e8: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x4a50e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x4a50ec: 0xadc50000  sw          $a1, 0x0($t6)
    ctx->pc = 0x4a50ecu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 0), GPR_U32(ctx, 5));
    // 0x4a50f0: 0x85a30000  lh          $v1, 0x0($t5)
    ctx->pc = 0x4a50f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x4a50f4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4a50f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4a50f8: 0x4600027  bltz        $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x4A50F8u;
    {
        const bool branch_taken_0x4a50f8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4A50FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A50F8u;
        // 0x4a50fc: 0xad260000  sw          $a2, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a50f8) {
            ctx->pc = 0x4A5198u;
            goto label_4a5198;
        }
    }
    ctx->pc = 0x4A5100u;
    // 0x4a5100: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a5100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4a5104: 0x1c0a02d  daddu       $s4, $t6, $zero
    ctx->pc = 0x4a5104u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5108: 0x24510c24  addiu       $s1, $v0, 0xC24
    ctx->pc = 0x4a5108u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3108));
    // 0x4a510c: 0x1a0802d  daddu       $s0, $t5, $zero
    ctx->pc = 0x4a510cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a5110: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4a5110u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4a5114: 0x0  nop
    ctx->pc = 0x4a5114u;
    // NOP
label_4a5118:
    // 0x4a5118: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x4a5118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a511c: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4a511cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a5120: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a5120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a5124: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4a5124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4a5128: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a5128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a512c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4a512cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4a5130: 0x86230000  lh          $v1, 0x0($s1)
    ctx->pc = 0x4a5130u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a5134: 0x4600008  bltz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A5134u;
    {
        const bool branch_taken_0x4a5134 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4A5138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5134u;
        // 0x4a5138: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5134) {
            ctx->pc = 0x4A5158u;
            goto label_4a5158;
        }
    }
    ctx->pc = 0x4A513Cu;
    // 0x4a513c: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x4A513Cu;
    SET_GPR_U32(ctx, 31, 0x4A5144u);
    ctx->pc = 0x4A5140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A513Cu;
    // 0x4a5140: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x4A513Cu, 0x4A5144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5144u;
label_4a5144:
    // 0x4a5144: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x4a5144u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4a5148: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a5148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a514c: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x4a514cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a5150: 0xc129370  jal         func_4A4DC0
    ctx->pc = 0x4A5150u;
    SET_GPR_U32(ctx, 31, 0x4A5158u);
    ctx->pc = 0x4A5154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A5150u;
    // 0x4a5154: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A4DC0u, 0x4A5150u, 0x4A5158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A5158u;
label_4a5158:
    // 0x4a5158: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a5158u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a515c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4a515cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a5160: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a5160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a5164: 0x86840000  lh          $a0, 0x0($s4)
    ctx->pc = 0x4a5164u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a5168: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4a5168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4a516c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a516cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a5170: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a5170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a5174: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x4a5174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4a5178: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4a5178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4a517c: 0x24840200  addiu       $a0, $a0, 0x200
    ctx->pc = 0x4a517cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x4a5180: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a5180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a5184: 0x932025  or          $a0, $a0, $s3
    ctx->pc = 0x4a5184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
    // 0x4a5188: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x4a5188u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a518c: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4a518cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4a5190: 0x441ffe1  bgez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x4A5190u;
    {
        const bool branch_taken_0x4a5190 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4A5194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A5190u;
        // 0x4a5194: 0xae850000  sw          $a1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5190) {
            ctx->pc = 0x4A5118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a5118;
        }
    }
    ctx->pc = 0x4A5198u;
label_4a5198:
    // 0x4a5198: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a5198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a519c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4a519cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a51a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4a51a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a51a4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x4a51a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a51a8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x4a51a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a51ac: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x4a51acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4a51b0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A51B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A51B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A51B0u;
        // 0x4a51b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A51B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A51B8u;
}
