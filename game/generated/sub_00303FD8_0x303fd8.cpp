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

// Function: sub_00303FD8
// Address: 0x303fd8 - 0x304020
void sub_00303FD8_0x303fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00303FD8_0x303fd8");
#endif

    switch (ctx->pc) {
        case 0x303ff0u: goto label_303ff0;
        case 0x303ff8u: goto label_303ff8;
        default: break;
    }

    ctx->pc = 0x303fd8u;

    // 0x303fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x303fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x303fdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x303fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x303fe0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x303fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x303fe4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x303fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x303fe8: 0xc0bf5a2  jal         func_2FD688
    ctx->pc = 0x303FE8u;
    SET_GPR_U32(ctx, 31, 0x303FF0u);
    ctx->pc = 0x303FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303FE8u;
    // 0x303fec: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD688u, 0x303FE8u, 0x303FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303FF0u;
label_303ff0:
    // 0x303ff0: 0xc0bee24  jal         func_2FB890
    ctx->pc = 0x303FF0u;
    SET_GPR_U32(ctx, 31, 0x303FF8u);
    ctx->pc = 0x303FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x303FF0u;
    // 0x303ff4: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB890u, 0x303FF0u, 0x303FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x303FF8u;
label_303ff8:
    // 0x303ff8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x303ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x303ffc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x303ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x304000: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x304000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x304004: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x304004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x304008: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x304008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x30400c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x30400cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x304010: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x304010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x304014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x304014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304018: 0x3e00008  jr          $ra
    ctx->pc = 0x304018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304018u;
        // 0x30401c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304020u;
}
