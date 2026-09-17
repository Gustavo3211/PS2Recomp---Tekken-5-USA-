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

// Function: sub_002B2590
// Address: 0x2b2590 - 0x2b25d8
void sub_002B2590_0x2b2590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2590_0x2b2590");
#endif

    switch (ctx->pc) {
        case 0x2b25b0u: goto label_2b25b0;
        case 0x2b25c0u: goto label_2b25c0;
        default: break;
    }

    ctx->pc = 0x2b2590u;

    // 0x2b2590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b2594: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b2594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b2598: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b2598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b259c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b259cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b25a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b25a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b25a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b25a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b25a8: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B25A8u;
    SET_GPR_U32(ctx, 31, 0x2B25B0u);
    ctx->pc = 0x2B25ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B25A8u;
    // 0x2b25ac: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B25A8u, 0x2B25B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B25B0u;
label_2b25b0:
    // 0x2b25b0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2b25b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2b25b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2b25b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2b25b8: 0xc0aa7a0  jal         func_2A9E80
    ctx->pc = 0x2B25B8u;
    SET_GPR_U32(ctx, 31, 0x2B25C0u);
    ctx->pc = 0x2B25BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B25B8u;
    // 0x2b25bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9E80u, 0x2B25B8u, 0x2B25C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B25C0u;
label_2b25c0:
    // 0x2b25c0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2b25c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2b25c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b25c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b25c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b25c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b25cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b25ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b25d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B25D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B25D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B25D0u;
        // 0x2b25d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B25D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B25D8u;
}
