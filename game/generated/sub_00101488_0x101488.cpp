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

// Function: sub_00101488
// Address: 0x101488 - 0x1014d0
void sub_00101488_0x101488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101488_0x101488");
#endif

    switch (ctx->pc) {
        case 0x1014a8u: goto label_1014a8;
        default: break;
    }

    ctx->pc = 0x101488u;

    // 0x101488: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x101488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x10148c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10148cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x101490: 0x8c44885c  lw          $a0, -0x77A4($v0)
    ctx->pc = 0x101490u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x101494: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x101494u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x101498: 0x8c6583c0  lw          $a1, -0x7C40($v1)
    ctx->pc = 0x101498u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x10149c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10149cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1014a0: 0xc04007c  jal         func_1001F0
    ctx->pc = 0x1014A0u;
    SET_GPR_U32(ctx, 31, 0x1014A8u);
    ctx->pc = 0x1001F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1001F0u, 0x1014A0u, 0x1014A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1014A8u;
label_1014a8:
    // 0x1014a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1014a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1014ac: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1014ACu;
    {
        const bool branch_taken_0x1014ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1014B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014ACu;
        // 0x1014b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1014ac) {
            ctx->pc = 0x1014BCu;
            goto label_1014bc;
        }
    }
    ctx->pc = 0x1014B4u;
    // 0x1014b4: 0x3c020164  lui         $v0, 0x164
    ctx->pc = 0x1014b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)356 << 16));
    // 0x1014b8: 0x2444fb00  addiu       $a0, $v0, -0x500
    ctx->pc = 0x1014b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966016));
label_1014bc:
    // 0x1014bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1014bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1014c0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1014c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1014c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1014C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1014C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1014C4u;
        // 0x1014c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1014C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1014CCu;
    // 0x1014cc: 0x0  nop
    ctx->pc = 0x1014ccu;
    // NOP
    ctx->pc = 0x1014d0u;
}
