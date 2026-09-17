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

// Function: sub_0036F408
// Address: 0x36f408 - 0x36f440
void sub_0036F408_0x36f408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F408_0x36f408");
#endif

    ctx->pc = 0x36f408u;

    // 0x36f408: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36f408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36f40c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36f40cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36f410: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36f410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36f414: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x36f414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x36f418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36f418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36f41c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x36F41Cu;
    {
        const bool branch_taken_0x36f41c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x36F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F41Cu;
        // 0x36f420: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f41c) {
            ctx->pc = 0x36F430u;
            goto label_36f430;
        }
    }
    ctx->pc = 0x36F424u;
    // 0x36f424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36f424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f428: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x36F428u;
    ctx->pc = 0x36F42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F428u;
    // 0x36f42c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x36F430u;
label_36f430:
    // 0x36f430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36f430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f434: 0x3e00008  jr          $ra
    ctx->pc = 0x36F434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F434u;
        // 0x36f438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F43Cu;
    // 0x36f43c: 0x0  nop
    ctx->pc = 0x36f43cu;
    // NOP
    ctx->pc = 0x36f440u;
}
