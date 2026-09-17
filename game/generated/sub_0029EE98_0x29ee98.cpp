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

// Function: sub_0029EE98
// Address: 0x29ee98 - 0x29eef8
void sub_0029EE98_0x29ee98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EE98_0x29ee98");
#endif

    switch (ctx->pc) {
        case 0x29eeacu: goto label_29eeac;
        case 0x29eeb4u: goto label_29eeb4;
        case 0x29eebcu: goto label_29eebc;
        case 0x29eec4u: goto label_29eec4;
        case 0x29eeccu: goto label_29eecc;
        case 0x29eed4u: goto label_29eed4;
        case 0x29eedcu: goto label_29eedc;
        case 0x29eee4u: goto label_29eee4;
        default: break;
    }

    ctx->pc = 0x29ee98u;

    // 0x29ee98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29ee98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29ee9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29ee9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29eea0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29eea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29eea4: 0xc0a7c4e  jal         func_29F138
    ctx->pc = 0x29EEA4u;
    SET_GPR_U32(ctx, 31, 0x29EEACu);
    ctx->pc = 0x29EEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EEA4u;
    // 0x29eea8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F138u, 0x29EEA4u, 0x29EEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EEACu;
label_29eeac:
    // 0x29eeac: 0xc0a7fdc  jal         func_29FF70
    ctx->pc = 0x29EEACu;
    SET_GPR_U32(ctx, 31, 0x29EEB4u);
    ctx->pc = 0x29EEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EEACu;
    // 0x29eeb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FF70u, 0x29EEACu, 0x29EEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EEB4u;
label_29eeb4:
    // 0x29eeb4: 0xc0a8002  jal         func_2A0008
    ctx->pc = 0x29EEB4u;
    SET_GPR_U32(ctx, 31, 0x29EEBCu);
    ctx->pc = 0x29EEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EEB4u;
    // 0x29eeb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0008u, 0x29EEB4u, 0x29EEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EEBCu;
label_29eebc:
    // 0x29eebc: 0xc0a8338  jal         func_2A0CE0
    ctx->pc = 0x29EEBCu;
    SET_GPR_U32(ctx, 31, 0x29EEC4u);
    ctx->pc = 0x29EEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EEBCu;
    // 0x29eec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0CE0u, 0x29EEBCu, 0x29EEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EEC4u;
label_29eec4:
    // 0x29eec4: 0xc0a821c  jal         func_2A0870
    ctx->pc = 0x29EEC4u;
    SET_GPR_U32(ctx, 31, 0x29EECCu);
    ctx->pc = 0x29EEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EEC4u;
    // 0x29eec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0870u, 0x29EEC4u, 0x29EECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EECCu;
label_29eecc:
    // 0x29eecc: 0xc0a8118  jal         func_2A0460
    ctx->pc = 0x29EECCu;
    SET_GPR_U32(ctx, 31, 0x29EED4u);
    ctx->pc = 0x29EED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EECCu;
    // 0x29eed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0460u, 0x29EECCu, 0x29EED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EED4u;
label_29eed4:
    // 0x29eed4: 0xc0a7e44  jal         func_29F910
    ctx->pc = 0x29EED4u;
    SET_GPR_U32(ctx, 31, 0x29EEDCu);
    ctx->pc = 0x29EED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EED4u;
    // 0x29eed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F910u, 0x29EED4u, 0x29EEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EEDCu;
label_29eedc:
    // 0x29eedc: 0xc0a889a  jal         func_2A2268
    ctx->pc = 0x29EEDCu;
    SET_GPR_U32(ctx, 31, 0x29EEE4u);
    ctx->pc = 0x29EEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EEDCu;
    // 0x29eee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2268u, 0x29EEDCu, 0x29EEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EEE4u;
label_29eee4:
    // 0x29eee4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29eee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29eee8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29eee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29eeec: 0x3e00008  jr          $ra
    ctx->pc = 0x29EEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EEECu;
        // 0x29eef0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EEF4u;
    // 0x29eef4: 0x0  nop
    ctx->pc = 0x29eef4u;
    // NOP
    ctx->pc = 0x29eef8u;
}
