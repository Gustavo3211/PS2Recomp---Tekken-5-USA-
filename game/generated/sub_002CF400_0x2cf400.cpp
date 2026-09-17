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

// Function: sub_002CF400
// Address: 0x2cf400 - 0x2cf460
void sub_002CF400_0x2cf400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF400_0x2cf400");
#endif

    switch (ctx->pc) {
        case 0x2cf418u: goto label_2cf418;
        case 0x2cf450u: goto label_2cf450;
        default: break;
    }

    ctx->pc = 0x2cf400u;

    // 0x2cf400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cf400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cf404: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x2cf404u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cf408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cf40c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cf40cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf410: 0x8c820898  lw          $v0, 0x898($a0)
    ctx->pc = 0x2cf410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2200)));
    // 0x2cf414: 0x8c490048  lw          $t1, 0x48($v0)
    ctx->pc = 0x2cf414u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_2cf418:
    // 0x2cf418: 0x72180  sll         $a0, $a3, 6
    ctx->pc = 0x2cf418u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x2cf41c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2cf41cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2cf420: 0x1242821  addu        $a1, $t1, $a0
    ctx->pc = 0x2cf420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2cf424: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x2cf424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2cf428: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2cf428u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cf42c: 0x28e60012  slti        $a2, $a3, 0x12
    ctx->pc = 0x2cf42cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x2cf430: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2cf430u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2cf434: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x2cf434u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2cf438: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x2cf438u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x2cf43c: 0x78a30020  lq          $v1, 0x20($a1)
    ctx->pc = 0x2cf43cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2cf440: 0x14c0fff5  bnez        $a2, . + 4 + (-0xB << 2)
    ctx->pc = 0x2CF440u;
    {
        const bool branch_taken_0x2cf440 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF440u;
        // 0x2cf444: 0x7c830020  sq          $v1, 0x20($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf440) {
            ctx->pc = 0x2CF418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cf418;
        }
    }
    ctx->pc = 0x2CF448u;
    // 0x2cf448: 0xc0849c0  jal         func_212700
    ctx->pc = 0x2CF448u;
    SET_GPR_U32(ctx, 31, 0x2CF450u);
    ctx->pc = 0x2CF44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF448u;
    // 0x2cf44c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x2CF448u, 0x2CF450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF450u;
label_2cf450:
    // 0x2cf450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cf450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf454: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF454u;
        // 0x2cf458: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF45Cu;
    // 0x2cf45c: 0x0  nop
    ctx->pc = 0x2cf45cu;
    // NOP
    ctx->pc = 0x2cf460u;
}
