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

// Function: sub_00344100
// Address: 0x344100 - 0x344128
void sub_00344100_0x344100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344100_0x344100");
#endif

    ctx->pc = 0x344100u;

    // 0x344100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344104: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344108: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x344108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x34410c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x34410cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x344110: 0x460c6042  mul.s       $f1, $f12, $f12
    ctx->pc = 0x344110u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x344114: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x344114u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x344118: 0x46016316  rsqrt.s     $f12, $f12, $f1
    ctx->pc = 0x344118u;
    ctx->f[12] = 1.0f / sqrtf(ctx->f[12]);
    // 0x34411c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34411cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344120: 0x80d104a  j           func_344128
    ctx->pc = 0x344120u;
    ctx->pc = 0x344124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344120u;
    // 0x344124: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344128u;
    sub_00344128_0x344128(rdram, ctx, runtime); return;
    ctx->pc = 0x344128u;
}
