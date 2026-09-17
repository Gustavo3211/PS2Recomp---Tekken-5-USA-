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

// Function: sub_0031A250
// Address: 0x31a250 - 0x31a270
void sub_0031A250_0x31a250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031A250_0x31a250");
#endif

    ctx->pc = 0x31a250u;

    // 0x31a250: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31a250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31a254: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x31a254u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x31a258: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31a258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31a25c: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x31a25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x31a260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31a260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a264: 0x80c75b8  j           func_31D6E0
    ctx->pc = 0x31A264u;
    ctx->pc = 0x31A268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A264u;
    // 0x31a268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D6E0u, 0x31A264u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x31A26Cu;
    // 0x31a26c: 0x0  nop
    ctx->pc = 0x31a26cu;
    // NOP
    ctx->pc = 0x31a270u;
}
