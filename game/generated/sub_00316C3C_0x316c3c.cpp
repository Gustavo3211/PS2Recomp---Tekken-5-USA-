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

// Function: sub_00316C3C
// Address: 0x316c3c - 0x316e1c
void sub_00316C3C_0x316c3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316C3C_0x316c3c");
#endif

    ctx->pc = 0x316c3cu;

    // 0x316c3c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x316c3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x316c40: 0xffbe0020  sd          $fp, 0x20($sp)
    ctx->pc = 0x316c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 30));
    // 0x316c44: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x316c44u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c48: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x316c48u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x316c4c: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x316c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
    // 0x316c50: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x316c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x316c54: 0x24424550  addiu       $v0, $v0, 0x4550
    ctx->pc = 0x316c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17744));
    // 0x316c58: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x316c58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x316c5c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x316c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x316c60: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x316c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x316c64: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x316c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x316c68: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x316c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x316c6c: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x316c6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x316c70: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x316c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316c74: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x316c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x316c78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316c7c: 0x21fc3  sra         $v1, $v0, 31
    ctx->pc = 0x316c7cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 31));
    // 0x316c80: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x316c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x316c84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316c88: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x316c88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x316c8c: 0x24422800  addiu       $v0, $v0, 0x2800
    ctx->pc = 0x316c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10240));
    // 0x316c90: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x316c90u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
    // 0x316c94: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x316c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x316c98: 0xafc20010  sw          $v0, 0x10($fp)
    ctx->pc = 0x316c98u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 2));
    // 0x316c9c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x316c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x316ca0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316CA0u;
    {
        const bool branch_taken_0x316ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x316ca0) {
            ctx->pc = 0x316CC4u;
            goto label_316cc4;
        }
    }
    ctx->pc = 0x316CA8u;
    // 0x316ca8: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x316ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x316cac: 0x2443003f  addiu       $v1, $v0, 0x3F
    ctx->pc = 0x316cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x316cb0: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x316cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x316cb4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x316cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x316cb8: 0x8fc30010  lw          $v1, 0x10($fp)
    ctx->pc = 0x316cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x316cbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x316cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x316cc0: 0xafc30010  sw          $v1, 0x10($fp)
    ctx->pc = 0x316cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 3));
label_316cc4:
    // 0x316cc4: 0x8fc20010  lw          $v0, 0x10($fp)
    ctx->pc = 0x316cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x316cc8: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x316cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x316ccc: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x316cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x316cd0: 0xafc30014  sw          $v1, 0x14($fp)
    ctx->pc = 0x316cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 3));
    // 0x316cd4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x316cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x316cd8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x316cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x316cdc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x316CDCu;
    {
        const bool branch_taken_0x316cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x316cdc) {
            ctx->pc = 0x316D04u;
            goto label_316d04;
        }
    }
    ctx->pc = 0x316CE4u;
    // 0x316ce4: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x316ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x316ce8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x316ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x316cec: 0x24430fff  addiu       $v1, $v0, 0xFFF
    ctx->pc = 0x316cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4095));
    // 0x316cf0: 0x2402f000  addiu       $v0, $zero, -0x1000
    ctx->pc = 0x316cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x316cf4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x316cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x316cf8: 0x8fc30014  lw          $v1, 0x14($fp)
    ctx->pc = 0x316cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x316cfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x316cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x316d00: 0xafc30014  sw          $v1, 0x14($fp)
    ctx->pc = 0x316d00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 3));
label_316d04:
    // 0x316d04: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x316d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
    // 0x316d08: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x316d08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x316d0c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x316d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x316d10: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x316d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x316d14: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x316d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x316d18: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x316D18u;
    {
        const bool branch_taken_0x316d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x316d18) {
            ctx->pc = 0x316D4Cu;
            goto label_316d4c;
        }
    }
    ctx->pc = 0x316D20u;
    // 0x316d20: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x316d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x316d24: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x316d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x316d28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x316d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x316d2c: 0x2443003f  addiu       $v1, $v0, 0x3F
    ctx->pc = 0x316d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x316d30: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x316d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x316d34: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x316d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x316d38: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x316d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x316d3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x316d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x316d40: 0xafc30018  sw          $v1, 0x18($fp)
    ctx->pc = 0x316d40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 3));
    // 0x316d44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316D44u;
    {
        const bool branch_taken_0x316d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x316d44) {
            ctx->pc = 0x316D54u;
            goto label_316d54;
        }
    }
    ctx->pc = 0x316D4Cu;
label_316d4c:
    // 0x316d4c: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x316d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x316d50: 0xafc30018  sw          $v1, 0x18($fp)
    ctx->pc = 0x316d50u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 3));
label_316d54:
    // 0x316d54: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x316d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
    // 0x316d58: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x316d58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x316d5c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x316d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x316d60: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x316d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x316d64: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x316d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x316d68: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x316d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x316d6c: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x316d6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x316d70: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x316d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x316d74: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x316d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x316d78: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x316d78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x316d7c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x316d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x316d80: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x316d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x316d84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316d88: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x316d88u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x316d8c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x316d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x316d90: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x316d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x316d94: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x316d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x316d98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x316d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x316d9c: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x316d9cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x316da0: 0x1812  mflo        $v1
    ctx->pc = 0x316da0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x316da4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x316DA4u;
    {
        const bool branch_taken_0x316da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x316da4) {
            ctx->pc = 0x316DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x316DA4u;
            // 0x316da8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x316DACu;
            goto label_316dac;
        }
    }
    ctx->pc = 0x316DACu;
label_316dac:
    // 0x316dac: 0xafc3000c  sw          $v1, 0xC($fp)
    ctx->pc = 0x316dacu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 3));
    // 0x316db0: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x316db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x316db4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x316DB4u;
    {
        const bool branch_taken_0x316db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x316db4) {
            ctx->pc = 0x316DC4u;
            goto label_316dc4;
        }
    }
    ctx->pc = 0x316DBCu;
    // 0x316dbc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x316dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x316dc0: 0xafc2000c  sw          $v0, 0xC($fp)
    ctx->pc = 0x316dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 2));
label_316dc4:
    // 0x316dc4: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x316dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x316dc8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x316dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316dcc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x316dccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x316dd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316dd4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x316dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x316dd8: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x316dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x316ddc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316de0: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x316de0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x316de4: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x316de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
    // 0x316de8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x316de8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316dec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x316decu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x316df0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316df4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x316df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x316df8: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x316df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x316dfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x316dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x316e00: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x316e00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
    // 0x316e04: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x316e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x316e08: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x316e08u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316e0c: 0xdfbe0020  ld          $fp, 0x20($sp)
    ctx->pc = 0x316e0cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x316e10: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x316e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x316e14: 0x3e00008  jr          $ra
    ctx->pc = 0x316E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316E1Cu;
}
