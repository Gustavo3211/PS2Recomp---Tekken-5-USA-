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

// Function: sub_004A24E8
// Address: 0x4a24e8 - 0x4a2540
void sub_004A24E8_0x4a24e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A24E8_0x4a24e8");
#endif

    ctx->pc = 0x4a24e8u;

    // 0x4a24e8: 0x24850124  addiu       $a1, $a0, 0x124
    ctx->pc = 0x4a24e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    // 0x4a24ec: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x4a24ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x4a24f0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4a24f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a24f4: 0x24870138  addiu       $a3, $a0, 0x138
    ctx->pc = 0x4a24f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 312));
    // 0x4a24f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a24f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a24fc: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x4a24fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x4a2500: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a2500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a2504: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4a2504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4a2508: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x4a2508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x4a250c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4a250cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a2510: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x4a2510u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x4a2514: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x4a2514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x4a2518: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A2518u;
    {
        const bool branch_taken_0x4a2518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2518u;
        // 0x4a251c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2518) {
            ctx->pc = 0x4A2538u;
            goto label_4a2538;
        }
    }
    ctx->pc = 0x4A2520u;
    // 0x4a2520: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x4a2520u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4a2524: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a2524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x4a2528: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x4a2528u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a252c: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x4a252cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a2530: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a2530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4a2534: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x4a2534u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_4a2538:
    // 0x4a2538: 0x3e00008  jr          $ra
    ctx->pc = 0x4A2538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A2538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A2540u;
}
