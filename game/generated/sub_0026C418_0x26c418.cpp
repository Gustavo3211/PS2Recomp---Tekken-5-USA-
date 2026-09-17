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

// Function: sub_0026C418
// Address: 0x26c418 - 0x26c490
void sub_0026C418_0x26c418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C418_0x26c418");
#endif

    ctx->pc = 0x26c418u;

    // 0x26c418: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x26c418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c41c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x26c41cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x26c420: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x26c420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x26c424: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x26c424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x26c428: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x26c428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x26c42c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26C42Cu;
    {
        const bool branch_taken_0x26c42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C42Cu;
        // 0x26c430: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c42c) {
            ctx->pc = 0x26C448u;
            goto label_26c448;
        }
    }
    ctx->pc = 0x26C434u;
    // 0x26c434: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x26c434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x26c438: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26c438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26c43c: 0x30428200  andi        $v0, $v0, 0x8200
    ctx->pc = 0x26c43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)33280);
    // 0x26c440: 0x38420200  xori        $v0, $v0, 0x200
    ctx->pc = 0x26c440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)512);
    // 0x26c444: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x26c444u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26c448:
    // 0x26c448: 0x3e00008  jr          $ra
    ctx->pc = 0x26C448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C448u;
        // 0x26c44c: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C450u;
    // 0x26c450: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x26c450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x26c454: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x26c454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x26c458: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26c458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c45c: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x26c45cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x26c460: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26c460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26c464: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26C464u;
    {
        const bool branch_taken_0x26c464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C464u;
        // 0x26c468: 0x3064ffff  andi        $a0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c464) {
            ctx->pc = 0x26C478u;
            goto label_26c478;
        }
    }
    ctx->pc = 0x26C46Cu;
    // 0x26c46c: 0x2402061f  addiu       $v0, $zero, 0x61F
    ctx->pc = 0x26c46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1567));
    // 0x26c470: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26C470u;
    {
        const bool branch_taken_0x26c470 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x26c470) {
            ctx->pc = 0x26C484u;
            goto label_26c484;
        }
    }
    ctx->pc = 0x26C478u;
label_26c478:
    // 0x26c478: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x26c478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x26c47c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x26c47cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26c480: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x26c480u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_26c484:
    // 0x26c484: 0x3e00008  jr          $ra
    ctx->pc = 0x26C484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C484u;
        // 0x26c488: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C48Cu;
    // 0x26c48c: 0x0  nop
    ctx->pc = 0x26c48cu;
    // NOP
    ctx->pc = 0x26c490u;
}
