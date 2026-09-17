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

// Function: sub_002F1D48
// Address: 0x2f1d48 - 0x2f1d88
void sub_002F1D48_0x2f1d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1D48_0x2f1d48");
#endif

    switch (ctx->pc) {
        case 0x2f1d58u: goto label_2f1d58;
        case 0x2f1d78u: goto label_2f1d78;
        default: break;
    }

    ctx->pc = 0x2f1d48u;

    // 0x2f1d48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f1d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f1d4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f1d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f1d50: 0xc0bb97c  jal         func_2EE5F0
    ctx->pc = 0x2F1D50u;
    SET_GPR_U32(ctx, 31, 0x2F1D58u);
    ctx->pc = 0x2F1D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1D50u;
    // 0x2f1d54: 0x8c850058  lw          $a1, 0x58($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EE5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EE5F0u, 0x2F1D50u, 0x2F1D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1D58u;
label_2f1d58:
    // 0x2f1d58: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x2f1d58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x2f1d5c: 0x24844b18  addiu       $a0, $a0, 0x4B18
    ctx->pc = 0x2f1d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19224));
    // 0x2f1d60: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f1d60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f1d64: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2f1d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f1d68: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F1D68u;
    {
        const bool branch_taken_0x2f1d68 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2F1D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D68u;
        // 0x2f1d6c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1d68) {
            ctx->pc = 0x2F1D78u;
            goto label_2f1d78;
        }
    }
    ctx->pc = 0x2F1D70u;
    // 0x2f1d70: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x2F1D70u;
    SET_GPR_U32(ctx, 31, 0x2F1D78u);
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x2F1D70u, 0x2F1D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1D78u;
label_2f1d78:
    // 0x2f1d78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f1d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f1d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1D7Cu;
        // 0x2f1d80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1D84u;
    // 0x2f1d84: 0x0  nop
    ctx->pc = 0x2f1d84u;
    // NOP
    ctx->pc = 0x2f1d88u;
}
