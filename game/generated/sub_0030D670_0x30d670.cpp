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

// Function: sub_0030D670
// Address: 0x30d670 - 0x30d718
void sub_0030D670_0x30d670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D670_0x30d670");
#endif

    switch (ctx->pc) {
        case 0x30d698u: goto label_30d698;
        default: break;
    }

    ctx->pc = 0x30d670u;

    // 0x30d670: 0x3c071003  lui         $a3, 0x1003
    ctx->pc = 0x30d670u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4099 << 16));
    // 0x30d674: 0x240d0005  addiu       $t5, $zero, 0x5
    ctx->pc = 0x30d674u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30d678: 0x34e74000  ori         $a3, $a3, 0x4000
    ctx->pc = 0x30d678u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)16384);
    // 0x30d67c: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x30d67cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30d680: 0x240b004c  addiu       $t3, $zero, 0x4C
    ctx->pc = 0x30d680u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x30d684: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x30d684u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x30d688: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x30d688u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30d68c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x30d68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30d690: 0x24884580  addiu       $t0, $a0, 0x4580
    ctx->pc = 0x30d690u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 17792));
    // 0x30d694: 0x0  nop
    ctx->pc = 0x30d694u;
    // NOP
label_30d698:
    // 0x30d698: 0x24850be0  addiu       $a1, $a0, 0xBE0
    ctx->pc = 0x30d698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3040));
    // 0x30d69c: 0xfcac0008  sd          $t4, 0x8($a1)
    ctx->pc = 0x30d69cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 12));
    // 0x30d6a0: 0xacad0000  sw          $t5, 0x0($a1)
    ctx->pc = 0x30d6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 13));
    // 0x30d6a4: 0xaca70004  sw          $a3, 0x4($a1)
    ctx->pc = 0x30d6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
    // 0x30d6a8: 0x24850bf0  addiu       $a1, $a0, 0xBF0
    ctx->pc = 0x30d6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3056));
    // 0x30d6ac: 0xfca00000  sd          $zero, 0x0($a1)
    ctx->pc = 0x30d6acu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 0));
    // 0x30d6b0: 0xfcab0008  sd          $t3, 0x8($a1)
    ctx->pc = 0x30d6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 11));
    // 0x30d6b4: 0x24850c00  addiu       $a1, $a0, 0xC00
    ctx->pc = 0x30d6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3072));
    // 0x30d6b8: 0xfcaa0008  sd          $t2, 0x8($a1)
    ctx->pc = 0x30d6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 10));
    // 0x30d6bc: 0x8f82c544  lw          $v0, -0x3ABC($gp)
    ctx->pc = 0x30d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952260)));
    // 0x30d6c0: 0x8f83c548  lw          $v1, -0x3AB8($gp)
    ctx->pc = 0x30d6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952264)));
    // 0x30d6c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x30d6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30d6c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x30d6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x30d6cc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x30d6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30d6d0: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x30d6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x30d6d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30d6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30d6d8: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x30d6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x30d6dc: 0x24850c10  addiu       $a1, $a0, 0xC10
    ctx->pc = 0x30d6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3088));
    // 0x30d6e0: 0xfca00000  sd          $zero, 0x0($a1)
    ctx->pc = 0x30d6e0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 0));
    // 0x30d6e4: 0xfca90008  sd          $t1, 0x8($a1)
    ctx->pc = 0x30d6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 9));
    // 0x30d6e8: 0x24850c20  addiu       $a1, $a0, 0xC20
    ctx->pc = 0x30d6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3104));
    // 0x30d6ec: 0xfca00000  sd          $zero, 0x0($a1)
    ctx->pc = 0x30d6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 0));
    // 0x30d6f0: 0xfca60008  sd          $a2, 0x8($a1)
    ctx->pc = 0x30d6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
    // 0x30d6f4: 0x24850c30  addiu       $a1, $a0, 0xC30
    ctx->pc = 0x30d6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3120));
    // 0x30d6f8: 0x248422c0  addiu       $a0, $a0, 0x22C0
    ctx->pc = 0x30d6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8896));
    // 0x30d6fc: 0xfca00000  sd          $zero, 0x0($a1)
    ctx->pc = 0x30d6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 0));
    // 0x30d700: 0x88102a  slt         $v0, $a0, $t0
    ctx->pc = 0x30d700u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x30d704: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x30D704u;
    {
        const bool branch_taken_0x30d704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D704u;
        // 0x30d708: 0xfca60008  sd          $a2, 0x8($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d704) {
            ctx->pc = 0x30D698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d698;
        }
    }
    ctx->pc = 0x30D70Cu;
    // 0x30d70c: 0x3e00008  jr          $ra
    ctx->pc = 0x30D70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D714u;
    // 0x30d714: 0x0  nop
    ctx->pc = 0x30d714u;
    // NOP
    ctx->pc = 0x30d718u;
}
