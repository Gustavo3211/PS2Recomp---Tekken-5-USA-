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

// Function: sub_0030CC58
// Address: 0x30cc58 - 0x30cc80
void sub_0030CC58_0x30cc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CC58_0x30cc58");
#endif

    ctx->pc = 0x30cc58u;

    // 0x30cc58: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x30CC58u;
    {
        const bool branch_taken_0x30cc58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC58u;
        // 0x30cc5c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cc58) {
            ctx->pc = 0x30CC70u;
            goto label_30cc70;
        }
    }
    ctx->pc = 0x30CC60u;
    // 0x30cc60: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x30cc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x30cc64: 0x3e00008  jr          $ra
    ctx->pc = 0x30CC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC64u;
        // 0x30cc68: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CC6Cu;
    // 0x30cc6c: 0x0  nop
    ctx->pc = 0x30cc6cu;
    // NOP
label_30cc70:
    // 0x30cc70: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x30cc70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x30cc74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x30cc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x30cc78: 0x3e00008  jr          $ra
    ctx->pc = 0x30CC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CC78u;
        // 0x30cc7c: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CC80u;
}
