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

// Function: sub_0031DA88
// Address: 0x31da88 - 0x31daa8
void sub_0031DA88_0x31da88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031DA88_0x31da88");
#endif

    ctx->pc = 0x31da88u;

    // 0x31da88: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x31da88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x31da8c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x31da8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x31da90: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x31da90u;
    SET_GPR_U64(ctx, 3, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x31da94: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x31da94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
    // 0x31da98: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x31da98u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x31da9c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x31da9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x31daa0: 0x3e00008  jr          $ra
    ctx->pc = 0x31DAA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DAA0u;
        // 0x31daa4: 0xac830244  sw          $v1, 0x244($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 580), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DAA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DAA8u;
}
