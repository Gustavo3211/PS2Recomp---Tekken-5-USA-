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

// Function: sub_004A7DD8
// Address: 0x4a7dd8 - 0x4a80b0
void sub_004A7DD8_0x4a7dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A7DD8_0x4a7dd8");
#endif

    switch (ctx->pc) {
        case 0x4a7ffcu: goto label_4a7ffc;
        default: break;
    }

    ctx->pc = 0x4a7dd8u;

    // 0x4a7dd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a7dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a7ddc: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4a7ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7de0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4a7de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4a7de4: 0x3c10007f  lui         $s0, 0x7F
    ctx->pc = 0x4a7de4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)127 << 16));
    // 0x4a7de8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4a7de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4a7dec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a7decu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7df0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4a7df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4a7df4: 0x26020c44  addiu       $v0, $s0, 0xC44
    ctx->pc = 0x4a7df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3140));
    // 0x4a7df8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4a7df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4a7dfc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a7dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4a7e00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4a7e00u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0C44u));
    // 0x4a7e04: 0x8629002e  lh          $t1, 0x2E($s1)
    ctx->pc = 0x4a7e04u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 46)));
    // 0x4a7e08: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a7e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a7e0c: 0x1282025  or          $a0, $t1, $t0
    ctx->pc = 0x4a7e0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x4a7e10: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4a7e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4a7e14: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4a7e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x4a7e18: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x4a7e18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a7e1c: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x4A7E1Cu;
    {
        const bool branch_taken_0x4a7e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7E1Cu;
        // 0x4a7e20: 0x3c0a007f  lui         $t2, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7e1c) {
            ctx->pc = 0x4A7F38u;
            goto label_4a7f38;
        }
    }
    ctx->pc = 0x4A7E24u;
    // 0x4a7e24: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A7E24u;
    {
        const bool branch_taken_0x4a7e24 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A7E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7E24u;
        // 0x4a7e28: 0x25440c48  addiu       $a0, $t2, 0xC48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 3144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7e24) {
            ctx->pc = 0x4A7E38u;
            goto label_4a7e38;
        }
    }
    ctx->pc = 0x4A7E2Cu;
    // 0x4a7e2c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a7e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7e30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A7E30u;
    {
        const bool branch_taken_0x4a7e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7E30u;
        // 0x4a7e34: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7e30) {
            ctx->pc = 0x4A7E44u;
            goto label_4a7e44;
        }
    }
    ctx->pc = 0x4A7E38u;
label_4a7e38:
    // 0x4a7e38: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a7e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7e3c: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4a7e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4a7e40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4a7e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a7e44:
    // 0x4a7e44: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a7e44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a7e48: 0x26040c44  addiu       $a0, $s0, 0xC44
    ctx->pc = 0x4a7e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3140));
    // 0x4a7e4c: 0x26270026  addiu       $a3, $s1, 0x26
    ctx->pc = 0x4a7e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 38));
    // 0x4a7e50: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a7e50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7e54: 0x84e50000  lh          $a1, 0x0($a3)
    ctx->pc = 0x4a7e54u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a7e58: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4a7e58u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4a7e5c: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4a7e5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7e60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a7e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7e64: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4a7e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4a7e68: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x4a7e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4a7e6c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a7e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a7e70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a7e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a7e74: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a7e74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a7e78: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x4a7e78u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7e7c: 0x8629002a  lh          $t1, 0x2A($s1)
    ctx->pc = 0x4a7e7cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 42)));
    // 0x4a7e80: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x4a7e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x4a7e84: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a7e84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a7e88: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A7E88u;
    {
        const bool branch_taken_0x4a7e88 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4A7E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7E88u;
        // 0x4a7e8c: 0x25050c4c  addiu       $a1, $t0, 0xC4C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 3148));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7e88) {
            ctx->pc = 0x4A7EA0u;
            goto label_4a7ea0;
        }
    }
    ctx->pc = 0x4A7E90u;
    // 0x4a7e90: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a7e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7e94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4A7E94u;
    {
        const bool branch_taken_0x4a7e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7E94u;
        // 0x4a7e98: 0x344200ff  ori         $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7e94) {
            ctx->pc = 0x4A7EACu;
            goto label_4a7eac;
        }
    }
    ctx->pc = 0x4A7E9Cu;
    // 0x4a7e9c: 0x0  nop
    ctx->pc = 0x4a7e9cu;
    // NOP
label_4a7ea0:
    // 0x4a7ea0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a7ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7ea4: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4a7ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4a7ea8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4a7ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_4a7eac:
    // 0x4a7eac: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a7eacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4a7eb0: 0x25440c48  addiu       $a0, $t2, 0xC48
    ctx->pc = 0x4a7eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 3144));
    // 0x4a7eb4: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x4a7eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x4a7eb8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4a7eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7ebc: 0x91020c4c  lbu         $v0, 0xC4C($t0)
    ctx->pc = 0x4a7ebcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3148)));
    // 0x4a7ec0: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x4a7ec0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7ec4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4a7ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4a7ec8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x4a7ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x4a7ecc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4a7eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4a7ed0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a7ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a7ed4: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x4a7ed4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a7ed8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x4A7ED8u;
    {
        const bool branch_taken_0x4a7ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7ED8u;
        // 0x4a7edc: 0x26230010  addiu       $v1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7ed8) {
            ctx->pc = 0x4A7F90u;
            goto label_4a7f90;
        }
    }
    ctx->pc = 0x4A7EE0u;
    // 0x4a7ee0: 0x9625002c  lhu         $a1, 0x2C($s1)
    ctx->pc = 0x4a7ee0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x4a7ee4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a7ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a7ee8: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x4a7ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7eec: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4a7eecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4a7ef0: 0x26280014  addiu       $t0, $s1, 0x14
    ctx->pc = 0x4a7ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x4a7ef4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a7ef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a7ef8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x4a7ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x4a7efc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4a7efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4a7f00: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4a7f00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4a7f04: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a7f04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4a7f08: 0x24c60c50  addiu       $a2, $a2, 0xC50
    ctx->pc = 0x4a7f08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3152));
    // 0x4a7f0c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4a7f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7f10: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4a7f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4a7f14: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x4a7f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x4a7f18: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x4a7f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x4a7f1c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4a7f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x4a7f20: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4a7f20u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x4a7f24: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4a7f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a7f28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a7f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a7f2c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4a7f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4a7f30: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x4A7F30u;
    {
        const bool branch_taken_0x4a7f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7F30u;
        // 0x4a7f34: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7f30) {
            ctx->pc = 0x4A8094u;
            goto label_4a8094;
        }
    }
    ctx->pc = 0x4A7F38u;
label_4a7f38:
    // 0x4a7f38: 0x9623002c  lhu         $v1, 0x2C($s1)
    ctx->pc = 0x4a7f38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x4a7f3c: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x4a7f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4a7f40: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4a7f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a7f44: 0x26270014  addiu       $a3, $s1, 0x14
    ctx->pc = 0x4a7f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x4a7f48: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a7f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a7f4c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4a7f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4a7f50: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a7f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a7f54: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4a7f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4a7f58: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a7f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a7f5c: 0x24a50c50  addiu       $a1, $a1, 0xC50
    ctx->pc = 0x4a7f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3152));
    // 0x4a7f60: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x4a7f60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x4a7f64: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4a7f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7f68: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x4a7f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x4a7f6c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4a7f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a7f70: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4a7f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4a7f74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a7f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a7f78: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4a7f78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4a7f7c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a7f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a7f80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a7f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a7f84: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4a7f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4a7f88: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x4A7F88u;
    {
        const bool branch_taken_0x4a7f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A7F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A7F88u;
        // 0x4a7f8c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a7f88) {
            ctx->pc = 0x4A8094u;
            goto label_4a8094;
        }
    }
    ctx->pc = 0x4A7F90u;
label_4a7f90:
    // 0x4a7f90: 0x26100c44  addiu       $s0, $s0, 0xC44
    ctx->pc = 0x4a7f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3140));
    // 0x4a7f94: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x4a7f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x4a7f98: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x4a7f98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a7f9c: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4a7f9cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4a7fa0: 0x24520c58  addiu       $s2, $v0, 0xC58
    ctx->pc = 0x4a7fa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 3160));
    // 0x4a7fa4: 0x25080c54  addiu       $t0, $t0, 0xC54
    ctx->pc = 0x4a7fa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3156));
    // 0x4a7fa8: 0xa4e30000  sh          $v1, 0x0($a3)
    ctx->pc = 0x4a7fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a7fac: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x4a7facu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x4a7fb0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x4a7fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7fb4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4a7fb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7fb8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4a7fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a7fbc: 0x86290028  lh          $t1, 0x28($s1)
    ctx->pc = 0x4a7fbcu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x4a7fc0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4a7fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0C58u));
    // 0x4a7fc4: 0x3487ffff  ori         $a3, $a0, 0xFFFF
    ctx->pc = 0x4a7fc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a7fc8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4a7fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0C54u));
    // 0x4a7fcc: 0x1334825  or          $t1, $t1, $s3
    ctx->pc = 0x4a7fccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 19));
    // 0x4a7fd0: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x4a7fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x4a7fd4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a7fd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a7fd8: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x4a7fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x4a7fdc: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x4a7fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
    // 0x4a7fe0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x4a7fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x4a7fe4: 0xf33824  and         $a3, $a3, $s3
    ctx->pc = 0x4a7fe4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
    // 0x4a7fe8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4a7fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4a7fec: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x4a7fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a7ff0: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x4a7ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x4a7ff4: 0xc12ac4c  jal         func_4AB130
    ctx->pc = 0x4A7FF4u;
    SET_GPR_U32(ctx, 31, 0x4A7FFCu);
    ctx->pc = 0x4A7FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A7FF4u;
    // 0x4a7ff8: 0xae070000  sw          $a3, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB130u, 0x4A7FF4u, 0x4A7FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A7FFCu;
label_4a7ffc:
    // 0x4a7ffc: 0x86290030  lh          $t1, 0x30($s1)
    ctx->pc = 0x4a7ffcu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x4a8000: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a8000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a8004: 0x1332825  or          $a1, $t1, $s3
    ctx->pc = 0x4a8004u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) | GPR_U64(ctx, 19));
    // 0x4a8008: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x4a8008u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a800c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a800cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a8010: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4a8010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a8014: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4a8014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4a8018: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4a8018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4a801c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4a801cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a8020: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a8020u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a8024: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x4a8024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x4a8028: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x4a8028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x4a802c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x4a802cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x4a8030: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x4a8030u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
    // 0x4a8034: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x4a8034u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a8038: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A8038u;
    {
        const bool branch_taken_0x4a8038 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4A803Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8038u;
        // 0x4a803c: 0x96430000  lhu         $v1, 0x0($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a8038) {
            ctx->pc = 0x4A8058u;
            goto label_4a8058;
        }
    }
    ctx->pc = 0x4A8040u;
    // 0x4a8040: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a8040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a8044: 0x3483ffff  ori         $v1, $a0, 0xFFFF
    ctx->pc = 0x4a8044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4a8048: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x4a8048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x4a804c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4a804cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4a8050: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x4a8050u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x4a8054: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4a8054u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_4a8058:
    // 0x4a8058: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x4a8058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4a805c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a805cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a8060: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a8060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a8064: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a8064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a8068: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x4a8068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x4a806c: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4a806cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4a8070: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a8070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a8074: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a8074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a8078: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x4a8078u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4a807c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a807cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a8080: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a8080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a8084: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x4a8084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x4a8088: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a8088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a808c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a808cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a8090: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4a8090u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_4a8094:
    // 0x4a8094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4a8094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a8098: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4a8098u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a809c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4a809cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a80a0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4a80a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a80a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a80a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a80a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A80A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A80ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A80A8u;
        // 0x4a80ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A80A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A80B0u;
}
