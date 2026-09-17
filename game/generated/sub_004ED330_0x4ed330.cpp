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

// Function: sub_004ED330
// Address: 0x4ed330 - 0x4ed358
void sub_004ED330_0x4ed330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ED330_0x4ed330");
#endif

    ctx->pc = 0x4ed330u;

    // 0x4ed330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ed330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4ed334: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x4ed334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x4ed338: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ed338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4ed33c: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4ed33cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4ed340: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4ed340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4ed344: 0xa482014a  sh          $v0, 0x14A($a0)
    ctx->pc = 0x4ed344u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 330), (uint16_t)GPR_U32(ctx, 2));
    // 0x4ed348: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ed348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ed34c: 0xaca31200  sw          $v1, 0x1200($a1)
    ctx->pc = 0x4ed34cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x7F1200u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7F1200u, _value); } while (0);
    // 0x4ed350: 0x813b504  j           func_4ED410
    ctx->pc = 0x4ED350u;
    ctx->pc = 0x4ED354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ED350u;
    // 0x4ed354: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ED410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ED410u, 0x4ED350u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4ED358u;
}
