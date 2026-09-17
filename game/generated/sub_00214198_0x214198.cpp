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

// Function: sub_00214198
// Address: 0x214198 - 0x2141f0
void sub_00214198_0x214198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214198_0x214198");
#endif

    ctx->pc = 0x214198u;

    // 0x214198: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x214198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x21419c: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x21419cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2141a0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2141A0u;
    {
        const bool branch_taken_0x2141a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2141a0) {
            ctx->pc = 0x2141F8u;
            return;
        }
    }
    ctx->pc = 0x2141A8u;
    // 0x2141a8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2141a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2141ac: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x2141acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x2141b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2141b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2141b4: 0x8c634ea0  lw          $v1, 0x4EA0($v1)
    ctx->pc = 0x2141b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20128)));
    // 0x2141b8: 0x600008  jr          $v1
    ctx->pc = 0x2141B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2141C0u: goto label_2141c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2141B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2141C0u;
label_2141c0:
    // 0x2141c0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2141c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2141c4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2141c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2141c8: 0x8c4483c0  lw          $a0, -0x7C40($v0)
    ctx->pc = 0x2141c8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x2141cc: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2141CCu;
    {
        const bool branch_taken_0x2141cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2141D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2141CCu;
        // 0x2141d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2141cc) {
            ctx->pc = 0x2141E0u;
            goto label_2141e0;
        }
    }
    ctx->pc = 0x2141D4u;
    // 0x2141d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2141d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2141d8: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2141D8u;
    {
        const bool branch_taken_0x2141d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2141d8) {
            ctx->pc = 0x2141E4u;
            goto label_2141e4;
        }
    }
    ctx->pc = 0x2141E0u;
label_2141e0:
    // 0x2141e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2141e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2141e4:
    // 0x2141e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2141E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2141E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2141E4u;
        // 0x2141e8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2141E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2141ECu;
    // 0x2141ec: 0x0  nop
    ctx->pc = 0x2141ecu;
    // NOP
    ctx->pc = 0x2141f0u;
}
