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

// Function: sub_00500190
// Address: 0x500190 - 0x5001dc
void sub_00500190_0x500190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00500190_0x500190");
#endif

    ctx->pc = 0x500190u;

    // 0x500190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x500190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x500194: 0x24e7cfac  addiu       $a3, $a3, -0x3054
    ctx->pc = 0x500194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954924));
    // 0x500198: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x500198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50019c: 0x3c0b0057  lui         $t3, 0x57
    ctx->pc = 0x50019cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)87 << 16));
    // 0x5001a0: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x5001a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x5001a4: 0x24490004  addiu       $t1, $v0, 0x4
    ctx->pc = 0x5001a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x5001a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x5001a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x5001ac: 0x244a0008  addiu       $t2, $v0, 0x8
    ctx->pc = 0x5001acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x5001b0: 0x8ca80014  lw          $t0, 0x14($a1)
    ctx->pc = 0x5001b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x5001b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x5001b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5001b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x5001b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5001bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x5001bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5001c0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x5001c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x5001c4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x5001c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x5001c8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x5001c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x5001cc: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x5001ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x5001d0: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x5001d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x5001d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5001d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x5001d8: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x5001d8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x5001dcu;
}
