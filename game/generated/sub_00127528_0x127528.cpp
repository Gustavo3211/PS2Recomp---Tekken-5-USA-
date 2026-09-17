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

// Function: sub_00127528
// Address: 0x127528 - 0x127540
void sub_00127528_0x127528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127528_0x127528");
#endif

    switch (ctx->pc) {
        case 0x127538u: goto label_127538;
        default: break;
    }

    ctx->pc = 0x127528u;

    // 0x127528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x127528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12752c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12752cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x127530: 0xc04a2b8  jal         func_128AE0
    ctx->pc = 0x127530u;
    SET_GPR_U32(ctx, 31, 0x127538u);
    ctx->pc = 0x127534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127530u;
    // 0x127534: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128AE0u, 0x127530u, 0x127538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127538u;
label_127538:
    // 0x127538: 0xc040076  jal         func_1001D8
    ctx->pc = 0x127538u;
    SET_GPR_U32(ctx, 31, 0x127540u);
    ctx->pc = 0x12753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127538u;
    // 0x12753c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1001D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1001D8u, 0x127538u, 0x127540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127540u;
}
