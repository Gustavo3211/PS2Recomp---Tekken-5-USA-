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

// Function: sub_00499948
// Address: 0x499948 - 0x499990
void sub_00499948_0x499948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499948_0x499948");
#endif

    ctx->pc = 0x499948u;

    // 0x499948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x499948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49994c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x49994cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x499950: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x499950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x499954: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x499954u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x499958: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x499958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x49995c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x49995cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x499960: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x499960u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x499964: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x499964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x499968: 0x34c60006  ori         $a2, $a2, 0x6
    ctx->pc = 0x499968u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)6);
    // 0x49996c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x49996cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x499970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x499970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499974: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x499974u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x499978: 0x663024  and         $a2, $v1, $a2
    ctx->pc = 0x499978u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x49997c: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x49997cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x499980: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x499980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x499984: 0x8129ba6  j           func_4A6E98
    ctx->pc = 0x499984u;
    ctx->pc = 0x499988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x499984u;
    // 0x499988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A6E98u;
    sub_004A6E98_0x4a6e98(rdram, ctx, runtime); return;
    ctx->pc = 0x49998Cu;
    // 0x49998c: 0x0  nop
    ctx->pc = 0x49998cu;
    // NOP
    ctx->pc = 0x499990u;
}
