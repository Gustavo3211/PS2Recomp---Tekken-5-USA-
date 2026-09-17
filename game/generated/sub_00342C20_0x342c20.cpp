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

// Function: sub_00342C20
// Address: 0x342c20 - 0x342c70
void sub_00342C20_0x342c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342C20_0x342c20");
#endif

    ctx->pc = 0x342c20u;

    // 0x342c20: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x342c20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x342c24: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x342c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x342c28: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x342c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x342c2c: 0x2442e9e8  addiu       $v0, $v0, -0x1618
    ctx->pc = 0x342c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961640));
    // 0x342c30: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x342c30u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x342c34: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x342c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
    // 0x342c38: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x342c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x342c3c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x342c3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x342c40: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x342c40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x342c44: 0xa4a2fffc  sh          $v0, -0x4($a1)
    ctx->pc = 0x342c44u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294967292), (uint16_t)GPR_U32(ctx, 2));
    // 0x342c48: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x342c48u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x342c4c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x342c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x342c50: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x342c50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x342c54: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x342c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x342c58: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x342c58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x342c5c: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x342c5cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x342c60: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x342c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x342c64: 0x3e00008  jr          $ra
    ctx->pc = 0x342C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342C64u;
        // 0x342c68: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342C6Cu;
    // 0x342c6c: 0x0  nop
    ctx->pc = 0x342c6cu;
    // NOP
    ctx->pc = 0x342c70u;
}
