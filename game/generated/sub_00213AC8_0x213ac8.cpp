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

// Function: sub_00213AC8
// Address: 0x213ac8 - 0x213b00
void sub_00213AC8_0x213ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00213AC8_0x213ac8");
#endif

    switch (ctx->pc) {
        case 0x213aecu: goto label_213aec;
        case 0x213af4u: goto label_213af4;
        default: break;
    }

    ctx->pc = 0x213ac8u;

    // 0x213ac8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x213ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x213acc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x213accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x213ad0: 0x904383cc  lbu         $v1, -0x7C34($v0)
    ctx->pc = 0x213ad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3A83CCu));
    // 0x213ad4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x213ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x213ad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x213ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x213adc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x213adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213ae0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x213ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x213ae4: 0xc0b7fe0  jal         func_2DFF80
    ctx->pc = 0x213AE4u;
    SET_GPR_U32(ctx, 31, 0x213AECu);
    ctx->pc = 0x213AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x213AE4u;
    // 0x213ae8: 0xc3200a  movz        $a0, $a2, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DFF80u, 0x213AE4u, 0x213AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213AECu;
label_213aec:
    // 0x213aec: 0xc084e9a  jal         func_213A68
    ctx->pc = 0x213AECu;
    SET_GPR_U32(ctx, 31, 0x213AF4u);
    ctx->pc = 0x213A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213A68u, 0x213AECu, 0x213AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x213AF4u;
label_213af4:
    // 0x213af4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x213af4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x213af8: 0x3e00008  jr          $ra
    ctx->pc = 0x213AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x213AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x213AF8u;
        // 0x213afc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x213AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x213B00u;
}
