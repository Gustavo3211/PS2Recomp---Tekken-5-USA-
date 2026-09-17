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

// Function: sub_0031C968
// Address: 0x31c968 - 0x31cc70
void sub_0031C968_0x31c968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C968_0x31c968");
#endif

    switch (ctx->pc) {
        case 0x31cb2cu: goto label_31cb2c;
        case 0x31cb4cu: goto label_31cb4c;
        case 0x31cb6cu: goto label_31cb6c;
        case 0x31cbd0u: goto label_31cbd0;
        case 0x31cc2cu: goto label_31cc2c;
        case 0x31cc40u: goto label_31cc40;
        default: break;
    }

    ctx->pc = 0x31c968u;

    // 0x31c968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31c968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31c96c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x31c96cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c970: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31c970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31c974: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x31c974u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31c978: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31c978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31c97c: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x31c97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x31c980: 0x3c021100  lui         $v0, 0x1100
    ctx->pc = 0x31c980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4352 << 16));
    // 0x31c984: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31c984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31c988: 0x34421300  ori         $v0, $v0, 0x1300
    ctx->pc = 0x31c988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4864);
    // 0x31c98c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31c98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31c990: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x31c990u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x31c994: 0x7d430000  sq          $v1, 0x0($t2)
    ctx->pc = 0x31c994u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 3));
    // 0x31c998: 0x3c050600  lui         $a1, 0x600
    ctx->pc = 0x31c998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1536 << 16));
    // 0x31c99c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x31c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x31c9a0: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x31c9a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x31c9a4: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x31c9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x31c9a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31c9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31c9ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x31c9acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x31c9b0: 0x34638002  ori         $v1, $v1, 0x8002
    ctx->pc = 0x31c9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32770);
    // 0x31c9b4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x31c9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31c9b8: 0x24080045  addiu       $t0, $zero, 0x45
    ctx->pc = 0x31c9b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x31c9bc: 0xad450018  sw          $a1, 0x18($t2)
    ctx->pc = 0x31c9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 24), GPR_U32(ctx, 5));
    // 0x31c9c0: 0x25450050  addiu       $a1, $t2, 0x50
    ctx->pc = 0x31c9c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 80));
    // 0x31c9c4: 0xfd430020  sd          $v1, 0x20($t2)
    ctx->pc = 0x31c9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 32), GPR_U64(ctx, 3));
    // 0x31c9c8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x31c9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x31c9cc: 0xfd460028  sd          $a2, 0x28($t2)
    ctx->pc = 0x31c9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 40), GPR_U64(ctx, 6));
    // 0x31c9d0: 0xad42001c  sw          $v0, 0x1C($t2)
    ctx->pc = 0x31c9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 28), GPR_U32(ctx, 2));
    // 0x31c9d4: 0xad480038  sw          $t0, 0x38($t2)
    ctx->pc = 0x31c9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 56), GPR_U32(ctx, 8));
    // 0x31c9d8: 0xad400010  sw          $zero, 0x10($t2)
    ctx->pc = 0x31c9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 0));
    // 0x31c9dc: 0xad400014  sw          $zero, 0x14($t2)
    ctx->pc = 0x31c9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 0));
    // 0x31c9e0: 0x95220004  lhu         $v0, 0x4($t1)
    ctx->pc = 0x31c9e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x31c9e4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x31C9E4u;
    {
        const bool branch_taken_0x31c9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C9E4u;
        // 0x31c9e8: 0x120302d  daddu       $a2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c9e4) {
            ctx->pc = 0x31C9F8u;
            goto label_31c9f8;
        }
    }
    ctx->pc = 0x31C9ECu;
    // 0x31c9ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31c9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31c9f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x31C9F0u;
    {
        const bool branch_taken_0x31c9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C9F0u;
        // 0x31c9f4: 0xfd420030  sd          $v0, 0x30($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 48), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c9f0) {
            ctx->pc = 0x31C9FCu;
            goto label_31c9fc;
        }
    }
    ctx->pc = 0x31C9F8u;
label_31c9f8:
    // 0x31c9f8: 0xfd400030  sd          $zero, 0x30($t2)
    ctx->pc = 0x31c9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 48), GPR_U64(ctx, 0));
label_31c9fc:
    // 0x31c9fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31c9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ca00: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x31ca00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x31ca04: 0xad420048  sw          $v0, 0x48($t2)
    ctx->pc = 0x31ca04u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 72), GPR_U32(ctx, 2));
    // 0x31ca08: 0xfd400040  sd          $zero, 0x40($t2)
    ctx->pc = 0x31ca08u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 64), GPR_U64(ctx, 0));
    // 0x31ca0c: 0x80c7286  j           func_31CA18
    ctx->pc = 0x31CA0Cu;
    ctx->pc = 0x31CA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CA0Cu;
    // 0x31ca10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CA18u;
    goto label_31ca18;
    ctx->pc = 0x31CA14u;
    // 0x31ca14: 0x0  nop
    ctx->pc = 0x31ca14u;
    // NOP
label_31ca18:
    // 0x31ca18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31ca18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31ca1c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x31ca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x31ca20: 0x3463000d  ori         $v1, $v1, 0xD
    ctx->pc = 0x31ca20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13);
    // 0x31ca24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31ca24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31ca28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31ca28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ca2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31ca2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31ca30: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x31ca30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ca34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x31ca34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x31ca38: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x31ca38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ca3c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x31ca3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x31ca40: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x31ca40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x31ca44: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x31ca44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x31ca48: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31ca48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31ca4c: 0x34421100  ori         $v0, $v0, 0x1100
    ctx->pc = 0x31ca4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4352);
    // 0x31ca50: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31ca50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31ca54: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x31ca54u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x31ca58: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x31ca58u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x31ca5c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x31ca5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x31ca60: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31ca60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31ca64: 0x3484800c  ori         $a0, $a0, 0x800C
    ctx->pc = 0x31ca64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32780);
    // 0x31ca68: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x31ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31ca6c: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x31ca6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x31ca70: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x31ca70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x31ca74: 0xfe040010  sd          $a0, 0x10($s0)
    ctx->pc = 0x31ca74u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 4));
    // 0x31ca78: 0xae050038  sw          $a1, 0x38($s0)
    ctx->pc = 0x31ca78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 5));
    // 0x31ca7c: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x31ca7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x31ca80: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x31ca80u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x31ca84: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x31ca84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x31ca88: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x31ca88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x31ca8c: 0x24060261  addiu       $a2, $zero, 0x261
    ctx->pc = 0x31ca8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 609));
    // 0x31ca90: 0xfe000020  sd          $zero, 0x20($s0)
    ctx->pc = 0x31ca90u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 0));
    // 0x31ca94: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x31ca94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x31ca98: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x31ca98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x31ca9c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x31ca9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31caa0: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x31caa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x31caa4: 0x240a0042  addiu       $t2, $zero, 0x42
    ctx->pc = 0x31caa4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x31caa8: 0x96430008  lhu         $v1, 0x8($s2)
    ctx->pc = 0x31caa8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x31caac: 0x240c0044  addiu       $t4, $zero, 0x44
    ctx->pc = 0x31caacu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x31cab0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31cab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31cab4: 0xfe060040  sd          $a2, 0x40($s0)
    ctx->pc = 0x31cab4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 6));
    // 0x31cab8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31cab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31cabc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31cabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31cac0: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x31cac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x31cac4: 0x214ba  dsrl        $v0, $v0, 18
    ctx->pc = 0x31cac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 18);
    // 0x31cac8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31cac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31cacc: 0xae070058  sw          $a3, 0x58($s0)
    ctx->pc = 0x31caccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 7));
    // 0x31cad0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x31cad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x31cad4: 0xae080068  sw          $t0, 0x68($s0)
    ctx->pc = 0x31cad4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 8));
    // 0x31cad8: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x31cad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
    // 0x31cadc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31cadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cae0: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x31cae0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
    // 0x31cae4: 0x240d0047  addiu       $t5, $zero, 0x47
    ctx->pc = 0x31cae4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x31cae8: 0xfe000050  sd          $zero, 0x50($s0)
    ctx->pc = 0x31cae8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 0));
    // 0x31caec: 0x3c0b0003  lui         $t3, 0x3
    ctx->pc = 0x31caecu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)3 << 16));
    // 0x31caf0: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x31caf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x31caf4: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x31caf4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x31caf8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x31cafc: 0xae0a0078  sw          $t2, 0x78($s0)
    ctx->pc = 0x31cafcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 10));
    // 0x31cb00: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31cb00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31cb04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31cb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x31cb08: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x31cb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x31cb0c: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x31cb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x31cb10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31cb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31cb14: 0xfe0c0070  sd          $t4, 0x70($s0)
    ctx->pc = 0x31cb14u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 112), GPR_U64(ctx, 12));
    // 0x31cb18: 0xae0d0088  sw          $t5, 0x88($s0)
    ctx->pc = 0x31cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 13));
    // 0x31cb1c: 0xfe0b0080  sd          $t3, 0x80($s0)
    ctx->pc = 0x31cb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 11));
    // 0x31cb20: 0xae050098  sw          $a1, 0x98($s0)
    ctx->pc = 0x31cb20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 5));
    // 0x31cb24: 0xc0c7848  jal         func_31E120
    ctx->pc = 0x31CB24u;
    SET_GPR_U32(ctx, 31, 0x31CB2Cu);
    ctx->pc = 0x31CB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CB24u;
    // 0x31cb28: 0xfe020060  sd          $v0, 0x60($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 96), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E120u, 0x31CB24u, 0x31CB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CB2Cu;
label_31cb2c:
    // 0x31cb2c: 0x3403ff00  ori         $v1, $zero, 0xFF00
    ctx->pc = 0x31cb2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x31cb30: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x31cb30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x31cb34: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31cb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31cb38: 0x2405004e  addiu       $a1, $zero, 0x4E
    ctx->pc = 0x31cb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x31cb3c: 0xae0500a8  sw          $a1, 0xA8($s0)
    ctx->pc = 0x31cb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 5));
    // 0x31cb40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31cb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cb44: 0xc0c7864  jal         func_31E190
    ctx->pc = 0x31CB44u;
    SET_GPR_U32(ctx, 31, 0x31CB4Cu);
    ctx->pc = 0x31CB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CB44u;
    // 0x31cb48: 0xfe020090  sd          $v0, 0x90($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 144), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E190u, 0x31CB44u, 0x31CB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CB4Cu;
label_31cb4c:
    // 0x31cb4c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x31cb4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x31cb50: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x31cb50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x31cb54: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x31cb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x31cb58: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x31cb58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x31cb5c: 0xae0500b8  sw          $a1, 0xB8($s0)
    ctx->pc = 0x31cb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 5));
    // 0x31cb60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31cb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cb64: 0xc0c7880  jal         func_31E200
    ctx->pc = 0x31CB64u;
    SET_GPR_U32(ctx, 31, 0x31CB6Cu);
    ctx->pc = 0x31CB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CB64u;
    // 0x31cb68: 0xfe0200a0  sd          $v0, 0xA0($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 160), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E200u, 0x31CB64u, 0x31CB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CB6Cu;
label_31cb6c:
    // 0x31cb6c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x31cb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x31cb70: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x31cb70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x31cb74: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31cb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31cb78: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x31cb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x31cb7c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x31cb7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x31cb80: 0x433024  and         $a2, $v0, $v1
    ctx->pc = 0x31cb80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x31cb84: 0x260200e0  addiu       $v0, $s0, 0xE0
    ctx->pc = 0x31cb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x31cb88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31cb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31cb8c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x31cb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x31cb90: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x31cb90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x31cb94: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x31cb94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x31cb98: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x31cb98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x31cb9c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x31cb9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x31cba0: 0x24050116  addiu       $a1, $zero, 0x116
    ctx->pc = 0x31cba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    // 0x31cba4: 0xfe0600b0  sd          $a2, 0xB0($s0)
    ctx->pc = 0x31cba4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 176), GPR_U64(ctx, 6));
    // 0x31cba8: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x31cba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x31cbac: 0xfe0400c0  sd          $a0, 0xC0($s0)
    ctx->pc = 0x31cbacu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 192), GPR_U64(ctx, 4));
    // 0x31cbb0: 0xfe0500d0  sd          $a1, 0xD0($s0)
    ctx->pc = 0x31cbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 208), GPR_U64(ctx, 5));
    // 0x31cbb4: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x31cbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x31cbb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31cbb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31cbbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31cbbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31cbc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x31cbc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31cbc4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x31cbc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31cbc8: 0x3e00008  jr          $ra
    ctx->pc = 0x31CBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CBC8u;
        // 0x31cbcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CBD0u;
label_31cbd0:
    // 0x31cbd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31cbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31cbd4: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x31cbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x31cbd8: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x31cbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x31cbdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31cbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31cbe0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31cbe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31cbe4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31cbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31cbe8: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x31cbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x31cbec: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x31cbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x31cbf0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31cbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31cbf4: 0x34421100  ori         $v0, $v0, 0x1100
    ctx->pc = 0x31cbf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4352);
    // 0x31cbf8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x31cbf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x31cbfc: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x31cbfcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x31cc00: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x31cc00u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x31cc04: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x31cc04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x31cc08: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x31cc08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x31cc0c: 0x34848002  ori         $a0, $a0, 0x8002
    ctx->pc = 0x31cc0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32770);
    // 0x31cc10: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x31cc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x31cc14: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x31cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x31cc18: 0xfe040010  sd          $a0, 0x10($s0)
    ctx->pc = 0x31cc18u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 4));
    // 0x31cc1c: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x31cc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x31cc20: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x31cc20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x31cc24: 0xc0cd584  jal         func_335610
    ctx->pc = 0x31CC24u;
    SET_GPR_U32(ctx, 31, 0x31CC2Cu);
    ctx->pc = 0x31CC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CC24u;
    // 0x31cc28: 0xfe020018  sd          $v0, 0x18($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335610u, 0x31CC24u, 0x31CC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CC2Cu;
label_31cc2c:
    // 0x31cc2c: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x31cc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x31cc30: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x31cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x31cc34: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x31cc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x31cc38: 0xc0cd584  jal         func_335610
    ctx->pc = 0x31CC38u;
    SET_GPR_U32(ctx, 31, 0x31CC40u);
    ctx->pc = 0x31CC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CC38u;
    // 0x31cc3c: 0xfe020020  sd          $v0, 0x20($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335610u, 0x31CC38u, 0x31CC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CC40u;
label_31cc40:
    // 0x31cc40: 0x3c031100  lui         $v1, 0x1100
    ctx->pc = 0x31cc40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4352 << 16));
    // 0x31cc44: 0x3c040600  lui         $a0, 0x600
    ctx->pc = 0x31cc44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1536 << 16));
    // 0x31cc48: 0xfe020030  sd          $v0, 0x30($s0)
    ctx->pc = 0x31cc48u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 48), GPR_U64(ctx, 2));
    // 0x31cc4c: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x31cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x31cc50: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x31cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x31cc54: 0xae04004c  sw          $a0, 0x4C($s0)
    ctx->pc = 0x31cc54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 4));
    // 0x31cc58: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x31cc58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x31cc5c: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x31cc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x31cc60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31cc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31cc64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31cc64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31cc68: 0x3e00008  jr          $ra
    ctx->pc = 0x31CC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CC68u;
        // 0x31cc6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CC70u;
}
