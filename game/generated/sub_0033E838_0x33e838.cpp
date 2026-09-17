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

// Function: sub_0033E838
// Address: 0x33e838 - 0x33e8d0
void sub_0033E838_0x33e838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E838_0x33e838");
#endif

    ctx->pc = 0x33e838u;

    // 0x33e838: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x33e838u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e83c: 0x8d020060  lw          $v0, 0x60($t0)
    ctx->pc = 0x33e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 96)));
    // 0x33e840: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x33e840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x33e844: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x33E844u;
    {
        const bool branch_taken_0x33e844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e844) {
            ctx->pc = 0x33E8C8u;
            goto label_33e8c8;
        }
    }
    ctx->pc = 0x33E84Cu;
    // 0x33e84c: 0x95020006  lhu         $v0, 0x6($t0)
    ctx->pc = 0x33e84cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 6)));
    // 0x33e850: 0x22842  srl         $a1, $v0, 1
    ctx->pc = 0x33e850u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x33e854: 0x23882  srl         $a3, $v0, 2
    ctx->pc = 0x33e854u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x33e858: 0x21902  srl         $v1, $v0, 4
    ctx->pc = 0x33e858u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x33e85c: 0x23142  srl         $a2, $v0, 5
    ctx->pc = 0x33e85cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x33e860: 0x22182  srl         $a0, $v0, 6
    ctx->pc = 0x33e860u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x33e864: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x33e864u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x33e868: 0x24a5003f  addiu       $a1, $a1, 0x3F
    ctx->pc = 0x33e868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x33e86c: 0x24e7003f  addiu       $a3, $a3, 0x3F
    ctx->pc = 0x33e86cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
    // 0x33e870: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x33e870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x33e874: 0x24c6003f  addiu       $a2, $a2, 0x3F
    ctx->pc = 0x33e874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x33e878: 0x52982  srl         $a1, $a1, 6
    ctx->pc = 0x33e878u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
    // 0x33e87c: 0x73982  srl         $a3, $a3, 6
    ctx->pc = 0x33e87cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 6));
    // 0x33e880: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x33e880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x33e884: 0x31982  srl         $v1, $v1, 6
    ctx->pc = 0x33e884u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x33e888: 0x63182  srl         $a2, $a2, 6
    ctx->pc = 0x33e888u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 6));
    // 0x33e88c: 0x2484003f  addiu       $a0, $a0, 0x3F
    ctx->pc = 0x33e88cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x33e890: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x33e890u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x33e894: 0x738bc  dsll32      $a3, $a3, 2
    ctx->pc = 0x33e894u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 2));
    // 0x33e898: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x33e898u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x33e89c: 0x31bb8  dsll        $v1, $v1, 14
    ctx->pc = 0x33e89cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 14);
    // 0x33e8a0: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x33e8a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x33e8a4: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x33e8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x33e8a8: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x33e8a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x33e8ac: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x33e8acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x33e8b0: 0x215bc  dsll32      $v0, $v0, 22
    ctx->pc = 0x33e8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
    // 0x33e8b4: 0x425bc  dsll32      $a0, $a0, 22
    ctx->pc = 0x33e8b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 22));
    // 0x33e8b8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x33e8b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x33e8bc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x33e8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x33e8c0: 0xfd030070  sd          $v1, 0x70($t0)
    ctx->pc = 0x33e8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 112), GPR_U64(ctx, 3));
    // 0x33e8c4: 0xfd050068  sd          $a1, 0x68($t0)
    ctx->pc = 0x33e8c4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 104), GPR_U64(ctx, 5));
label_33e8c8:
    // 0x33e8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x33E8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E8D0u;
}
