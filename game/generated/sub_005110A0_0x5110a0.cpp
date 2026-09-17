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

// Function: sub_005110A0
// Address: 0x5110a0 - 0x5110c8
void sub_005110A0_0x5110a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005110A0_0x5110a0");
#endif

    ctx->pc = 0x5110a0u;

    // 0x5110a0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x5110a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x5110a4: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x5110a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x5110a8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x5110a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5110ac: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x5110acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x5110b0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x5110b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x5110b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x5110b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x5110b8: 0xaca3005c  sw          $v1, 0x5C($a1)
    ctx->pc = 0x5110b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 3));
    // 0x5110bc: 0x3e00008  jr          $ra
    ctx->pc = 0x5110BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5110C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5110BCu;
        // 0x5110c0: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5110BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5110C4u;
    // 0x5110c4: 0x0  nop
    ctx->pc = 0x5110c4u;
    // NOP
    ctx->pc = 0x5110c8u;
}
