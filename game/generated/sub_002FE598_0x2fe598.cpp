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

// Function: sub_002FE598
// Address: 0x2fe598 - 0x2fe5d0
void sub_002FE598_0x2fe598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE598_0x2fe598");
#endif

    switch (ctx->pc) {
        case 0x2fe5c4u: goto label_2fe5c4;
        default: break;
    }

    ctx->pc = 0x2fe598u;

    // 0x2fe598: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2fe598u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe59c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fe59cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fe5a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fe5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fe5a4: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x2fe5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
    // 0x2fe5a8: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x2fe5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x2fe5ac: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x2fe5acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x2fe5b0: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x2fe5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x2fe5b4: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x2fe5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x2fe5b8: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x2fe5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
    // 0x2fe5bc: 0xc0bf83a  jal         func_2FE0E8
    ctx->pc = 0x2FE5BCu;
    SET_GPR_U32(ctx, 31, 0x2FE5C4u);
    ctx->pc = 0x2FE5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FE5BCu;
    // 0x2fe5c0: 0xac400048  sw          $zero, 0x48($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0E8u, 0x2FE5BCu, 0x2FE5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FE5C4u;
label_2fe5c4:
    // 0x2fe5c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fe5c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE5C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FE5C8u;
        // 0x2fe5cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FE5C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FE5D0u;
}
