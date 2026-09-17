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

// Function: sub_00330324
// Address: 0x330324 - 0x330364
void sub_00330324_0x330324(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330324_0x330324");
#endif

    switch (ctx->pc) {
        case 0x330334u: goto label_330334;
        case 0x330344u: goto label_330344;
        case 0x330354u: goto label_330354;
        default: break;
    }

    ctx->pc = 0x330324u;

    // 0x330324: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x330324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x330328: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x330328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x33032c: 0xc0cc198  jal         func_330660
    ctx->pc = 0x33032Cu;
    SET_GPR_U32(ctx, 31, 0x330334u);
    ctx->pc = 0x330330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33032Cu;
    // 0x330330: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330660u, 0x33032Cu, 0x330334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330334u;
label_330334:
    // 0x330334: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x330334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330338: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x330338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33033c: 0xc0cc170  jal         func_3305C0
    ctx->pc = 0x33033Cu;
    SET_GPR_U32(ctx, 31, 0x330344u);
    ctx->pc = 0x330340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33033Cu;
    // 0x330340: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3305C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3305C0u, 0x33033Cu, 0x330344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330344u;
label_330344:
    // 0x330344: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x330344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330348: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x330348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33034c: 0xc0cc1ac  jal         func_3306B0
    ctx->pc = 0x33034Cu;
    SET_GPR_U32(ctx, 31, 0x330354u);
    ctx->pc = 0x330350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33034Cu;
    // 0x330350: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3306B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3306B0u, 0x33034Cu, 0x330354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330354u;
label_330354:
    // 0x330354: 0x26101180  addiu       $s0, $s0, 0x1180
    ctx->pc = 0x330354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4480));
    // 0x330358: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x330358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33035c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33035cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330360: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x330360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x330364u;
}
