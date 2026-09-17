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

// Function: sub_0022C378
// Address: 0x22c378 - 0x22c3e8
void sub_0022C378_0x22c378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022C378_0x22c378");
#endif

    switch (ctx->pc) {
        case 0x22c388u: goto label_22c388;
        case 0x22c398u: goto label_22c398;
        case 0x22c3a8u: goto label_22c3a8;
        default: break;
    }

    ctx->pc = 0x22c378u;

    // 0x22c378: 0x8c890058  lw          $t1, 0x58($a0)
    ctx->pc = 0x22c378u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x22c37c: 0x19200017  blez        $t1, . + 4 + (0x17 << 2)
    ctx->pc = 0x22C37Cu;
    {
        const bool branch_taken_0x22c37c = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x22C380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C37Cu;
        // 0x22c380: 0x8c88005c  lw          $t0, 0x5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c37c) {
            ctx->pc = 0x22C3DCu;
            goto label_22c3dc;
        }
    }
    ctx->pc = 0x22C384u;
    // 0x22c384: 0x0  nop
    ctx->pc = 0x22c384u;
    // NOP
label_22c388:
    // 0x22c388: 0x8d070004  lw          $a3, 0x4($t0)
    ctx->pc = 0x22c388u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x22c38c: 0x18e00010  blez        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x22C38Cu;
    {
        const bool branch_taken_0x22c38c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x22C390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C38Cu;
        // 0x22c390: 0x2506000c  addiu       $a2, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c38c) {
            ctx->pc = 0x22C3D0u;
            goto label_22c3d0;
        }
    }
    ctx->pc = 0x22C394u;
    // 0x22c394: 0x0  nop
    ctx->pc = 0x22c394u;
    // NOP
label_22c398:
    // 0x22c398: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x22c398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x22c39c: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x22C39Cu;
    {
        const bool branch_taken_0x22c39c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x22C3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C39Cu;
        // 0x22c3a0: 0x24c40008  addiu       $a0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c39c) {
            ctx->pc = 0x22C3C4u;
            goto label_22c3c4;
        }
    }
    ctx->pc = 0x22C3A4u;
    // 0x22c3a4: 0x0  nop
    ctx->pc = 0x22c3a4u;
    // NOP
label_22c3a8:
    // 0x22c3a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x22c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x22c3ac: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x22c3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x22c3b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x22c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x22c3b4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x22c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x22c3b8: 0x0  nop
    ctx->pc = 0x22c3b8u;
    // NOP
    // 0x22c3bc: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x22C3BCu;
    {
        const bool branch_taken_0x22c3bc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x22C3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3BCu;
        // 0x22c3c0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c3bc) {
            ctx->pc = 0x22C3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c3a8;
        }
    }
    ctx->pc = 0x22C3C4u;
label_22c3c4:
    // 0x22c3c4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x22c3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x22c3c8: 0x1ce0fff3  bgtz        $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x22C3C8u;
    {
        const bool branch_taken_0x22c3c8 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x22C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3C8u;
        // 0x22c3cc: 0x8cc60004  lw          $a2, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c3c8) {
            ctx->pc = 0x22C398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c398;
        }
    }
    ctx->pc = 0x22C3D0u;
label_22c3d0:
    // 0x22c3d0: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x22c3d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x22c3d4: 0x1d20ffec  bgtz        $t1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x22C3D4u;
    {
        const bool branch_taken_0x22c3d4 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x22C3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22C3D4u;
        // 0x22c3d8: 0x8d080008  lw          $t0, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22c3d4) {
            ctx->pc = 0x22C388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22c388;
        }
    }
    ctx->pc = 0x22C3DCu;
label_22c3dc:
    // 0x22c3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x22C3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22C3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22C3E4u;
    // 0x22c3e4: 0x0  nop
    ctx->pc = 0x22c3e4u;
    // NOP
    ctx->pc = 0x22c3e8u;
}
