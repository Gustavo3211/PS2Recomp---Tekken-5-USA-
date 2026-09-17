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

// Function: sub_002FA6F8
// Address: 0x2fa6f8 - 0x2fa740
void sub_002FA6F8_0x2fa6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA6F8_0x2fa6f8");
#endif

    ctx->pc = 0x2fa6f8u;

    // 0x2fa6f8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2fa6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2fa6fc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2fa6fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2fa700: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2FA700u;
    {
        const bool branch_taken_0x2fa700 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA700u;
        // 0x2fa704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa700) {
            ctx->pc = 0x2FA738u;
            goto label_2fa738;
        }
    }
    ctx->pc = 0x2FA708u;
    // 0x2fa708: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x2fa708u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2fa70c: 0x30c2000f  andi        $v0, $a2, 0xF
    ctx->pc = 0x2fa70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x2fa710: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FA710u;
    {
        const bool branch_taken_0x2fa710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA710u;
        // 0x2fa714: 0xc51821  addu        $v1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa710) {
            ctx->pc = 0x2FA730u;
            goto label_2fa730;
        }
    }
    ctx->pc = 0x2FA718u;
    // 0x2fa718: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2fa718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2fa71c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2fa71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2fa720: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2fa720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2fa724: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2fa724u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2fa728: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2fa728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa72c: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x2fa72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2fa730:
    // 0x2fa730: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x2fa730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fa734: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2fa734u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_2fa738:
    // 0x2fa738: 0x3e00008  jr          $ra
    ctx->pc = 0x2FA738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA740u;
}
