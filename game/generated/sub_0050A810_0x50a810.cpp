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

// Function: sub_0050A810
// Address: 0x50a810 - 0x50a848
void sub_0050A810_0x50a810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050A810_0x50a810");
#endif

    switch (ctx->pc) {
        case 0x50a820u: goto label_50a820;
        case 0x50a828u: goto label_50a828;
        case 0x50a830u: goto label_50a830;
        case 0x50a838u: goto label_50a838;
        default: break;
    }

    ctx->pc = 0x50a810u;

    // 0x50a810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50a810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50a814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50a814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50a818: 0xc144b20  jal         func_512C80
    ctx->pc = 0x50A818u;
    SET_GPR_U32(ctx, 31, 0x50A820u);
    ctx->pc = 0x50A81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A818u;
    // 0x50a81c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512C80u, 0x50A818u, 0x50A820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50A820u;
label_50a820:
    // 0x50a820: 0xc1444c6  jal         func_511318
    ctx->pc = 0x50A820u;
    SET_GPR_U32(ctx, 31, 0x50A828u);
    ctx->pc = 0x50A824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A820u;
    // 0x50a824: 0x3c040010  lui         $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x511318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x511318u, 0x50A820u, 0x50A828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50A828u;
label_50a828:
    // 0x50a828: 0xc144bba  jal         func_512EE8
    ctx->pc = 0x50A828u;
    SET_GPR_U32(ctx, 31, 0x50A830u);
    ctx->pc = 0x512EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512EE8u, 0x50A828u, 0x50A830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50A830u;
label_50a830:
    // 0x50a830: 0xc144432  jal         func_5110C8
    ctx->pc = 0x50A830u;
    SET_GPR_U32(ctx, 31, 0x50A838u);
    ctx->pc = 0x50A834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A830u;
    // 0x50a834: 0x3c040002  lui         $a0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5110C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5110C8u, 0x50A830u, 0x50A838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x50A838u;
label_50a838:
    // 0x50a838: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x50a838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50a83c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x50a83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x50a840: 0x8144aa0  j           func_512A80
    ctx->pc = 0x50A840u;
    ctx->pc = 0x50A844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50A840u;
    // 0x50a844: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x512A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x512A80u, 0x50A840u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x50A848u;
}
