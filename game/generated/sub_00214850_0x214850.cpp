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

// Function: sub_00214850
// Address: 0x214850 - 0x2148a8
void sub_00214850_0x214850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214850_0x214850");
#endif

    ctx->pc = 0x214850u;

    // 0x214850: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x214850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214854: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x214854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x214858: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x214858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21485c: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x21485Cu;
    {
        const bool branch_taken_0x21485c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x214860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21485Cu;
        // 0x214860: 0x24a6000c  addiu       $a2, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21485c) {
            ctx->pc = 0x21489Cu;
            goto label_21489c;
        }
    }
    ctx->pc = 0x214864u;
    // 0x214864: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x214864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x214868: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x214868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x21486c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x21486cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x214870: 0xc21821  addu        $v1, $a2, $v0
    ctx->pc = 0x214870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x214874: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x214874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x214878: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x214878u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21487c: 0xa044000d  sb          $a0, 0xD($v0)
    ctx->pc = 0x21487cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 13), (uint8_t)GPR_U32(ctx, 4));
    // 0x214880: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x214880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x214884: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x214884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x214888: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x214888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x21488c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x21488cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x214890: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x214890u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214894: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x214894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x214898: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x214898u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_21489c:
    // 0x21489c: 0x3e00008  jr          $ra
    ctx->pc = 0x21489Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21489Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2148A4u;
    // 0x2148a4: 0x0  nop
    ctx->pc = 0x2148a4u;
    // NOP
    ctx->pc = 0x2148a8u;
}
