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

// Function: sub_0029F048
// Address: 0x29f048 - 0x29f098
void sub_0029F048_0x29f048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F048_0x29f048");
#endif

    switch (ctx->pc) {
        case 0x29f05cu: goto label_29f05c;
        case 0x29f064u: goto label_29f064;
        case 0x29f06cu: goto label_29f06c;
        case 0x29f074u: goto label_29f074;
        case 0x29f07cu: goto label_29f07c;
        case 0x29f084u: goto label_29f084;
        default: break;
    }

    ctx->pc = 0x29f048u;

    // 0x29f048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29f048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29f04c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29f04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29f050: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29f050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29f054: 0xc0a7d00  jal         func_29F400
    ctx->pc = 0x29F054u;
    SET_GPR_U32(ctx, 31, 0x29F05Cu);
    ctx->pc = 0x29F058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F054u;
    // 0x29f058: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F400u, 0x29F054u, 0x29F05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F05Cu;
label_29f05c:
    // 0x29f05c: 0xc0a7ff0  jal         func_29FFC0
    ctx->pc = 0x29F05Cu;
    SET_GPR_U32(ctx, 31, 0x29F064u);
    ctx->pc = 0x29F060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F05Cu;
    // 0x29f060: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FFC0u, 0x29F05Cu, 0x29F064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F064u;
label_29f064:
    // 0x29f064: 0xc0a83b8  jal         func_2A0EE0
    ctx->pc = 0x29F064u;
    SET_GPR_U32(ctx, 31, 0x29F06Cu);
    ctx->pc = 0x29F068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F064u;
    // 0x29f068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0EE0u, 0x29F064u, 0x29F06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F06Cu;
label_29f06c:
    // 0x29f06c: 0xc0a818c  jal         func_2A0630
    ctx->pc = 0x29F06Cu;
    SET_GPR_U32(ctx, 31, 0x29F074u);
    ctx->pc = 0x29F070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F06Cu;
    // 0x29f070: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0630u, 0x29F06Cu, 0x29F074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F074u;
label_29f074:
    // 0x29f074: 0xc0a7ea8  jal         func_29FAA0
    ctx->pc = 0x29F074u;
    SET_GPR_U32(ctx, 31, 0x29F07Cu);
    ctx->pc = 0x29F078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F074u;
    // 0x29f078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAA0u, 0x29F074u, 0x29F07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F07Cu;
label_29f07c:
    // 0x29f07c: 0xc0a8898  jal         func_2A2260
    ctx->pc = 0x29F07Cu;
    SET_GPR_U32(ctx, 31, 0x29F084u);
    ctx->pc = 0x29F080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F07Cu;
    // 0x29f080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2260u, 0x29F07Cu, 0x29F084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F084u;
label_29f084:
    // 0x29f084: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29f084u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f088: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29f088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29f08c: 0x3e00008  jr          $ra
    ctx->pc = 0x29F08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F08Cu;
        // 0x29f090: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F094u;
    // 0x29f094: 0x0  nop
    ctx->pc = 0x29f094u;
    // NOP
    ctx->pc = 0x29f098u;
}
