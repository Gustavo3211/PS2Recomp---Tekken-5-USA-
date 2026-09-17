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

// Function: sub_004CF640
// Address: 0x4cf640 - 0x4cf6d0
void sub_004CF640_0x4cf640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CF640_0x4cf640");
#endif

    ctx->pc = 0x4cf640u;

    // 0x4cf640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cf640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cf644: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4cf644u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4cf648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4cf648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4cf64c: 0x25080fbc  addiu       $t0, $t0, 0xFBC
    ctx->pc = 0x4cf64cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4028));
    // 0x4cf650: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x4cf650u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf654: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4cf654u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4cf658: 0x85420118  lh          $v0, 0x118($t2)
    ctx->pc = 0x4cf658u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 280)));
    // 0x4cf65c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4cf65cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4cf660: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x4cf660u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0FBCu));
    // 0x4cf664: 0x24e70fc0  addiu       $a3, $a3, 0xFC0
    ctx->pc = 0x4cf664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4032));
    // 0x4cf668: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4cf668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4cf66c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4cf66cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0FC0u));
    // 0x4cf670: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4cf670u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4cf674: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cf674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cf678: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4cf678u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4cf67c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cf67cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cf680: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x4cf680u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x4cf684: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4cf684u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4cf688: 0x8542011c  lh          $v0, 0x11C($t2)
    ctx->pc = 0x4cf688u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 284)));
    // 0x4cf68c: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x4cf68cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4cf690: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4cf690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4cf694: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cf694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cf698: 0x52823  negu        $a1, $a1
    ctx->pc = 0x4cf698u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x4cf69c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4cf69cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4cf6a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cf6a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cf6a4: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x4cf6a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x4cf6a8: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4cf6a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4cf6ac: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x4cf6acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x4cf6b0: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x4cf6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x4cf6b4: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x4cf6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x4cf6b8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4cf6b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4cf6bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cf6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cf6c0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4cf6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4cf6c4: 0x8133de4  j           func_4CF790
    ctx->pc = 0x4CF6C4u;
    ctx->pc = 0x4CF6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF6C4u;
    // 0x4cf6c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CF790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CF790u, 0x4CF6C4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4CF6CCu;
    // 0x4cf6cc: 0x0  nop
    ctx->pc = 0x4cf6ccu;
    // NOP
    ctx->pc = 0x4cf6d0u;
}
