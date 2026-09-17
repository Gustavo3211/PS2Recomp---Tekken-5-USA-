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

// Function: sub_004A2348
// Address: 0x4a2348 - 0x4a2390
void sub_004A2348_0x4a2348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A2348_0x4a2348");
#endif

    ctx->pc = 0x4a2348u;

    // 0x4a2348: 0x24860124  addiu       $a2, $a0, 0x124
    ctx->pc = 0x4a2348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    // 0x4a234c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x4a234cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x4a2350: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4a2350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a2354: 0x24870138  addiu       $a3, $a0, 0x138
    ctx->pc = 0x4a2354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 312));
    // 0x4a2358: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x4a2358u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a235c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x4a235cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x4a2360: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4a2360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x4a2364: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x4a2364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x4a2368: 0x3464ffff  ori         $a0, $v1, 0xFFFF
    ctx->pc = 0x4a2368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a236c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x4a236cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4a2370: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A2370u;
    {
        const bool branch_taken_0x4a2370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2370u;
        // 0x4a2374: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2370) {
            ctx->pc = 0x4A2384u;
            goto label_4a2384;
        }
    }
    ctx->pc = 0x4A2378u;
    // 0x4a2378: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4a2378u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a237c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4a2380: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4a2380u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
label_4a2384:
    // 0x4a2384: 0x3e00008  jr          $ra
    ctx->pc = 0x4A2384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A2384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A238Cu;
    // 0x4a238c: 0x0  nop
    ctx->pc = 0x4a238cu;
    // NOP
    ctx->pc = 0x4a2390u;
}
