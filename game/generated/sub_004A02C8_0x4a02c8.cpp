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

// Function: sub_004A02C8
// Address: 0x4a02c8 - 0x4a0328
void sub_004A02C8_0x4a02c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A02C8_0x4a02c8");
#endif

    ctx->pc = 0x4a02c8u;

    // 0x4a02c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4a02c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4a02cc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4a02ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a02d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a02d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4a02d4: 0x84e201c2  lh          $v0, 0x1C2($a3)
    ctx->pc = 0x4a02d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 450)));
    // 0x4a02d8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4A02D8u;
    {
        const bool branch_taken_0x4a02d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A02DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A02D8u;
        // 0x4a02dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a02d8) {
            ctx->pc = 0x4A0320u;
            goto label_4a0320;
        }
    }
    ctx->pc = 0x4A02E0u;
    // 0x4a02e0: 0x3c05007f  lui         $a1, 0x7F
    ctx->pc = 0x4a02e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
    // 0x4a02e4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x4a02e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x4a02e8: 0x24a50be8  addiu       $a1, $a1, 0xBE8
    ctx->pc = 0x4a02e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3048));
    // 0x4a02ec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a02ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0BE8u));
    // 0x4a02f0: 0xa44301c2  sh          $v1, 0x1C2($v0)
    ctx->pc = 0x4a02f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 450), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a02f4: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x4a02f4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x7F0BE8u));
    // 0x4a02f8: 0x94e201be  lhu         $v0, 0x1BE($a3)
    ctx->pc = 0x4a02f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 446)));
    // 0x4a02fc: 0xa4c201c0  sh          $v0, 0x1C0($a2)
    ctx->pc = 0x4a02fcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 448), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a0300: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x4a0300u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7F0BE8u));
    // 0x4a0304: 0xa4600148  sh          $zero, 0x148($v1)
    ctx->pc = 0x4a0304u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 328), (uint16_t)GPR_U32(ctx, 0));
    // 0x4a0308: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4a0308u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7F0BE8u));
    // 0x4a030c: 0x944301c6  lhu         $v1, 0x1C6($v0)
    ctx->pc = 0x4a030cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 454)));
    // 0x4a0310: 0xa4e301c6  sh          $v1, 0x1C6($a3)
    ctx->pc = 0x4a0310u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 454), (uint16_t)GPR_U32(ctx, 3));
    // 0x4a0314: 0x81280a0  j           func_4A0280
    ctx->pc = 0x4A0314u;
    ctx->pc = 0x4A0318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A0314u;
    // 0x4a0318: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A0280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A0280u, 0x4A0314u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x4A031Cu;
    // 0x4a031c: 0x0  nop
    ctx->pc = 0x4a031cu;
    // NOP
label_4a0320:
    // 0x4a0320: 0x3e00008  jr          $ra
    ctx->pc = 0x4A0320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A0324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A0320u;
        // 0x4a0324: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A0320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A0328u;
}
