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

// Function: sub_004A85C0
// Address: 0x4a85c0 - 0x4a8610
void sub_004A85C0_0x4a85c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A85C0_0x4a85c0");
#endif

    ctx->pc = 0x4a85c0u;

    // 0x4a85c0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4a85c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a85c4: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x4a85c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x4a85c8: 0x42443  sra         $a0, $a0, 17
    ctx->pc = 0x4a85c8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 17));
    // 0x4a85cc: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x4a85ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x4a85d0: 0x24429080  addiu       $v0, $v0, -0x6F80
    ctx->pc = 0x4a85d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938752));
    // 0x4a85d4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x4a85d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4a85d8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x4a85d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x4a85dc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x4a85dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x4a85e0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4a85e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4a85e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a85e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a85e8: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x4a85e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a85ec: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a85ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a85f0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x4a85f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a85f4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4a85f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4a85f8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a85f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a85fc: 0x42023  negu        $a0, $a0
    ctx->pc = 0x4a85fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x4a8600: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x4a8600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x4a8604: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a8604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a8608: 0x3e00008  jr          $ra
    ctx->pc = 0x4A8608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A8608u;
        // 0x4a860c: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A8608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A8610u;
}
