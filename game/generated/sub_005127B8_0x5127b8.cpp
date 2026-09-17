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

// Function: sub_005127B8
// Address: 0x5127b8 - 0x512800
void sub_005127B8_0x5127b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005127B8_0x5127b8");
#endif

    ctx->pc = 0x5127b8u;

    // 0x5127b8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x5127b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x5127bc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x5127bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x5127c0: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x5127c0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x5127c4: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x5127c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x5127c8: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x5127c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x5127cc: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x5127ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x5127d0: 0x30830003  andi        $v1, $a0, 0x3
    ctx->pc = 0x5127d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x5127d4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x5127d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x5127d8: 0x3c040090  lui         $a0, 0x90
    ctx->pc = 0x5127d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)144 << 16));
    // 0x5127dc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x5127dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x5127e0: 0x9484f120  lhu         $a0, -0xEE0($a0)
    ctx->pc = 0x5127e0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4294963488)));
    // 0x5127e4: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x5127e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x5127e8: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x5127e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x5127ec: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x5127ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x5127f0: 0xa4460000  sh          $a2, 0x0($v0)
    ctx->pc = 0x5127f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x5127f4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x5127f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x5127f8: 0x3e00008  jr          $ra
    ctx->pc = 0x5127F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5127FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5127F8u;
        // 0x5127fc: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5127F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x512800u;
}
