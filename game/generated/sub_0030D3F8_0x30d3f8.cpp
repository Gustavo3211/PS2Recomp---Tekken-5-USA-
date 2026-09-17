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

// Function: sub_0030D3F8
// Address: 0x30d3f8 - 0x30d458
void sub_0030D3F8_0x30d3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D3F8_0x30d3f8");
#endif

    switch (ctx->pc) {
        case 0x30d418u: goto label_30d418;
        default: break;
    }

    ctx->pc = 0x30d3f8u;

    // 0x30d3f8: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x30d3f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30d3fc: 0x240a000e  addiu       $t2, $zero, 0xE
    ctx->pc = 0x30d3fcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30d400: 0x24090047  addiu       $t1, $zero, 0x47
    ctx->pc = 0x30d400u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x30d404: 0x3c080003  lui         $t0, 0x3
    ctx->pc = 0x30d404u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)3 << 16));
    // 0x30d408: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x30d408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d40c: 0x3406ff00  ori         $a2, $zero, 0xFF00
    ctx->pc = 0x30d40cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x30d410: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x30d410u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x30d414: 0x24854580  addiu       $a1, $a0, 0x4580
    ctx->pc = 0x30d414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 17792));
label_30d418:
    // 0x30d418: 0x24830390  addiu       $v1, $a0, 0x390
    ctx->pc = 0x30d418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 912));
    // 0x30d41c: 0xfc6a0008  sd          $t2, 0x8($v1)
    ctx->pc = 0x30d41cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 10));
    // 0x30d420: 0xac6b0000  sw          $t3, 0x0($v1)
    ctx->pc = 0x30d420u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
    // 0x30d424: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30d424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30d428: 0x248303a0  addiu       $v1, $a0, 0x3A0
    ctx->pc = 0x30d428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
    // 0x30d42c: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x30d42cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x30d430: 0xfc690008  sd          $t1, 0x8($v1)
    ctx->pc = 0x30d430u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 9));
    // 0x30d434: 0x248303b0  addiu       $v1, $a0, 0x3B0
    ctx->pc = 0x30d434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 944));
    // 0x30d438: 0x248422c0  addiu       $a0, $a0, 0x22C0
    ctx->pc = 0x30d438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8896));
    // 0x30d43c: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x30d43cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x30d440: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x30d440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x30d444: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x30D444u;
    {
        const bool branch_taken_0x30d444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D444u;
        // 0x30d448: 0xfc670008  sd          $a3, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d444) {
            ctx->pc = 0x30D418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d418;
        }
    }
    ctx->pc = 0x30D44Cu;
    // 0x30d44c: 0x3e00008  jr          $ra
    ctx->pc = 0x30D44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D454u;
    // 0x30d454: 0x0  nop
    ctx->pc = 0x30d454u;
    // NOP
    ctx->pc = 0x30d458u;
}
