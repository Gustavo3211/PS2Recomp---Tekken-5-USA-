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

// Function: sub_00267118
// Address: 0x267118 - 0x267160
void sub_00267118_0x267118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267118_0x267118");
#endif

    ctx->pc = 0x267118u;

    // 0x267118: 0x8f86aa7c  lw          $a2, -0x5584($gp)
    ctx->pc = 0x267118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945404)));
    // 0x26711c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x26711cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x267120: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x267120u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267124: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x267124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x267128: 0x94c30176  lhu         $v1, 0x176($a2)
    ctx->pc = 0x267128u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 374)));
    // 0x26712c: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x26712cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x267130: 0x2010  mfhi        $a0
    ctx->pc = 0x267130u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x267134: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x267134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x267138: 0x10870007  beq         $a0, $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x267138u;
    {
        const bool branch_taken_0x267138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x26713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267138u;
        // 0x26713c: 0x28830002  slti        $v1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x267138) {
            ctx->pc = 0x267158u;
            goto label_267158;
        }
    }
    ctx->pc = 0x267140u;
    // 0x267140: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x267140u;
    {
        const bool branch_taken_0x267140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x267144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267140u;
        // 0x267144: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267140) {
            ctx->pc = 0x267158u;
            goto label_267158;
        }
    }
    ctx->pc = 0x267148u;
    // 0x267148: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x267148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26714c: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x26714Cu;
    {
        const bool branch_taken_0x26714c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x267150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26714Cu;
        // 0x267150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26714c) {
            ctx->pc = 0x267158u;
            goto label_267158;
        }
    }
    ctx->pc = 0x267154u;
    // 0x267154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x267154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_267158:
    // 0x267158: 0x3e00008  jr          $ra
    ctx->pc = 0x267158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267160u;
}
