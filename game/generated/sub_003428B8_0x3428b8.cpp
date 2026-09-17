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

// Function: sub_003428B8
// Address: 0x3428b8 - 0x342908
void sub_003428B8_0x3428b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003428B8_0x3428b8");
#endif

    switch (ctx->pc) {
        case 0x3428ccu: goto label_3428cc;
        case 0x3428d4u: goto label_3428d4;
        case 0x3428dcu: goto label_3428dc;
        case 0x3428e4u: goto label_3428e4;
        case 0x3428ecu: goto label_3428ec;
        case 0x3428f4u: goto label_3428f4;
        default: break;
    }

    ctx->pc = 0x3428b8u;

    // 0x3428b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3428b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3428bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3428bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3428c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3428c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3428c4: 0xc0d093e  jal         func_3424F8
    ctx->pc = 0x3428C4u;
    SET_GPR_U32(ctx, 31, 0x3428CCu);
    ctx->pc = 0x3428C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3428C4u;
    // 0x3428c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3424F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3424F8u, 0x3428C4u, 0x3428CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3428CCu;
label_3428cc:
    // 0x3428cc: 0xc0d076a  jal         func_341DA8
    ctx->pc = 0x3428CCu;
    SET_GPR_U32(ctx, 31, 0x3428D4u);
    ctx->pc = 0x3428D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3428CCu;
    // 0x3428d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DA8u, 0x3428CCu, 0x3428D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3428D4u;
label_3428d4:
    // 0x3428d4: 0xc0d0778  jal         func_341DE0
    ctx->pc = 0x3428D4u;
    SET_GPR_U32(ctx, 31, 0x3428DCu);
    ctx->pc = 0x3428D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3428D4u;
    // 0x3428d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DE0u, 0x3428D4u, 0x3428DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3428DCu;
label_3428dc:
    // 0x3428dc: 0xc0d0958  jal         func_342560
    ctx->pc = 0x3428DCu;
    SET_GPR_U32(ctx, 31, 0x3428E4u);
    ctx->pc = 0x3428E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3428DCu;
    // 0x3428e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342560u, 0x3428DCu, 0x3428E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3428E4u;
label_3428e4:
    // 0x3428e4: 0xc0d0964  jal         func_342590
    ctx->pc = 0x3428E4u;
    SET_GPR_U32(ctx, 31, 0x3428ECu);
    ctx->pc = 0x3428E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3428E4u;
    // 0x3428e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342590u, 0x3428E4u, 0x3428ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3428ECu;
label_3428ec:
    // 0x3428ec: 0xc0d09ca  jal         func_342728
    ctx->pc = 0x3428ECu;
    SET_GPR_U32(ctx, 31, 0x3428F4u);
    ctx->pc = 0x3428F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3428ECu;
    // 0x3428f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342728u, 0x3428ECu, 0x3428F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3428F4u;
label_3428f4:
    // 0x3428f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3428f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3428f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3428f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3428fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3428FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3428FCu;
        // 0x342900: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3428FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342904u;
    // 0x342904: 0x0  nop
    ctx->pc = 0x342904u;
    // NOP
    ctx->pc = 0x342908u;
}
