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

// Function: sub_00296788
// Address: 0x296788 - 0x2967f0
void sub_00296788_0x296788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296788_0x296788");
#endif

    ctx->pc = 0x296788u;

    // 0x296788: 0x2ca30021  sltiu       $v1, $a1, 0x21
    ctx->pc = 0x296788u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x29678c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x29678Cu;
    {
        const bool branch_taken_0x29678c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x296790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29678Cu;
        // 0x296790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29678c) {
            ctx->pc = 0x2967E8u;
            goto label_2967e8;
        }
    }
    ctx->pc = 0x296794u;
    // 0x296794: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x296794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x296798: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x296798u;
    {
        const bool branch_taken_0x296798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29679Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296798u;
        // 0x29679c: 0x30c60001  andi        $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x296798) {
            ctx->pc = 0x2967E8u;
            goto label_2967e8;
        }
    }
    ctx->pc = 0x2967A0u;
    // 0x2967a0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2967a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2967a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2967a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2967a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2967a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2967ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2967acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2967b0: 0x2445001c  addiu       $a1, $v0, 0x1C
    ctx->pc = 0x2967b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x2967b4: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2967B4u;
    {
        const bool branch_taken_0x2967b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2967B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2967B4u;
        // 0x2967b8: 0x24440008  addiu       $a0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2967b4) {
            ctx->pc = 0x2967D0u;
            goto label_2967d0;
        }
    }
    ctx->pc = 0x2967BCu;
    // 0x2967bc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2967bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2967c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2967c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2967c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2967C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2967C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2967C4u;
        // 0x2967c8: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2967C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2967CCu;
    // 0x2967cc: 0x0  nop
    ctx->pc = 0x2967ccu;
    // NOP
label_2967d0:
    // 0x2967d0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2967d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2967d4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2967D4u;
    {
        const bool branch_taken_0x2967d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2967D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2967D4u;
        // 0x2967d8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2967d4) {
            ctx->pc = 0x2967E8u;
            goto label_2967e8;
        }
    }
    ctx->pc = 0x2967DCu;
    // 0x2967dc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2967dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2967e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2967e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2967e4: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x2967e4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_2967e8:
    // 0x2967e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2967E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2967E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2967F0u;
}
