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

// Function: sub_0050007C
// Address: 0x50007c - 0x5000a0
void sub_0050007C_0x50007c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050007C_0x50007c");
#endif

    switch (ctx->pc) {
        case 0x50008cu: goto label_50008c;
        case 0x500090u: goto label_500090;
        default: break;
    }

    ctx->pc = 0x50007cu;

    // 0x50007c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50007cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x500080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x500080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x500084: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x500084u;
    SET_GPR_U32(ctx, 31, 0x50008Cu);
    ctx->pc = 0x500088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x500084u;
    // 0x500088: 0x2484c688  addiu       $a0, $a0, -0x3978 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x500084u, 0x50008Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50008Cu;
label_50008c:
    // 0x50008c: 0x0  nop
    ctx->pc = 0x50008cu;
    // NOP
label_500090:
    // 0x500090: 0x0  nop
    ctx->pc = 0x500090u;
    // NOP
    // 0x500094: 0x0  nop
    ctx->pc = 0x500094u;
    // NOP
    // 0x500098: 0x0  nop
    ctx->pc = 0x500098u;
    // NOP
    // 0x50009c: 0x0  nop
    ctx->pc = 0x50009cu;
    // NOP
    ctx->pc = 0x5000a0u;
}
