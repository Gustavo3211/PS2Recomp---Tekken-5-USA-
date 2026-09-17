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

// Function: sub_00492560
// Address: 0x492560 - 0x4925a0
void sub_00492560_0x492560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00492560_0x492560");
#endif

    ctx->pc = 0x492560u;

    // 0x492560: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x492560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x492564: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x492564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x492568: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x492568u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x49256c: 0x24421500  addiu       $v0, $v0, 0x1500
    ctx->pc = 0x49256cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5376));
    // 0x492570: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x492570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x492574: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x492574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x492578: 0xdc63e800  ld          $v1, -0x1800($v1)
    ctx->pc = 0x492578u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 4294961152)));
    // 0x49257c: 0x34059400  ori         $a1, $zero, 0x9400
    ctx->pc = 0x49257cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
    // 0x492580: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x492580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x492584: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x492584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x492588: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x492588u;
    {
        const bool branch_taken_0x492588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492588u;
        // 0x49258c: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492588) {
            ctx->pc = 0x492594u;
            goto label_492594;
        }
    }
    ctx->pc = 0x492590u;
    // 0x492590: 0xac45d6e0  sw          $a1, -0x2920($v0)
    ctx->pc = 0x492590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956768), GPR_U32(ctx, 5));
label_492594:
    // 0x492594: 0x3e00008  jr          $ra
    ctx->pc = 0x492594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49259Cu;
    // 0x49259c: 0x0  nop
    ctx->pc = 0x49259cu;
    // NOP
    ctx->pc = 0x4925a0u;
}
