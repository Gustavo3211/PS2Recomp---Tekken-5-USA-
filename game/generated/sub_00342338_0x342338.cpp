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

// Function: sub_00342338
// Address: 0x342338 - 0x3423a0
void sub_00342338_0x342338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342338_0x342338");
#endif

    switch (ctx->pc) {
        case 0x34234cu: goto label_34234c;
        case 0x342354u: goto label_342354;
        case 0x34235cu: goto label_34235c;
        case 0x342364u: goto label_342364;
        case 0x34236cu: goto label_34236c;
        case 0x342374u: goto label_342374;
        case 0x34237cu: goto label_34237c;
        case 0x342384u: goto label_342384;
        case 0x34238cu: goto label_34238c;
        default: break;
    }

    ctx->pc = 0x342338u;

    // 0x342338: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34233c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34233cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x342340: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x342340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x342344: 0xc0d080a  jal         func_342028
    ctx->pc = 0x342344u;
    SET_GPR_U32(ctx, 31, 0x34234Cu);
    ctx->pc = 0x342348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342344u;
    // 0x342348: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342028u, 0x342344u, 0x34234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34234Cu;
label_34234c:
    // 0x34234c: 0xc0d076a  jal         func_341DA8
    ctx->pc = 0x34234Cu;
    SET_GPR_U32(ctx, 31, 0x342354u);
    ctx->pc = 0x342350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34234Cu;
    // 0x342350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DA8u, 0x34234Cu, 0x342354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342354u;
label_342354:
    // 0x342354: 0xc0d0778  jal         func_341DE0
    ctx->pc = 0x342354u;
    SET_GPR_U32(ctx, 31, 0x34235Cu);
    ctx->pc = 0x342358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342354u;
    // 0x342358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DE0u, 0x342354u, 0x34235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34235Cu;
label_34235c:
    // 0x34235c: 0xc0d0786  jal         func_341E18
    ctx->pc = 0x34235Cu;
    SET_GPR_U32(ctx, 31, 0x342364u);
    ctx->pc = 0x342360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34235Cu;
    // 0x342360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341E18u, 0x34235Cu, 0x342364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342364u;
label_342364:
    // 0x342364: 0xc0d0792  jal         func_341E48
    ctx->pc = 0x342364u;
    SET_GPR_U32(ctx, 31, 0x34236Cu);
    ctx->pc = 0x342368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342364u;
    // 0x342368: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341E48u, 0x342364u, 0x34236Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34236Cu;
label_34236c:
    // 0x34236c: 0xc0d0792  jal         func_341E48
    ctx->pc = 0x34236Cu;
    SET_GPR_U32(ctx, 31, 0x342374u);
    ctx->pc = 0x342370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34236Cu;
    // 0x342370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341E48u, 0x34236Cu, 0x342374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342374u;
label_342374:
    // 0x342374: 0xc0d0818  jal         func_342060
    ctx->pc = 0x342374u;
    SET_GPR_U32(ctx, 31, 0x34237Cu);
    ctx->pc = 0x342378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342374u;
    // 0x342378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342060u, 0x342374u, 0x34237Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34237Cu;
label_34237c:
    // 0x34237c: 0xc0d0824  jal         func_342090
    ctx->pc = 0x34237Cu;
    SET_GPR_U32(ctx, 31, 0x342384u);
    ctx->pc = 0x342380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34237Cu;
    // 0x342380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342090u, 0x34237Cu, 0x342384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342384u;
label_342384:
    // 0x342384: 0xc0d07b6  jal         func_341ED8
    ctx->pc = 0x342384u;
    SET_GPR_U32(ctx, 31, 0x34238Cu);
    ctx->pc = 0x342388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342384u;
    // 0x342388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341ED8u, 0x342384u, 0x34238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34238Cu;
label_34238c:
    // 0x34238c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34238cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342390: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x342390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x342394: 0x3e00008  jr          $ra
    ctx->pc = 0x342394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342394u;
        // 0x342398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34239Cu;
    // 0x34239c: 0x0  nop
    ctx->pc = 0x34239cu;
    // NOP
    ctx->pc = 0x3423a0u;
}
