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

// Function: sub_004A9A58
// Address: 0x4a9a58 - 0x4a9a78
void sub_004A9A58_0x4a9a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9A58_0x4a9a58");
#endif

    switch (ctx->pc) {
        case 0x4a9a68u: goto label_4a9a68;
        default: break;
    }

    ctx->pc = 0x4a9a58u;

    // 0x4a9a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a9a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a9a5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a9a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a9a60: 0xc124c3c  jal         func_4930F0
    ctx->pc = 0x4A9A60u;
    SET_GPR_U32(ctx, 31, 0x4A9A68u);
    ctx->pc = 0x4930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4930F0u, 0x4A9A60u, 0x4A9A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9A68u;
label_4a9a68:
    // 0x4a9a68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a9a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a9a6c: 0x8124642  j           func_491908
    ctx->pc = 0x4A9A6Cu;
    ctx->pc = 0x4A9A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9A6Cu;
    // 0x4a9a70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x491908u;
    sub_00491908_0x491908(rdram, ctx, runtime); return;
    ctx->pc = 0x4A9A74u;
    // 0x4a9a74: 0x0  nop
    ctx->pc = 0x4a9a74u;
    // NOP
    ctx->pc = 0x4a9a78u;
}
