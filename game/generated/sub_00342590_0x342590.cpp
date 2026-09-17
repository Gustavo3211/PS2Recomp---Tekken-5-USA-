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

// Function: sub_00342590
// Address: 0x342590 - 0x3425c0
void sub_00342590_0x342590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342590_0x342590");
#endif

    switch (ctx->pc) {
        case 0x3425b4u: goto label_3425b4;
        default: break;
    }

    ctx->pc = 0x342590u;

    // 0x342590: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x342594: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x342594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x342598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x342598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34259c: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x34259cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3425a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3425a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3425a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3425a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3425a8: 0x34428005  ori         $v0, $v0, 0x8005
    ctx->pc = 0x3425a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32773);
    // 0x3425ac: 0xc0d0792  jal         func_341E48
    ctx->pc = 0x3425ACu;
    SET_GPR_U32(ctx, 31, 0x3425B4u);
    ctx->pc = 0x3425B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3425ACu;
    // 0x3425b0: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341E48u, 0x3425ACu, 0x3425B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3425B4u;
label_3425b4:
    // 0x3425b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3425b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3425b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3425B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3425BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3425B8u;
        // 0x3425bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3425B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3425C0u;
}
