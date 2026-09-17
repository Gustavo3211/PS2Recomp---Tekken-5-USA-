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

// Function: sub_00100C80
// Address: 0x100c80 - 0x100cd8
void sub_00100C80_0x100c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100C80_0x100c80");
#endif

    switch (ctx->pc) {
        case 0x100ca8u: goto label_100ca8;
        default: break;
    }

    ctx->pc = 0x100c80u;

    // 0x100c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100c84: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x100c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x100c88: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x100c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x100c8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x100c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x100c90: 0x8c6583c0  lw          $a1, -0x7C40($v1)
    ctx->pc = 0x100c90u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3A83C0u));
    // 0x100c94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x100c94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100c98: 0x8c44885c  lw          $a0, -0x77A4($v0)
    ctx->pc = 0x100c98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A885Cu));
    // 0x100c9c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x100c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x100ca0: 0xc04007c  jal         func_1001F0
    ctx->pc = 0x100CA0u;
    SET_GPR_U32(ctx, 31, 0x100CA8u);
    ctx->pc = 0x1001F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1001F0u, 0x100CA0u, 0x100CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100CA8u;
label_100ca8:
    // 0x100ca8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x100ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100cac: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x100CACu;
    {
        const bool branch_taken_0x100cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x100CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100CACu;
        // 0x100cb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100cac) {
            ctx->pc = 0x100CC8u;
            goto label_100cc8;
        }
    }
    ctx->pc = 0x100CB4u;
    // 0x100cb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x100cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100cb8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x100cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x100cbc: 0x80402f2  j           func_100BC8
    ctx->pc = 0x100CBCu;
    ctx->pc = 0x100CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100CBCu;
    // 0x100cc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100BC8u;
    sub_00100BC8_0x100bc8(rdram, ctx, runtime); return;
    ctx->pc = 0x100CC4u;
    // 0x100cc4: 0x0  nop
    ctx->pc = 0x100cc4u;
    // NOP
label_100cc8:
    // 0x100cc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x100cc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100ccc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x100cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x100cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x100CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100CD0u;
        // 0x100cd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100CD8u;
}
