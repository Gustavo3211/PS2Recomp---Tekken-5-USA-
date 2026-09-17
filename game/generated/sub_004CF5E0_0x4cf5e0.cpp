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

// Function: sub_004CF5E0
// Address: 0x4cf5e0 - 0x4cf640
void sub_004CF5E0_0x4cf5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CF5E0_0x4cf5e0");
#endif

    ctx->pc = 0x4cf5e0u;

    // 0x4cf5e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cf5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cf5e4: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4cf5e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4cf5e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4cf5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4cf5ec: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4cf5ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf5f0: 0x24e70fbc  addiu       $a3, $a3, 0xFBC
    ctx->pc = 0x4cf5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4028));
    // 0x4cf5f4: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4cf5f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4cf5f8: 0x85250118  lh          $a1, 0x118($t1)
    ctx->pc = 0x4cf5f8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 280)));
    // 0x4cf5fc: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4cf5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4cf600: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4cf600u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0FBCu));
    // 0x4cf604: 0x24c60fc0  addiu       $a2, $a2, 0xFC0
    ctx->pc = 0x4cf604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4032));
    // 0x4cf608: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4cf608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4cf60c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4cf60cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0FC0u));
    // 0x4cf610: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4cf610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4cf614: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cf614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cf618: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4cf618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4cf61c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cf61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cf620: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4cf620u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4cf624: 0x8522011c  lh          $v0, 0x11C($t1)
    ctx->pc = 0x4cf624u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 284)));
    // 0x4cf628: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4cf628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4cf62c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cf62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cf630: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4cf630u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4cf634: 0x8133de4  j           func_4CF790
    ctx->pc = 0x4CF634u;
    ctx->pc = 0x4CF638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF634u;
    // 0x4cf638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CF790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CF790u, 0x4CF634u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4CF63Cu;
    // 0x4cf63c: 0x0  nop
    ctx->pc = 0x4cf63cu;
    // NOP
    ctx->pc = 0x4cf640u;
}
