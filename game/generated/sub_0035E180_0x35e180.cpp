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

// Function: sub_0035E180
// Address: 0x35e180 - 0x35e1c8
void sub_0035E180_0x35e180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035E180_0x35e180");
#endif

    switch (ctx->pc) {
        case 0x35e1b0u: goto label_35e1b0;
        default: break;
    }

    ctx->pc = 0x35e180u;

    // 0x35e180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35e180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35e184: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x35e184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x35e188: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35e188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35e18c: 0x48040  sll         $s0, $a0, 1
    ctx->pc = 0x35e18cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x35e190: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x35e190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x35e194: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35e194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35e198: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x35e198u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x35e19c: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x35e19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x35e1a0: 0x24212c68  addiu       $at, $at, 0x2C68
    ctx->pc = 0x35e1a0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 11368));
    // 0x35e1a4: 0x308021  addu        $s0, $at, $s0
    ctx->pc = 0x35e1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 16)));
    // 0x35e1a8: 0xc0d7c1c  jal         func_35F070
    ctx->pc = 0x35E1A8u;
    SET_GPR_U32(ctx, 31, 0x35E1B0u);
    ctx->pc = 0x35E1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E1A8u;
    // 0x35e1ac: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35F070u, 0x35E1A8u, 0x35E1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E1B0u;
label_35e1b0:
    // 0x35e1b0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x35e1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35e1b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35e1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e1b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e1b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e1bc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x35e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x35e1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x35E1C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E1C0u;
        // 0x35e1c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E1C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E1C8u;
}
