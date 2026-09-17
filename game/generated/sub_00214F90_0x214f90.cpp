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

// Function: sub_00214F90
// Address: 0x214f90 - 0x214fc0
void sub_00214F90_0x214f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214F90_0x214f90");
#endif

    ctx->pc = 0x214f90u;

    // 0x214f90: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x214f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x214f94: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x214f94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x214f98: 0x2463b708  addiu       $v1, $v1, -0x48F8
    ctx->pc = 0x214f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948616));
    // 0x214f9c: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x214f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x214fa0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x214fa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214fa4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x214fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x214fa8: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x214FA8u;
    {
        const bool branch_taken_0x214fa8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x214FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214FA8u;
        // 0x214fac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214fa8) {
            ctx->pc = 0x214FB8u;
            goto label_214fb8;
        }
    }
    ctx->pc = 0x214FB0u;
    // 0x214fb0: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x214fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x214fb4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x214fb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_214fb8:
    // 0x214fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x214FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214FC0u;
}
