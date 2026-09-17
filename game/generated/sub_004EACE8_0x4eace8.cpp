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

// Function: sub_004EACE8
// Address: 0x4eace8 - 0x4ead48
void sub_004EACE8_0x4eace8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EACE8_0x4eace8");
#endif

    ctx->pc = 0x4eace8u;

    // 0x4eace8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4eace8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4eacec: 0x3c09007f  lui         $t1, 0x7F
    ctx->pc = 0x4eacecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)127 << 16));
    // 0x4eacf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4eacf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4eacf4: 0x3c0a007f  lui         $t2, 0x7F
    ctx->pc = 0x4eacf4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)127 << 16));
    // 0x4eacf8: 0x252911f4  addiu       $t1, $t1, 0x11F4
    ctx->pc = 0x4eacf8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4596));
    // 0x4eacfc: 0x254a11f8  addiu       $t2, $t2, 0x11F8
    ctx->pc = 0x4eacfcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4600));
    // 0x4ead00: 0x8d280000  lw          $t0, 0x0($t1)
    ctx->pc = 0x4ead00u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x7F11F4u));
    // 0x4ead04: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4ead04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4ead08: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x4ead08u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x7F11F8u));
    // 0x4ead0c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4ead0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4ead10: 0x346304ab  ori         $v1, $v1, 0x4AB
    ctx->pc = 0x4ead10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1195);
    // 0x4ead14: 0x344204b2  ori         $v0, $v0, 0x4B2
    ctx->pc = 0x4ead14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1202);
    // 0x4ead18: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x4ead18u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x4ead1c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4ead1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4ead20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ead20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ead24: 0x1034024  and         $t0, $t0, $v1
    ctx->pc = 0x4ead24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4ead28: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4ead28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x4ead2c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x4ead2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ead30: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x4ead30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ead34: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x4ead34u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x4ead38: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x4ead38u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
    // 0x4ead3c: 0x812b698  j           func_4ADA60
    ctx->pc = 0x4EAD3Cu;
    ctx->pc = 0x4EAD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAD3Cu;
    // 0x4ead40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA60u;
    sub_004ADA60_0x4ada60(rdram, ctx, runtime); return;
    ctx->pc = 0x4EAD44u;
    // 0x4ead44: 0x0  nop
    ctx->pc = 0x4ead44u;
    // NOP
    ctx->pc = 0x4ead48u;
}
