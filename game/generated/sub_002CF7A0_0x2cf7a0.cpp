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

// Function: sub_002CF7A0
// Address: 0x2cf7a0 - 0x2cf7f0
void sub_002CF7A0_0x2cf7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF7A0_0x2cf7a0");
#endif

    switch (ctx->pc) {
        case 0x2cf7c4u: goto label_2cf7c4;
        case 0x2cf7d0u: goto label_2cf7d0;
        case 0x2cf7dcu: goto label_2cf7dc;
        default: break;
    }

    ctx->pc = 0x2cf7a0u;

    // 0x2cf7a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cf7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cf7a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf7a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cf7a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf7ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cf7acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cf7b0: 0x24b10760  addiu       $s1, $a1, 0x760
    ctx->pc = 0x2cf7b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 1888));
    // 0x2cf7b4: 0x26040720  addiu       $a0, $s0, 0x720
    ctx->pc = 0x2cf7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1824));
    // 0x2cf7b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cf7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cf7bc: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x2CF7BCu;
    SET_GPR_U32(ctx, 31, 0x2CF7C4u);
    ctx->pc = 0x2CF7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF7BCu;
    // 0x2cf7c0: 0x24a50720  addiu       $a1, $a1, 0x720 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x2CF7BCu, 0x2CF7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF7C4u;
label_2cf7c4:
    // 0x2cf7c4: 0x26040760  addiu       $a0, $s0, 0x760
    ctx->pc = 0x2cf7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1888));
    // 0x2cf7c8: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x2CF7C8u;
    SET_GPR_U32(ctx, 31, 0x2CF7D0u);
    ctx->pc = 0x2CF7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF7C8u;
    // 0x2cf7cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x2CF7C8u, 0x2CF7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF7D0u;
label_2cf7d0:
    // 0x2cf7d0: 0x260406e0  addiu       $a0, $s0, 0x6E0
    ctx->pc = 0x2cf7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1760));
    // 0x2cf7d4: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x2CF7D4u;
    SET_GPR_U32(ctx, 31, 0x2CF7DCu);
    ctx->pc = 0x2CF7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF7D4u;
    // 0x2cf7d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x2CF7D4u, 0x2CF7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF7DCu;
label_2cf7dc:
    // 0x2cf7dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cf7dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cf7e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cf7e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cf7e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cf7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF7E8u;
        // 0x2cf7ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF7F0u;
}
