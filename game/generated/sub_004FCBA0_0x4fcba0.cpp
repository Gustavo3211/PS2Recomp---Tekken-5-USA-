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

// Function: sub_004FCBA0
// Address: 0x4fcba0 - 0x4fcca8
void sub_004FCBA0_0x4fcba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FCBA0_0x4fcba0");
#endif

    ctx->pc = 0x4fcba0u;

    // 0x4fcba0: 0x3c0b0085  lui         $t3, 0x85
    ctx->pc = 0x4fcba0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)133 << 16));
    // 0x4fcba4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4fcba4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4fcba8: 0x256bc748  addiu       $t3, $t3, -0x38B8
    ctx->pc = 0x4fcba8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294952776));
    // 0x4fcbac: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x4fcbacu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x4fcbb0: 0x25620008  addiu       $v0, $t3, 0x8
    ctx->pc = 0x4fcbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x4fcbb4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4fcbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4fcbb8: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x4fcbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4fcbbc: 0x52b03  sra         $a1, $a1, 12
    ctx->pc = 0x4fcbbcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 12));
    // 0x4fcbc0: 0x8c6d0000  lw          $t5, 0x0($v1)
    ctx->pc = 0x4fcbc0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4fcbc4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4fcbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4fcbc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4fcbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4fcbcc: 0x256a0004  addiu       $t2, $t3, 0x4
    ctx->pc = 0x4fcbccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x4fcbd0: 0xcd1023  subu        $v0, $a2, $t5
    ctx->pc = 0x4fcbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x4fcbd4: 0xaa6021  addu        $t4, $a1, $t2
    ctx->pc = 0x4fcbd4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x4fcbd8: 0x6d1823  subu        $v1, $v1, $t5
    ctx->pc = 0x4fcbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x4fcbdc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4fcbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4fcbe0: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x4fcbe0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x4fcbe4: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x4fcbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x4fcbe8: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x4fcbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x4fcbec: 0x8b5821  addu        $t3, $a0, $t3
    ctx->pc = 0x4fcbecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
    // 0x4fcbf0: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x4fcbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x4fcbf4: 0x8d690000  lw          $t1, 0x0($t3)
    ctx->pc = 0x4fcbf4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x4fcbf8: 0x8c8a0000  lw          $t2, 0x0($a0)
    ctx->pc = 0x4fcbf8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4fcbfc: 0x3c0b0030  lui         $t3, 0x30
    ctx->pc = 0x4fcbfcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)48 << 16));
    // 0x4fcc00: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x4fcc00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x4fcc04: 0x356b4000  ori         $t3, $t3, 0x4000
    ctx->pc = 0x4fcc04u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)16384);
    // 0x4fcc08: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4fcc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4fcc0c: 0x8a2023  subu        $a0, $a0, $t2
    ctx->pc = 0x4fcc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x4fcc10: 0x8c4cced0  lw          $t4, -0x3130($v0)
    ctx->pc = 0x4fcc10u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954704)));
    // 0x4fcc14: 0x691823  subu        $v1, $v1, $t1
    ctx->pc = 0x4fcc14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x4fcc18: 0xad070008  sw          $a3, 0x8($t0)
    ctx->pc = 0x4fcc18u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 7));
    // 0x4fcc1c: 0x6812  mflo        $t5
    ctx->pc = 0x4fcc1cu;
    SET_GPR_U64(ctx, 13, ctx->lo);
    // 0x4fcc20: 0x1a42018  mult        $a0, $t5, $a0
    ctx->pc = 0x4fcc20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x4fcc24: 0x166001a  div         $zero, $t3, $a2
    ctx->pc = 0x4fcc24u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 11);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x4fcc28: 0x71a31818  mult1       $v1, $t5, $v1
    ctx->pc = 0x4fcc28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 13) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x4fcc2c: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x4fcc2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4fcc30: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x4fcc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x4fcc34: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x4fcc34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fcc38: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x4fcc38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4fcc3c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x4fcc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x4fcc40: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x4fcc40u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x4fcc44: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x4fcc44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fcc48: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4fcc48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4fcc4c: 0xc2200b  movn        $a0, $a2, $v0
    ctx->pc = 0x4fcc4cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x4fcc50: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x4fcc50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x4fcc54: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4fcc54u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4fcc58: 0x1445021  addu        $t2, $t2, $a0
    ctx->pc = 0x4fcc58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x4fcc5c: 0xa5023  negu        $t2, $t2
    ctx->pc = 0x4fcc5cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x4fcc60: 0x6812  mflo        $t5
    ctx->pc = 0x4fcc60u;
    SET_GPR_U64(ctx, 13, ctx->lo);
    // 0x4fcc64: 0x12d4818  mult        $t1, $t1, $t5
    ctx->pc = 0x4fcc64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x4fcc68: 0x714d5018  mult1       $t2, $t2, $t5
    ctx->pc = 0x4fcc68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 13); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x4fcc6c: 0x29220000  slti        $v0, $t1, 0x0
    ctx->pc = 0x4fcc6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fcc70: 0x25230fff  addiu       $v1, $t1, 0xFFF
    ctx->pc = 0x4fcc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4095));
    // 0x4fcc74: 0x62480b  movn        $t1, $v1, $v0
    ctx->pc = 0x4fcc74u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 3));
    // 0x4fcc78: 0x29420000  slti        $v0, $t2, 0x0
    ctx->pc = 0x4fcc78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x4fcc7c: 0x94b03  sra         $t1, $t1, 12
    ctx->pc = 0x4fcc7cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 12));
    // 0x4fcc80: 0x25440fff  addiu       $a0, $t2, 0xFFF
    ctx->pc = 0x4fcc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 4095));
    // 0x4fcc84: 0x12c4818  mult        $t1, $t1, $t4
    ctx->pc = 0x4fcc84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x4fcc88: 0x82500b  movn        $t2, $a0, $v0
    ctx->pc = 0x4fcc88u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 4));
    // 0x4fcc8c: 0xa5303  sra         $t2, $t2, 12
    ctx->pc = 0x4fcc8cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 12));
    // 0x4fcc90: 0x254a0800  addiu       $t2, $t2, 0x800
    ctx->pc = 0x4fcc90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2048));
    // 0x4fcc94: 0xad0a0004  sw          $t2, 0x4($t0)
    ctx->pc = 0x4fcc94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 10));
    // 0x4fcc98: 0x94a83  sra         $t1, $t1, 10
    ctx->pc = 0x4fcc98u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 10));
    // 0x4fcc9c: 0x25290800  addiu       $t1, $t1, 0x800
    ctx->pc = 0x4fcc9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2048));
    // 0x4fcca0: 0x3e00008  jr          $ra
    ctx->pc = 0x4FCCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FCCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4FCCA0u;
        // 0x4fcca4: 0xad090000  sw          $t1, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4FCCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4FCCA8u;
}
