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

// Function: sub_00342E60
// Address: 0x342e60 - 0x342ea0
void sub_00342E60_0x342e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342E60_0x342e60");
#endif

    ctx->pc = 0x342e60u;

    // 0x342e60: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x342e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x342e64: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x342e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x342e68: 0x2442cb00  addiu       $v0, $v0, -0x3500
    ctx->pc = 0x342e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953728));
    // 0x342e6c: 0x2463cc28  addiu       $v1, $v1, -0x33D8
    ctx->pc = 0x342e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954024));
    // 0x342e70: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x342e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x342e74: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x342e74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342e78: 0x3c061400  lui         $a2, 0x1400
    ctx->pc = 0x342e78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5120 << 16));
    // 0x342e7c: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x342e7cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x342e80: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x342e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x342e84: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x342e84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x342e88: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x342e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x342e8c: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x342e8cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x342e90: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x342e90u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x342e94: 0x3e00008  jr          $ra
    ctx->pc = 0x342E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E94u;
        // 0x342e98: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342E9Cu;
    // 0x342e9c: 0x0  nop
    ctx->pc = 0x342e9cu;
    // NOP
    ctx->pc = 0x342ea0u;
}
