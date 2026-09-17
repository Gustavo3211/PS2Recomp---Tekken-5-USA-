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

// Function: sub_004F9328
// Address: 0x4f9328 - 0x4f9388
void sub_004F9328_0x4f9328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F9328_0x4f9328");
#endif

    ctx->pc = 0x4f9328u;

    // 0x4f9328: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x4f9328u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f932c: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x4f932cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f9330: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x4f9330u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f9334: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x4f9334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4f9338: 0xe4001b  divu        $zero, $a3, $a0
    ctx->pc = 0x4f9338u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x4f933c: 0x3012  mflo        $a2
    ctx->pc = 0x4f933cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x4f9340: 0x2010  mfhi        $a0
    ctx->pc = 0x4f9340u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x4f9344: 0x64282b  sltu        $a1, $v1, $a0
    ctx->pc = 0x4f9344u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x4f9348: 0x66182b  sltu        $v1, $v1, $a2
    ctx->pc = 0x4f9348u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4f934c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x4F934Cu;
    {
        const bool branch_taken_0x4f934c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F9350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F934Cu;
        // 0x4f9350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f934c) {
            ctx->pc = 0x4F9380u;
            goto label_4f9380;
        }
    }
    ctx->pc = 0x4F9354u;
    // 0x4f9354: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x4F9354u;
    {
        const bool branch_taken_0x4f9354 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F9358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F9354u;
        // 0x4f9358: 0x3c05ffff  lui         $a1, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f9354) {
            ctx->pc = 0x4F9380u;
            goto label_4f9380;
        }
    }
    ctx->pc = 0x4F935Cu;
    // 0x4f935c: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x4f935cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x4f9360: 0xe51824  and         $v1, $a3, $a1
    ctx->pc = 0x4f9360u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x4f9364: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4f9364u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f9368: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x4f9368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x4f936c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f936cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f9370: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x4f9370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x4f9374: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4f9374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4f9378: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x4f9378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x4f937c: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x4f937cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_4f9380:
    // 0x4f9380: 0x3e00008  jr          $ra
    ctx->pc = 0x4F9380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F9380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4F9388u;
}
