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

// Function: sub_0033EB40
// Address: 0x33eb40 - 0x33eb70
void sub_0033EB40_0x33eb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033EB40_0x33eb40");
#endif

    switch (ctx->pc) {
        case 0x33eb58u: goto label_33eb58;
        default: break;
    }

    ctx->pc = 0x33eb40u;

    // 0x33eb40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33eb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33eb44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33eb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33eb48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33eb48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33eb4c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33eb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33eb50: 0xc0c7778  jal         func_31DDE0
    ctx->pc = 0x33EB50u;
    SET_GPR_U32(ctx, 31, 0x33EB58u);
    ctx->pc = 0x33EB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EB50u;
    // 0x33eb54: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DDE0u, 0x33EB50u, 0x33EB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EB58u;
label_33eb58:
    // 0x33eb58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33eb58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33eb5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33eb5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33eb60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x33eb60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33eb64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33eb64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33eb68: 0x80c799e  j           func_31E678
    ctx->pc = 0x33EB68u;
    ctx->pc = 0x33EB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EB68u;
    // 0x33eb6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E678u;
    sub_0031E678_0x31e678(rdram, ctx, runtime); return;
    ctx->pc = 0x33EB70u;
}
