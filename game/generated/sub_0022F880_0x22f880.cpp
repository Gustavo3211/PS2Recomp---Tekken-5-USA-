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

// Function: sub_0022F880
// Address: 0x22f880 - 0x22f8d0
void sub_0022F880_0x22f880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F880_0x22f880");
#endif

    switch (ctx->pc) {
        case 0x22f8a0u: goto label_22f8a0;
        case 0x22f8a8u: goto label_22f8a8;
        case 0x22f8b0u: goto label_22f8b0;
        default: break;
    }

    ctx->pc = 0x22f880u;

    // 0x22f880: 0x8f82a538  lw          $v0, -0x5AC8($gp)
    ctx->pc = 0x22f880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944056)));
    // 0x22f884: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22f884u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22f888: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22f888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22f88c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x22F88Cu;
    {
        const bool branch_taken_0x22f88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F88Cu;
        // 0x22f890: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f88c) {
            ctx->pc = 0x22F8BCu;
            goto label_22f8bc;
        }
    }
    ctx->pc = 0x22F894u;
    // 0x22f894: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22f894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f89c: 0x0  nop
    ctx->pc = 0x22f89cu;
    // NOP
label_22f8a0:
    // 0x22f8a0: 0xc08be1a  jal         func_22F868
    ctx->pc = 0x22F8A0u;
    SET_GPR_U32(ctx, 31, 0x22F8A8u);
    ctx->pc = 0x22F8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F8A0u;
    // 0x22f8a4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F868u, 0x22F8A0u, 0x22F8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F8A8u;
label_22f8a8:
    // 0x22f8a8: 0xc08be00  jal         func_22F800
    ctx->pc = 0x22F8A8u;
    SET_GPR_U32(ctx, 31, 0x22F8B0u);
    ctx->pc = 0x22F8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F8A8u;
    // 0x22f8ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F800u, 0x22F8A8u, 0x22F8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F8B0u;
label_22f8b0:
    // 0x22f8b0: 0x2e020366  sltiu       $v0, $s0, 0x366
    ctx->pc = 0x22f8b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)870) ? 1 : 0);
    // 0x22f8b4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22F8B4u;
    {
        const bool branch_taken_0x22f8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f8b4) {
            ctx->pc = 0x22F8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F8B4u;
            // 0x22f8b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F8A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22f8a0;
        }
    }
    ctx->pc = 0x22F8BCu;
label_22f8bc:
    // 0x22f8bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22f8bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22f8c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22f8c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22f8c4: 0x3e00008  jr          $ra
    ctx->pc = 0x22F8C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F8C4u;
        // 0x22f8c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F8C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F8CCu;
    // 0x22f8cc: 0x0  nop
    ctx->pc = 0x22f8ccu;
    // NOP
    ctx->pc = 0x22f8d0u;
}
