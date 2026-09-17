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

// Function: sub_004918C0
// Address: 0x4918c0 - 0x491908
void sub_004918C0_0x4918c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004918C0_0x4918c0");
#endif

    ctx->pc = 0x4918c0u;

    // 0x4918c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4918c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4918c4: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x4918c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x4918c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4918c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4918cc: 0x24451500  addiu       $a1, $v0, 0x1500
    ctx->pc = 0x4918ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 5376));
    // 0x4918d0: 0x24041234  addiu       $a0, $zero, 0x1234
    ctx->pc = 0x4918d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4660));
    // 0x4918d4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x4918d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x4918d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4918d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x4918dc: 0x8463e80a  lh          $v1, -0x17F6($v1)
    ctx->pc = 0x4918dcu;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x7EFD0Au));
    // 0x4918e0: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4918E0u;
    {
        const bool branch_taken_0x4918e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x4918E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4918E0u;
        // 0x4918e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4918e0) {
            ctx->pc = 0x491900u;
            goto label_491900;
        }
    }
    ctx->pc = 0x4918E8u;
    // 0x4918e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4918e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4918ec: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x4918ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x4918f0: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x4918f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x4918f4: 0xa422e804  sh          $v0, -0x17FC($at)
    ctx->pc = 0x4918f4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961156), (uint16_t)GPR_U32(ctx, 2));
    // 0x4918f8: 0x8123978  j           func_48E5E0
    ctx->pc = 0x4918F8u;
    ctx->pc = 0x4918FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4918F8u;
    // 0x4918fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48E5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E5E0u, 0x4918F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x491900u;
label_491900:
    // 0x491900: 0x3e00008  jr          $ra
    ctx->pc = 0x491900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x491904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x491900u;
        // 0x491904: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x491900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x491908u;
}
