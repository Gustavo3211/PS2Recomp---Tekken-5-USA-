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

// Function: sub_0033E1A8
// Address: 0x33e1a8 - 0x33e1e0
void sub_0033E1A8_0x33e1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E1A8_0x33e1a8");
#endif

    switch (ctx->pc) {
        case 0x33e1bcu: goto label_33e1bc;
        default: break;
    }

    ctx->pc = 0x33e1a8u;

    // 0x33e1a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33e1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33e1ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33e1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33e1b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33e1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33e1b4: 0xc0cfa8c  jal         func_33EA30
    ctx->pc = 0x33E1B4u;
    SET_GPR_U32(ctx, 31, 0x33E1BCu);
    ctx->pc = 0x33E1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E1B4u;
    // 0x33e1b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EA30u, 0x33E1B4u, 0x33E1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E1BCu;
label_33e1bc:
    // 0x33e1bc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x33e1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x33e1c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33e1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33e1c4: 0x24632aa8  addiu       $v1, $v1, 0x2AA8
    ctx->pc = 0x33e1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10920));
    // 0x33e1c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33e1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e1cc: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x33e1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
    // 0x33e1d0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x33e1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33e1d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33e1d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e1d8: 0x80c7978  j           func_31E5E0
    ctx->pc = 0x33E1D8u;
    ctx->pc = 0x33E1DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E1D8u;
    // 0x33e1dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E5E0u;
    sub_0031E5E0_0x31e5e0(rdram, ctx, runtime); return;
    ctx->pc = 0x33E1E0u;
}
