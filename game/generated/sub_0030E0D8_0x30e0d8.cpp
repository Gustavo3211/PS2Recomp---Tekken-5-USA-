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

// Function: sub_0030E0D8
// Address: 0x30e0d8 - 0x30e180
void sub_0030E0D8_0x30e0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E0D8_0x30e0d8");
#endif

    switch (ctx->pc) {
        case 0x30e100u: goto label_30e100;
        default: break;
    }

    ctx->pc = 0x30e0d8u;

    // 0x30e0d8: 0x3c071003  lui         $a3, 0x1003
    ctx->pc = 0x30e0d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4099 << 16));
    // 0x30e0dc: 0x240d0005  addiu       $t5, $zero, 0x5
    ctx->pc = 0x30e0dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30e0e0: 0x34e74000  ori         $a3, $a3, 0x4000
    ctx->pc = 0x30e0e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x30e0e4: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x30e0e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30e0e8: 0x240b004c  addiu       $t3, $zero, 0x4C
    ctx->pc = 0x30e0e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x30e0ec: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x30e0ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30e0f0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x30e0f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30e0f4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x30e0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30e0f8: 0x24884580  addiu       $t0, $a0, 0x4580
    ctx->pc = 0x30e0f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 17792));
    // 0x30e0fc: 0x0  nop
    ctx->pc = 0x30e0fcu;
    // NOP
label_30e100:
    // 0x30e100: 0x24851270  addiu       $a1, $a0, 0x1270
    ctx->pc = 0x30e100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4720));
    // 0x30e104: 0xfcac0008  sd          $t4, 0x8($a1)
    ctx->pc = 0x30e104u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 12));
    // 0x30e108: 0xacad0000  sw          $t5, 0x0($a1)
    ctx->pc = 0x30e108u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 13));
    // 0x30e10c: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x30e10cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
    // 0x30e110: 0x24851280  addiu       $a1, $a0, 0x1280
    ctx->pc = 0x30e110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4736));
    // 0x30e114: 0xfca00000  sd          $zero, 0x0($a1)
    ctx->pc = 0x30e114u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 0));
    // 0x30e118: 0xfcab0008  sd          $t3, 0x8($a1)
    ctx->pc = 0x30e118u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 11));
    // 0x30e11c: 0x24851290  addiu       $a1, $a0, 0x1290
    ctx->pc = 0x30e11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4752));
    // 0x30e120: 0xfcaa0008  sd          $t2, 0x8($a1)
    ctx->pc = 0x30e120u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 10));
    // 0x30e124: 0x8f82c544  lw          $v0, -0x3ABC($gp)
    ctx->pc = 0x30e124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952260)));
    // 0x30e128: 0x8f83c548  lw          $v1, -0x3AB8($gp)
    ctx->pc = 0x30e128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952264)));
    // 0x30e12c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30e12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30e130: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30e130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30e134: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30e134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30e138: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x30e138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30e13c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30e13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30e140: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x30e140u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x30e144: 0x248512a0  addiu       $a1, $a0, 0x12A0
    ctx->pc = 0x30e144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4768));
    // 0x30e148: 0xfca00000  sd          $zero, 0x0($a1)
    ctx->pc = 0x30e148u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 0));
    // 0x30e14c: 0xfca90008  sd          $t1, 0x8($a1)
    ctx->pc = 0x30e14cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 9));
    // 0x30e150: 0x248512b0  addiu       $a1, $a0, 0x12B0
    ctx->pc = 0x30e150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4784));
    // 0x30e154: 0xfca00000  sd          $zero, 0x0($a1)
    ctx->pc = 0x30e154u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 0));
    // 0x30e158: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x30e158u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x30e15c: 0x248512c0  addiu       $a1, $a0, 0x12C0
    ctx->pc = 0x30e15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4800));
    // 0x30e160: 0x248422c0  addiu       $a0, $a0, 0x22C0
    ctx->pc = 0x30e160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8896));
    // 0x30e164: 0xfca00000  sd          $zero, 0x0($a1)
    ctx->pc = 0x30e164u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 0));
    // 0x30e168: 0x88102a  slt         $v0, $a0, $t0
    ctx->pc = 0x30e168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x30e16c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x30E16Cu;
    {
        const bool branch_taken_0x30e16c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30E170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E16Cu;
        // 0x30e170: 0xfca60008  sd          $a2, 0x8($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e16c) {
            ctx->pc = 0x30E100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e100;
        }
    }
    ctx->pc = 0x30E174u;
    // 0x30e174: 0x3e00008  jr          $ra
    ctx->pc = 0x30E174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E17Cu;
    // 0x30e17c: 0x0  nop
    ctx->pc = 0x30e17cu;
    // NOP
    ctx->pc = 0x30e180u;
}
