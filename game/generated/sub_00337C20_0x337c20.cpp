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

// Function: sub_00337C20
// Address: 0x337c20 - 0x337c68
void sub_00337C20_0x337c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337C20_0x337c20");
#endif

    switch (ctx->pc) {
        case 0x337c38u: goto label_337c38;
        case 0x337c44u: goto label_337c44;
        default: break;
    }

    ctx->pc = 0x337c20u;

    // 0x337c20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337c24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x337c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x337c28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x337c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x337c2c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x337c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x337c30: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x337C30u;
    SET_GPR_U32(ctx, 31, 0x337C38u);
    ctx->pc = 0x337C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337C30u;
    // 0x337c34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x337C30u, 0x337C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337C38u;
label_337c38:
    // 0x337c38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x337c38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337c3c: 0xc0cdee0  jal         func_337B80
    ctx->pc = 0x337C3Cu;
    SET_GPR_U32(ctx, 31, 0x337C44u);
    ctx->pc = 0x337C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337C3Cu;
    // 0x337c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x337B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337B80u, 0x337C3Cu, 0x337C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337C44u;
label_337c44:
    // 0x337c44: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x337C44u;
    {
        const bool branch_taken_0x337c44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x337C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337C44u;
        // 0x337c48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337c44) {
            ctx->pc = 0x337C58u;
            goto label_337c58;
        }
    }
    ctx->pc = 0x337C4Cu;
    // 0x337c4c: 0xf  sync
    ctx->pc = 0x337c4cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x337c50: 0x42000038  ei
    ctx->pc = 0x337c50u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x337c54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x337c54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_337c58:
    // 0x337c58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x337c58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x337c5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x337c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337c60: 0x3e00008  jr          $ra
    ctx->pc = 0x337C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337C60u;
        // 0x337c64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337C60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337C68u;
}
