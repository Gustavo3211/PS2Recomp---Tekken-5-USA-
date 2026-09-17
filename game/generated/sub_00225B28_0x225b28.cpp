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

// Function: sub_00225B28
// Address: 0x225b28 - 0x225b78
void sub_00225B28_0x225b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225B28_0x225b28");
#endif

    switch (ctx->pc) {
        case 0x225b48u: goto label_225b48;
        case 0x225b58u: goto label_225b58;
        default: break;
    }

    ctx->pc = 0x225b28u;

    // 0x225b28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x225b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x225b2c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x225b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x225b30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x225b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x225b34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x225b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x225b38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x225b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225b3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x225b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x225b40: 0x245161b0  addiu       $s1, $v0, 0x61B0
    ctx->pc = 0x225b40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25008));
    // 0x225b44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x225b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_225b48:
    // 0x225b48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x225b48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x225b4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x225b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225b50: 0xc08967a  jal         func_2259E8
    ctx->pc = 0x225B50u;
    SET_GPR_U32(ctx, 31, 0x225B58u);
    ctx->pc = 0x225B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225B50u;
    // 0x225b54: 0x26310050  addiu       $s1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2259E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2259E8u, 0x225B50u, 0x225B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225B58u;
label_225b58:
    // 0x225b58: 0x2a020096  slti        $v0, $s0, 0x96
    ctx->pc = 0x225b58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x225b5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x225B5Cu;
    {
        const bool branch_taken_0x225b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x225B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B5Cu;
        // 0x225b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225b5c) {
            ctx->pc = 0x225B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225b48;
        }
    }
    ctx->pc = 0x225B64u;
    // 0x225b64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x225b64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225b68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x225b68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225b6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x225b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x225b70: 0x3e00008  jr          $ra
    ctx->pc = 0x225B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225B70u;
        // 0x225b74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225B70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225B78u;
}
