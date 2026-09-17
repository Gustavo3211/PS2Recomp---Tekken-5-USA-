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

// Function: sub_0026C3E0
// Address: 0x26c3e0 - 0x26c418
void sub_0026C3E0_0x26c3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C3E0_0x26c3e0");
#endif

    ctx->pc = 0x26c3e0u;

    // 0x26c3e0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x26c3e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c3e4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x26c3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x26c3e8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x26c3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x26c3ec: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x26c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x26c3f0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x26c3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x26c3f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26C3F4u;
    {
        const bool branch_taken_0x26c3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C3F4u;
        // 0x26c3f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c3f4) {
            ctx->pc = 0x26C40Cu;
            goto label_26c40c;
        }
    }
    ctx->pc = 0x26C3FCu;
    // 0x26c3fc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x26c3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x26c400: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26c400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26c404: 0x3042bfe0  andi        $v0, $v0, 0xBFE0
    ctx->pc = 0x26c404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)49120);
    // 0x26c408: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x26c408u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_26c40c:
    // 0x26c40c: 0x3e00008  jr          $ra
    ctx->pc = 0x26C40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C40Cu;
        // 0x26c410: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C414u;
    // 0x26c414: 0x0  nop
    ctx->pc = 0x26c414u;
    // NOP
    ctx->pc = 0x26c418u;
}
