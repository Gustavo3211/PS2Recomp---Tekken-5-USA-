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

// Function: sub_00506A68
// Address: 0x506a68 - 0x506af8
void sub_00506A68_0x506a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00506A68_0x506a68");
#endif

    ctx->pc = 0x506a68u;

    // 0x506a68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x506a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x506a6c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x506a6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x506a70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x506a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x506a74: 0x24e60010  addiu       $a2, $a3, 0x10
    ctx->pc = 0x506a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x506a78: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x506a78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x506a7c: 0x24e90014  addiu       $t1, $a3, 0x14
    ctx->pc = 0x506a7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x506a80: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x506a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x506a84: 0x84e5002c  lh          $a1, 0x2C($a3)
    ctx->pc = 0x506a84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x506a88: 0x681024  and         $v0, $v1, $t0
    ctx->pc = 0x506a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x506a8c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x506a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x506a90: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x506a90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x506a94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x506a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x506a98: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x506a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x506a9c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x506a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x506aa0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x506aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x506aa4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x506aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x506aa8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x506aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x506aac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x506aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x506ab0: 0x84e5002e  lh          $a1, 0x2E($a3)
    ctx->pc = 0x506ab0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 46)));
    // 0x506ab4: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x506ab4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x506ab8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x506ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x506abc: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x506abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x506ac0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x506ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x506ac4: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x506ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x506ac8: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x506ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x506acc: 0x84e30030  lh          $v1, 0x30($a3)
    ctx->pc = 0x506accu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x506ad0: 0xa81024  and         $v0, $a1, $t0
    ctx->pc = 0x506ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 8));
    // 0x506ad4: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x506ad4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x506ad8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x506ad8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x506adc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x506adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x506ae0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x506ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x506ae4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x506ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x506ae8: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x506ae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x506aec: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x506aecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
    // 0x506af0: 0x8141a68  j           func_5069A0
    ctx->pc = 0x506AF0u;
    ctx->pc = 0x506AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x506AF0u;
    // 0x506af4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5069A0u;
    sub_005069A0_0x5069a0(rdram, ctx, runtime); return;
    ctx->pc = 0x506AF8u;
}
