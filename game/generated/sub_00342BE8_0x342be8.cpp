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

// Function: sub_00342BE8
// Address: 0x342be8 - 0x342c20
void sub_00342BE8_0x342be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342BE8_0x342be8");
#endif

    ctx->pc = 0x342be8u;

    // 0x342be8: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x342be8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x342bec: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x342becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x342bf0: 0x2c820040  sltiu       $v0, $a0, 0x40
    ctx->pc = 0x342bf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x342bf4: 0x2c840048  sltiu       $a0, $a0, 0x48
    ctx->pc = 0x342bf4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)72) ? 1 : 0);
    // 0x342bf8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x342BF8u;
    {
        const bool branch_taken_0x342bf8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x342bf8) {
            ctx->pc = 0x342C18u;
            goto label_342c18;
        }
    }
    ctx->pc = 0x342C00u;
    // 0x342c00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x342C00u;
    {
        const bool branch_taken_0x342c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x342C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342C00u;
        // 0x342c04: 0x3c030046  lui         $v1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342c00) {
            ctx->pc = 0x342C18u;
            goto label_342c18;
        }
    }
    ctx->pc = 0x342C08u;
    // 0x342c08: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x342c08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342c0c: 0x24632f08  addiu       $v1, $v1, 0x2F08
    ctx->pc = 0x342c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12040));
    // 0x342c10: 0x3e00008  jr          $ra
    ctx->pc = 0x342C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342C10u;
        // 0x342c14: 0xaca3000c  sw          $v1, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342C18u;
label_342c18:
    // 0x342c18: 0x3e00008  jr          $ra
    ctx->pc = 0x342C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342C18u;
        // 0x342c1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342C20u;
}
