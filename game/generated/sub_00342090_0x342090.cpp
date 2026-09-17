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

// Function: sub_00342090
// Address: 0x342090 - 0x3420c0
void sub_00342090_0x342090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342090_0x342090");
#endif

    switch (ctx->pc) {
        case 0x3420b4u: goto label_3420b4;
        default: break;
    }

    ctx->pc = 0x342090u;

    // 0x342090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342094: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x342094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x342098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34209c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x34209cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3420a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3420a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3420a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3420a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3420a8: 0x3442c0cd  ori         $v0, $v0, 0xC0CD
    ctx->pc = 0x3420a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49357);
    // 0x3420ac: 0xc0d07aa  jal         func_341EA8
    ctx->pc = 0x3420ACu;
    SET_GPR_U32(ctx, 31, 0x3420B4u);
    ctx->pc = 0x3420B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3420ACu;
    // 0x3420b0: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341EA8u, 0x3420ACu, 0x3420B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3420B4u;
label_3420b4:
    // 0x3420b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3420b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3420b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3420B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3420BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3420B8u;
        // 0x3420bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3420B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3420C0u;
}
