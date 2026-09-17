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

// Function: sub_00309BB8
// Address: 0x309bb8 - 0x309fa0
void sub_00309BB8_0x309bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309BB8_0x309bb8");
#endif

    switch (ctx->pc) {
        case 0x309bf8u: goto label_309bf8;
        case 0x309cb0u: goto label_309cb0;
        case 0x309ce8u: goto label_309ce8;
        case 0x309d90u: goto label_309d90;
        case 0x309e30u: goto label_309e30;
        case 0x309ed8u: goto label_309ed8;
        default: break;
    }

    ctx->pc = 0x309bb8u;

    // 0x309bb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x309bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x309bbc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x309bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x309bc0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x309bc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309bc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x309bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x309bc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x309bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x309bcc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x309bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x309bd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x309bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x309bd4: 0x26b20268  addiu       $s2, $s5, 0x268
    ctx->pc = 0x309bd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 616));
    // 0x309bd8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x309bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x309bdc: 0x26b30168  addiu       $s3, $s5, 0x168
    ctx->pc = 0x309bdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 360));
    // 0x309be0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x309be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x309be4: 0x26b40068  addiu       $s4, $s5, 0x68
    ctx->pc = 0x309be4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 104));
    // 0x309be8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x309be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x309bec: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x309becu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309bf0: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x309bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x309bf4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x309bf4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_309bf8:
    // 0x309bf8: 0x8ea30368  lw          $v1, 0x368($s5)
    ctx->pc = 0x309bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 872)));
    // 0x309bfc: 0x3c021003  lui         $v0, 0x1003
    ctx->pc = 0x309bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4099 << 16));
    // 0x309c00: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x309c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x309c04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x309c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x309c08: 0x34428085  ori         $v0, $v0, 0x8085
    ctx->pc = 0x309c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32901);
    // 0x309c0c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x309c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x309c10: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x309c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x309c14: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x309c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x309c18: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x309c18u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x309c1c: 0x7387c  dsll32      $a3, $a3, 1
    ctx->pc = 0x309c1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 1));
    // 0x309c20: 0x340aaa40  ori         $t2, $zero, 0xAA40
    ctx->pc = 0x309c20u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43584);
    // 0x309c24: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x309c24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x309c28: 0x24080051  addiu       $t0, $zero, 0x51
    ctx->pc = 0x309c28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x309c2c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x309c2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309c30: 0x340aaa50  ori         $t2, $zero, 0xAA50
    ctx->pc = 0x309c30u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43600);
    // 0x309c34: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x309c34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x309c38: 0xfec20000  sd          $v0, 0x0($s6)
    ctx->pc = 0x309c38u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 2));
    // 0x309c3c: 0x24090052  addiu       $t1, $zero, 0x52
    ctx->pc = 0x309c3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x309c40: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x309c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x309c44: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x309c44u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x309c48: 0xfc24aa48  sd          $a0, -0x55B8($at)
    ctx->pc = 0x309c48u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294945352), GPR_U64(ctx, 4));
    // 0x309c4c: 0x24040053  addiu       $a0, $zero, 0x53
    ctx->pc = 0x309c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x309c50: 0xfd450008  sd          $a1, 0x8($t2)
    ctx->pc = 0x309c50u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 5));
    // 0x309c54: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x309c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x309c58: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x309c58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x309c5c: 0x34c60010  ori         $a2, $a2, 0x10
    ctx->pc = 0x309c5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16);
    // 0x309c60: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x309c60u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309c64: 0x9ea20008  lwu         $v0, 0x8($s5)
    ctx->pc = 0x309c64u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x309c68: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x309c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x309c6c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x309c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x309c70: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x309c70u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x309c74: 0x340aaa60  ori         $t2, $zero, 0xAA60
    ctx->pc = 0x309c74u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43616);
    // 0x309c78: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x309c78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x309c7c: 0xfd480008  sd          $t0, 0x8($t2)
    ctx->pc = 0x309c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 8));
    // 0x309c80: 0xfd400000  sd          $zero, 0x0($t2)
    ctx->pc = 0x309c80u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 0));
    // 0x309c84: 0x340aaa70  ori         $t2, $zero, 0xAA70
    ctx->pc = 0x309c84u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43632);
    // 0x309c88: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x309c88u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x309c8c: 0xfd460000  sd          $a2, 0x0($t2)
    ctx->pc = 0x309c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 6));
    // 0x309c90: 0xfd490008  sd          $t1, 0x8($t2)
    ctx->pc = 0x309c90u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 9));
    // 0x309c94: 0x340aaa80  ori         $t2, $zero, 0xAA80
    ctx->pc = 0x309c94u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43648);
    // 0x309c98: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x309c98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x309c9c: 0xfd440008  sd          $a0, 0x8($t2)
    ctx->pc = 0x309c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 4));
    // 0x309ca0: 0xfd400000  sd          $zero, 0x0($t2)
    ctx->pc = 0x309ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 0));
    // 0x309ca4: 0x340aaa90  ori         $t2, $zero, 0xAA90
    ctx->pc = 0x309ca4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43664);
    // 0x309ca8: 0x1435021  addu        $t2, $t2, $v1
    ctx->pc = 0x309ca8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x309cac: 0x270f0004  addiu       $t7, $t8, 0x4
    ctx->pc = 0x309cacu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
label_309cb0:
    // 0x309cb0: 0x30f102a  slt         $v0, $t8, $t7
    ctx->pc = 0x309cb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
    // 0x309cb4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x309CB4u;
    {
        const bool branch_taken_0x309cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309CB4u;
        // 0x309cb8: 0x27080008  addiu       $t0, $t8, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309cb4) {
            ctx->pc = 0x309D54u;
            goto label_309d54;
        }
    }
    ctx->pc = 0x309CBCu;
    // 0x309cbc: 0x181040  sll         $v0, $t8, 1
    ctx->pc = 0x309cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 24), 1));
    // 0x309cc0: 0x24100054  addiu       $s0, $zero, 0x54
    ctx->pc = 0x309cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x309cc4: 0x546021  addu        $t4, $v0, $s4
    ctx->pc = 0x309cc4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x309cc8: 0x340e8000  ori         $t6, $zero, 0x8000
    ctx->pc = 0x309cc8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x309ccc: 0xe743c  dsll32      $t6, $t6, 16
    ctx->pc = 0x309cccu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 16));
    // 0x309cd0: 0x340d8000  ori         $t5, $zero, 0x8000
    ctx->pc = 0x309cd0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x309cd4: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x309cd4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x309cd8: 0x525821  addu        $t3, $v0, $s2
    ctx->pc = 0x309cd8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x309cdc: 0x534821  addu        $t1, $v0, $s3
    ctx->pc = 0x309cdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x309ce0: 0x1f84023  subu        $t0, $t7, $t8
    ctx->pc = 0x309ce0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 24)));
    // 0x309ce4: 0x0  nop
    ctx->pc = 0x309ce4u;
    // NOP
label_309ce8:
    // 0x309ce8: 0xfd500008  sd          $s0, 0x8($t2)
    ctx->pc = 0x309ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 16));
    // 0x309cec: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x309cecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x309cf0: 0x91260000  lbu         $a2, 0x0($t1)
    ctx->pc = 0x309cf0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x309cf4: 0x91270001  lbu         $a3, 0x1($t1)
    ctx->pc = 0x309cf4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x309cf8: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x309cf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x309cfc: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x309cfcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x309d00: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x309d00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x309d04: 0x91850001  lbu         $a1, 0x1($t4)
    ctx->pc = 0x309d04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x309d08: 0x73a3c  dsll32      $a3, $a3, 8
    ctx->pc = 0x309d08u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 8));
    // 0x309d0c: 0x91640001  lbu         $a0, 0x1($t3)
    ctx->pc = 0x309d0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x309d10: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x309d10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x309d14: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x309d14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x309d18: 0x258c0002  addiu       $t4, $t4, 0x2
    ctx->pc = 0x309d18u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
    // 0x309d1c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x309d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x309d20: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x309d20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x309d24: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x309d24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x309d28: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x309d28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x309d2c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x309d2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x309d30: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x309d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x309d34: 0x6d1825  or          $v1, $v1, $t5
    ctx->pc = 0x309d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
    // 0x309d38: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x309d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x309d3c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x309d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x309d40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x309d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x309d44: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x309d44u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x309d48: 0x1500ffe7  bnez        $t0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x309D48u;
    {
        const bool branch_taken_0x309d48 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x309D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309D48u;
        // 0x309d4c: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309d48) {
            ctx->pc = 0x309CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309ce8;
        }
    }
    ctx->pc = 0x309D50u;
    // 0x309d50: 0x27080008  addiu       $t0, $t8, 0x8
    ctx->pc = 0x309d50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
label_309d54:
    // 0x309d54: 0x270e000c  addiu       $t6, $t8, 0xC
    ctx->pc = 0x309d54u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 24), 12));
    // 0x309d58: 0x10e102a  slt         $v0, $t0, $t6
    ctx->pc = 0x309d58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x309d5c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x309D5Cu;
    {
        const bool branch_taken_0x309d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309D5Cu;
        // 0x309d60: 0x100682d  daddu       $t5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309d5c) {
            ctx->pc = 0x309DF8u;
            goto label_309df8;
        }
    }
    ctx->pc = 0x309D64u;
    // 0x309d64: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x309d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x309d68: 0x1c84023  subu        $t0, $t6, $t0
    ctx->pc = 0x309d68u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
    // 0x309d6c: 0x546021  addu        $t4, $v0, $s4
    ctx->pc = 0x309d6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x309d70: 0x24110054  addiu       $s1, $zero, 0x54
    ctx->pc = 0x309d70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x309d74: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x309d74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x309d78: 0x10843c  dsll32      $s0, $s0, 16
    ctx->pc = 0x309d78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 16));
    // 0x309d7c: 0x34198000  ori         $t9, $zero, 0x8000
    ctx->pc = 0x309d7cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x309d80: 0x19cc38  dsll        $t9, $t9, 16
    ctx->pc = 0x309d80u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << 16);
    // 0x309d84: 0x525821  addu        $t3, $v0, $s2
    ctx->pc = 0x309d84u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x309d88: 0x534821  addu        $t1, $v0, $s3
    ctx->pc = 0x309d88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x309d8c: 0x0  nop
    ctx->pc = 0x309d8cu;
    // NOP
label_309d90:
    // 0x309d90: 0xfd510008  sd          $s1, 0x8($t2)
    ctx->pc = 0x309d90u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 17));
    // 0x309d94: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x309d94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x309d98: 0x91260000  lbu         $a2, 0x0($t1)
    ctx->pc = 0x309d98u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x309d9c: 0x91270001  lbu         $a3, 0x1($t1)
    ctx->pc = 0x309d9cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x309da0: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x309da0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x309da4: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x309da4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x309da8: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x309da8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x309dac: 0x91850001  lbu         $a1, 0x1($t4)
    ctx->pc = 0x309dacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x309db0: 0x73a3c  dsll32      $a3, $a3, 8
    ctx->pc = 0x309db0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 8));
    // 0x309db4: 0x91640001  lbu         $a0, 0x1($t3)
    ctx->pc = 0x309db4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x309db8: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x309db8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x309dbc: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x309dbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x309dc0: 0x258c0002  addiu       $t4, $t4, 0x2
    ctx->pc = 0x309dc0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
    // 0x309dc4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x309dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x309dc8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x309dc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x309dcc: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x309dccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x309dd0: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x309dd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x309dd4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x309dd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x309dd8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x309dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x309ddc: 0x791825  or          $v1, $v1, $t9
    ctx->pc = 0x309ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 25));
    // 0x309de0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x309de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x309de4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x309de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x309de8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x309de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x309dec: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x309decu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x309df0: 0x1500ffe7  bnez        $t0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x309DF0u;
    {
        const bool branch_taken_0x309df0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x309DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309DF0u;
        // 0x309df4: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309df0) {
            ctx->pc = 0x309D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309d90;
        }
    }
    ctx->pc = 0x309DF8u;
label_309df8:
    // 0x309df8: 0x1e0402d  daddu       $t0, $t7, $zero
    ctx->pc = 0x309df8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x309dfc: 0x10d102a  slt         $v0, $t0, $t5
    ctx->pc = 0x309dfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x309e00: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x309E00u;
    {
        const bool branch_taken_0x309e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x309e00) {
            ctx->pc = 0x309E04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309E00u;
            // 0x309e04: 0x1c0402d  daddu       $t0, $t6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309E9Cu;
            goto label_309e9c;
        }
    }
    ctx->pc = 0x309E08u;
    // 0x309e08: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x309e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x309e0c: 0x1a84023  subu        $t0, $t5, $t0
    ctx->pc = 0x309e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x309e10: 0x546021  addu        $t4, $v0, $s4
    ctx->pc = 0x309e10u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x309e14: 0x24100054  addiu       $s0, $zero, 0x54
    ctx->pc = 0x309e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x309e18: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x309e18u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x309e1c: 0xf7c3c  dsll32      $t7, $t7, 16
    ctx->pc = 0x309e1cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 16));
    // 0x309e20: 0x340d8000  ori         $t5, $zero, 0x8000
    ctx->pc = 0x309e20u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x309e24: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x309e24u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x309e28: 0x525821  addu        $t3, $v0, $s2
    ctx->pc = 0x309e28u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x309e2c: 0x534821  addu        $t1, $v0, $s3
    ctx->pc = 0x309e2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_309e30:
    // 0x309e30: 0xfd500008  sd          $s0, 0x8($t2)
    ctx->pc = 0x309e30u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 16));
    // 0x309e34: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x309e34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x309e38: 0x91260000  lbu         $a2, 0x0($t1)
    ctx->pc = 0x309e38u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x309e3c: 0x91270001  lbu         $a3, 0x1($t1)
    ctx->pc = 0x309e3cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x309e40: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x309e40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x309e44: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x309e44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x309e48: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x309e48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x309e4c: 0x91850001  lbu         $a1, 0x1($t4)
    ctx->pc = 0x309e4cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x309e50: 0x73a3c  dsll32      $a3, $a3, 8
    ctx->pc = 0x309e50u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 8));
    // 0x309e54: 0x91640001  lbu         $a0, 0x1($t3)
    ctx->pc = 0x309e54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x309e58: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x309e58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x309e5c: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x309e5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x309e60: 0x258c0002  addiu       $t4, $t4, 0x2
    ctx->pc = 0x309e60u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
    // 0x309e64: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x309e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x309e68: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x309e68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x309e6c: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x309e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x309e70: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x309e70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x309e74: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x309e74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x309e78: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x309e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x309e7c: 0x6d1825  or          $v1, $v1, $t5
    ctx->pc = 0x309e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
    // 0x309e80: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x309e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x309e84: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x309e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x309e88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x309e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x309e8c: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x309e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x309e90: 0x1500ffe7  bnez        $t0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x309E90u;
    {
        const bool branch_taken_0x309e90 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x309E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309E90u;
        // 0x309e94: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309e90) {
            ctx->pc = 0x309E30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309e30;
        }
    }
    ctx->pc = 0x309E98u;
    // 0x309e98: 0x1c0402d  daddu       $t0, $t6, $zero
    ctx->pc = 0x309e98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_309e9c:
    // 0x309e9c: 0x270d0010  addiu       $t5, $t8, 0x10
    ctx->pc = 0x309e9cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x309ea0: 0x10d102a  slt         $v0, $t0, $t5
    ctx->pc = 0x309ea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x309ea4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x309EA4u;
    {
        const bool branch_taken_0x309ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309EA4u;
        // 0x309ea8: 0x1a0c02d  daddu       $t8, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309ea4) {
            ctx->pc = 0x309F44u;
            goto label_309f44;
        }
    }
    ctx->pc = 0x309EACu;
    // 0x309eac: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x309eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x309eb0: 0x1a84023  subu        $t0, $t5, $t0
    ctx->pc = 0x309eb0u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x309eb4: 0x546021  addu        $t4, $v0, $s4
    ctx->pc = 0x309eb4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x309eb8: 0x24100054  addiu       $s0, $zero, 0x54
    ctx->pc = 0x309eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x309ebc: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x309ebcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x309ec0: 0xf7c3c  dsll32      $t7, $t7, 16
    ctx->pc = 0x309ec0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 16));
    // 0x309ec4: 0x340e8000  ori         $t6, $zero, 0x8000
    ctx->pc = 0x309ec4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x309ec8: 0xe7438  dsll        $t6, $t6, 16
    ctx->pc = 0x309ec8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 16);
    // 0x309ecc: 0x525821  addu        $t3, $v0, $s2
    ctx->pc = 0x309eccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x309ed0: 0x534821  addu        $t1, $v0, $s3
    ctx->pc = 0x309ed0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x309ed4: 0x0  nop
    ctx->pc = 0x309ed4u;
    // NOP
label_309ed8:
    // 0x309ed8: 0xfd500008  sd          $s0, 0x8($t2)
    ctx->pc = 0x309ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 16));
    // 0x309edc: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x309edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x309ee0: 0x91260000  lbu         $a2, 0x0($t1)
    ctx->pc = 0x309ee0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x309ee4: 0x91270001  lbu         $a3, 0x1($t1)
    ctx->pc = 0x309ee4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x309ee8: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x309ee8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x309eec: 0x91630000  lbu         $v1, 0x0($t3)
    ctx->pc = 0x309eecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x309ef0: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x309ef0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
    // 0x309ef4: 0x91850001  lbu         $a1, 0x1($t4)
    ctx->pc = 0x309ef4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x309ef8: 0x73a3c  dsll32      $a3, $a3, 8
    ctx->pc = 0x309ef8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 8));
    // 0x309efc: 0x91640001  lbu         $a0, 0x1($t3)
    ctx->pc = 0x309efcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x309f00: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x309f00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x309f04: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x309f04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x309f08: 0x258c0002  addiu       $t4, $t4, 0x2
    ctx->pc = 0x309f08u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
    // 0x309f0c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x309f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x309f10: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x309f10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x309f14: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x309f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x309f18: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x309f18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x309f1c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x309f1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x309f20: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x309f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x309f24: 0x6e1825  or          $v1, $v1, $t6
    ctx->pc = 0x309f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 14));
    // 0x309f28: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x309f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x309f2c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x309f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x309f30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x309f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x309f34: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x309f34u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x309f38: 0x1500ffe7  bnez        $t0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x309F38u;
    {
        const bool branch_taken_0x309f38 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x309F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F38u;
        // 0x309f3c: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f38) {
            ctx->pc = 0x309ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309ed8;
        }
    }
    ctx->pc = 0x309F40u;
    // 0x309f40: 0x1a0c02d  daddu       $t8, $t5, $zero
    ctx->pc = 0x309f40u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_309f44:
    // 0x309f44: 0x2b020080  slti        $v0, $t8, 0x80
    ctx->pc = 0x309f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x309f48: 0x5440ff59  bnel        $v0, $zero, . + 4 + (-0xA7 << 2)
    ctx->pc = 0x309F48u;
    {
        const bool branch_taken_0x309f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x309f48) {
            ctx->pc = 0x309F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x309F48u;
            // 0x309f4c: 0x270f0004  addiu       $t7, $t8, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x309CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309cb0;
        }
    }
    ctx->pc = 0x309F50u;
    // 0x309f50: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x309f50u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x309f54: 0x26ca0850  addiu       $t2, $s6, 0x850
    ctx->pc = 0x309f54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), 2128));
    // 0x309f58: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x309f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x309f5c: 0x2bc30002  slti        $v1, $fp, 0x2
    ctx->pc = 0x309f5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x309f60: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x309f60u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
    // 0x309f64: 0x26f70860  addiu       $s7, $s7, 0x860
    ctx->pc = 0x309f64u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 2144));
    // 0x309f68: 0x1460ff23  bnez        $v1, . + 4 + (-0xDD << 2)
    ctx->pc = 0x309F68u;
    {
        const bool branch_taken_0x309f68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x309F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F68u;
        // 0x309f6c: 0xfd400000  sd          $zero, 0x0($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309f68) {
            ctx->pc = 0x309BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_309bf8;
        }
    }
    ctx->pc = 0x309F70u;
    // 0x309f70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x309f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309f74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x309f74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x309f78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x309f78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x309f7c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x309f7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x309f80: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x309f80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x309f84: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x309f84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x309f88: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x309f88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x309f8c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x309f8cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x309f90: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x309f90u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x309f94: 0x3e00008  jr          $ra
    ctx->pc = 0x309F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309F94u;
        // 0x309f98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309F94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309F9Cu;
    // 0x309f9c: 0x0  nop
    ctx->pc = 0x309f9cu;
    // NOP
    ctx->pc = 0x309fa0u;
}
