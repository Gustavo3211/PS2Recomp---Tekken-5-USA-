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

// Function: sub_00321960
// Address: 0x321960 - 0x321988
void sub_00321960_0x321960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321960_0x321960");
#endif

    ctx->pc = 0x321960u;

    // 0x321960: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x321960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x321964: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x321964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x321968: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x321968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x32196c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32196Cu;
    {
        const bool branch_taken_0x32196c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32196c) {
            ctx->pc = 0x32197Cu;
            goto label_32197c;
        }
    }
    ctx->pc = 0x321974u;
    // 0x321974: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x321974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x321978: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x321978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_32197c:
    // 0x32197c: 0x3e00008  jr          $ra
    ctx->pc = 0x32197Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32197Cu;
        // 0x321980: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32197Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321984u;
    // 0x321984: 0x0  nop
    ctx->pc = 0x321984u;
    // NOP
    ctx->pc = 0x321988u;
}
