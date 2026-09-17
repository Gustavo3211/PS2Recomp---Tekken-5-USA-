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

// Function: sub_00492440
// Address: 0x492440 - 0x492490
void sub_00492440_0x492440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00492440_0x492440");
#endif

    switch (ctx->pc) {
        case 0x492464u: goto label_492464;
        default: break;
    }

    ctx->pc = 0x492440u;

    // 0x492440: 0x3c03007f  lui         $v1, 0x7F
    ctx->pc = 0x492440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)127 << 16));
    // 0x492444: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x492444u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x492448: 0x8462fd06  lh          $v0, -0x2FA($v1)
    ctx->pc = 0x492448u;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x7EFD06u));
    // 0x49244c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49244cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x492450: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x492450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x492454: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x492454u;
    {
        const bool branch_taken_0x492454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x492458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492454u;
        // 0x492458: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x492454) {
            ctx->pc = 0x492464u;
            goto label_492464;
        }
    }
    ctx->pc = 0x49245Cu;
    // 0x49245c: 0xc12494c  jal         func_492530
    ctx->pc = 0x49245Cu;
    SET_GPR_U32(ctx, 31, 0x492464u);
    ctx->pc = 0x492530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492530u, 0x49245Cu, 0x492464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x492464u;
label_492464:
    // 0x492464: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x492464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x492468: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x492468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49246c: 0x2463d680  addiu       $v1, $v1, -0x2980
    ctx->pc = 0x49246cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x492470: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x492470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x492474: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x492474u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x72D6E0u));
    // 0x492478: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x492478u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x49247c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x49247cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x492480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x492480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x492484: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x492484u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72D6E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72D6E0u, _value); } while (0);
    // 0x492488: 0x3e00008  jr          $ra
    ctx->pc = 0x492488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x492488u;
        // 0x49248c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x492488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x492490u;
}
