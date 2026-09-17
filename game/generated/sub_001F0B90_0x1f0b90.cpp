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

// Function: sub_001F0B90
// Address: 0x1f0b90 - 0x1f0bf0
void sub_001F0B90_0x1f0b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0B90_0x1f0b90");
#endif

    ctx->pc = 0x1f0b90u;

    // 0x1f0b90: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x1f0b90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0b94: 0x90820031  lbu         $v0, 0x31($a0)
    ctx->pc = 0x1f0b94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
    // 0x1f0b98: 0x8d07069c  lw          $a3, 0x69C($t0)
    ctx->pc = 0x1f0b98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1692)));
    // 0x1f0b9c: 0x14c20012  bne         $a2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F0B9Cu;
    {
        const bool branch_taken_0x1f0b9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F0BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B9Cu;
        // 0x1f0ba0: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0b9c) {
            ctx->pc = 0x1F0BE8u;
            goto label_1f0be8;
        }
    }
    ctx->pc = 0x1F0BA4u;
    // 0x1f0ba4: 0x18e00010  blez        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x1F0BA4u;
    {
        const bool branch_taken_0x1f0ba4 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1F0BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BA4u;
        // 0x1f0ba8: 0x710c0  sll         $v0, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0ba4) {
            ctx->pc = 0x1F0BE8u;
            goto label_1f0be8;
        }
    }
    ctx->pc = 0x1F0BACu;
    // 0x1f0bac: 0x8d0506a0  lw          $a1, 0x6A0($t0)
    ctx->pc = 0x1f0bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1696)));
    // 0x1f0bb0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1f0bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f0bb4: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x1f0bb4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1f0bb8: 0x53a03  sra         $a3, $a1, 8
    ctx->pc = 0x1f0bb8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 5), 8));
    // 0x1f0bbc: 0x1012  mflo        $v0
    ctx->pc = 0x1f0bbcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1f0bc0: 0x2c440008  sltiu       $a0, $v0, 0x8
    ctx->pc = 0x1f0bc0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1f0bc4: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x1f0bc4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x1f0bc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f0bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f0bcc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1f0bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1f0bd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f0bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f0bd4: 0x8c423248  lw          $v0, 0x3248($v0)
    ctx->pc = 0x1f0bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12872)));
    // 0x1f0bd8: 0xe21818  mult        $v1, $a3, $v0
    ctx->pc = 0x1f0bd8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f0bdc: 0x693821  addu        $a3, $v1, $t1
    ctx->pc = 0x1f0bdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1f0be0: 0xa7182a  slt         $v1, $a1, $a3
    ctx->pc = 0x1f0be0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1f0be4: 0xa3380b  movn        $a3, $a1, $v1
    ctx->pc = 0x1f0be4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
label_1f0be8:
    // 0x1f0be8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0BE8u;
        // 0x1f0bec: 0xad0706a4  sw          $a3, 0x6A4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 1700), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0BF0u;
}
