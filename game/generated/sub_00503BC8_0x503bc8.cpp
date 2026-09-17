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

// Function: sub_00503BC8
// Address: 0x503bc8 - 0x503bf0
void sub_00503BC8_0x503bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00503BC8_0x503bc8");
#endif

    switch (ctx->pc) {
        case 0x503bdcu: goto label_503bdc;
        default: break;
    }

    ctx->pc = 0x503bc8u;

    // 0x503bc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x503bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x503bcc: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x503bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x503bd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x503bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x503bd4: 0xc140f5c  jal         func_503D70
    ctx->pc = 0x503BD4u;
    SET_GPR_U32(ctx, 31, 0x503BDCu);
    ctx->pc = 0x503BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503BD4u;
    // 0x503bd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x503D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x503D70u, 0x503BD4u, 0x503BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x503BDCu;
label_503bdc:
    // 0x503bdc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x503bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x503be0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x503be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x503be4: 0x804098c  j           func_102630
    ctx->pc = 0x503BE4u;
    ctx->pc = 0x503BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x503BE4u;
    // 0x503be8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102630u;
    sub_00102630_0x102630(rdram, ctx, runtime); return;
    ctx->pc = 0x503BECu;
    // 0x503bec: 0x0  nop
    ctx->pc = 0x503becu;
    // NOP
    ctx->pc = 0x503bf0u;
}
