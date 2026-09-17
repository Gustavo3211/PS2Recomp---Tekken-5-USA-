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

// Function: sub_0024C490
// Address: 0x24c490 - 0x24c4c0
void sub_0024C490_0x24c490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C490_0x24c490");
#endif

    ctx->pc = 0x24c490u;

    // 0x24c490: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x24c490u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c494: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x24c494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x24c498: 0x80e60023  lb          $a2, 0x23($a3)
    ctx->pc = 0x24c498u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 35)));
    // 0x24c49c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24c4a0: 0x8c8388a8  lw          $v1, -0x7758($a0)
    ctx->pc = 0x24c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3A88A8u));
    // 0x24c4a4: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x24c4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x24c4a8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x24c4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x24c4ac: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x24C4ACu;
    {
        const bool branch_taken_0x24c4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c4ac) {
            ctx->pc = 0x24C4B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C4ACu;
            // 0x24c4b0: 0xace50010  sw          $a1, 0x10($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C4B4u;
            goto label_24c4b4;
        }
    }
    ctx->pc = 0x24C4B4u;
label_24c4b4:
    // 0x24c4b4: 0x3e00008  jr          $ra
    ctx->pc = 0x24C4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C4B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C4BCu;
    // 0x24c4bc: 0x0  nop
    ctx->pc = 0x24c4bcu;
    // NOP
    ctx->pc = 0x24c4c0u;
}
