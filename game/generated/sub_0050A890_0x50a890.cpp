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

// Function: sub_0050A890
// Address: 0x50a890 - 0x50a8b8
void sub_0050A890_0x50a890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050A890_0x50a890");
#endif

    switch (ctx->pc) {
        case 0x50a8a0u: goto label_50a8a0;
        default: break;
    }

    ctx->pc = 0x50a890u;

    // 0x50a890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50a890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50a894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50a894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50a898: 0xc1427fa  jal         func_509FE8
    ctx->pc = 0x50A898u;
    SET_GPR_U32(ctx, 31, 0x50A8A0u);
    ctx->pc = 0x50A89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A898u;
    // 0x50a89c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x509FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x509FE8u, 0x50A898u, 0x50A8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50A8A0u;
label_50a8a0:
    // 0x50a8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50a8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50a8a4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x50a8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x50a8a8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x50a8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x50a8ac: 0x8144c5a  j           func_513168
    ctx->pc = 0x50A8ACu;
    ctx->pc = 0x50A8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A8ACu;
    // 0x50a8b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x513168u;
    sub_00513168_0x513168(rdram, ctx, runtime); return;
    ctx->pc = 0x50A8B4u;
    // 0x50a8b4: 0x0  nop
    ctx->pc = 0x50a8b4u;
    // NOP
    ctx->pc = 0x50a8b8u;
}
