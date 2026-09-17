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

// Function: sub_0050A7E0
// Address: 0x50a7e0 - 0x50a810
void sub_0050A7E0_0x50a7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050A7E0_0x50a7e0");
#endif

    switch (ctx->pc) {
        case 0x50a7f0u: goto label_50a7f0;
        case 0x50a7f8u: goto label_50a7f8;
        case 0x50a800u: goto label_50a800;
        default: break;
    }

    ctx->pc = 0x50a7e0u;

    // 0x50a7e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50a7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50a7e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50a7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50a7e8: 0xc144432  jal         func_5110C8
    ctx->pc = 0x50A7E8u;
    SET_GPR_U32(ctx, 31, 0x50A7F0u);
    ctx->pc = 0x50A7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A7E8u;
    // 0x50a7ec: 0x3c040010  lui         $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5110C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5110C8u, 0x50A7E8u, 0x50A7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50A7F0u;
label_50a7f0:
    // 0x50a7f0: 0xc144432  jal         func_5110C8
    ctx->pc = 0x50A7F0u;
    SET_GPR_U32(ctx, 31, 0x50A7F8u);
    ctx->pc = 0x50A7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A7F0u;
    // 0x50a7f4: 0x3c040019  lui         $a0, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)25 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5110C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5110C8u, 0x50A7F0u, 0x50A7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50A7F8u;
label_50a7f8:
    // 0x50a7f8: 0xc143512  jal         func_50D448
    ctx->pc = 0x50A7F8u;
    SET_GPR_U32(ctx, 31, 0x50A800u);
    ctx->pc = 0x50A7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A7F8u;
    // 0x50a7fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50D448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x50D448u, 0x50A7F8u, 0x50A800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50A800u;
label_50a800:
    // 0x50a800: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x50a800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x50a804: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50a804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50a808: 0x8143512  j           func_50D448
    ctx->pc = 0x50A808u;
    ctx->pc = 0x50A80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A808u;
    // 0x50a80c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x50D448u;
    sub_0050D448_0x50d448(rdram, ctx, runtime); return;
    ctx->pc = 0x50A810u;
}
