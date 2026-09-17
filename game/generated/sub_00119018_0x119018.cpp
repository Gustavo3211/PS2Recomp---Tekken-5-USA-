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

// Function: sub_00119018
// Address: 0x119018 - 0x119060
void sub_00119018_0x119018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119018_0x119018");
#endif

    switch (ctx->pc) {
        case 0x119030u: goto label_119030;
        case 0x119038u: goto label_119038;
        default: break;
    }

    ctx->pc = 0x119018u;

    // 0x119018: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x119018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11901c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11901cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119020: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119024: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x119024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x119028: 0xc0463a2  jal         func_118E88
    ctx->pc = 0x119028u;
    SET_GPR_U32(ctx, 31, 0x119030u);
    ctx->pc = 0x11902Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119028u;
    // 0x11902c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118E88u, 0x119028u, 0x119030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119030u;
label_119030:
    // 0x119030: 0xc0463e8  jal         func_118FA0
    ctx->pc = 0x119030u;
    SET_GPR_U32(ctx, 31, 0x119038u);
    ctx->pc = 0x119034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119030u;
    // 0x119034: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118FA0u, 0x119030u, 0x119038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119038u;
label_119038:
    // 0x119038: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x119038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x11903c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11903cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119040: 0x8c4624e8  lw          $a2, 0x24E8($v0)
    ctx->pc = 0x119040u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x1324E8u));
    // 0x119044: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x119044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119048: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x119048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11904c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11904cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119050: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x119050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x119054: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119058: 0x8043bf8  j           func_10EFE0
    ctx->pc = 0x119058u;
    ctx->pc = 0x11905Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119058u;
    // 0x11905c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EFE0u, 0x119058u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x119060u;
}
