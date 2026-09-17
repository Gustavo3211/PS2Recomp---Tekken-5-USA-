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

// Function: sub_004AFB20
// Address: 0x4afb20 - 0x4b00e8
void sub_004AFB20_0x4afb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AFB20_0x4afb20");
#endif

    switch (ctx->pc) {
        case 0x4afb78u: goto label_4afb78;
        case 0x4b0028u: goto label_4b0028;
        case 0x4b0060u: goto label_4b0060;
        case 0x4b0098u: goto label_4b0098;
        case 0x4b00bcu: goto label_4b00bc;
        default: break;
    }

    ctx->pc = 0x4afb20u;

    // 0x4afb20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4afb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4afb24: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4afb24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4afb28: 0x8c490d64  lw          $t1, 0xD64($v0)
    ctx->pc = 0x4afb28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3428)));
    // 0x4afb2c: 0x24e70d3c  addiu       $a3, $a3, 0xD3C
    ctx->pc = 0x4afb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3388));
    // 0x4afb30: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4afb30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D3Cu));
    // 0x4afb34: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4afb34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4afb38: 0x8525001c  lh          $a1, 0x1C($t1)
    ctx->pc = 0x4afb38u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x4afb3c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4afb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4afb40: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4afb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4afb44: 0x24c60d40  addiu       $a2, $a2, 0xD40
    ctx->pc = 0x4afb44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3392));
    // 0x4afb48: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4afb48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4afb4c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4afb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D40u));
    // 0x4afb50: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4afb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4afb54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4afb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afb58: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4afb58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4afb5c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4afb5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4afb60: 0x85220022  lh          $v0, 0x22($t1)
    ctx->pc = 0x4afb60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 34)));
    // 0x4afb64: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4afb64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4afb68: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4afb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4afb6c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4afb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4afb70: 0x812bede  j           func_4AFB78
    ctx->pc = 0x4AFB70u;
    ctx->pc = 0x4AFB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFB70u;
    // 0x4afb74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AFB78u;
    goto label_4afb78;
    ctx->pc = 0x4AFB78u;
label_4afb78:
    // 0x4afb78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4afb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4afb7c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4afb7cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4afb80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4afb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4afb84: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4afb84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4afb88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4afb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4afb8c: 0x3c12007f  lui         $s2, 0x7F
    ctx->pc = 0x4afb8cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)127 << 16));
    // 0x4afb90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4afb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4afb94: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4afb94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4afb98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4afb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4afb9c: 0x26780164  addiu       $t8, $s3, 0x164
    ctx->pc = 0x4afb9cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 19), 356));
    // 0x4afba0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4afba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4afba4: 0x26040d30  addiu       $a0, $s0, 0xD30
    ctx->pc = 0x4afba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x4afba8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4afba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4afbac: 0x3c0f007f  lui         $t7, 0x7F
    ctx->pc = 0x4afbacu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)127 << 16));
    // 0x4afbb0: 0x95e50d3c  lhu         $a1, 0xD3C($t7)
    ctx->pc = 0x4afbb0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x7F0D3Cu));
    // 0x4afbb4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4afbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D30u));
    // 0x4afbb8: 0x87020000  lh          $v0, 0x0($t8)
    ctx->pc = 0x4afbb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4afbbc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4afbbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4afbc0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4afbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4afbc4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4afbc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4afbc8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4afbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4afbcc: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4afbccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4afbd0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4afbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4afbd4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4afbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4afbd8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AFBD8u;
    {
        const bool branch_taken_0x4afbd8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4AFBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFBD8u;
        // 0x4afbdc: 0x26460d34  addiu       $a2, $s2, 0xD34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 3380));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afbd8) {
            ctx->pc = 0x4AFBF0u;
            goto label_4afbf0;
        }
    }
    ctx->pc = 0x4AFBE0u;
    // 0x4afbe0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4afbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4afbe4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4AFBE4u;
    {
        const bool branch_taken_0x4afbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AFBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFBE4u;
        // 0x4afbe8: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afbe4) {
            ctx->pc = 0x4AFBF8u;
            goto label_4afbf8;
        }
    }
    ctx->pc = 0x4AFBECu;
    // 0x4afbec: 0x0  nop
    ctx->pc = 0x4afbecu;
    // NOP
label_4afbf0:
    // 0x4afbf0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4afbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4afbf4: 0x472024  and         $a0, $v0, $a3
    ctx->pc = 0x4afbf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_4afbf8:
    // 0x4afbf8: 0x3c0e007f  lui         $t6, 0x7F
    ctx->pc = 0x4afbf8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)127 << 16));
    // 0x4afbfc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4afbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4afc00: 0x25cb0d38  addiu       $t3, $t6, 0xD38
    ctx->pc = 0x4afc00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 3384));
    // 0x4afc04: 0x34420222  ori         $v0, $v0, 0x222
    ctx->pc = 0x4afc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)546);
    // 0x4afc08: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4afc08u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D38u));
    // 0x4afc0c: 0x26080d30  addiu       $t0, $s0, 0xD30
    ctx->pc = 0x4afc0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x4afc10: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x4afc10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x4afc14: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4afc14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4afc18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4afc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4afc1c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4afc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4afc20: 0x96470d34  lhu         $a3, 0xD34($s2)
    ctx->pc = 0x4afc20u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3380)));
    // 0x4afc24: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x4afc24u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4afc28: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4afc28u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4afc2c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4afc2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4afc30: 0x72400  sll         $a0, $a3, 16
    ctx->pc = 0x4afc30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4afc34: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4afc34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4afc38: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4afc38u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4afc3c: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4afc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4afc40: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x4afc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x4afc44: 0x95ea0d3c  lhu         $t2, 0xD3C($t7)
    ctx->pc = 0x4afc44u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 3388)));
    // 0x4afc48: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4afc48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4afc4c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4afc4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4afc50: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4afc50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4afc54: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4afc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4afc58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4afc58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4afc5c: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4afc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4afc60: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4afc60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4afc64: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4afc64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4afc68: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x4afc68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4afc6c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4afc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4afc70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4afc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4afc74: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4afc74u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4afc78: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4afc78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4afc7c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x4afc7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x4afc80: 0xc93025  or          $a2, $a2, $t1
    ctx->pc = 0x4afc80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 9));
    // 0x4afc84: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4afc84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x4afc88: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4afc88u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4afc8c: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4afc8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4afc90: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x4afc90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4afc94: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4afc94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4afc98: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AFC98u;
    {
        const bool branch_taken_0x4afc98 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4AFC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFC98u;
        // 0x4afc9c: 0x346400ff  ori         $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afc98) {
            ctx->pc = 0x4AFCA8u;
            goto label_4afca8;
        }
    }
    ctx->pc = 0x4AFCA0u;
    // 0x4afca0: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4afca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4afca4: 0x622024  and         $a0, $v1, $v0
    ctx->pc = 0x4afca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4afca8:
    // 0x4afca8: 0xad640000  sw          $a0, 0x0($t3)
    ctx->pc = 0x4afca8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 4));
    // 0x4afcac: 0x25c40d38  addiu       $a0, $t6, 0xD38
    ctx->pc = 0x4afcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 3384));
    // 0x4afcb0: 0x26470d34  addiu       $a3, $s2, 0xD34
    ctx->pc = 0x4afcb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 3380));
    // 0x4afcb4: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4afcb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4afcb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4afcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4afcbc: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x4afcbcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4afcc0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x4afcc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4afcc4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4afcc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4afcc8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4afcc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4afccc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4afcccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4afcd0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4afcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4afcd4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4afcd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4afcd8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AFCD8u;
    {
        const bool branch_taken_0x4afcd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AFCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFCD8u;
        // 0x4afcdc: 0x26050d30  addiu       $a1, $s0, 0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afcd8) {
            ctx->pc = 0x4AFCF8u;
            goto label_4afcf8;
        }
    }
    ctx->pc = 0x4AFCE0u;
    // 0x4afce0: 0x95e30d3c  lhu         $v1, 0xD3C($t7)
    ctx->pc = 0x4afce0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 3388)));
    // 0x4afce4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4afce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4afce8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4afce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4afcec: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4afcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4afcf0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4afcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4afcf4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4afcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4afcf8:
    // 0x4afcf8: 0x26040d30  addiu       $a0, $s0, 0xD30
    ctx->pc = 0x4afcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x4afcfc: 0x26740166  addiu       $s4, $s3, 0x166
    ctx->pc = 0x4afcfcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 358));
    // 0x4afd00: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4afd00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4afd04: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4afd04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4afd08: 0x3c0d007f  lui         $t5, 0x7F
    ctx->pc = 0x4afd08u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)127 << 16));
    // 0x4afd0c: 0xa7020000  sh          $v0, 0x0($t8)
    ctx->pc = 0x4afd0cu;
    WRITE16(ADD32(GPR_U32(ctx, 24), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4afd10: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4afd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4afd14: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4afd14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4afd18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4afd18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4afd1c: 0x95a50d40  lhu         $a1, 0xD40($t5)
    ctx->pc = 0x4afd1cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)FAST_READ16(0x7F0D40u));
    // 0x4afd20: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4afd20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4afd24: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4afd24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4afd28: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4afd28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4afd2c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4afd2cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4afd30: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4afd30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4afd34: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4afd34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4afd38: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AFD38u;
    {
        const bool branch_taken_0x4afd38 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4AFD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFD38u;
        // 0x4afd3c: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afd38) {
            ctx->pc = 0x4AFD48u;
            goto label_4afd48;
        }
    }
    ctx->pc = 0x4AFD40u;
    // 0x4afd40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4AFD40u;
    {
        const bool branch_taken_0x4afd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AFD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFD40u;
        // 0x4afd44: 0x3444ffff  ori         $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afd40) {
            ctx->pc = 0x4AFD4Cu;
            goto label_4afd4c;
        }
    }
    ctx->pc = 0x4AFD48u;
label_4afd48:
    // 0x4afd48: 0x462024  and         $a0, $v0, $a2
    ctx->pc = 0x4afd48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_4afd4c:
    // 0x4afd4c: 0x25cb0d38  addiu       $t3, $t6, 0xD38
    ctx->pc = 0x4afd4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 3384));
    // 0x4afd50: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4afd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4afd54: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4afd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4afd58: 0x34420222  ori         $v0, $v0, 0x222
    ctx->pc = 0x4afd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)546);
    // 0x4afd5c: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x4afd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
    // 0x4afd60: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4afd60u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4afd64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4afd64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4afd68: 0x26080d30  addiu       $t0, $s0, 0xD30
    ctx->pc = 0x4afd68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x4afd6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4afd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4afd70: 0x96470d34  lhu         $a3, 0xD34($s2)
    ctx->pc = 0x4afd70u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3380)));
    // 0x4afd74: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4afd74u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4afd78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4afd78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4afd7c: 0x73400  sll         $a2, $a3, 16
    ctx->pc = 0x4afd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x4afd80: 0x95620000  lhu         $v0, 0x0($t3)
    ctx->pc = 0x4afd80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4afd84: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4afd84u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4afd88: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x4afd88u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4afd8c: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x4afd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x4afd90: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4afd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4afd94: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4afd94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4afd98: 0x95aa0d40  lhu         $t2, 0xD40($t5)
    ctx->pc = 0x4afd98u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 3392)));
    // 0x4afd9c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4afd9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4afda0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4afda0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4afda4: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4afda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4afda8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4afda8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4afdac: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4afdacu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4afdb0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4afdb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4afdb4: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4afdb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4afdb8: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x4afdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4afdbc: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4afdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4afdc0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4afdc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4afdc4: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4afdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4afdc8: 0x85620000  lh          $v0, 0x0($t3)
    ctx->pc = 0x4afdc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4afdcc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4afdccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4afdd0: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x4afdd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x4afdd4: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4afdd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4afdd8: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x4afdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x4afddc: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4afddcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4afde0: 0x4a1023  subu        $v0, $v0, $t2
    ctx->pc = 0x4afde0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x4afde4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4afde4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4afde8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AFDE8u;
    {
        const bool branch_taken_0x4afde8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4AFDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFDE8u;
        // 0x4afdec: 0x346600ff  ori         $a2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afde8) {
            ctx->pc = 0x4AFDF8u;
            goto label_4afdf8;
        }
    }
    ctx->pc = 0x4AFDF0u;
    // 0x4afdf0: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4afdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4afdf4: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x4afdf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4afdf8:
    // 0x4afdf8: 0xad660000  sw          $a2, 0x0($t3)
    ctx->pc = 0x4afdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 6));
    // 0x4afdfc: 0x25cb0d38  addiu       $t3, $t6, 0xD38
    ctx->pc = 0x4afdfcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 3384));
    // 0x4afe00: 0x264c0d34  addiu       $t4, $s2, 0xD34
    ctx->pc = 0x4afe00u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 18), 3380));
    // 0x4afe04: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x4afe04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4afe08: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x4afe08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4afe0c: 0x91640000  lbu         $a0, 0x0($t3)
    ctx->pc = 0x4afe0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4afe10: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x4afe10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4afe14: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4afe14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4afe18: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x4afe18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x4afe1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4afe1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4afe20: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x4afe20u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x4afe24: 0x81620000  lb          $v0, 0x0($t3)
    ctx->pc = 0x4afe24u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4afe28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AFE28u;
    {
        const bool branch_taken_0x4afe28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AFE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFE28u;
        // 0x4afe2c: 0x26050d30  addiu       $a1, $s0, 0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afe28) {
            ctx->pc = 0x4AFE48u;
            goto label_4afe48;
        }
    }
    ctx->pc = 0x4AFE30u;
    // 0x4afe30: 0x95a30d40  lhu         $v1, 0xD40($t5)
    ctx->pc = 0x4afe30u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 13), 3392)));
    // 0x4afe34: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4afe34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4afe38: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4afe38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4afe3c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4afe3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4afe40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4afe40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4afe44: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4afe44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4afe48:
    // 0x4afe48: 0x26080d30  addiu       $t0, $s0, 0xD30
    ctx->pc = 0x4afe48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x4afe4c: 0x25e60d3c  addiu       $a2, $t7, 0xD3C
    ctx->pc = 0x4afe4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), 3388));
    // 0x4afe50: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x4afe50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4afe54: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4afe54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4afe58: 0x25aa0d40  addiu       $t2, $t5, 0xD40
    ctx->pc = 0x4afe58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 13), 3392));
    // 0x4afe5c: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x4afe5cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4afe60: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x4afe60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4afe64: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4afe64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4afe68: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4afe68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4afe6c: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x4afe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4afe70: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4afe70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4afe74: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4afe74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4afe78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4afe78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4afe7c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4afe7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4afe80: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4afe80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4afe84: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4afe84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4afe88: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x4afe88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4afe8c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x4afe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4afe90: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4afe90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4afe94: 0x84c90000  lh          $t1, 0x0($a2)
    ctx->pc = 0x4afe94u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4afe98: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4afe98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4afe9c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4afe9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4afea0: 0xad440000  sw          $a0, 0x0($t2)
    ctx->pc = 0x4afea0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 4));
    // 0x4afea4: 0x86620118  lh          $v0, 0x118($s3)
    ctx->pc = 0x4afea4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 280)));
    // 0x4afea8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4afea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4afeac: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x4afeacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x4afeb0: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x4afeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x4afeb4: 0x8662011c  lh          $v0, 0x11C($s3)
    ctx->pc = 0x4afeb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x4afeb8: 0x85040000  lh          $a0, 0x0($t0)
    ctx->pc = 0x4afeb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4afebc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4afebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4afec0: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x4afec0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x4afec4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4afec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4afec8: 0x14890007  bne         $a0, $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AFEC8u;
    {
        const bool branch_taken_0x4afec8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 9));
        ctx->pc = 0x4AFECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFEC8u;
        // 0x4afecc: 0xad830000  sw          $v1, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afec8) {
            ctx->pc = 0x4AFEE8u;
            goto label_4afee8;
        }
    }
    ctx->pc = 0x4AFED0u;
    // 0x4afed0: 0x85830000  lh          $v1, 0x0($t4)
    ctx->pc = 0x4afed0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4afed4: 0x85420000  lh          $v0, 0x0($t2)
    ctx->pc = 0x4afed4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4afed8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AFED8u;
    {
        const bool branch_taken_0x4afed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4AFEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFED8u;
        // 0x4afedc: 0x25c90d38  addiu       $t1, $t6, 0xD38 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), 3384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4afed8) {
            ctx->pc = 0x4AFEECu;
            goto label_4afeec;
        }
    }
    ctx->pc = 0x4AFEE0u;
    // 0x4afee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4afee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4afee4: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x4afee4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
label_4afee8:
    // 0x4afee8: 0x25c90d38  addiu       $t1, $t6, 0xD38
    ctx->pc = 0x4afee8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 14), 3384));
label_4afeec:
    // 0x4afeec: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4afeecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4afef0: 0x95230000  lhu         $v1, 0x0($t1)
    ctx->pc = 0x4afef0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4afef4: 0x26060d30  addiu       $a2, $s0, 0xD30
    ctx->pc = 0x4afef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x4afef8: 0x8d420d60  lw          $v0, 0xD60($t2)
    ctx->pc = 0x4afef8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D60u));
    // 0x4afefc: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4afefcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4aff00: 0x26480d34  addiu       $t0, $s2, 0xD34
    ctx->pc = 0x4aff00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 3380));
    // 0x4aff04: 0xa4430118  sh          $v1, 0x118($v0)
    ctx->pc = 0x4aff04u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x4aff08: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x4aff08u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
    // 0x4aff0c: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4aff0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4aff10: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4aff10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4aff14: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4aff14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4aff18: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x4aff18u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4aff1c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4aff1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4aff20: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4aff20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4aff24: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4aff24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4aff28: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x4aff28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4aff2c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4aff2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4aff30: 0x24a58000  addiu       $a1, $a1, -0x8000
    ctx->pc = 0x4aff30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x4aff34: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x4aff34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x4aff38: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4aff38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4aff3c: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x4aff3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4aff40: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x4aff40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x4aff44: 0x85e20d3c  lh          $v0, 0xD3C($t7)
    ctx->pc = 0x4aff44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 3388)));
    // 0x4aff48: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4AFF48u;
    {
        const bool branch_taken_0x4aff48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4AFF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFF48u;
        // 0x4aff4c: 0xad040000  sw          $a0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aff48) {
            ctx->pc = 0x4AFF68u;
            goto label_4aff68;
        }
    }
    ctx->pc = 0x4AFF50u;
    // 0x4aff50: 0x85030000  lh          $v1, 0x0($t0)
    ctx->pc = 0x4aff50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4aff54: 0x85a20d40  lh          $v0, 0xD40($t5)
    ctx->pc = 0x4aff54u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 3392)));
    // 0x4aff58: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AFF58u;
    {
        const bool branch_taken_0x4aff58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4AFF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFF58u;
        // 0x4aff5c: 0x25440d60  addiu       $a0, $t2, 0xD60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 3424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aff58) {
            ctx->pc = 0x4AFF6Cu;
            goto label_4aff6c;
        }
    }
    ctx->pc = 0x4AFF60u;
    // 0x4aff60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4aff60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4aff64: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x4aff64u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
label_4aff68:
    // 0x4aff68: 0x25440d60  addiu       $a0, $t2, 0xD60
    ctx->pc = 0x4aff68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 3424));
label_4aff6c:
    // 0x4aff6c: 0x25c50d38  addiu       $a1, $t6, 0xD38
    ctx->pc = 0x4aff6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 3384));
    // 0x4aff70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4aff70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4aff74: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x4aff74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4aff78: 0xa443011c  sh          $v1, 0x11C($v0)
    ctx->pc = 0x4aff78u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 284), (uint16_t)GPR_U32(ctx, 3));
    // 0x4aff7c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x4aff7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x4aff80: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4aff80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4aff84: 0x85e30d3c  lh          $v1, 0xD3C($t7)
    ctx->pc = 0x4aff84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 3388)));
    // 0x4aff88: 0x84820136  lh          $v0, 0x136($a0)
    ctx->pc = 0x4aff88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 310)));
    // 0x4aff8c: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x4AFF8Cu;
    {
        const bool branch_taken_0x4aff8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4AFF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFF8Cu;
        // 0x4aff90: 0x8d430d60  lw          $v1, 0xD60($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 3424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aff8c) {
            ctx->pc = 0x4AFFB4u;
            goto label_4affb4;
        }
    }
    ctx->pc = 0x4AFF94u;
    // 0x4aff94: 0x84830138  lh          $v1, 0x138($a0)
    ctx->pc = 0x4aff94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 312)));
    // 0x4aff98: 0x85a20d40  lh          $v0, 0xD40($t5)
    ctx->pc = 0x4aff98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 3392)));
    // 0x4aff9c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AFF9Cu;
    {
        const bool branch_taken_0x4aff9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4AFFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AFF9Cu;
        // 0x4affa0: 0x8d430d60  lw          $v1, 0xD60($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 3424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aff9c) {
            ctx->pc = 0x4AFFB4u;
            goto label_4affb4;
        }
    }
    ctx->pc = 0x4AFFA4u;
    // 0x4affa4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4affa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4affa8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4affa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4affac: 0x25c50d38  addiu       $a1, $t6, 0xD38
    ctx->pc = 0x4affacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 3384));
    // 0x4affb0: 0x8d430d60  lw          $v1, 0xD60($t2)
    ctx->pc = 0x4affb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 3424)));
label_4affb4:
    // 0x4affb4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4affb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4affb8: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x4affb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x4affbc: 0xa4620120  sh          $v0, 0x120($v1)
    ctx->pc = 0x4affbcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 288), (uint16_t)GPR_U32(ctx, 2));
    // 0x4affc0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x4affc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x4affc4: 0x8c840d64  lw          $a0, 0xD64($a0)
    ctx->pc = 0x4affc4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0D64u));
    // 0x4affc8: 0x85e30d3c  lh          $v1, 0xD3C($t7)
    ctx->pc = 0x4affc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 3388)));
    // 0x4affcc: 0x8482001c  lh          $v0, 0x1C($a0)
    ctx->pc = 0x4affccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x4affd0: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4AFFD0u;
    {
        const bool branch_taken_0x4affd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4affd0) {
            ctx->pc = 0x4AFFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AFFD0u;
            // 0x4affd4: 0x8d440d60  lw          $a0, 0xD60($t2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 3424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AFFF4u;
            goto label_4afff4;
        }
    }
    ctx->pc = 0x4AFFD8u;
    // 0x4affd8: 0x84830022  lh          $v1, 0x22($a0)
    ctx->pc = 0x4affd8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 34)));
    // 0x4affdc: 0x85a20d40  lh          $v0, 0xD40($t5)
    ctx->pc = 0x4affdcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 13), 3392)));
    // 0x4affe0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AFFE0u;
    {
        const bool branch_taken_0x4affe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4affe0) {
            ctx->pc = 0x4AFFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4AFFE0u;
            // 0x4affe4: 0x8d440d60  lw          $a0, 0xD60($t2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 3424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4AFFF4u;
            goto label_4afff4;
        }
    }
    ctx->pc = 0x4AFFE8u;
    // 0x4affe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4affe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4affec: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4affecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4afff0: 0x8d440d60  lw          $a0, 0xD60($t2)
    ctx->pc = 0x4afff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 3424)));
label_4afff4:
    // 0x4afff4: 0x26100d30  addiu       $s0, $s0, 0xD30
    ctx->pc = 0x4afff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x4afff8: 0x95c20d38  lhu         $v0, 0xD38($t6)
    ctx->pc = 0x4afff8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 3384)));
    // 0x4afffc: 0x3c11ffff  lui         $s1, 0xFFFF
    ctx->pc = 0x4afffcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)65535 << 16));
    // 0x4b0000: 0x26520d34  addiu       $s2, $s2, 0xD34
    ctx->pc = 0x4b0000u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3380));
    // 0x4b0004: 0xa482013a  sh          $v0, 0x13A($a0)
    ctx->pc = 0x4b0004u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 314), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b0008: 0x87030000  lh          $v1, 0x0($t8)
    ctx->pc = 0x4b0008u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x4b000c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b000cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b0010: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4b0010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4b0014: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b0014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b0018: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b0018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b001c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b001cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b0020: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B0020u;
    SET_GPR_U32(ctx, 31, 0x4B0028u);
    ctx->pc = 0x4B0024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0020u;
    // 0x4b0024: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B0020u, 0x4B0028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0028u;
label_4b0028:
    // 0x4b0028: 0x511824  and         $v1, $v0, $s1
    ctx->pc = 0x4b0028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4b002c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4b002cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4b0030: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4b0030u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4b0034: 0xa6630022  sh          $v1, 0x22($s3)
    ctx->pc = 0x4b0034u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b0038: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4b0038u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b003c: 0xa6620024  sh          $v0, 0x24($s3)
    ctx->pc = 0x4b003cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 36), (uint16_t)GPR_U32(ctx, 2));
    // 0x4b0040: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x4b0040u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x4b0044: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b0044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b0048: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x4b0048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x4b004c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b004cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b0050: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4b0050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4b0054: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b0054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b0058: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B0058u;
    SET_GPR_U32(ctx, 31, 0x4B0060u);
    ctx->pc = 0x4B005Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0058u;
    // 0x4b005c: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B0058u, 0x4B0060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0060u;
label_4b0060:
    // 0x4b0060: 0x511824  and         $v1, $v0, $s1
    ctx->pc = 0x4b0060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4b0064: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4b0064u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4b0068: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x4b0068u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x4b006c: 0xa6630026  sh          $v1, 0x26($s3)
    ctx->pc = 0x4b006cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 38), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b0070: 0x86640120  lh          $a0, 0x120($s3)
    ctx->pc = 0x4b0070u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x4b0074: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4b0074u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b0078: 0x912025  or          $a0, $a0, $s1
    ctx->pc = 0x4b0078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x4b007c: 0xa6630028  sh          $v1, 0x28($s3)
    ctx->pc = 0x4b007cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x4b0080: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4b0080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4b0084: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b0084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b0088: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4b0088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4b008c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b008cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4b0090: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4B0090u;
    SET_GPR_U32(ctx, 31, 0x4B0098u);
    ctx->pc = 0x4B0094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B0090u;
    // 0x4b0094: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4B0090u, 0x4B0098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B0098u;
label_4b0098:
    // 0x4b0098: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4b0098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b009c: 0x518824  and         $s1, $v0, $s1
    ctx->pc = 0x4b009cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4b00a0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4b00a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x4b00a4: 0x118c02  srl         $s1, $s1, 16
    ctx->pc = 0x4b00a4u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 17), 16));
    // 0x4b00a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b00a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b00ac: 0xa671002a  sh          $s1, 0x2A($s3)
    ctx->pc = 0x4b00acu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 42), (uint16_t)GPR_U32(ctx, 17));
    // 0x4b00b0: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x4b00b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4b00b4: 0xc126ee2  jal         func_49BB88
    ctx->pc = 0x4B00B4u;
    SET_GPR_U32(ctx, 31, 0x4B00BCu);
    ctx->pc = 0x4B00B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B00B4u;
    // 0x4b00b8: 0xa662002c  sh          $v0, 0x2C($s3) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 19), 44), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49BB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49BB88u, 0x4B00B4u, 0x4B00BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4B00BCu;
label_4b00bc:
    // 0x4b00bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x4B00BCu;
    {
        const bool branch_taken_0x4b00bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B00C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B00BCu;
        // 0x4b00c0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b00bc) {
            ctx->pc = 0x4B00C8u;
            goto label_4b00c8;
        }
    }
    ctx->pc = 0x4B00C4u;
    // 0x4b00c4: 0xa6620148  sh          $v0, 0x148($s3)
    ctx->pc = 0x4b00c4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 328), (uint16_t)GPR_U32(ctx, 2));
label_4b00c8:
    // 0x4b00c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4b00c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b00cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4b00ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4b00d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4b00d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4b00d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4b00d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4b00d8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4b00d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4b00dc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4b00dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4b00e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4B00E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B00E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4B00E0u;
        // 0x4b00e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4B00E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4B00E8u;
}
