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

// Function: sub_0029F098
// Address: 0x29f098 - 0x29f0e8
void sub_0029F098_0x29f098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F098_0x29f098");
#endif

    switch (ctx->pc) {
        case 0x29f0acu: goto label_29f0ac;
        case 0x29f0b4u: goto label_29f0b4;
        case 0x29f0bcu: goto label_29f0bc;
        case 0x29f0c4u: goto label_29f0c4;
        case 0x29f0ccu: goto label_29f0cc;
        case 0x29f0d4u: goto label_29f0d4;
        default: break;
    }

    ctx->pc = 0x29f098u;

    // 0x29f098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29f098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29f09c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29f09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29f0a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29f0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29f0a4: 0xc0a7c4e  jal         func_29F138
    ctx->pc = 0x29F0A4u;
    SET_GPR_U32(ctx, 31, 0x29F0ACu);
    ctx->pc = 0x29F0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F0A4u;
    // 0x29f0a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F138u, 0x29F0A4u, 0x29F0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F0ACu;
label_29f0ac:
    // 0x29f0ac: 0xc0a7fdc  jal         func_29FF70
    ctx->pc = 0x29F0ACu;
    SET_GPR_U32(ctx, 31, 0x29F0B4u);
    ctx->pc = 0x29F0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F0ACu;
    // 0x29f0b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FF70u, 0x29F0ACu, 0x29F0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F0B4u;
label_29f0b4:
    // 0x29f0b4: 0xc0a8338  jal         func_2A0CE0
    ctx->pc = 0x29F0B4u;
    SET_GPR_U32(ctx, 31, 0x29F0BCu);
    ctx->pc = 0x29F0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F0B4u;
    // 0x29f0b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0CE0u, 0x29F0B4u, 0x29F0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F0BCu;
label_29f0bc:
    // 0x29f0bc: 0xc0a8118  jal         func_2A0460
    ctx->pc = 0x29F0BCu;
    SET_GPR_U32(ctx, 31, 0x29F0C4u);
    ctx->pc = 0x29F0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F0BCu;
    // 0x29f0c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0460u, 0x29F0BCu, 0x29F0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F0C4u;
label_29f0c4:
    // 0x29f0c4: 0xc0a7e44  jal         func_29F910
    ctx->pc = 0x29F0C4u;
    SET_GPR_U32(ctx, 31, 0x29F0CCu);
    ctx->pc = 0x29F0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F0C4u;
    // 0x29f0c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F910u, 0x29F0C4u, 0x29F0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F0CCu;
label_29f0cc:
    // 0x29f0cc: 0xc0a882e  jal         func_2A20B8
    ctx->pc = 0x29F0CCu;
    SET_GPR_U32(ctx, 31, 0x29F0D4u);
    ctx->pc = 0x29F0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F0CCu;
    // 0x29f0d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A20B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A20B8u, 0x29F0CCu, 0x29F0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F0D4u;
label_29f0d4:
    // 0x29f0d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29f0d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f0d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29f0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29f0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x29F0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F0DCu;
        // 0x29f0e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F0E4u;
    // 0x29f0e4: 0x0  nop
    ctx->pc = 0x29f0e4u;
    // NOP
    ctx->pc = 0x29f0e8u;
}
