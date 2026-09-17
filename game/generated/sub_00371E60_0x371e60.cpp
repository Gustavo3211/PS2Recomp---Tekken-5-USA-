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

// Function: sub_00371E60
// Address: 0x371e60 - 0x371eb0
void sub_00371E60_0x371e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371E60_0x371e60");
#endif

    switch (ctx->pc) {
        case 0x371e84u: goto label_371e84;
        case 0x371e98u: goto label_371e98;
        default: break;
    }

    ctx->pc = 0x371e60u;

    // 0x371e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x371e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x371e64: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x371e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x371e68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371e6c: 0x245075f0  addiu       $s0, $v0, 0x75F0
    ctx->pc = 0x371e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30192));
    // 0x371e70: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x371e70u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D75F0u));
    // 0x371e74: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x371E74u;
    {
        const bool branch_taken_0x371e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x371E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E74u;
        // 0x371e78: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371e74) {
            ctx->pc = 0x371E98u;
            goto label_371e98;
        }
    }
    ctx->pc = 0x371E7Cu;
    // 0x371e7c: 0xc0dc788  jal         func_371E20
    ctx->pc = 0x371E7Cu;
    SET_GPR_U32(ctx, 31, 0x371E84u);
    ctx->pc = 0x371E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371E20u, 0x371E7Cu, 0x371E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371E84u;
label_371e84:
    // 0x371e84: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x371e84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x371e88: 0x24a50d50  addiu       $a1, $a1, 0xD50
    ctx->pc = 0x371e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3408));
    // 0x371e8c: 0x2786cc90  addiu       $a2, $gp, -0x3370
    ctx->pc = 0x371e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954128));
    // 0x371e90: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x371E90u;
    SET_GPR_U32(ctx, 31, 0x371E98u);
    ctx->pc = 0x371E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x371E90u;
    // 0x371e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x371E90u, 0x371E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x371E98u;
label_371e98:
    // 0x371e98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x371e98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371e9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x371e9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371ea0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x371ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x371ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x371EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371EA4u;
        // 0x371ea8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371EACu;
    // 0x371eac: 0x0  nop
    ctx->pc = 0x371eacu;
    // NOP
    ctx->pc = 0x371eb0u;
}
