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

// Function: sub_00340CE8
// Address: 0x340ce8 - 0x340d20
void sub_00340CE8_0x340ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340CE8_0x340ce8");
#endif

    ctx->pc = 0x340ce8u;

    // 0x340ce8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x340ce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340cec: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x340cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x340cf0: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x340cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x340cf4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x340CF4u;
    {
        const bool branch_taken_0x340cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x340CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340CF4u;
        // 0x340cf8: 0x2402ff7f  addiu       $v0, $zero, -0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340cf4) {
            ctx->pc = 0x340D14u;
            goto label_340d14;
        }
    }
    ctx->pc = 0x340CFCu;
    // 0x340cfc: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x340cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x340d00: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x340d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x340d04: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x340d04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x340d08: 0x8c830480  lw          $v1, 0x480($a0)
    ctx->pc = 0x340d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1152)));
    // 0x340d0c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x340d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x340d10: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x340d10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_340d14:
    // 0x340d14: 0x3e00008  jr          $ra
    ctx->pc = 0x340D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340D1Cu;
    // 0x340d1c: 0x0  nop
    ctx->pc = 0x340d1cu;
    // NOP
    ctx->pc = 0x340d20u;
}
