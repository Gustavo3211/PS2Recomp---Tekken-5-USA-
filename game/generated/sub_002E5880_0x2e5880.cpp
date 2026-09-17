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

// Function: sub_002E5880
// Address: 0x2e5880 - 0x2e58c0
void sub_002E5880_0x2e5880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5880_0x2e5880");
#endif

    switch (ctx->pc) {
        case 0x2e5894u: goto label_2e5894;
        default: break;
    }

    ctx->pc = 0x2e5880u;

    // 0x2e5880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e5880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e5884: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e5884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e5888: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e5888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e588c: 0xc0bb738  jal         func_2EDCE0
    ctx->pc = 0x2E588Cu;
    SET_GPR_U32(ctx, 31, 0x2E5894u);
    ctx->pc = 0x2E5890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E588Cu;
    // 0x2e5890: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDCE0u, 0x2E588Cu, 0x2E5894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5894u;
label_2e5894:
    // 0x2e5894: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2e5894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2e5898: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2e5898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2e589c: 0x2442feb0  addiu       $v0, $v0, -0x150
    ctx->pc = 0x2e589cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966960));
    // 0x2e58a0: 0x246301e8  addiu       $v1, $v1, 0x1E8
    ctx->pc = 0x2e58a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 488));
    // 0x2e58a4: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x2e58a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x2e58a8: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2e58a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2e58ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e58acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e58b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e58b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e58b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E58B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E58B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E58B4u;
        // 0x2e58b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E58B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E58BCu;
    // 0x2e58bc: 0x0  nop
    ctx->pc = 0x2e58bcu;
    // NOP
    ctx->pc = 0x2e58c0u;
}
