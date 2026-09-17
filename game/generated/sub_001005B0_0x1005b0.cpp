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

// Function: sub_001005B0
// Address: 0x1005b0 - 0x1005e8
void sub_001005B0_0x1005b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001005B0_0x1005b0");
#endif

    switch (ctx->pc) {
        case 0x1005c0u: goto label_1005c0;
        case 0x1005d0u: goto label_1005d0;
        case 0x1005d8u: goto label_1005d8;
        default: break;
    }

    ctx->pc = 0x1005b0u;

    // 0x1005b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1005b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1005b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1005b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1005b8: 0xc0400fc  jal         func_1003F0
    ctx->pc = 0x1005B8u;
    SET_GPR_U32(ctx, 31, 0x1005C0u);
    ctx->pc = 0x1005BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1005B8u;
    // 0x1005bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1003F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1003F0u, 0x1005B8u, 0x1005C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1005C0u;
label_1005c0:
    // 0x1005c0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1005c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1005c4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1005c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1005c8: 0xc089280  jal         func_224A00
    ctx->pc = 0x1005C8u;
    SET_GPR_U32(ctx, 31, 0x1005D0u);
    ctx->pc = 0x1005CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1005C8u;
    // 0x1005cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224A00u, 0x1005C8u, 0x1005D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1005D0u;
label_1005d0:
    // 0x1005d0: 0xc08922a  jal         func_2248A8
    ctx->pc = 0x1005D0u;
    SET_GPR_U32(ctx, 31, 0x1005D8u);
    ctx->pc = 0x1005D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1005D0u;
    // 0x1005d4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2248A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2248A8u, 0x1005D0u, 0x1005D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1005D8u;
label_1005d8:
    // 0x1005d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1005d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1005dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1005DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1005E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1005DCu;
        // 0x1005e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1005DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1005E4u;
    // 0x1005e4: 0x0  nop
    ctx->pc = 0x1005e4u;
    // NOP
    ctx->pc = 0x1005e8u;
}
