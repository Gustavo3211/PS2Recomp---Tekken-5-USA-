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

// Function: sub_004A8610
// Address: 0x4a8610 - 0x4a8660
void sub_004A8610_0x4a8610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A8610_0x4a8610");
#endif

    ctx->pc = 0x4a8610u;

    // 0x4a8610: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4a8610u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a8614: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x4a8614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x4a8618: 0x42443  sra         $a0, $a0, 17
    ctx->pc = 0x4a8618u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 17));
    // 0x4a861c: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x4a861cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x4a8620: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4a8620u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4a8624: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x4a8624u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4a8628: 0x24429080  addiu       $v0, $v0, -0x6F80
    ctx->pc = 0x4a8628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938752));
    // 0x4a862c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4a862cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4a8630: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a8630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a8634: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4a8634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a8638: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x4a8638u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a863c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a863cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a8640: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x4a8640u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a8644: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4a8644u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4a8648: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a8648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a864c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4a864cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4a8650: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a8650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a8654: 0x3e00008  jr          $ra
    ctx->pc = 0x4A8654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A8658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8654u;
        // 0x4a8658: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A865Cu;
    // 0x4a865c: 0x0  nop
    ctx->pc = 0x4a865cu;
    // NOP
    ctx->pc = 0x4a8660u;
}
