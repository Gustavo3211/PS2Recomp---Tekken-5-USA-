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

// Function: sub_001FB108
// Address: 0x1fb108 - 0x1fb158
void sub_001FB108_0x1fb108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB108_0x1fb108");
#endif

    ctx->pc = 0x1fb108u;

    // 0x1fb108: 0x8f8297c8  lw          $v0, -0x6838($gp)
    ctx->pc = 0x1fb108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
    // 0x1fb10c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB10Cu;
        // 0x1fb110: 0xac4400b4  sw          $a0, 0xB4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB114u;
    // 0x1fb114: 0x0  nop
    ctx->pc = 0x1fb114u;
    // NOP
    // 0x1fb118: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x1fb118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1fb11c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB11Cu;
    {
        const bool branch_taken_0x1fb11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB11Cu;
        // 0x1fb120: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb11c) {
            ctx->pc = 0x1FB130u;
            goto label_1fb130;
        }
    }
    ctx->pc = 0x1FB124u;
    // 0x1fb124: 0x908201bc  lbu         $v0, 0x1BC($a0)
    ctx->pc = 0x1fb124u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x1fb128: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1fb128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1fb12c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1fb12cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1fb130:
    // 0x1fb130: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FB130u;
    {
        const bool branch_taken_0x1fb130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB130u;
        // 0x1fb134: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb130) {
            ctx->pc = 0x1FB150u;
            goto label_1fb150;
        }
    }
    ctx->pc = 0x1FB138u;
    // 0x1fb138: 0x8c6283c0  lw          $v0, -0x7C40($v1)
    ctx->pc = 0x1fb138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935488)));
    // 0x1fb13c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1fb13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1fb140: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB140u;
    {
        const bool branch_taken_0x1fb140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB140u;
        // 0x1fb144: 0x8f8397c8  lw          $v1, -0x6838($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb140) {
            ctx->pc = 0x1FB150u;
            goto label_1fb150;
        }
    }
    ctx->pc = 0x1FB148u;
    // 0x1fb148: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1fb148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1fb14c: 0xac6203d4  sw          $v0, 0x3D4($v1)
    ctx->pc = 0x1fb14cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 980), GPR_U32(ctx, 2));
label_1fb150:
    // 0x1fb150: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB158u;
}
