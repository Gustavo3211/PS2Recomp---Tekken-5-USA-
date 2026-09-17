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

// Function: sub_00264410
// Address: 0x264410 - 0x264458
void sub_00264410_0x264410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264410_0x264410");
#endif

    switch (ctx->pc) {
        case 0x264438u: goto label_264438;
        case 0x264444u: goto label_264444;
        default: break;
    }

    ctx->pc = 0x264410u;

    // 0x264410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x264410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x264414: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x264414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x264418: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x264418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26441c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26441cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264420: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x264420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x264424: 0x86020040  lh          $v0, 0x40($s0)
    ctx->pc = 0x264424u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x264428: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x264428u;
    {
        const bool branch_taken_0x264428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x264428) {
            ctx->pc = 0x26442Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264428u;
            // 0x26442c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264448u;
            goto label_264448;
        }
    }
    ctx->pc = 0x264430u;
    // 0x264430: 0xc07e636  jal         func_1F98D8
    ctx->pc = 0x264430u;
    SET_GPR_U32(ctx, 31, 0x264438u);
    ctx->pc = 0x1F98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F98D8u, 0x264430u, 0x264438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264438u;
label_264438:
    // 0x264438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x264438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26443c: 0xc07ce36  jal         func_1F38D8
    ctx->pc = 0x26443Cu;
    SET_GPR_U32(ctx, 31, 0x264444u);
    ctx->pc = 0x264440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26443Cu;
    // 0x264440: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F38D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38D8u, 0x26443Cu, 0x264444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264444u;
label_264444:
    // 0x264444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x264444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_264448:
    // 0x264448: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x264448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26444c: 0x3e00008  jr          $ra
    ctx->pc = 0x26444Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26444Cu;
        // 0x264450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26444Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264454u;
    // 0x264454: 0x0  nop
    ctx->pc = 0x264454u;
    // NOP
    ctx->pc = 0x264458u;
}
