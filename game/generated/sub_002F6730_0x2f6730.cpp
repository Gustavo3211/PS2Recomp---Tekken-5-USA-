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

// Function: sub_002F6730
// Address: 0x2f6730 - 0x2f6770
void sub_002F6730_0x2f6730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6730_0x2f6730");
#endif

    switch (ctx->pc) {
        case 0x2f6744u: goto label_2f6744;
        default: break;
    }

    ctx->pc = 0x2f6730u;

    // 0x2f6730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f6730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f6734: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f6734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f6738: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f6738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f673c: 0xc0bb738  jal         func_2EDCE0
    ctx->pc = 0x2F673Cu;
    SET_GPR_U32(ctx, 31, 0x2F6744u);
    ctx->pc = 0x2F6740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F673Cu;
    // 0x2f6740: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDCE0u, 0x2F673Cu, 0x2F6744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6744u;
label_2f6744:
    // 0x2f6744: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2f6744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2f6748: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2f6748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2f674c: 0x24421830  addiu       $v0, $v0, 0x1830
    ctx->pc = 0x2f674cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6192));
    // 0x2f6750: 0x246310b8  addiu       $v1, $v1, 0x10B8
    ctx->pc = 0x2f6750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4280));
    // 0x2f6754: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2f6754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2f6758: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2f6758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2f675c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f675cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6760: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f6760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f6764: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6764u;
        // 0x2f6768: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F676Cu;
    // 0x2f676c: 0x0  nop
    ctx->pc = 0x2f676cu;
    // NOP
    ctx->pc = 0x2f6770u;
}
