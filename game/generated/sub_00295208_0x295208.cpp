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

// Function: sub_00295208
// Address: 0x295208 - 0x295240
void sub_00295208_0x295208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295208_0x295208");
#endif

    ctx->pc = 0x295208u;

    // 0x295208: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x295208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29520c: 0x2ca50005  sltiu       $a1, $a1, 0x5
    ctx->pc = 0x29520cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x295210: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x295210u;
    {
        const bool branch_taken_0x295210 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x295214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295210u;
        // 0x295214: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295210) {
            ctx->pc = 0x295234u;
            goto label_295234;
        }
    }
    ctx->pc = 0x295218u;
    // 0x295218: 0x8c42015c  lw          $v0, 0x15C($v0)
    ctx->pc = 0x295218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
    // 0x29521c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29521Cu;
    {
        const bool branch_taken_0x29521c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x295220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29521Cu;
        // 0x295220: 0x2403efff  addiu       $v1, $zero, -0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29521c) {
            ctx->pc = 0x295234u;
            goto label_295234;
        }
    }
    ctx->pc = 0x295224u;
    // 0x295224: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x295224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x295228: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x295228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x29522c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29522cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x295230: 0xac820080  sw          $v0, 0x80($a0)
    ctx->pc = 0x295230u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
label_295234:
    // 0x295234: 0x3e00008  jr          $ra
    ctx->pc = 0x295234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29523Cu;
    // 0x29523c: 0x0  nop
    ctx->pc = 0x29523cu;
    // NOP
    ctx->pc = 0x295240u;
}
