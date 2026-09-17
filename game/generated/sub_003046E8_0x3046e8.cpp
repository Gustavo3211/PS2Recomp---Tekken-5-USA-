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

// Function: sub_003046E8
// Address: 0x3046e8 - 0x304720
void sub_003046E8_0x3046e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003046E8_0x3046e8");
#endif

    switch (ctx->pc) {
        case 0x30470cu: goto label_30470c;
        default: break;
    }

    ctx->pc = 0x3046e8u;

    // 0x3046e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3046e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3046ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3046ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3046f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3046f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3046f4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3046f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3046f8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3046f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3046fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3046FCu;
    {
        const bool branch_taken_0x3046fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3046FCu;
        // 0x304700: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3046fc) {
            ctx->pc = 0x304710u;
            goto label_304710;
        }
    }
    ctx->pc = 0x304704u;
    // 0x304704: 0xc0c82ca  jal         func_320B28
    ctx->pc = 0x304704u;
    SET_GPR_U32(ctx, 31, 0x30470Cu);
    ctx->pc = 0x320B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320B28u, 0x304704u, 0x30470Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30470Cu;
label_30470c:
    // 0x30470c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x30470cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_304710:
    // 0x304710: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x304710u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304714: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x304714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x304718: 0x3e00008  jr          $ra
    ctx->pc = 0x304718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304718u;
        // 0x30471c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304720u;
}
