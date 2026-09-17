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

// Function: sub_004F0888
// Address: 0x4f0888 - 0x4f08b0
void sub_004F0888_0x4f0888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F0888_0x4f0888");
#endif

    ctx->pc = 0x4f0888u;

    // 0x4f0888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f0888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f088c: 0x2483011c  addiu       $v1, $a0, 0x11C
    ctx->pc = 0x4f088cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 284));
    // 0x4f0890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f0890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f0894: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f0894u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f0898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f0898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f089c: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x4f089cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x4f08a0: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f08a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f08a4: 0x8127e84  j           func_49FA10
    ctx->pc = 0x4F08A4u;
    ctx->pc = 0x4F08A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F08A4u;
    // 0x4f08a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49FA10u;
    sub_0049FA10_0x49fa10(rdram, ctx, runtime); return;
    ctx->pc = 0x4F08ACu;
    // 0x4f08ac: 0x0  nop
    ctx->pc = 0x4f08acu;
    // NOP
    ctx->pc = 0x4f08b0u;
}
