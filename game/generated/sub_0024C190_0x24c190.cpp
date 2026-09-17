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

// Function: sub_0024C190
// Address: 0x24c190 - 0x24c1d0
void sub_0024C190_0x24c190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C190_0x24c190");
#endif

    switch (ctx->pc) {
        case 0x24c1c0u: goto label_24c1c0;
        default: break;
    }

    ctx->pc = 0x24c190u;

    // 0x24c190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24c190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24c194: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x24c194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c198: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24c198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24c19c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x24c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x24c1a0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x24c1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24c1a4: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C1A4u;
    {
        const bool branch_taken_0x24c1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x24C1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1A4u;
        // 0x24c1a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c1a4) {
            ctx->pc = 0x24C1B8u;
            goto label_24c1b8;
        }
    }
    ctx->pc = 0x24C1ACu;
    // 0x24c1ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24C1ACu;
    {
        const bool branch_taken_0x24c1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1ACu;
        // 0x24c1b0: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c1ac) {
            ctx->pc = 0x24C1C4u;
            goto label_24c1c4;
        }
    }
    ctx->pc = 0x24C1B4u;
    // 0x24c1b4: 0x0  nop
    ctx->pc = 0x24c1b4u;
    // NOP
label_24c1b8:
    // 0x24c1b8: 0xc092e94  jal         func_24BA50
    ctx->pc = 0x24C1B8u;
    SET_GPR_U32(ctx, 31, 0x24C1C0u);
    ctx->pc = 0x24BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BA50u, 0x24C1B8u, 0x24C1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C1C0u;
label_24c1c0:
    // 0x24c1c0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x24c1c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_24c1c4:
    // 0x24c1c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24c1c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x24C1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1C8u;
        // 0x24c1cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C1D0u;
}
