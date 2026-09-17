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

// Function: sub_002F7758
// Address: 0x2f7758 - 0x2f77b8
void sub_002F7758_0x2f7758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7758_0x2f7758");
#endif

    switch (ctx->pc) {
        case 0x2f7780u: goto label_2f7780;
        default: break;
    }

    ctx->pc = 0x2f7758u;

    // 0x2f7758: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x2f7758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x2f775c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2f775cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2f7760: 0x424b8  dsll        $a0, $a0, 18
    ctx->pc = 0x2f7760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 18);
    // 0x2f7764: 0x8c43f668  lw          $v1, -0x998($v0)
    ctx->pc = 0x2f7764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964840)));
    // 0x2f7768: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2f7768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f776c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f776cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7770: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x2f7770u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f7774: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x2f7774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2f7778: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2f7778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2f777c: 0x0  nop
    ctx->pc = 0x2f777cu;
    // NOP
label_2f7780:
    // 0x2f7780: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7780u;
    {
        const bool branch_taken_0x2f7780 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2F7784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7780u;
        // 0x2f7784: 0xa31016  dsrlv       $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> (GPR_U32(ctx, 5) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7780) {
            ctx->pc = 0x2F7790u;
            goto label_2f7790;
        }
    }
    ctx->pc = 0x2F7788u;
    // 0x2f7788: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F7788u;
    {
        const bool branch_taken_0x2f7788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7788u;
        // 0x2f778c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7788) {
            ctx->pc = 0x2F77ACu;
            goto label_2f77ac;
        }
    }
    ctx->pc = 0x2F7790u;
label_2f7790:
    // 0x2f7790: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2f7790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2f7794: 0x0  nop
    ctx->pc = 0x2f7794u;
    // NOP
    // 0x2f7798: 0x0  nop
    ctx->pc = 0x2f7798u;
    // NOP
    // 0x2f779c: 0x0  nop
    ctx->pc = 0x2f779cu;
    // NOP
    // 0x2f77a0: 0x0  nop
    ctx->pc = 0x2f77a0u;
    // NOP
    // 0x2f77a4: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x2F77A4u;
    {
        const bool branch_taken_0x2f77a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f77a4) {
            ctx->pc = 0x2F77A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F77A4u;
            // 0x2f77a8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7780;
        }
    }
    ctx->pc = 0x2F77ACu;
label_2f77ac:
    // 0x2f77ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2F77ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F77B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F77ACu;
        // 0x2f77b0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F77ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F77B4u;
    // 0x2f77b4: 0x0  nop
    ctx->pc = 0x2f77b4u;
    // NOP
    ctx->pc = 0x2f77b8u;
}
