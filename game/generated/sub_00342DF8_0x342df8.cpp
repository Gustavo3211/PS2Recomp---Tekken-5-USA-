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

// Function: sub_00342DF8
// Address: 0x342df8 - 0x342e40
void sub_00342DF8_0x342df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342DF8_0x342df8");
#endif

    ctx->pc = 0x342df8u;

    // 0x342df8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x342df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x342dfc: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x342dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x342e00: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x342e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x342e04: 0xdc430038  ld          $v1, 0x38($v0)
    ctx->pc = 0x342e04u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x342e08: 0x317ba  dsrl        $v0, $v1, 30
    ctx->pc = 0x342e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 30);
    // 0x342e0c: 0x31eba  dsrl        $v1, $v1, 26
    ctx->pc = 0x342e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 26);
    // 0x342e10: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x342e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x342e14: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x342e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x342e18: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x342e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x342e1c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x342e1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x342e20: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x342e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x342e24: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x342e24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x342e28: 0x441007  srav        $v0, $a0, $v0
    ctx->pc = 0x342e28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x342e2c: 0x642007  srav        $a0, $a0, $v1
    ctx->pc = 0x342e2cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x342e30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x342e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x342e34: 0x3e00008  jr          $ra
    ctx->pc = 0x342E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342E34u;
        // 0x342e38: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342E3Cu;
    // 0x342e3c: 0x0  nop
    ctx->pc = 0x342e3cu;
    // NOP
    ctx->pc = 0x342e40u;
}
