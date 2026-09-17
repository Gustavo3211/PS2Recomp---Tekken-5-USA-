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

// Function: sub_00261438
// Address: 0x261438 - 0x261488
void sub_00261438_0x261438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00261438_0x261438");
#endif

    switch (ctx->pc) {
        case 0x261478u: goto label_261478;
        default: break;
    }

    ctx->pc = 0x261438u;

    // 0x261438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x261438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26143c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x26143cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x261440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x261440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x261444: 0x244223b0  addiu       $v0, $v0, 0x23B0
    ctx->pc = 0x261444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9136));
    // 0x261448: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x261448u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26144c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x26144cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261450: 0x8c490004  lw          $t1, 0x4($v0)
    ctx->pc = 0x261450u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x3B23B4u));
    // 0x261454: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x261454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x261458: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x261458u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26145c: 0x15220006  bne         $t1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26145Cu;
    {
        const bool branch_taken_0x26145c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x261460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26145Cu;
        // 0x261460: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26145c) {
            ctx->pc = 0x261478u;
            goto label_261478;
        }
    }
    ctx->pc = 0x261464u;
    // 0x261464: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x261464u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x261468: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x261468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x26146c: 0x2484e770  addiu       $a0, $a0, -0x1890
    ctx->pc = 0x26146cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961008));
    // 0x261470: 0xc098934  jal         func_2624D0
    ctx->pc = 0x261470u;
    SET_GPR_U32(ctx, 31, 0x261478u);
    ctx->pc = 0x261474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261470u;
    // 0x261474: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2624D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2624D0u, 0x261470u, 0x261478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261478u;
label_261478:
    // 0x261478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x261478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26147c: 0x3e00008  jr          $ra
    ctx->pc = 0x26147Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26147Cu;
        // 0x261480: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26147Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261484u;
    // 0x261484: 0x0  nop
    ctx->pc = 0x261484u;
    // NOP
    ctx->pc = 0x261488u;
}
