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

// Function: sub_0050D1A8
// Address: 0x50d1a8 - 0x50d200
void sub_0050D1A8_0x50d1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050D1A8_0x50d1a8");
#endif

    ctx->pc = 0x50d1a8u;

    // 0x50d1a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x50d1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x50d1ac: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x50d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x50d1b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x50d1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x50d1b4: 0x8c43c674  lw          $v1, -0x398C($v0)
    ctx->pc = 0x50d1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x8EC674u));
    // 0x50d1b8: 0x84640044  lh          $a0, 0x44($v1)
    ctx->pc = 0x50d1b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x50d1bc: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x50D1BCu;
    {
        const bool branch_taken_0x50d1bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x50D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D1BCu;
        // 0x50d1c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50d1bc) {
            ctx->pc = 0x50D1F0u;
            goto label_50d1f0;
        }
    }
    ctx->pc = 0x50D1C4u;
    // 0x50d1c4: 0x3c04008f  lui         $a0, 0x8F
    ctx->pc = 0x50d1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)143 << 16));
    // 0x50d1c8: 0x3c03008f  lui         $v1, 0x8F
    ctx->pc = 0x50d1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)143 << 16));
    // 0x50d1cc: 0x8c82c670  lw          $v0, -0x3990($a0)
    ctx->pc = 0x50d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x8EC670u));
    // 0x50d1d0: 0x2463c668  addiu       $v1, $v1, -0x3998
    ctx->pc = 0x50d1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952552));
    // 0x50d1d4: 0x8c440114  lw          $a0, 0x114($v0)
    ctx->pc = 0x50d1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x50d1d8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x50d1d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8EC668u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC668u, _value); } while (0);
    // 0x50d1dc: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x50d1dcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x50d1e0: 0x84650000  lh          $a1, 0x0($v1)
    ctx->pc = 0x50d1e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x50d1e4: 0x8144c5a  j           func_513168
    ctx->pc = 0x50D1E4u;
    ctx->pc = 0x50D1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x50D1E4u;
    // 0x50d1e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x513168u;
    sub_00513168_0x513168(rdram, ctx, runtime); return;
    ctx->pc = 0x50D1ECu;
    // 0x50d1ec: 0x0  nop
    ctx->pc = 0x50d1ecu;
    // NOP
label_50d1f0:
    // 0x50d1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x50D1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x50D1F0u;
        // 0x50d1f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50D1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50D1F8u;
    // 0x50d1f8: 0x3e00008  jr          $ra
    ctx->pc = 0x50D1F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x50D1F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x50D200u;
}
