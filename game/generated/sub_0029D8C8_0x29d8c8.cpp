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

// Function: sub_0029D8C8
// Address: 0x29d8c8 - 0x29d910
void sub_0029D8C8_0x29d8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D8C8_0x29d8c8");
#endif

    switch (ctx->pc) {
        case 0x29d8dcu: goto label_29d8dc;
        case 0x29d8e4u: goto label_29d8e4;
        case 0x29d8ecu: goto label_29d8ec;
        case 0x29d8f4u: goto label_29d8f4;
        case 0x29d8fcu: goto label_29d8fc;
        default: break;
    }

    ctx->pc = 0x29d8c8u;

    // 0x29d8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29d8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29d8cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29d8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29d8d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29d8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29d8d4: 0xc0a7644  jal         func_29D910
    ctx->pc = 0x29D8D4u;
    SET_GPR_U32(ctx, 31, 0x29D8DCu);
    ctx->pc = 0x29D8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D8D4u;
    // 0x29d8d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D910u, 0x29D8D4u, 0x29D8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D8DCu;
label_29d8dc:
    // 0x29d8dc: 0xc0a7694  jal         func_29DA50
    ctx->pc = 0x29D8DCu;
    SET_GPR_U32(ctx, 31, 0x29D8E4u);
    ctx->pc = 0x29D8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D8DCu;
    // 0x29d8e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DA50u, 0x29D8DCu, 0x29D8E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D8E4u;
label_29d8e4:
    // 0x29d8e4: 0xc0a76e0  jal         func_29DB80
    ctx->pc = 0x29D8E4u;
    SET_GPR_U32(ctx, 31, 0x29D8ECu);
    ctx->pc = 0x29D8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D8E4u;
    // 0x29d8e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DB80u, 0x29D8E4u, 0x29D8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D8ECu;
label_29d8ec:
    // 0x29d8ec: 0xc0a7720  jal         func_29DC80
    ctx->pc = 0x29D8ECu;
    SET_GPR_U32(ctx, 31, 0x29D8F4u);
    ctx->pc = 0x29D8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D8ECu;
    // 0x29d8f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DC80u, 0x29D8ECu, 0x29D8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D8F4u;
label_29d8f4:
    // 0x29d8f4: 0xc0a7744  jal         func_29DD10
    ctx->pc = 0x29D8F4u;
    SET_GPR_U32(ctx, 31, 0x29D8FCu);
    ctx->pc = 0x29D8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D8F4u;
    // 0x29d8f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DD10u, 0x29D8F4u, 0x29D8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D8FCu;
label_29d8fc:
    // 0x29d8fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29d8fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d900: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29d900u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29d904: 0x3e00008  jr          $ra
    ctx->pc = 0x29D904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D904u;
        // 0x29d908: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D904u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D90Cu;
    // 0x29d90c: 0x0  nop
    ctx->pc = 0x29d90cu;
    // NOP
    ctx->pc = 0x29d910u;
}
