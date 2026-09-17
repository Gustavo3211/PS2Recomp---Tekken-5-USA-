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

// Function: sub_0029EFF8
// Address: 0x29eff8 - 0x29f048
void sub_0029EFF8_0x29eff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EFF8_0x29eff8");
#endif

    switch (ctx->pc) {
        case 0x29f00cu: goto label_29f00c;
        case 0x29f014u: goto label_29f014;
        case 0x29f01cu: goto label_29f01c;
        case 0x29f024u: goto label_29f024;
        case 0x29f02cu: goto label_29f02c;
        case 0x29f034u: goto label_29f034;
        default: break;
    }

    ctx->pc = 0x29eff8u;

    // 0x29eff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29eff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29effc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29effcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29f000: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29f000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29f004: 0xc0a7c4e  jal         func_29F138
    ctx->pc = 0x29F004u;
    SET_GPR_U32(ctx, 31, 0x29F00Cu);
    ctx->pc = 0x29F008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F004u;
    // 0x29f008: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F138u, 0x29F004u, 0x29F00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F00Cu;
label_29f00c:
    // 0x29f00c: 0xc0a7fdc  jal         func_29FF70
    ctx->pc = 0x29F00Cu;
    SET_GPR_U32(ctx, 31, 0x29F014u);
    ctx->pc = 0x29F010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F00Cu;
    // 0x29f010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FF70u, 0x29F00Cu, 0x29F014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F014u;
label_29f014:
    // 0x29f014: 0xc0a8338  jal         func_2A0CE0
    ctx->pc = 0x29F014u;
    SET_GPR_U32(ctx, 31, 0x29F01Cu);
    ctx->pc = 0x29F018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F014u;
    // 0x29f018: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0CE0u, 0x29F014u, 0x29F01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F01Cu;
label_29f01c:
    // 0x29f01c: 0xc0a8118  jal         func_2A0460
    ctx->pc = 0x29F01Cu;
    SET_GPR_U32(ctx, 31, 0x29F024u);
    ctx->pc = 0x29F020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F01Cu;
    // 0x29f020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0460u, 0x29F01Cu, 0x29F024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F024u;
label_29f024:
    // 0x29f024: 0xc0a7e44  jal         func_29F910
    ctx->pc = 0x29F024u;
    SET_GPR_U32(ctx, 31, 0x29F02Cu);
    ctx->pc = 0x29F028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F024u;
    // 0x29f028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F910u, 0x29F024u, 0x29F02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F02Cu;
label_29f02c:
    // 0x29f02c: 0xc0a882e  jal         func_2A20B8
    ctx->pc = 0x29F02Cu;
    SET_GPR_U32(ctx, 31, 0x29F034u);
    ctx->pc = 0x29F030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F02Cu;
    // 0x29f030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A20B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A20B8u, 0x29F02Cu, 0x29F034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F034u;
label_29f034:
    // 0x29f034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29f034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f038: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29f038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29f03c: 0x3e00008  jr          $ra
    ctx->pc = 0x29F03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F03Cu;
        // 0x29f040: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F044u;
    // 0x29f044: 0x0  nop
    ctx->pc = 0x29f044u;
    // NOP
    ctx->pc = 0x29f048u;
}
