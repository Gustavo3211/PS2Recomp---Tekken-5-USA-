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

// Function: sub_001106E8
// Address: 0x1106e8 - 0x110728
void sub_001106E8_0x1106e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001106E8_0x1106e8");
#endif

    ctx->pc = 0x1106e8u;

    // 0x1106e8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1106e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1106ec: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1106ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1106f0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1106f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1106f4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1106f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1106f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1106f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1106fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1106fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x110700: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x110700u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x110704: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x110704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x110708: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x110708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x11070c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11070Cu;
    {
        const bool branch_taken_0x11070c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x110710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11070Cu;
        // 0x110710: 0xaca40008  sw          $a0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11070c) {
            ctx->pc = 0x11071Cu;
            goto label_11071c;
        }
    }
    ctx->pc = 0x110714u;
    // 0x110714: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x110714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x110718: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x110718u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_11071c:
    // 0x11071c: 0x3e00008  jr          $ra
    ctx->pc = 0x11071Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11071Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110724u;
    // 0x110724: 0x0  nop
    ctx->pc = 0x110724u;
    // NOP
    ctx->pc = 0x110728u;
}
