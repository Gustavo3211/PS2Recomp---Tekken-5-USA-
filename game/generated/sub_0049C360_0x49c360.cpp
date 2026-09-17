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

// Function: sub_0049C360
// Address: 0x49c360 - 0x49c3a0
void sub_0049C360_0x49c360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049C360_0x49c360");
#endif

    ctx->pc = 0x49c360u;

    // 0x49c360: 0x3c04007f  lui         $a0, 0x7F
    ctx->pc = 0x49c360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
    // 0x49c364: 0x24840bac  addiu       $a0, $a0, 0xBAC
    ctx->pc = 0x49c364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2988));
    // 0x49c368: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49c368u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0BACu));
    // 0x49c36c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x49c36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x49c370: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x49c370u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x49c374: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49c374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x49c378: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x49c378u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x49c37c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x49c37cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7F0BACu));
    // 0x49c380: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x49c380u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x49c384: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x49C384u;
    {
        const bool branch_taken_0x49c384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x49c384) {
            ctx->pc = 0x49C398u;
            goto label_49c398;
        }
    }
    ctx->pc = 0x49C38Cu;
    // 0x49c38c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x49c38cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x49c390: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x49c390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x49c394: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x49c394u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_49c398:
    // 0x49c398: 0x3e00008  jr          $ra
    ctx->pc = 0x49C398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C398u;
        // 0x49c39c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C3A0u;
}
