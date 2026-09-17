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

// Function: sub_00342110
// Address: 0x342110 - 0x342168
void sub_00342110_0x342110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342110_0x342110");
#endif

    switch (ctx->pc) {
        case 0x342124u: goto label_342124;
        case 0x34212cu: goto label_34212c;
        case 0x342134u: goto label_342134;
        case 0x34213cu: goto label_34213c;
        case 0x342144u: goto label_342144;
        case 0x34214cu: goto label_34214c;
        case 0x342154u: goto label_342154;
        default: break;
    }

    ctx->pc = 0x342110u;

    // 0x342110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342114: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x342114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x342118: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x342118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34211c: 0xc0d080a  jal         func_342028
    ctx->pc = 0x34211Cu;
    SET_GPR_U32(ctx, 31, 0x342124u);
    ctx->pc = 0x342120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34211Cu;
    // 0x342120: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342028u, 0x34211Cu, 0x342124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342124u;
label_342124:
    // 0x342124: 0xc0d076a  jal         func_341DA8
    ctx->pc = 0x342124u;
    SET_GPR_U32(ctx, 31, 0x34212Cu);
    ctx->pc = 0x342128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342124u;
    // 0x342128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DA8u, 0x342124u, 0x34212Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34212Cu;
label_34212c:
    // 0x34212c: 0xc0d0778  jal         func_341DE0
    ctx->pc = 0x34212Cu;
    SET_GPR_U32(ctx, 31, 0x342134u);
    ctx->pc = 0x342130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34212Cu;
    // 0x342130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DE0u, 0x34212Cu, 0x342134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342134u;
label_342134:
    // 0x342134: 0xc0d0792  jal         func_341E48
    ctx->pc = 0x342134u;
    SET_GPR_U32(ctx, 31, 0x34213Cu);
    ctx->pc = 0x342138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342134u;
    // 0x342138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341E48u, 0x342134u, 0x34213Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34213Cu;
label_34213c:
    // 0x34213c: 0xc0d0818  jal         func_342060
    ctx->pc = 0x34213Cu;
    SET_GPR_U32(ctx, 31, 0x342144u);
    ctx->pc = 0x342140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34213Cu;
    // 0x342140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342060u, 0x34213Cu, 0x342144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342144u;
label_342144:
    // 0x342144: 0xc0d0824  jal         func_342090
    ctx->pc = 0x342144u;
    SET_GPR_U32(ctx, 31, 0x34214Cu);
    ctx->pc = 0x342148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342144u;
    // 0x342148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342090u, 0x342144u, 0x34214Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34214Cu;
label_34214c:
    // 0x34214c: 0xc0d07b6  jal         func_341ED8
    ctx->pc = 0x34214Cu;
    SET_GPR_U32(ctx, 31, 0x342154u);
    ctx->pc = 0x342150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34214Cu;
    // 0x342150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341ED8u, 0x34214Cu, 0x342154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342154u;
label_342154:
    // 0x342154: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x342154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342158: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x342158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34215c: 0x3e00008  jr          $ra
    ctx->pc = 0x34215Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34215Cu;
        // 0x342160: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34215Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342164u;
    // 0x342164: 0x0  nop
    ctx->pc = 0x342164u;
    // NOP
    ctx->pc = 0x342168u;
}
