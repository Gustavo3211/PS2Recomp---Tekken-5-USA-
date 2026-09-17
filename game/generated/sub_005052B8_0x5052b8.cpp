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

// Function: sub_005052B8
// Address: 0x5052b8 - 0x5052e8
void sub_005052B8_0x5052b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005052B8_0x5052b8");
#endif

    switch (ctx->pc) {
        case 0x5052d0u: goto label_5052d0;
        default: break;
    }

    ctx->pc = 0x5052b8u;

    // 0x5052b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5052b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5052bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5052bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5052c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x5052c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5052c4: 0x81431ae  j           func_50C6B8
    ctx->pc = 0x5052C4u;
    ctx->pc = 0x5052C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5052C4u;
    // 0x5052c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50C6B8u, 0x5052C4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5052CCu;
    // 0x5052cc: 0x0  nop
    ctx->pc = 0x5052ccu;
    // NOP
label_5052d0:
    // 0x5052d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5052d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x5052d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5052d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x5052d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x5052d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5052dc: 0x81432a0  j           func_50CA80
    ctx->pc = 0x5052DCu;
    ctx->pc = 0x5052E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5052DCu;
    // 0x5052e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50CA80u;
    sub_0050CA80_0x50ca80(rdram, ctx, runtime); return;
    ctx->pc = 0x5052E4u;
    // 0x5052e4: 0x0  nop
    ctx->pc = 0x5052e4u;
    // NOP
    ctx->pc = 0x5052e8u;
}
