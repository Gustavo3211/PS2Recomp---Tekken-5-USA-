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

// Function: sub_005132B8
// Address: 0x5132b8 - 0x5132f8
void sub_005132B8_0x5132b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005132B8_0x5132b8");
#endif

    ctx->pc = 0x5132b8u;

    // 0x5132b8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x5132b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x5132bc: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x5132bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x5132c0: 0x52c43  sra         $a1, $a1, 17
    ctx->pc = 0x5132c0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 17));
    // 0x5132c4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x5132c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x5132c8: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x5132c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x5132cc: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x5132ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x5132d0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x5132d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x5132d4: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x5132d4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x5132d8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x5132d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x5132dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x5132dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x5132e0: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x5132e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x5132e4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x5132e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x5132e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x5132e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x5132ec: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x5132ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x5132f0: 0x3e00008  jr          $ra
    ctx->pc = 0x5132F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5132F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5132F0u;
        // 0x5132f4: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5132F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5132F8u;
}
