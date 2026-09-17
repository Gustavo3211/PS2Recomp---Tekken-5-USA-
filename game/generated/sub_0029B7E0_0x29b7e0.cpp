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

// Function: sub_0029B7E0
// Address: 0x29b7e0 - 0x29b848
void sub_0029B7E0_0x29b7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B7E0_0x29b7e0");
#endif

    switch (ctx->pc) {
        case 0x29b7f4u: goto label_29b7f4;
        case 0x29b7fcu: goto label_29b7fc;
        case 0x29b804u: goto label_29b804;
        case 0x29b80cu: goto label_29b80c;
        case 0x29b814u: goto label_29b814;
        case 0x29b81cu: goto label_29b81c;
        case 0x29b824u: goto label_29b824;
        case 0x29b82cu: goto label_29b82c;
        case 0x29b834u: goto label_29b834;
        default: break;
    }

    ctx->pc = 0x29b7e0u;

    // 0x29b7e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29b7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29b7e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29b7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29b7e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29b7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29b7ec: 0xc0a6e12  jal         func_29B848
    ctx->pc = 0x29B7ECu;
    SET_GPR_U32(ctx, 31, 0x29B7F4u);
    ctx->pc = 0x29B7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B7ECu;
    // 0x29b7f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B848u, 0x29B7ECu, 0x29B7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B7F4u;
label_29b7f4:
    // 0x29b7f4: 0xc0a6e64  jal         func_29B990
    ctx->pc = 0x29B7F4u;
    SET_GPR_U32(ctx, 31, 0x29B7FCu);
    ctx->pc = 0x29B7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B7F4u;
    // 0x29b7f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29B990u, 0x29B7F4u, 0x29B7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B7FCu;
label_29b7fc:
    // 0x29b7fc: 0xc0a6e9a  jal         func_29BA68
    ctx->pc = 0x29B7FCu;
    SET_GPR_U32(ctx, 31, 0x29B804u);
    ctx->pc = 0x29B800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B7FCu;
    // 0x29b800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29BA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29BA68u, 0x29B7FCu, 0x29B804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B804u;
label_29b804:
    // 0x29b804: 0xc0a6ede  jal         func_29BB78
    ctx->pc = 0x29B804u;
    SET_GPR_U32(ctx, 31, 0x29B80Cu);
    ctx->pc = 0x29B808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B804u;
    // 0x29b808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29BB78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29BB78u, 0x29B804u, 0x29B80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B80Cu;
label_29b80c:
    // 0x29b80c: 0xc0a6f4a  jal         func_29BD28
    ctx->pc = 0x29B80Cu;
    SET_GPR_U32(ctx, 31, 0x29B814u);
    ctx->pc = 0x29B810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B80Cu;
    // 0x29b810: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29BD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29BD28u, 0x29B80Cu, 0x29B814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B814u;
label_29b814:
    // 0x29b814: 0xc0a6f72  jal         func_29BDC8
    ctx->pc = 0x29B814u;
    SET_GPR_U32(ctx, 31, 0x29B81Cu);
    ctx->pc = 0x29B818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B814u;
    // 0x29b818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29BDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29BDC8u, 0x29B814u, 0x29B81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B81Cu;
label_29b81c:
    // 0x29b81c: 0xc0a6f9a  jal         func_29BE68
    ctx->pc = 0x29B81Cu;
    SET_GPR_U32(ctx, 31, 0x29B824u);
    ctx->pc = 0x29B820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B81Cu;
    // 0x29b820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29BE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29BE68u, 0x29B81Cu, 0x29B824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B824u;
label_29b824:
    // 0x29b824: 0xc0a7016  jal         func_29C058
    ctx->pc = 0x29B824u;
    SET_GPR_U32(ctx, 31, 0x29B82Cu);
    ctx->pc = 0x29B828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B824u;
    // 0x29b828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C058u, 0x29B824u, 0x29B82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B82Cu;
label_29b82c:
    // 0x29b82c: 0xc0a7060  jal         func_29C180
    ctx->pc = 0x29B82Cu;
    SET_GPR_U32(ctx, 31, 0x29B834u);
    ctx->pc = 0x29B830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B82Cu;
    // 0x29b830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C180u, 0x29B82Cu, 0x29B834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B834u;
label_29b834:
    // 0x29b834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b838: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29b838u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29b83c: 0x3e00008  jr          $ra
    ctx->pc = 0x29B83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B83Cu;
        // 0x29b840: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B83Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B844u;
    // 0x29b844: 0x0  nop
    ctx->pc = 0x29b844u;
    // NOP
    ctx->pc = 0x29b848u;
}
