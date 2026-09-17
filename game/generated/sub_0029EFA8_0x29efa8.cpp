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

// Function: sub_0029EFA8
// Address: 0x29efa8 - 0x29eff8
void sub_0029EFA8_0x29efa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EFA8_0x29efa8");
#endif

    switch (ctx->pc) {
        case 0x29efbcu: goto label_29efbc;
        case 0x29efc4u: goto label_29efc4;
        case 0x29efccu: goto label_29efcc;
        case 0x29efd4u: goto label_29efd4;
        case 0x29efdcu: goto label_29efdc;
        case 0x29efe4u: goto label_29efe4;
        default: break;
    }

    ctx->pc = 0x29efa8u;

    // 0x29efa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29efa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29efac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29efacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29efb0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29efb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29efb4: 0xc0a7d00  jal         func_29F400
    ctx->pc = 0x29EFB4u;
    SET_GPR_U32(ctx, 31, 0x29EFBCu);
    ctx->pc = 0x29EFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EFB4u;
    // 0x29efb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F400u, 0x29EFB4u, 0x29EFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EFBCu;
label_29efbc:
    // 0x29efbc: 0xc0a83b8  jal         func_2A0EE0
    ctx->pc = 0x29EFBCu;
    SET_GPR_U32(ctx, 31, 0x29EFC4u);
    ctx->pc = 0x29EFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EFBCu;
    // 0x29efc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0EE0u, 0x29EFBCu, 0x29EFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EFC4u;
label_29efc4:
    // 0x29efc4: 0xc0a8672  jal         func_2A19C8
    ctx->pc = 0x29EFC4u;
    SET_GPR_U32(ctx, 31, 0x29EFCCu);
    ctx->pc = 0x29EFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EFC4u;
    // 0x29efc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A19C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A19C8u, 0x29EFC4u, 0x29EFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EFCCu;
label_29efcc:
    // 0x29efcc: 0xc0a84b4  jal         func_2A12D0
    ctx->pc = 0x29EFCCu;
    SET_GPR_U32(ctx, 31, 0x29EFD4u);
    ctx->pc = 0x29EFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EFCCu;
    // 0x29efd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A12D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A12D0u, 0x29EFCCu, 0x29EFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EFD4u;
label_29efd4:
    // 0x29efd4: 0xc0a7ea8  jal         func_29FAA0
    ctx->pc = 0x29EFD4u;
    SET_GPR_U32(ctx, 31, 0x29EFDCu);
    ctx->pc = 0x29EFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EFD4u;
    // 0x29efd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAA0u, 0x29EFD4u, 0x29EFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EFDCu;
label_29efdc:
    // 0x29efdc: 0xc0a88f8  jal         func_2A23E0
    ctx->pc = 0x29EFDCu;
    SET_GPR_U32(ctx, 31, 0x29EFE4u);
    ctx->pc = 0x29EFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EFDCu;
    // 0x29efe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A23E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A23E0u, 0x29EFDCu, 0x29EFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EFE4u;
label_29efe4:
    // 0x29efe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29efe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29efe8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29efe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29efec: 0x3e00008  jr          $ra
    ctx->pc = 0x29EFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EFECu;
        // 0x29eff0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EFF4u;
    // 0x29eff4: 0x0  nop
    ctx->pc = 0x29eff4u;
    // NOP
    ctx->pc = 0x29eff8u;
}
