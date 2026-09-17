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

// Function: sub_0030E180
// Address: 0x30e180 - 0x30e230
void sub_0030E180_0x30e180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030E180_0x30e180");
#endif

    switch (ctx->pc) {
        case 0x30e1b0u: goto label_30e1b0;
        case 0x30e1f8u: goto label_30e1f8;
        default: break;
    }

    ctx->pc = 0x30e180u;

    // 0x30e180: 0x240e0002  addiu       $t6, $zero, 0x2
    ctx->pc = 0x30e180u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x30e184: 0x3c0d1000  lui         $t5, 0x1000
    ctx->pc = 0x30e184u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)4096 << 16));
    // 0x30e188: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x30e188u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30e18c: 0x240b0050  addiu       $t3, $zero, 0x50
    ctx->pc = 0x30e18cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x30e190: 0x340ad808  ori         $t2, $zero, 0xD808
    ctx->pc = 0x30e190u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55304);
    // 0x30e194: 0xa537c  dsll32      $t2, $t2, 13
    ctx->pc = 0x30e194u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 13));
    // 0x30e198: 0x24090053  addiu       $t1, $zero, 0x53
    ctx->pc = 0x30e198u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x30e19c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x30e19cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x30e1a0: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x30e1a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x30e1a4: 0x24864580  addiu       $a2, $a0, 0x4580
    ctx->pc = 0x30e1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 17792));
    // 0x30e1a8: 0x248312f0  addiu       $v1, $a0, 0x12F0
    ctx->pc = 0x30e1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4848));
    // 0x30e1ac: 0x0  nop
    ctx->pc = 0x30e1acu;
    // NOP
label_30e1b0:
    // 0x30e1b0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x30e1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x30e1b4: 0xfc6c0008  sd          $t4, 0x8($v1)
    ctx->pc = 0x30e1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 12));
    // 0x30e1b8: 0xac6e0000  sw          $t6, 0x0($v1)
    ctx->pc = 0x30e1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 14));
    // 0x30e1bc: 0xac6d0004  sw          $t5, 0x4($v1)
    ctx->pc = 0x30e1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 13));
    // 0x30e1c0: 0x24831300  addiu       $v1, $a0, 0x1300
    ctx->pc = 0x30e1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
    // 0x30e1c4: 0xfc6b0008  sd          $t3, 0x8($v1)
    ctx->pc = 0x30e1c4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 11));
    // 0x30e1c8: 0x8f82cb90  lw          $v0, -0x3470($gp)
    ctx->pc = 0x30e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294953872)));
    // 0x30e1cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x30e1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30e1d0: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x30e1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x30e1d4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x30e1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x30e1d8: 0x24831310  addiu       $v1, $a0, 0x1310
    ctx->pc = 0x30e1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4880));
    // 0x30e1dc: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x30e1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x30e1e0: 0xfc690008  sd          $t1, 0x8($v1)
    ctx->pc = 0x30e1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 9));
    // 0x30e1e4: 0x24831320  addiu       $v1, $a0, 0x1320
    ctx->pc = 0x30e1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4896));
    // 0x30e1e8: 0xfc600008  sd          $zero, 0x8($v1)
    ctx->pc = 0x30e1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 0));
    // 0x30e1ec: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x30e1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
    // 0x30e1f0: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x30e1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
    // 0x30e1f4: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x30e1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
label_30e1f8:
    // 0x30e1f8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x30e1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x30e1fc: 0xfc600008  sd          $zero, 0x8($v1)
    ctx->pc = 0x30e1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 0));
    // 0x30e200: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x30e200u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    // 0x30e204: 0x0  nop
    ctx->pc = 0x30e204u;
    // NOP
    // 0x30e208: 0x0  nop
    ctx->pc = 0x30e208u;
    // NOP
    // 0x30e20c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x30E20Cu;
    {
        const bool branch_taken_0x30e20c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x30E210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E20Cu;
        // 0x30e210: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e20c) {
            ctx->pc = 0x30E1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e1f8;
        }
    }
    ctx->pc = 0x30E214u;
    // 0x30e214: 0x248422c0  addiu       $a0, $a0, 0x22C0
    ctx->pc = 0x30e214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8896));
    // 0x30e218: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x30e218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x30e21c: 0x5440ffe4  bnel        $v0, $zero, . + 4 + (-0x1C << 2)
    ctx->pc = 0x30E21Cu;
    {
        const bool branch_taken_0x30e21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30e21c) {
            ctx->pc = 0x30E220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30E21Cu;
            // 0x30e220: 0x248312f0  addiu       $v1, $a0, 0x12F0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4848));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30E1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30e1b0;
        }
    }
    ctx->pc = 0x30E224u;
    // 0x30e224: 0x3e00008  jr          $ra
    ctx->pc = 0x30E224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E22Cu;
    // 0x30e22c: 0x0  nop
    ctx->pc = 0x30e22cu;
    // NOP
    ctx->pc = 0x30e230u;
}
