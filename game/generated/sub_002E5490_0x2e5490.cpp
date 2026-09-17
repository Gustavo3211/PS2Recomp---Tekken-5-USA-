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

// Function: sub_002E5490
// Address: 0x2e5490 - 0x2e54d8
void sub_002E5490_0x2e5490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5490_0x2e5490");
#endif

    switch (ctx->pc) {
        case 0x2e54c0u: goto label_2e54c0;
        default: break;
    }

    ctx->pc = 0x2e5490u;

    // 0x2e5490: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e5490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e5494: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e5494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e5498: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e5498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e549c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e549cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e54a0: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2e54a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x2e54a4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E54A4u;
    {
        const bool branch_taken_0x2e54a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E54A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E54A4u;
        // 0x2e54a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e54a4) {
            ctx->pc = 0x2E54C8u;
            goto label_2e54c8;
        }
    }
    ctx->pc = 0x2E54ACu;
    // 0x2e54ac: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2e54acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2e54b0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E54B0u;
    {
        const bool branch_taken_0x2e54b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e54b0) {
            ctx->pc = 0x2E54B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E54B0u;
            // 0x2e54b4: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E54C4u;
            goto label_2e54c4;
        }
    }
    ctx->pc = 0x2E54B8u;
    // 0x2e54b8: 0xc0b7a78  jal         func_2DE9E0
    ctx->pc = 0x2E54B8u;
    SET_GPR_U32(ctx, 31, 0x2E54C0u);
    ctx->pc = 0x2DE9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE9E0u, 0x2E54B8u, 0x2E54C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E54C0u;
label_2e54c0:
    // 0x2e54c0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2e54c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_2e54c4:
    // 0x2e54c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e54c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e54c8:
    // 0x2e54c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e54c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e54cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e54ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e54d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E54D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E54D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E54D0u;
        // 0x2e54d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E54D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E54D8u;
}
