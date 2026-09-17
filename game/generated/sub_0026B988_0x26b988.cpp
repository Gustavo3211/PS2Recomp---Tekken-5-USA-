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

// Function: sub_0026B988
// Address: 0x26b988 - 0x26b9d8
void sub_0026B988_0x26b988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B988_0x26b988");
#endif

    ctx->pc = 0x26b988u;

    // 0x26b988: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x26b988u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26b98c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x26b98cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x26b990: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x26b990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x26b994: 0x3c03001c  lui         $v1, 0x1C
    ctx->pc = 0x26b994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28 << 16));
    // 0x26b998: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x26b998u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x26b99c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x26b99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x26b9a0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x26b9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x26b9a4: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x26b9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x26b9a8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26B9A8u;
    {
        const bool branch_taken_0x26b9a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B9A8u;
        // 0x26b9ac: 0x452021  addu        $a0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b9a8) {
            ctx->pc = 0x26B9B8u;
            goto label_26b9b8;
        }
    }
    ctx->pc = 0x26B9B0u;
    // 0x26b9b0: 0x3c02000c  lui         $v0, 0xC
    ctx->pc = 0x26b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12 << 16));
    // 0x26b9b4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x26b9b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_26b9b8:
    // 0x26b9b8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x26b9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x26b9bc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x26b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x26b9c0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26b9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26b9c4: 0x8c423150  lw          $v0, 0x3150($v0)
    ctx->pc = 0x26b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12624)));
    // 0x26b9c8: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x26b9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x26b9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x26B9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B9CCu;
        // 0x26b9d0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B9D4u;
    // 0x26b9d4: 0x0  nop
    ctx->pc = 0x26b9d4u;
    // NOP
    ctx->pc = 0x26b9d8u;
}
