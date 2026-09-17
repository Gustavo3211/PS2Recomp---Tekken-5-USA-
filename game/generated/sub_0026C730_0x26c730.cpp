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

// Function: sub_0026C730
// Address: 0x26c730 - 0x26c760
void sub_0026C730_0x26c730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C730_0x26c730");
#endif

    ctx->pc = 0x26c730u;

    // 0x26c730: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x26c730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x26c734: 0x34068002  ori         $a2, $zero, 0x8002
    ctx->pc = 0x26c734u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x26c738: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x26c738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26c73c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26c73cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c740: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x26c740u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26c744: 0x10860004  beq         $a0, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x26C744u;
    {
        const bool branch_taken_0x26c744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        ctx->pc = 0x26C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C744u;
        // 0x26c748: 0x8c63000c  lw          $v1, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c744) {
            ctx->pc = 0x26C758u;
            goto label_26c758;
        }
    }
    ctx->pc = 0x26C74Cu;
    // 0x26c74c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x26c74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x26c750: 0x38421052  xori        $v0, $v0, 0x1052
    ctx->pc = 0x26c750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4178);
    // 0x26c754: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x26c754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_26c758:
    // 0x26c758: 0x3e00008  jr          $ra
    ctx->pc = 0x26C758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C760u;
}
