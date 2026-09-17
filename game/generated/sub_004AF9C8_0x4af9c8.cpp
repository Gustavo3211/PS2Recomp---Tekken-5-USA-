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

// Function: sub_004AF9C8
// Address: 0x4af9c8 - 0x4afa28
void sub_004AF9C8_0x4af9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AF9C8_0x4af9c8");
#endif

    ctx->pc = 0x4af9c8u;

    // 0x4af9c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4af9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4af9cc: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4af9ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4af9d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4af9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4af9d4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4af9d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4af9d8: 0x24e70d3c  addiu       $a3, $a3, 0xD3C
    ctx->pc = 0x4af9d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3388));
    // 0x4af9dc: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4af9dcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4af9e0: 0x85250118  lh          $a1, 0x118($t1)
    ctx->pc = 0x4af9e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 280)));
    // 0x4af9e4: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4af9e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4af9e8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4af9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0D3Cu));
    // 0x4af9ec: 0x24c60d40  addiu       $a2, $a2, 0xD40
    ctx->pc = 0x4af9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 3392));
    // 0x4af9f0: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4af9f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4af9f4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4af9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0D40u));
    // 0x4af9f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4af9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4af9fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4af9fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4afa00: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4afa00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4afa04: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4afa04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4afa08: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4afa08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4afa0c: 0x8522011c  lh          $v0, 0x11C($t1)
    ctx->pc = 0x4afa0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 284)));
    // 0x4afa10: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4afa10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4afa14: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4afa14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4afa18: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4afa18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4afa1c: 0x812bede  j           func_4AFB78
    ctx->pc = 0x4AFA1Cu;
    ctx->pc = 0x4AFA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AFA1Cu;
    // 0x4afa20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AFB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AFB78u, 0x4AFA1Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4AFA24u;
    // 0x4afa24: 0x0  nop
    ctx->pc = 0x4afa24u;
    // NOP
    ctx->pc = 0x4afa28u;
}
