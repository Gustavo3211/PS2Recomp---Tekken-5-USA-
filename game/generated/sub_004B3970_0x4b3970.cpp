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

// Function: sub_004B3970
// Address: 0x4b3970 - 0x4b3fa0
void sub_004B3970_0x4b3970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3970_0x4b3970");
#endif

    switch (ctx->pc) {
        case 0x4b39d0u: goto label_4b39d0;
        case 0x4b3e80u: goto label_4b3e80;
        case 0x4b3eb8u: goto label_4b3eb8;
        case 0x4b3ef0u: goto label_4b3ef0;
        case 0x4b3f10u: goto label_4b3f10;
        case 0x4b3f24u: goto label_4b3f24;
        case 0x4b3f4cu: goto label_4b3f4c;
        case 0x4b3f54u: goto label_4b3f54;
        case 0x4b3f5cu: goto label_4b3f5c;
        default: break;
    }

    ctx->pc = 0x4b3970u;

    // 0x4b3970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b3970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b3974: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4b3974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4b3978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b3978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b397c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4b397cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4b3980: 0x8c490d64  lw          $t1, 0xD64($v0)
    ctx->pc = 0x4b3980u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x7F0D64u));
    // 0x4b3984: 0x24e70d3c  addiu       $a3, $a3, 0xD3C
    ctx->pc = 0x4b3984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3388));
    // 0x4b3988: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4b3988u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D3Cu));
    // 0x4b398c: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4b398cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4b3990: 0x8525001c  lh          $a1, 0x1C($t1)
    ctx->pc = 0x4b3990u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x4b3994: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4b3994u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4b3998: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b3998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b399c: 0x24c60d40  addiu       $a2, $a2, 0xD40
    ctx->pc = 0x4b399cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3392));
    // 0x4b39a0: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4b39a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4b39a4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4b39a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D40u));
    // 0x4b39a8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4b39a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4b39ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b39acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b39b0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4b39b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4b39b4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b39b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b39b8: 0x85220022  lh          $v0, 0x22($t1)
    ctx->pc = 0x4b39b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 34)));
    // 0x4b39bc: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4b39bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4b39c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b39c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b39c4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4b39c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4b39c8: 0x812ce74  j           func_4B39D0
    ctx->pc = 0x4B39C8u;
    ctx->pc = 0x4B39CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B39C8u;
    // 0x4b39cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B39D0u;
    goto label_4b39d0;
    ctx->pc = 0x4B39D0u;
label_4b39d0:
    // 0x4b39d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b39d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4b39d4: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4b39d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4b39d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4b39d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4b39dc: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4b39dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4b39e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4b39e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4b39e4: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4b39e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4b39e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4b39e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4b39ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4b39ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b39f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4b39f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4b39f4: 0x26780164  addiu       $t8, $s3, 0x164
    ctx->pc = 0x4b39f4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 356));
    // 0x4b39f8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4b39f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4b39fc: 0x26040d30  addiu       $a0, $s0, 0xD30
    ctx->pc = 0x4b39fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x4b3a00: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4b3a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4b3a04: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4b3a04u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4b3a08: 0x95e50d3c  lhu         $a1, 0xD3C($t7)
    ctx->pc = 0x4b3a08u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x7F0D3Cu));
    // 0x4b3a0c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4b3a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4b3a10: 0x87020000  lh          $v0, 0x0($t8)
    ctx->pc = 0x4b3a10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4b3a14: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b3a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b3a18: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4b3a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4b3a1c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b3a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b3a20: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4b3a20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4b3a24: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4b3a24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b3a28: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4b3a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b3a2c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b3a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b3a30: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B3A30u;
    {
        const bool branch_taken_0x4b3a30 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B3A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3A30u;
        // 0x4b3a34: 0x26460d34  addiu       $a2, $s2, 0xD34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 3380));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3a30) {
            ctx->pc = 0x4B3A48u;
            goto label_4b3a48;
        }
    }
    ctx->pc = 0x4B3A38u;
    // 0x4b3a38: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4b3a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b3a3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4B3A3Cu;
    {
        const bool branch_taken_0x4b3a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3A3Cu;
        // 0x4b3a40: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3a3c) {
            ctx->pc = 0x4B3A50u;
            goto label_4b3a50;
        }
    }
    ctx->pc = 0x4B3A44u;
    // 0x4b3a44: 0x0  nop
    ctx->pc = 0x4b3a44u;
    // NOP
label_4b3a48:
    // 0x4b3a48: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4b3a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b3a4c: 0x472024  and         $a0, $v0, $a3
    ctx->pc = 0x4b3a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_4b3a50:
    // 0x4b3a50: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4b3a50u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4b3a54: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b3a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b3a58: 0x25cb0d38  addiu       $t3, $t6, 0xD38
    ctx->pc = 0x4b3a58u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 3384));
    // 0x4b3a5c: 0x34420222  ori         $v0, $v0, 0x222
    ctx->pc = 0x4b3a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)546);
    // 0x4b3a60: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4b3a60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D38u));
    // 0x4b3a64: 0x26080d30  addiu       $t0, $s0, 0xD30
    ctx->pc = 0x4b3a64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x4b3a68: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4b3a68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4b3a6c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4b3a6cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4b3a70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b3a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b3a74: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b3a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b3a78: 0x96470d34  lhu         $a3, 0xD34($s2)
    ctx->pc = 0x4b3a78u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3380)));
    // 0x4b3a7c: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4b3a7cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b3a80: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4b3a80u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4b3a84: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b3a84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b3a88: 0x72400  sll         $a0, $a3, 16
    ctx->pc = 0x4b3a88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4b3a8c: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4b3a8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b3a90: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4b3a90u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4b3a94: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4b3a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b3a98: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x4b3a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x4b3a9c: 0x95ea0d3c  lhu         $t2, 0xD3C($t7)
    ctx->pc = 0x4b3a9cu;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 3388)));
    // 0x4b3aa0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b3aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b3aa4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b3aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b3aa8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b3aa8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b3aac: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4b3aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4b3ab0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b3ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b3ab4: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4b3ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4b3ab8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b3ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b3abc: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4b3abcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b3ac0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4b3ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4b3ac4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4b3ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4b3ac8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b3ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b3acc: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4b3accu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4b3ad0: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4b3ad0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b3ad4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4b3ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4b3ad8: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4b3ad8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4b3adc: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4b3adcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4b3ae0: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4b3ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4b3ae4: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4b3ae4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b3ae8: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x4b3ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4b3aec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b3aecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b3af0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B3AF0u;
    {
        const bool branch_taken_0x4b3af0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B3AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3AF0u;
        // 0x4b3af4: 0x346400ff  ori         $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3af0) {
            ctx->pc = 0x4B3B00u;
            goto label_4b3b00;
        }
    }
    ctx->pc = 0x4B3AF8u;
    // 0x4b3af8: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4b3af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4b3afc: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4b3afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4b3b00:
    // 0x4b3b00: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4b3b00u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4b3b04: 0x25c40d38  addiu       $a0, $t6, 0xD38
    ctx->pc = 0x4b3b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 3384));
    // 0x4b3b08: 0x26470d34  addiu       $a3, $s2, 0xD34
    ctx->pc = 0x4b3b08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 3380));
    // 0x4b3b0c: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4b3b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4b3b10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4b3b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b3b14: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x4b3b14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b3b18: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x4b3b18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b3b1c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4b3b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4b3b20: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4b3b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4b3b24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4b3b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4b3b28: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4b3b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4b3b2c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4b3b2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b3b30: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B3B30u;
    {
        const bool branch_taken_0x4b3b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3B30u;
        // 0x4b3b34: 0x26050d30  addiu       $a1, $s0, 0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3b30) {
            ctx->pc = 0x4B3B50u;
            goto label_4b3b50;
        }
    }
    ctx->pc = 0x4B3B38u;
    // 0x4b3b38: 0x95e30d3c  lhu         $v1, 0xD3C($t7)
    ctx->pc = 0x4b3b38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 3388)));
    // 0x4b3b3c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b3b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b3b40: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4b3b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4b3b44: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4b3b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4b3b48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4b3b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4b3b4c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4b3b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4b3b50:
    // 0x4b3b50: 0x26040d30  addiu       $a0, $s0, 0xD30
    ctx->pc = 0x4b3b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x4b3b54: 0x26740166  addiu       $s4, $s3, 0x166
    ctx->pc = 0x4b3b54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 358));
    // 0x4b3b58: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4b3b58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b3b5c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4b3b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4b3b60: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4b3b60u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4b3b64: 0xa7020000  sh          $v0, 0x0($t8)
    ctx->pc = 0x4b3b64u;
    WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b3b68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4b3b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b3b6c: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4b3b6cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b3b70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b3b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b3b74: 0x95a50d40  lhu         $a1, 0xD40($t5)
    ctx->pc = 0x4b3b74u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x7F0D40u));
    // 0x4b3b78: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4b3b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4b3b7c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b3b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b3b80: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4b3b80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4b3b84: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4b3b84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b3b88: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4b3b88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4b3b8c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b3b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b3b90: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B3B90u;
    {
        const bool branch_taken_0x4b3b90 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4B3B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3B90u;
        // 0x4b3b94: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3b90) {
            ctx->pc = 0x4B3BA0u;
            goto label_4b3ba0;
        }
    }
    ctx->pc = 0x4B3B98u;
    // 0x4b3b98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4B3B98u;
    {
        const bool branch_taken_0x4b3b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3B98u;
        // 0x4b3b9c: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3b98) {
            ctx->pc = 0x4B3BA4u;
            goto label_4b3ba4;
        }
    }
    ctx->pc = 0x4B3BA0u;
label_4b3ba0:
    // 0x4b3ba0: 0x462024  and         $a0, $v0, $a2
    ctx->pc = 0x4b3ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_4b3ba4:
    // 0x4b3ba4: 0x25cb0d38  addiu       $t3, $t6, 0xD38
    ctx->pc = 0x4b3ba4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 3384));
    // 0x4b3ba8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4b3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4b3bac: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4b3bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b3bb0: 0x34420222  ori         $v0, $v0, 0x222
    ctx->pc = 0x4b3bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)546);
    // 0x4b3bb4: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4b3bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4b3bb8: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4b3bb8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4b3bbc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b3bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b3bc0: 0x26080d30  addiu       $t0, $s0, 0xD30
    ctx->pc = 0x4b3bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x4b3bc4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b3bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b3bc8: 0x96470d34  lhu         $a3, 0xD34($s2)
    ctx->pc = 0x4b3bc8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3380)));
    // 0x4b3bcc: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4b3bccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4b3bd0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b3bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b3bd4: 0x73400  sll         $a2, $a3, 16
    ctx->pc = 0x4b3bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4b3bd8: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4b3bd8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b3bdc: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4b3bdcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4b3be0: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x4b3be0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b3be4: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x4b3be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x4b3be8: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4b3be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b3bec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b3becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b3bf0: 0x95aa0d40  lhu         $t2, 0xD40($t5)
    ctx->pc = 0x4b3bf0u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 3392)));
    // 0x4b3bf4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4b3bf4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4b3bf8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b3bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b3bfc: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4b3bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4b3c00: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b3c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b3c04: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4b3c04u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4b3c08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b3c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b3c0c: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4b3c0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b3c10: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4b3c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4b3c14: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4b3c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4b3c18: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b3c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b3c1c: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4b3c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4b3c20: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4b3c20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b3c24: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4b3c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4b3c28: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x4b3c28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x4b3c2c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4b3c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4b3c30: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4b3c30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4b3c34: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4b3c34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b3c38: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x4b3c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4b3c3c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4b3c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4b3c40: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4B3C40u;
    {
        const bool branch_taken_0x4b3c40 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4B3C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3C40u;
        // 0x4b3c44: 0x346600ff  ori         $a2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3c40) {
            ctx->pc = 0x4B3C50u;
            goto label_4b3c50;
        }
    }
    ctx->pc = 0x4B3C48u;
    // 0x4b3c48: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4b3c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4b3c4c: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x4b3c4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4b3c50:
    // 0x4b3c50: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x4b3c50u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x4b3c54: 0x25cb0d38  addiu       $t3, $t6, 0xD38
    ctx->pc = 0x4b3c54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 3384));
    // 0x4b3c58: 0x264c0d34  addiu       $t4, $s2, 0xD34
    ctx->pc = 0x4b3c58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 3380));
    // 0x4b3c5c: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x4b3c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4b3c60: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4b3c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b3c64: 0x91640000  lbu         $a0, 0x0($t3)
    ctx->pc = 0x4b3c64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b3c68: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x4b3c68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4b3c6c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4b3c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4b3c70: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x4b3c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x4b3c74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4b3c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4b3c78: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4b3c78u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4b3c7c: 0x81620000  lb          $v0, 0x0($t3)
    ctx->pc = 0x4b3c7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4b3c80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B3C80u;
    {
        const bool branch_taken_0x4b3c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3C80u;
        // 0x4b3c84: 0x26050d30  addiu       $a1, $s0, 0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3c80) {
            ctx->pc = 0x4B3CA0u;
            goto label_4b3ca0;
        }
    }
    ctx->pc = 0x4B3C88u;
    // 0x4b3c88: 0x95a30d40  lhu         $v1, 0xD40($t5)
    ctx->pc = 0x4b3c88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 3392)));
    // 0x4b3c8c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b3c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b3c90: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4b3c90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4b3c94: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4b3c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4b3c98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4b3c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4b3c9c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4b3c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4b3ca0:
    // 0x4b3ca0: 0x26080d30  addiu       $t0, $s0, 0xD30
    ctx->pc = 0x4b3ca0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x4b3ca4: 0x25e60d3c  addiu       $a2, $t7, 0xD3C
    ctx->pc = 0x4b3ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), 3388));
    // 0x4b3ca8: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4b3ca8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b3cac: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4b3cacu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4b3cb0: 0x25aa0d40  addiu       $t2, $t5, 0xD40
    ctx->pc = 0x4b3cb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 3392));
    // 0x4b3cb4: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x4b3cb4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b3cb8: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x4b3cb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4b3cbc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4b3cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b3cc0: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4b3cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4b3cc4: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x4b3cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b3cc8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b3cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b3ccc: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4b3cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b3cd0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b3cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b3cd4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b3cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b3cd8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4b3cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4b3cdc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4b3cdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4b3ce0: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4b3ce0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b3ce4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4b3ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4b3ce8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4b3ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4b3cec: 0x84c90000  lh          $t1, 0x0($a2)
    ctx->pc = 0x4b3cecu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b3cf0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4b3cf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4b3cf4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b3cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b3cf8: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4b3cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4b3cfc: 0x86620118  lh          $v0, 0x118($s3)
    ctx->pc = 0x4b3cfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x4b3d00: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4b3d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4b3d04: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4b3d04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4b3d08: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4b3d08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4b3d0c: 0x8662011c  lh          $v0, 0x11C($s3)
    ctx->pc = 0x4b3d0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x4b3d10: 0x85040000  lh          $a0, 0x0($t0)
    ctx->pc = 0x4b3d10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b3d14: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4b3d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4b3d18: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x4b3d18u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x4b3d1c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b3d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b3d20: 0x14890007  bne         $a0, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B3D20u;
    {
        const bool branch_taken_0x4b3d20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        ctx->pc = 0x4B3D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3D20u;
        // 0x4b3d24: 0xad830000  sw          $v1, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3d20) {
            ctx->pc = 0x4B3D40u;
            goto label_4b3d40;
        }
    }
    ctx->pc = 0x4B3D28u;
    // 0x4b3d28: 0x85830000  lh          $v1, 0x0($t4)
    ctx->pc = 0x4b3d28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4b3d2c: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4b3d2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4b3d30: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B3D30u;
    {
        const bool branch_taken_0x4b3d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B3D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3D30u;
        // 0x4b3d34: 0x25c90d38  addiu       $t1, $t6, 0xD38 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), 3384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3d30) {
            ctx->pc = 0x4B3D44u;
            goto label_4b3d44;
        }
    }
    ctx->pc = 0x4B3D38u;
    // 0x4b3d38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b3d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b3d3c: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4b3d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
label_4b3d40:
    // 0x4b3d40: 0x25c90d38  addiu       $t1, $t6, 0xD38
    ctx->pc = 0x4b3d40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), 3384));
label_4b3d44:
    // 0x4b3d44: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4b3d44u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4b3d48: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x4b3d48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4b3d4c: 0x26060d30  addiu       $a2, $s0, 0xD30
    ctx->pc = 0x4b3d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x4b3d50: 0x8d420d60  lw          $v0, 0xD60($t2)
    ctx->pc = 0x4b3d50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4b3d54: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4b3d54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4b3d58: 0x26480d34  addiu       $t0, $s2, 0xD34
    ctx->pc = 0x4b3d58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 3380));
    // 0x4b3d5c: 0xa4430118  sh          $v1, 0x118($v0)
    ctx->pc = 0x4b3d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b3d60: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x4b3d60u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x4b3d64: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4b3d64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b3d68: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4b3d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b3d6c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4b3d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4b3d70: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x4b3d70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b3d74: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4b3d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4b3d78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b3d78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b3d7c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b3d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b3d80: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4b3d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b3d84: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4b3d84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4b3d88: 0x24a58000  addiu       $a1, $a1, -0x8000
    ctx->pc = 0x4b3d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x4b3d8c: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x4b3d8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x4b3d90: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4b3d90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4b3d94: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4b3d94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4b3d98: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4b3d98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4b3d9c: 0x85e20d3c  lh          $v0, 0xD3C($t7)
    ctx->pc = 0x4b3d9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 3388)));
    // 0x4b3da0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4B3DA0u;
    {
        const bool branch_taken_0x4b3da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B3DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3DA0u;
        // 0x4b3da4: 0xad040000  sw          $a0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3da0) {
            ctx->pc = 0x4B3DC0u;
            goto label_4b3dc0;
        }
    }
    ctx->pc = 0x4B3DA8u;
    // 0x4b3da8: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4b3da8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b3dac: 0x85a20d40  lh          $v0, 0xD40($t5)
    ctx->pc = 0x4b3dacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 3392)));
    // 0x4b3db0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B3DB0u;
    {
        const bool branch_taken_0x4b3db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B3DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3DB0u;
        // 0x4b3db4: 0x25440d60  addiu       $a0, $t2, 0xD60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 3424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3db0) {
            ctx->pc = 0x4B3DC4u;
            goto label_4b3dc4;
        }
    }
    ctx->pc = 0x4B3DB8u;
    // 0x4b3db8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b3db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b3dbc: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4b3dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_4b3dc0:
    // 0x4b3dc0: 0x25440d60  addiu       $a0, $t2, 0xD60
    ctx->pc = 0x4b3dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 3424));
label_4b3dc4:
    // 0x4b3dc4: 0x25c50d38  addiu       $a1, $t6, 0xD38
    ctx->pc = 0x4b3dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 3384));
    // 0x4b3dc8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4b3dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b3dcc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4b3dccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b3dd0: 0xa443011c  sh          $v1, 0x11C($v0)
    ctx->pc = 0x4b3dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 284), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b3dd4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x4b3dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x4b3dd8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4b3dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4b3ddc: 0x85e30d3c  lh          $v1, 0xD3C($t7)
    ctx->pc = 0x4b3ddcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 3388)));
    // 0x4b3de0: 0x84820136  lh          $v0, 0x136($a0)
    ctx->pc = 0x4b3de0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 310)));
    // 0x4b3de4: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4B3DE4u;
    {
        const bool branch_taken_0x4b3de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4B3DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3DE4u;
        // 0x4b3de8: 0x8d430d60  lw          $v1, 0xD60($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 3424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3de4) {
            ctx->pc = 0x4B3E0Cu;
            goto label_4b3e0c;
        }
    }
    ctx->pc = 0x4B3DECu;
    // 0x4b3dec: 0x84830138  lh          $v1, 0x138($a0)
    ctx->pc = 0x4b3decu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 312)));
    // 0x4b3df0: 0x85a20d40  lh          $v0, 0xD40($t5)
    ctx->pc = 0x4b3df0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 3392)));
    // 0x4b3df4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4B3DF4u;
    {
        const bool branch_taken_0x4b3df4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4B3DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3DF4u;
        // 0x4b3df8: 0x8d430d60  lw          $v1, 0xD60($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 3424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3df4) {
            ctx->pc = 0x4B3E0Cu;
            goto label_4b3e0c;
        }
    }
    ctx->pc = 0x4B3DFCu;
    // 0x4b3dfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b3dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b3e00: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4b3e00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4b3e04: 0x25c50d38  addiu       $a1, $t6, 0xD38
    ctx->pc = 0x4b3e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 3384));
    // 0x4b3e08: 0x8d430d60  lw          $v1, 0xD60($t2)
    ctx->pc = 0x4b3e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 3424)));
label_4b3e0c:
    // 0x4b3e0c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4b3e0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4b3e10: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4b3e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4b3e14: 0xa4620120  sh          $v0, 0x120($v1)
    ctx->pc = 0x4b3e14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 288), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b3e18: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x4b3e18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x4b3e1c: 0x8c840d64  lw          $a0, 0xD64($a0)
    ctx->pc = 0x4b3e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0D64u));
    // 0x4b3e20: 0x85e30d3c  lh          $v1, 0xD3C($t7)
    ctx->pc = 0x4b3e20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 3388)));
    // 0x4b3e24: 0x8482001c  lh          $v0, 0x1C($a0)
    ctx->pc = 0x4b3e24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x4b3e28: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4B3E28u;
    {
        const bool branch_taken_0x4b3e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4b3e28) {
            ctx->pc = 0x4B3E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B3E28u;
            // 0x4b3e2c: 0x8d440d60  lw          $a0, 0xD60($t2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 3424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B3E4Cu;
            goto label_4b3e4c;
        }
    }
    ctx->pc = 0x4B3E30u;
    // 0x4b3e30: 0x84830022  lh          $v1, 0x22($a0)
    ctx->pc = 0x4b3e30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x4b3e34: 0x85a20d40  lh          $v0, 0xD40($t5)
    ctx->pc = 0x4b3e34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 3392)));
    // 0x4b3e38: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4B3E38u;
    {
        const bool branch_taken_0x4b3e38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4b3e38) {
            ctx->pc = 0x4B3E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4B3E38u;
            // 0x4b3e3c: 0x8d440d60  lw          $a0, 0xD60($t2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 3424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4B3E4Cu;
            goto label_4b3e4c;
        }
    }
    ctx->pc = 0x4B3E40u;
    // 0x4b3e40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b3e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4b3e44: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4b3e44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4b3e48: 0x8d440d60  lw          $a0, 0xD60($t2)
    ctx->pc = 0x4b3e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 3424)));
label_4b3e4c:
    // 0x4b3e4c: 0x26100d30  addiu       $s0, $s0, 0xD30
    ctx->pc = 0x4b3e4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x4b3e50: 0x95c20d38  lhu         $v0, 0xD38($t6)
    ctx->pc = 0x4b3e50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 3384)));
    // 0x4b3e54: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4b3e54u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4b3e58: 0x26520d34  addiu       $s2, $s2, 0xD34
    ctx->pc = 0x4b3e58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3380));
    // 0x4b3e5c: 0xa482013a  sh          $v0, 0x13A($a0)
    ctx->pc = 0x4b3e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 314), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b3e60: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x4b3e60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4b3e64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b3e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b3e68: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4b3e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4b3e6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b3e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b3e70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b3e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b3e74: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b3e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b3e78: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B3E78u;
    SET_GPR_U32(ctx, 31, 0x4B3E80u);
    ctx->pc = 0x4B3E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3E78u;
    // 0x4b3e7c: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B3E78u, 0x4B3E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3E80u;
label_4b3e80:
    // 0x4b3e80: 0x511824  and         $v1, $v0, $s1
    ctx->pc = 0x4b3e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4b3e84: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4b3e84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4b3e88: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4b3e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4b3e8c: 0xa6630022  sh          $v1, 0x22($s3)
    ctx->pc = 0x4b3e8cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b3e90: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4b3e90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b3e94: 0xa6620024  sh          $v0, 0x24($s3)
    ctx->pc = 0x4b3e94u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b3e98: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4b3e98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b3e9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b3e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b3ea0: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4b3ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4b3ea4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b3ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b3ea8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b3ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b3eac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b3eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b3eb0: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B3EB0u;
    SET_GPR_U32(ctx, 31, 0x4B3EB8u);
    ctx->pc = 0x4B3EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3EB0u;
    // 0x4b3eb4: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B3EB0u, 0x4B3EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3EB8u;
label_4b3eb8:
    // 0x4b3eb8: 0x511824  and         $v1, $v0, $s1
    ctx->pc = 0x4b3eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4b3ebc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4b3ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4b3ec0: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4b3ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4b3ec4: 0xa6630026  sh          $v1, 0x26($s3)
    ctx->pc = 0x4b3ec4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b3ec8: 0x86640120  lh          $a0, 0x120($s3)
    ctx->pc = 0x4b3ec8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x4b3ecc: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4b3eccu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b3ed0: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4b3ed0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4b3ed4: 0xa6630028  sh          $v1, 0x28($s3)
    ctx->pc = 0x4b3ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b3ed8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b3ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b3edc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b3edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b3ee0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4b3ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4b3ee4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b3ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b3ee8: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B3EE8u;
    SET_GPR_U32(ctx, 31, 0x4B3EF0u);
    ctx->pc = 0x4B3EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3EE8u;
    // 0x4b3eec: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B3EE8u, 0x4B3EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3EF0u;
label_4b3ef0:
    // 0x4b3ef0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b3ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3ef4: 0x518824  and         $s1, $v0, $s1
    ctx->pc = 0x4b3ef4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4b3ef8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4b3ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4b3efc: 0x118c02  srl         $s1, $s1, 16
    ctx->pc = 0x4b3efcu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x4b3f00: 0xa671002a  sh          $s1, 0x2A($s3)
    ctx->pc = 0x4b3f00u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 42), (uint16_t)GPR_U32(ctx, 17));
    // 0x4b3f04: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4b3f04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b3f08: 0xc122db4  jal         func_48B6D0
    ctx->pc = 0x4B3F08u;
    SET_GPR_U32(ctx, 31, 0x4B3F10u);
    ctx->pc = 0x4B3F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3F08u;
    // 0x4b3f0c: 0xa662002c  sh          $v0, 0x2C($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B6D0u, 0x4B3F08u, 0x4B3F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3F10u;
label_4b3f10:
    // 0x4b3f10: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4B3F10u;
    {
        const bool branch_taken_0x4b3f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3F10u;
        // 0x4b3f14: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3f10) {
            ctx->pc = 0x4B3F80u;
            goto label_4b3f80;
        }
    }
    ctx->pc = 0x4B3F18u;
    // 0x4b3f18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b3f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3f1c: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4B3F1Cu;
    SET_GPR_U32(ctx, 31, 0x4B3F24u);
    ctx->pc = 0x4B3F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3F1Cu;
    // 0x4b3f20: 0x8c450d4c  lw          $a1, 0xD4C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3404)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4B3F1Cu, 0x4B3F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3F24u;
label_4b3f24:
    // 0x4b3f24: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4B3F24u;
    {
        const bool branch_taken_0x4b3f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B3F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3F24u;
        // 0x4b3f28: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b3f24) {
            ctx->pc = 0x4B3F80u;
            goto label_4b3f80;
        }
    }
    ctx->pc = 0x4B3F2Cu;
    // 0x4b3f2c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4b3f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4b3f30: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4b3f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4b3f34: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x4b3f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4b3f38: 0xa44523c4  sh          $a1, 0x23C4($v0)
    ctx->pc = 0x4b3f38u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 9156), (uint16_t)GPR_U32(ctx, 5));
    // 0x4b3f3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b3f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3f40: 0xa443232c  sh          $v1, 0x232C($v0)
    ctx->pc = 0x4b3f40u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 9004), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b3f44: 0xc13d772  jal         func_4F5DC8
    ctx->pc = 0x4B3F44u;
    SET_GPR_U32(ctx, 31, 0x4B3F4Cu);
    ctx->pc = 0x4B3F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3F44u;
    // 0x4b3f48: 0xa445232e  sh          $a1, 0x232E($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 9006), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F5DC8u, 0x4B3F44u, 0x4B3F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3F4Cu;
label_4b3f4c:
    // 0x4b3f4c: 0xc122efc  jal         func_48BBF0
    ctx->pc = 0x4B3F4Cu;
    SET_GPR_U32(ctx, 31, 0x4B3F54u);
    ctx->pc = 0x4B3F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3F4Cu;
    // 0x4b3f50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48BBF0u, 0x4B3F4Cu, 0x4B3F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3F54u;
label_4b3f54:
    // 0x4b3f54: 0xc1297fa  jal         func_4A5FE8
    ctx->pc = 0x4B3F54u;
    SET_GPR_U32(ctx, 31, 0x4B3F5Cu);
    ctx->pc = 0x4A5FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A5FE8u, 0x4B3F54u, 0x4B3F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B3F5Cu;
label_4b3f5c:
    // 0x4b3f5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b3f5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3f60: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b3f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3f64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b3f64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b3f68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b3f68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b3f6c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b3f6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b3f70: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b3f70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b3f74: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4b3f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b3f78: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4B3F78u;
    ctx->pc = 0x4B3F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3F78u;
    // 0x4b3f7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4B3F80u;
label_4b3f80:
    // 0x4b3f80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b3f80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3f84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b3f84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b3f88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b3f88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b3f8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b3f8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b3f90: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b3f90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b3f94: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4b3f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b3f98: 0x3e00008  jr          $ra
    ctx->pc = 0x4B3F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B3F98u;
        // 0x4b3f9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B3F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B3FA0u;
}
