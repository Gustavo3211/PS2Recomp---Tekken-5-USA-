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

// Function: sub_00110BC8
// Address: 0x110bc8 - 0x110c00
void sub_00110BC8_0x110bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110BC8_0x110bc8");
#endif

    switch (ctx->pc) {
        case 0x110bd0u: goto label_110bd0;
        default: break;
    }

    ctx->pc = 0x110bc8u;

    // 0x110bc8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x110bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x110bcc: 0x3463f130  ori         $v1, $v1, 0xF130
    ctx->pc = 0x110bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61744);
label_110bd0:
    // 0x110bd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x110bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000f130
    // 0x110bd4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x110bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x110bd8: 0x0  nop
    ctx->pc = 0x110bd8u;
    // NOP
    // 0x110bdc: 0x0  nop
    ctx->pc = 0x110bdcu;
    // NOP
    // 0x110be0: 0x0  nop
    ctx->pc = 0x110be0u;
    // NOP
    // 0x110be4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x110BE4u;
    {
        const bool branch_taken_0x110be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110be4) {
            ctx->pc = 0x110BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_110bd0;
        }
    }
    ctx->pc = 0x110BECu;
    // 0x110bec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x110becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x110bf0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x110bf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110bf4: 0x3463f180  ori         $v1, $v1, 0xF180
    ctx->pc = 0x110bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61824);
    // 0x110bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x110BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110BF8u;
        // 0x110bfc: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110C00u;
}
