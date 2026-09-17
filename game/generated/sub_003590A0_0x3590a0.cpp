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

// Function: sub_003590A0
// Address: 0x3590a0 - 0x3590d0
void sub_003590A0_0x3590a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003590A0_0x3590a0");
#endif

    ctx->pc = 0x3590a0u;

    // 0x3590a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3590a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3590a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3590a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3590a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3590a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3590ac: 0x80d8b18  j           func_362C60
    ctx->pc = 0x3590ACu;
    ctx->pc = 0x3590B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3590ACu;
    // 0x3590b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C60u;
    sub_00362C60_0x362c60(rdram, ctx, runtime); return;
    ctx->pc = 0x3590B4u;
    // 0x3590b4: 0x0  nop
    ctx->pc = 0x3590b4u;
    // NOP
    // 0x3590b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3590b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3590bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3590bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3590c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3590c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3590c4: 0x80d8b50  j           func_362D40
    ctx->pc = 0x3590C4u;
    ctx->pc = 0x3590C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3590C4u;
    // 0x3590c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362D40u, 0x3590C4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3590CCu;
    // 0x3590cc: 0x0  nop
    ctx->pc = 0x3590ccu;
    // NOP
    ctx->pc = 0x3590d0u;
}
