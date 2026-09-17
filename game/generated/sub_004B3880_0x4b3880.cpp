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

// Function: sub_004B3880
// Address: 0x4b3880 - 0x4b3910
void sub_004B3880_0x4b3880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B3880_0x4b3880");
#endif

    ctx->pc = 0x4b3880u;

    // 0x4b3880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4b3880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4b3884: 0x3c08007f  lui         $t0, 0x7F
    ctx->pc = 0x4b3884u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)127 << 16));
    // 0x4b3888: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4b3888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4b388c: 0x25080d3c  addiu       $t0, $t0, 0xD3C
    ctx->pc = 0x4b388cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3388));
    // 0x4b3890: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x4b3890u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4b3894: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x4b3894u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x4b3898: 0x85420118  lh          $v0, 0x118($t2)
    ctx->pc = 0x4b3898u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 280)));
    // 0x4b389c: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4b389cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4b38a0: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x4b38a0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0D3Cu));
    // 0x4b38a4: 0x24e70d40  addiu       $a3, $a3, 0xD40
    ctx->pc = 0x4b38a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3392));
    // 0x4b38a8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4b38a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4b38ac: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x4b38acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D40u));
    // 0x4b38b0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b38b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b38b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4b38b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4b38b8: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x4b38b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x4b38bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b38bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b38c0: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x4b38c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x4b38c4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x4b38c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x4b38c8: 0x8542011c  lh          $v0, 0x11C($t2)
    ctx->pc = 0x4b38c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 284)));
    // 0x4b38cc: 0x85050000  lh          $a1, 0x0($t0)
    ctx->pc = 0x4b38ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4b38d0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4b38d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4b38d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b38d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b38d8: 0x52823  negu        $a1, $a1
    ctx->pc = 0x4b38d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x4b38dc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4b38dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4b38e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4b38e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4b38e4: 0xa92825  or          $a1, $a1, $t1
    ctx->pc = 0x4b38e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 9));
    // 0x4b38e8: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4b38e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4b38ec: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x4b38ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x4b38f0: 0xad060000  sw          $a2, 0x0($t0)
    ctx->pc = 0x4b38f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
    // 0x4b38f4: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x4b38f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x4b38f8: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x4b38f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x4b38fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4b38fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4b3900: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4b3900u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x4b3904: 0x812ce74  j           func_4B39D0
    ctx->pc = 0x4B3904u;
    ctx->pc = 0x4B3908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4B3904u;
    // 0x4b3908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B39D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B39D0u, 0x4B3904u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4B390Cu;
    // 0x4b390c: 0x0  nop
    ctx->pc = 0x4b390cu;
    // NOP
    ctx->pc = 0x4b3910u;
}
