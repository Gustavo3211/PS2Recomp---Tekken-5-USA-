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

// Function: sub_0036F588
// Address: 0x36f588 - 0x36f5e0
void sub_0036F588_0x36f588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F588_0x36f588");
#endif

    switch (ctx->pc) {
        case 0x36f5acu: goto label_36f5ac;
        case 0x36f5c4u: goto label_36f5c4;
        default: break;
    }

    ctx->pc = 0x36f588u;

    // 0x36f588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36f588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36f58c: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36f58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36f590: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36f590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36f594: 0x245072c0  addiu       $s0, $v0, 0x72C0
    ctx->pc = 0x36f594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29376));
    // 0x36f598: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36f598u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D72C0u));
    // 0x36f59c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36F59Cu;
    {
        const bool branch_taken_0x36f59c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36F5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F59Cu;
        // 0x36f5a0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36f59c) {
            ctx->pc = 0x36F5C4u;
            goto label_36f5c4;
        }
    }
    ctx->pc = 0x36F5A4u;
    // 0x36f5a4: 0xc0db706  jal         func_36DC18
    ctx->pc = 0x36F5A4u;
    SET_GPR_U32(ctx, 31, 0x36F5ACu);
    ctx->pc = 0x36DC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36DC18u, 0x36F5A4u, 0x36F5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F5ACu;
label_36f5ac:
    // 0x36f5ac: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36f5acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36f5b0: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36f5b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36f5b4: 0x24a5fdb0  addiu       $a1, $a1, -0x250
    ctx->pc = 0x36f5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966704));
    // 0x36f5b8: 0x24c67170  addiu       $a2, $a2, 0x7170
    ctx->pc = 0x36f5b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29040));
    // 0x36f5bc: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36F5BCu;
    SET_GPR_U32(ctx, 31, 0x36F5C4u);
    ctx->pc = 0x36F5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F5BCu;
    // 0x36f5c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36F5BCu, 0x36F5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F5C4u;
label_36f5c4:
    // 0x36f5c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36f5c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f5c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36f5c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f5cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36f5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36f5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x36F5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5D0u;
        // 0x36f5d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F5D8u;
    // 0x36f5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x36F5D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F5D8u;
        // 0x36f5dc: 0xac850050  sw          $a1, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F5D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F5E0u;
}
