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

// Function: sub_00214F58
// Address: 0x214f58 - 0x214f90
void sub_00214F58_0x214f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214F58_0x214f58");
#endif

    ctx->pc = 0x214f58u;

    // 0x214f58: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x214f58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x214f5c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x214f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x214f60: 0x2442b708  addiu       $v0, $v0, -0x48F8
    ctx->pc = 0x214f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948616));
    // 0x214f64: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x214f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x214f68: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x214f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x214f6c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x214f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x214f70: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x214f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x214f74: 0x18800004  blez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x214F74u;
    {
        const bool branch_taken_0x214f74 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x214F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214F74u;
        // 0x214f78: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214f74) {
            ctx->pc = 0x214F88u;
            goto label_214f88;
        }
    }
    ctx->pc = 0x214F7Cu;
    // 0x214f7c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x214f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x214f80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x214f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x214f84: 0x9062ffff  lbu         $v0, -0x1($v1)
    ctx->pc = 0x214f84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
label_214f88:
    // 0x214f88: 0x3e00008  jr          $ra
    ctx->pc = 0x214F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214F90u;
}
