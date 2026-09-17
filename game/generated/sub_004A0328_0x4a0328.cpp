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

// Function: sub_004A0328
// Address: 0x4a0328 - 0x4a0340
void sub_004A0328_0x4a0328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A0328_0x4a0328");
#endif

    ctx->pc = 0x4a0328u;

    // 0x4a0328: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a0328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a032c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a032cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a0330: 0xa4800148  sh          $zero, 0x148($a0)
    ctx->pc = 0x4a0330u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 328), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a0334: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a0334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a0338: 0x8128090  j           func_4A0240
    ctx->pc = 0x4A0338u;
    ctx->pc = 0x4A033Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0338u;
    // 0x4a033c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0240u, 0x4A0338u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4A0340u;
}
