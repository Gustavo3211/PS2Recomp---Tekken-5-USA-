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

// Function: sub_002FA740
// Address: 0x2fa740 - 0x2fa798
void sub_002FA740_0x2fa740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA740_0x2fa740");
#endif

    ctx->pc = 0x2fa740u;

    // 0x2fa740: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2fa740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2fa744: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA744u;
        // 0x2fa748: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA74Cu;
    // 0x2fa74c: 0x0  nop
    ctx->pc = 0x2fa74cu;
    // NOP
    // 0x2fa750: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2fa750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2fa754: 0x34430001  ori         $v1, $v0, 0x1
    ctx->pc = 0x2fa754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2fa758: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fa758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fa75c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FA75Cu;
    {
        const bool branch_taken_0x2fa75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa75c) {
            ctx->pc = 0x2FA760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA75Cu;
            // 0x2fa760: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA764u;
            goto label_2fa764;
        }
    }
    ctx->pc = 0x2FA764u;
label_2fa764:
    // 0x2fa764: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA76Cu;
    // 0x2fa76c: 0x0  nop
    ctx->pc = 0x2fa76cu;
    // NOP
    // 0x2fa770: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2fa770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2fa774: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x2fa774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2fa778: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2fa778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2fa77c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FA77Cu;
    {
        const bool branch_taken_0x2fa77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA77Cu;
        // 0x2fa780: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa77c) {
            ctx->pc = 0x2FA78Cu;
            goto label_2fa78c;
        }
    }
    ctx->pc = 0x2FA784u;
    // 0x2fa784: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2fa784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2fa788: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2fa788u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_2fa78c:
    // 0x2fa78c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA78Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA794u;
    // 0x2fa794: 0x0  nop
    ctx->pc = 0x2fa794u;
    // NOP
    ctx->pc = 0x2fa798u;
}
