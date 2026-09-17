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

// Function: sub_004B3820
// Address: 0x4b3820 - 0x4b3880
void sub_004B3820_0x4b3820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3820_0x4b3820");
#endif

    ctx->pc = 0x4b3820u;

    // 0x4b3820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b3820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b3824: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4b3824u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4b3828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b3828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b382c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4b382cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3830: 0x24e70d3c  addiu       $a3, $a3, 0xD3C
    ctx->pc = 0x4b3830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3388));
    // 0x4b3834: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4b3834u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4b3838: 0x85250118  lh          $a1, 0x118($t1)
    ctx->pc = 0x4b3838u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 280)));
    // 0x4b383c: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4b383cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4b3840: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4b3840u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D3Cu));
    // 0x4b3844: 0x24c60d40  addiu       $a2, $a2, 0xD40
    ctx->pc = 0x4b3844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3392));
    // 0x4b3848: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4b3848u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4b384c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4b384cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D40u));
    // 0x4b3850: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4b3850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4b3854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b3854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b3858: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4b3858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4b385c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b385cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b3860: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4b3860u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4b3864: 0x8522011c  lh          $v0, 0x11C($t1)
    ctx->pc = 0x4b3864u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 284)));
    // 0x4b3868: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4b3868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4b386c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b386cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b3870: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4b3870u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4b3874: 0x812ce74  j           func_4B39D0
    ctx->pc = 0x4B3874u;
    ctx->pc = 0x4B3878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3874u;
    // 0x4b3878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B39D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B39D0u, 0x4B3874u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B387Cu;
    // 0x4b387c: 0x0  nop
    ctx->pc = 0x4b387cu;
    // NOP
    ctx->pc = 0x4b3880u;
}
