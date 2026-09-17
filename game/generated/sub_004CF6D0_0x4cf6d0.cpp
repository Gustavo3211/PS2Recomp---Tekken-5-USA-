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

// Function: sub_004CF6D0
// Address: 0x4cf6d0 - 0x4cf730
void sub_004CF6D0_0x4cf6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CF6D0_0x4cf6d0");
#endif

    ctx->pc = 0x4cf6d0u;

    // 0x4cf6d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cf6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4cf6d4: 0x3c07007f  lui         $a3, 0x7F
    ctx->pc = 0x4cf6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)127 << 16));
    // 0x4cf6d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4cf6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4cf6dc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x4cf6dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4cf6e0: 0x24e70fbc  addiu       $a3, $a3, 0xFBC
    ctx->pc = 0x4cf6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4028));
    // 0x4cf6e4: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x4cf6e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x4cf6e8: 0x85250168  lh          $a1, 0x168($t1)
    ctx->pc = 0x4cf6e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 360)));
    // 0x4cf6ec: 0x3c06007f  lui         $a2, 0x7F
    ctx->pc = 0x4cf6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)127 << 16));
    // 0x4cf6f0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x4cf6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0FBCu));
    // 0x4cf6f4: 0x24c60fc0  addiu       $a2, $a2, 0xFC0
    ctx->pc = 0x4cf6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4032));
    // 0x4cf6f8: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x4cf6f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
    // 0x4cf6fc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4cf6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0FC0u));
    // 0x4cf700: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4cf700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4cf704: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cf704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4cf708: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4cf708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4cf70c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4cf70cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4cf710: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4cf710u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x4cf714: 0x8522016a  lh          $v0, 0x16A($t1)
    ctx->pc = 0x4cf714u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 362)));
    // 0x4cf718: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4cf718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4cf71c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x4cf71cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4cf720: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x4cf720u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x4cf724: 0x8133de4  j           func_4CF790
    ctx->pc = 0x4CF724u;
    ctx->pc = 0x4CF728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4CF724u;
    // 0x4cf728: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CF790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CF790u, 0x4CF724u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4CF72Cu;
    // 0x4cf72c: 0x0  nop
    ctx->pc = 0x4cf72cu;
    // NOP
    ctx->pc = 0x4cf730u;
}
