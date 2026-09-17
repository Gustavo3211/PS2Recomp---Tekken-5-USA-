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

// Function: sub_00370D68
// Address: 0x370d68 - 0x370da0
void sub_00370D68_0x370d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370D68_0x370d68");
#endif

    ctx->pc = 0x370d68u;

    // 0x370d68: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x370d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x370d6c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370d6cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370d70: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x370d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x370d74: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x370d74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x370d78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x370d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x370d7c: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x370D7Cu;
    {
        const bool branch_taken_0x370d7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x370D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370D7Cu;
        // 0x370d80: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370d7c) {
            ctx->pc = 0x370D90u;
            goto label_370d90;
        }
    }
    ctx->pc = 0x370D84u;
    // 0x370d84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370d88: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x370D88u;
    ctx->pc = 0x370D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370D88u;
    // 0x370d8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x370D90u;
label_370d90:
    // 0x370d90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x370d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370d94: 0x3e00008  jr          $ra
    ctx->pc = 0x370D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370D94u;
        // 0x370d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370D9Cu;
    // 0x370d9c: 0x0  nop
    ctx->pc = 0x370d9cu;
    // NOP
    ctx->pc = 0x370da0u;
}
