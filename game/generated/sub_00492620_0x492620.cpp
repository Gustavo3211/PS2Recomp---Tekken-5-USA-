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

// Function: sub_00492620
// Address: 0x492620 - 0x492660
void sub_00492620_0x492620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00492620_0x492620");
#endif

    ctx->pc = 0x492620u;

    // 0x492620: 0x3c02007e  lui         $v0, 0x7E
    ctx->pc = 0x492620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)126 << 16));
    // 0x492624: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x492624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x492628: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x492628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x49262c: 0x24421500  addiu       $v0, $v0, 0x1500
    ctx->pc = 0x49262cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5376));
    // 0x492630: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x492630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x492634: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x492634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x492638: 0xdc63e800  ld          $v1, -0x1800($v1)
    ctx->pc = 0x492638u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 4294961152)));
    // 0x49263c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x49263cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x492640: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x492640u;
    {
        const bool branch_taken_0x492640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x492640) {
            ctx->pc = 0x492654u;
            goto label_492654;
        }
    }
    ctx->pc = 0x492648u;
    // 0x492648: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x492648u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x49264c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x49264cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x492650: 0xa420e802  sh          $zero, -0x17FE($at)
    ctx->pc = 0x492650u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294961154), (uint16_t)GPR_U32(ctx, 0));
label_492654:
    // 0x492654: 0x3e00008  jr          $ra
    ctx->pc = 0x492654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49265Cu;
    // 0x49265c: 0x0  nop
    ctx->pc = 0x49265cu;
    // NOP
    ctx->pc = 0x492660u;
}
