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

// Function: sub_003360C0
// Address: 0x3360c0 - 0x336118
void sub_003360C0_0x3360c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003360C0_0x3360c0");
#endif

    switch (ctx->pc) {
        case 0x3360e0u: goto label_3360e0;
        default: break;
    }

    ctx->pc = 0x3360c0u;

    // 0x3360c0: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x3360c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x3360c4: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x3360c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
    // 0x3360c8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3360c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3360cc: 0x34843000  ori         $a0, $a0, 0x3000
    ctx->pc = 0x3360ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12288);
    // 0x3360d0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3360d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3360d4: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x3360d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x3360d8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3360d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3360dc: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x3360dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_3360e0:
    // 0x3360e0: 0x70642389  pcpyld      $a0, $v1, $a0
    ctx->pc = 0x3360e0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3360e4: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x3360e4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x3360e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3360e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3360ec: 0x0  nop
    ctx->pc = 0x3360ecu;
    // NOP
    // 0x3360f0: 0x0  nop
    ctx->pc = 0x3360f0u;
    // NOP
    // 0x3360f4: 0x0  nop
    ctx->pc = 0x3360f4u;
    // NOP
    // 0x3360f8: 0x441fff9  bgez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3360F8u;
    {
        const bool branch_taken_0x3360f8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3360FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3360F8u;
        // 0x3360fc: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3360f8) {
            ctx->pc = 0x3360E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3360e0;
        }
    }
    ctx->pc = 0x336100u;
    // 0x336100: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x336100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x336104: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x336104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336108: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x336108u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x33610c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x33610cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x336110: 0x3e00008  jr          $ra
    ctx->pc = 0x336110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336118u;
}
