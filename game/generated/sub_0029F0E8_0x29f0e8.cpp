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

// Function: sub_0029F0E8
// Address: 0x29f0e8 - 0x29f138
void sub_0029F0E8_0x29f0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F0E8_0x29f0e8");
#endif

    switch (ctx->pc) {
        case 0x29f0fcu: goto label_29f0fc;
        case 0x29f104u: goto label_29f104;
        case 0x29f10cu: goto label_29f10c;
        case 0x29f114u: goto label_29f114;
        case 0x29f11cu: goto label_29f11c;
        case 0x29f124u: goto label_29f124;
        default: break;
    }

    ctx->pc = 0x29f0e8u;

    // 0x29f0e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29f0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29f0ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29f0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29f0f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29f0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29f0f4: 0xc0a7d00  jal         func_29F400
    ctx->pc = 0x29F0F4u;
    SET_GPR_U32(ctx, 31, 0x29F0FCu);
    ctx->pc = 0x29F0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F0F4u;
    // 0x29f0f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F400u, 0x29F0F4u, 0x29F0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F0FCu;
label_29f0fc:
    // 0x29f0fc: 0xc0a7ff0  jal         func_29FFC0
    ctx->pc = 0x29F0FCu;
    SET_GPR_U32(ctx, 31, 0x29F104u);
    ctx->pc = 0x29F100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F0FCu;
    // 0x29f100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FFC0u, 0x29F0FCu, 0x29F104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F104u;
label_29f104:
    // 0x29f104: 0xc0a83b8  jal         func_2A0EE0
    ctx->pc = 0x29F104u;
    SET_GPR_U32(ctx, 31, 0x29F10Cu);
    ctx->pc = 0x29F108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F104u;
    // 0x29f108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0EE0u, 0x29F104u, 0x29F10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F10Cu;
label_29f10c:
    // 0x29f10c: 0xc0a818c  jal         func_2A0630
    ctx->pc = 0x29F10Cu;
    SET_GPR_U32(ctx, 31, 0x29F114u);
    ctx->pc = 0x29F110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F10Cu;
    // 0x29f110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0630u, 0x29F10Cu, 0x29F114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F114u;
label_29f114:
    // 0x29f114: 0xc0a7ea8  jal         func_29FAA0
    ctx->pc = 0x29F114u;
    SET_GPR_U32(ctx, 31, 0x29F11Cu);
    ctx->pc = 0x29F118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F114u;
    // 0x29f118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAA0u, 0x29F114u, 0x29F11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F11Cu;
label_29f11c:
    // 0x29f11c: 0xc0a8898  jal         func_2A2260
    ctx->pc = 0x29F11Cu;
    SET_GPR_U32(ctx, 31, 0x29F124u);
    ctx->pc = 0x29F120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F11Cu;
    // 0x29f120: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2260u, 0x29F11Cu, 0x29F124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F124u;
label_29f124:
    // 0x29f124: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29f124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f128: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29f128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29f12c: 0x3e00008  jr          $ra
    ctx->pc = 0x29F12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F12Cu;
        // 0x29f130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F134u;
    // 0x29f134: 0x0  nop
    ctx->pc = 0x29f134u;
    // NOP
    ctx->pc = 0x29f138u;
}
