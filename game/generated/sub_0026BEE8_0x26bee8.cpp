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

// Function: sub_0026BEE8
// Address: 0x26bee8 - 0x26bf20
void sub_0026BEE8_0x26bee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BEE8_0x26bee8");
#endif

    ctx->pc = 0x26bee8u;

    // 0x26bee8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x26bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26beec: 0x2404010f  addiu       $a0, $zero, 0x10F
    ctx->pc = 0x26beecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x26bef0: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x26bef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26bef4: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x26bef4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x26bef8: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26BEF8u;
    {
        const bool branch_taken_0x26bef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x26BEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BEF8u;
        // 0x26befc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bef8) {
            ctx->pc = 0x26BF10u;
            goto label_26bf10;
        }
    }
    ctx->pc = 0x26BF00u;
    // 0x26bf00: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x26bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x26bf04: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x26bf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x26bf08: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26BF08u;
    {
        const bool branch_taken_0x26bf08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bf08) {
            ctx->pc = 0x26BF14u;
            goto label_26bf14;
        }
    }
    ctx->pc = 0x26BF10u;
label_26bf10:
    // 0x26bf10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26bf10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26bf14:
    // 0x26bf14: 0x3e00008  jr          $ra
    ctx->pc = 0x26BF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF14u;
        // 0x26bf18: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BF1Cu;
    // 0x26bf1c: 0x0  nop
    ctx->pc = 0x26bf1cu;
    // NOP
    ctx->pc = 0x26bf20u;
}
