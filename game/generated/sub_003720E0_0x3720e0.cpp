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

// Function: sub_003720E0
// Address: 0x3720e0 - 0x372130
void sub_003720E0_0x3720e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003720E0_0x3720e0");
#endif

    switch (ctx->pc) {
        case 0x372104u: goto label_372104;
        case 0x372118u: goto label_372118;
        default: break;
    }

    ctx->pc = 0x3720e0u;

    // 0x3720e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3720e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3720e4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x3720e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x3720e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3720e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3720ec: 0x245075c0  addiu       $s0, $v0, 0x75C0
    ctx->pc = 0x3720ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30144));
    // 0x3720f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3720f0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D75C0u));
    // 0x3720f4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3720F4u;
    {
        const bool branch_taken_0x3720f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3720F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3720F4u;
        // 0x3720f8: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3720f4) {
            ctx->pc = 0x372118u;
            goto label_372118;
        }
    }
    ctx->pc = 0x3720FCu;
    // 0x3720fc: 0xc0dc788  jal         func_371E20
    ctx->pc = 0x3720FCu;
    SET_GPR_U32(ctx, 31, 0x372104u);
    ctx->pc = 0x371E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371E20u, 0x3720FCu, 0x372104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372104u;
label_372104:
    // 0x372104: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x372104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x372108: 0x24a50e38  addiu       $a1, $a1, 0xE38
    ctx->pc = 0x372108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3640));
    // 0x37210c: 0x2786cc90  addiu       $a2, $gp, -0x3370
    ctx->pc = 0x37210cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294954128));
    // 0x372110: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x372110u;
    SET_GPR_U32(ctx, 31, 0x372118u);
    ctx->pc = 0x372114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x372110u;
    // 0x372114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x372110u, 0x372118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x372118u;
label_372118:
    // 0x372118: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x372118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37211c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37211cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372120: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x372120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x372124: 0x3e00008  jr          $ra
    ctx->pc = 0x372124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372124u;
        // 0x372128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37212Cu;
    // 0x37212c: 0x0  nop
    ctx->pc = 0x37212cu;
    // NOP
    ctx->pc = 0x372130u;
}
