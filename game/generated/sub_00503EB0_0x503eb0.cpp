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

// Function: sub_00503EB0
// Address: 0x503eb0 - 0x503ee0
void sub_00503EB0_0x503eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00503EB0_0x503eb0");
#endif

    ctx->pc = 0x503eb0u;

    // 0x503eb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x503eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x503eb4: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x503eb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x503eb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x503eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x503ebc: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x503ebcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x503ec0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x503ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x503ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x503ec8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x503ec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x503ecc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x503eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x503ed0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x503ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x503ed4: 0x813e49c  j           func_4F9270
    ctx->pc = 0x503ED4u;
    ctx->pc = 0x503ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503ED4u;
    // 0x503ed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9270u;
    sub_004F9270_0x4f9270(rdram, ctx, runtime); return;
    ctx->pc = 0x503EDCu;
    // 0x503edc: 0x0  nop
    ctx->pc = 0x503edcu;
    // NOP
    ctx->pc = 0x503ee0u;
}
