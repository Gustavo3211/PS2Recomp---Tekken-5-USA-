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

// Function: sub_0030DE68
// Address: 0x30de68 - 0x30dec8
void sub_0030DE68_0x30de68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030DE68_0x30de68");
#endif

    switch (ctx->pc) {
        case 0x30de88u: goto label_30de88;
        default: break;
    }

    ctx->pc = 0x30de68u;

    // 0x30de68: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x30de68u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30de6c: 0x240a000e  addiu       $t2, $zero, 0xE
    ctx->pc = 0x30de6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30de70: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x30de70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30de74: 0x3408ff00  ori         $t0, $zero, 0xFF00
    ctx->pc = 0x30de74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x30de78: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x30de78u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x30de7c: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x30de7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x30de80: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x30de80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x30de84: 0x24854580  addiu       $a1, $a0, 0x4580
    ctx->pc = 0x30de84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 17792));
label_30de88:
    // 0x30de88: 0x24830ed0  addiu       $v1, $a0, 0xED0
    ctx->pc = 0x30de88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3792));
    // 0x30de8c: 0xfc6a0008  sd          $t2, 0x8($v1)
    ctx->pc = 0x30de8cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 10));
    // 0x30de90: 0xac6b0000  sw          $t3, 0x0($v1)
    ctx->pc = 0x30de90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
    // 0x30de94: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x30de94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x30de98: 0x24830ee0  addiu       $v1, $a0, 0xEE0
    ctx->pc = 0x30de98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3808));
    // 0x30de9c: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x30de9cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x30dea0: 0xfc690008  sd          $t1, 0x8($v1)
    ctx->pc = 0x30dea0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 9));
    // 0x30dea4: 0x24830ef0  addiu       $v1, $a0, 0xEF0
    ctx->pc = 0x30dea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3824));
    // 0x30dea8: 0x248422c0  addiu       $a0, $a0, 0x22C0
    ctx->pc = 0x30dea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8896));
    // 0x30deac: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x30deacu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x30deb0: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x30deb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x30deb4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x30DEB4u;
    {
        const bool branch_taken_0x30deb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30DEB4u;
        // 0x30deb8: 0xfc670008  sd          $a3, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30deb4) {
            ctx->pc = 0x30DE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30de88;
        }
    }
    ctx->pc = 0x30DEBCu;
    // 0x30debc: 0x3e00008  jr          $ra
    ctx->pc = 0x30DEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30DEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30DEC4u;
    // 0x30dec4: 0x0  nop
    ctx->pc = 0x30dec4u;
    // NOP
    ctx->pc = 0x30dec8u;
}
