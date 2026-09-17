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

// Function: sub_0024A1A8
// Address: 0x24a1a8 - 0x24a1f8
void sub_0024A1A8_0x24a1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024A1A8_0x24a1a8");
#endif

    switch (ctx->pc) {
        case 0x24a1ccu: goto label_24a1cc;
        case 0x24a1e0u: goto label_24a1e0;
        case 0x24a1e8u: goto label_24a1e8;
        default: break;
    }

    ctx->pc = 0x24a1a8u;

    // 0x24a1a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24a1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24a1ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24a1acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24a1b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24a1b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a1b4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24a1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24a1b8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x24a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x24a1bc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x24A1BCu;
    {
        const bool branch_taken_0x24a1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a1bc) {
            ctx->pc = 0x24A1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A1BCu;
            // 0x24a1c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A1ECu;
            goto label_24a1ec;
        }
    }
    ctx->pc = 0x24A1C4u;
    // 0x24a1c4: 0xc092906  jal         func_24A418
    ctx->pc = 0x24A1C4u;
    SET_GPR_U32(ctx, 31, 0x24A1CCu);
    ctx->pc = 0x24A418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A418u, 0x24A1C4u, 0x24A1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A1CCu;
label_24a1cc:
    // 0x24a1cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24a1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a1d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24A1D0u;
    {
        const bool branch_taken_0x24a1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1D0u;
        // 0x24a1d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1d0) {
            ctx->pc = 0x24A1E8u;
            goto label_24a1e8;
        }
    }
    ctx->pc = 0x24A1D8u;
    // 0x24a1d8: 0xc0928fa  jal         func_24A3E8
    ctx->pc = 0x24A1D8u;
    SET_GPR_U32(ctx, 31, 0x24A1E0u);
    ctx->pc = 0x24A3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A3E8u, 0x24A1D8u, 0x24A1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A1E0u;
label_24a1e0:
    // 0x24a1e0: 0xc092852  jal         func_24A148
    ctx->pc = 0x24A1E0u;
    SET_GPR_U32(ctx, 31, 0x24A1E8u);
    ctx->pc = 0x24A1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A1E0u;
    // 0x24a1e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A148u, 0x24A1E0u, 0x24A1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A1E8u;
label_24a1e8:
    // 0x24a1e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24a1e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24a1ec:
    // 0x24a1ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24a1ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24a1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x24A1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1F0u;
        // 0x24a1f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A1F8u;
}
