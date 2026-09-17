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

// Function: sub_00119C40
// Address: 0x119c40 - 0x119c88
void sub_00119C40_0x119c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119C40_0x119c40");
#endif

    switch (ctx->pc) {
        case 0x119c58u: goto label_119c58;
        case 0x119c60u: goto label_119c60;
        case 0x119c70u: goto label_119c70;
        default: break;
    }

    ctx->pc = 0x119c40u;

    // 0x119c40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x119c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x119c44: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x119c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x119c48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119c4c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x119c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x119c50: 0xc04626a  jal         func_1189A8
    ctx->pc = 0x119C50u;
    SET_GPR_U32(ctx, 31, 0x119C58u);
    ctx->pc = 0x1189A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189A8u, 0x119C50u, 0x119C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119C58u;
label_119c58:
    // 0x119c58: 0xc0466f4  jal         func_119BD0
    ctx->pc = 0x119C58u;
    SET_GPR_U32(ctx, 31, 0x119C60u);
    ctx->pc = 0x119C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119C58u;
    // 0x119c5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119BD0u, 0x119C58u, 0x119C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119C60u;
label_119c60:
    // 0x119c60: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119C60u;
    {
        const bool branch_taken_0x119c60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x119C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C60u;
        // 0x119c64: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119c60) {
            ctx->pc = 0x119C70u;
            goto label_119c70;
        }
    }
    ctx->pc = 0x119C68u;
    // 0x119c68: 0xc04627e  jal         func_1189F8
    ctx->pc = 0x119C68u;
    SET_GPR_U32(ctx, 31, 0x119C70u);
    ctx->pc = 0x1189F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189F8u, 0x119C68u, 0x119C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119C70u;
label_119c70:
    // 0x119c70: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x119c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119c74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x119c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x119c78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x119c78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119c7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119c7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119c80: 0x3e00008  jr          $ra
    ctx->pc = 0x119C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119C80u;
        // 0x119c84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119C88u;
}
