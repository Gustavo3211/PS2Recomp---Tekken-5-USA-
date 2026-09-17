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

// Function: sub_001F45B0
// Address: 0x1f45b0 - 0x1f45f8
void sub_001F45B0_0x1f45b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F45B0_0x1f45b0");
#endif

    ctx->pc = 0x1f45b0u;

    // 0x1f45b0: 0x84a60042  lh          $a2, 0x42($a1)
    ctx->pc = 0x1f45b0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 66)));
    // 0x1f45b4: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F45B4u;
    {
        const bool branch_taken_0x1f45b4 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1F45B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F45B4u;
        // 0x1f45b8: 0x61023  negu        $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f45b4) {
            ctx->pc = 0x1F45C4u;
            goto label_1f45c4;
        }
    }
    ctx->pc = 0x1F45BCu;
    // 0x1f45bc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f45bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f45c0: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x1f45c0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
label_1f45c4:
    // 0x1f45c4: 0xa4860216  sh          $a2, 0x216($a0)
    ctx->pc = 0x1f45c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 534), (uint16_t)GPR_U32(ctx, 6));
    // 0x1f45c8: 0x90a20049  lbu         $v0, 0x49($a1)
    ctx->pc = 0x1f45c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 73)));
    // 0x1f45cc: 0xa08201f3  sb          $v0, 0x1F3($a0)
    ctx->pc = 0x1f45ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 499), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f45d0: 0x90a30045  lbu         $v1, 0x45($a1)
    ctx->pc = 0x1f45d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 69)));
    // 0x1f45d4: 0xa08301ee  sb          $v1, 0x1EE($a0)
    ctx->pc = 0x1f45d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 494), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f45d8: 0x90a20047  lbu         $v0, 0x47($a1)
    ctx->pc = 0x1f45d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 71)));
    // 0x1f45dc: 0xa08201ef  sb          $v0, 0x1EF($a0)
    ctx->pc = 0x1f45dcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 495), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f45e0: 0x90a30048  lbu         $v1, 0x48($a1)
    ctx->pc = 0x1f45e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x1f45e4: 0xa08301f2  sb          $v1, 0x1F2($a0)
    ctx->pc = 0x1f45e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 498), (uint8_t)GPR_U32(ctx, 3));
    // 0x1f45e8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f45e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f45ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1F45ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F45F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F45ECu;
        // 0x1f45f0: 0xa4460160  sh          $a2, 0x160($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 352), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F45ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F45F4u;
    // 0x1f45f4: 0x0  nop
    ctx->pc = 0x1f45f4u;
    // NOP
    ctx->pc = 0x1f45f8u;
}
