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

// Function: sub_004D21F8
// Address: 0x4d21f8 - 0x4d2238
void sub_004D21F8_0x4d21f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D21F8_0x4d21f8");
#endif

    ctx->pc = 0x4d21f8u;

    // 0x4d21f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4d21f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4d21fc: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4d21fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4d2200: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4d2200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4d2204: 0x24a51018  addiu       $a1, $a1, 0x1018
    ctx->pc = 0x4d2204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4120));
    // 0x4d2208: 0x848301b8  lh          $v1, 0x1B8($a0)
    ctx->pc = 0x4d2208u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 440)));
    // 0x4d220c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4d220cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4d2210: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d2210u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F1018u));
    // 0x4d2214: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x4d2214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x4d2218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4d2218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4d221c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4d221cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4d2220: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4d2220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4d2224: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4d2224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d2228: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x4d2228u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x4d222c: 0x8124794  j           func_491E50
    ctx->pc = 0x4D222Cu;
    ctx->pc = 0x4D2230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D222Cu;
    // 0x4d2230: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491E50u, 0x4D222Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4D2234u;
    // 0x4d2234: 0x0  nop
    ctx->pc = 0x4d2234u;
    // NOP
    ctx->pc = 0x4d2238u;
}
