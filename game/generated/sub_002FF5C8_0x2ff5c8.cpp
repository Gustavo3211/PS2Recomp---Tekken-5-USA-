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

// Function: sub_002FF5C8
// Address: 0x2ff5c8 - 0x2ff620
void sub_002FF5C8_0x2ff5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF5C8_0x2ff5c8");
#endif

    switch (ctx->pc) {
        case 0x2ff5e4u: goto label_2ff5e4;
        case 0x2ff5f8u: goto label_2ff5f8;
        case 0x2ff600u: goto label_2ff600;
        case 0x2ff60cu: goto label_2ff60c;
        default: break;
    }

    ctx->pc = 0x2ff5c8u;

    // 0x2ff5c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ff5c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ff5cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ff5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ff5d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ff5d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff5d4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ff5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ff5d8: 0x26050038  addiu       $a1, $s0, 0x38
    ctx->pc = 0x2ff5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x2ff5dc: 0xc0c1552  jal         func_305548
    ctx->pc = 0x2FF5DCu;
    SET_GPR_U32(ctx, 31, 0x2FF5E4u);
    ctx->pc = 0x2FF5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF5DCu;
    // 0x2ff5e0: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305548u, 0x2FF5DCu, 0x2FF5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF5E4u;
label_2ff5e4:
    // 0x2ff5e4: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x2ff5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2ff5e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FF5E8u;
    {
        const bool branch_taken_0x2ff5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF5E8u;
        // 0x2ff5ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff5e8) {
            ctx->pc = 0x2FF5F8u;
            goto label_2ff5f8;
        }
    }
    ctx->pc = 0x2FF5F0u;
    // 0x2ff5f0: 0xc0ae4d6  jal         func_2B9358
    ctx->pc = 0x2FF5F0u;
    SET_GPR_U32(ctx, 31, 0x2FF5F8u);
    ctx->pc = 0x2FF5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF5F0u;
    // 0x2ff5f4: 0x8e05003c  lw          $a1, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9358u, 0x2FF5F0u, 0x2FF5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF5F8u;
label_2ff5f8:
    // 0x2ff5f8: 0xc0bfdae  jal         func_2FF6B8
    ctx->pc = 0x2FF5F8u;
    SET_GPR_U32(ctx, 31, 0x2FF600u);
    ctx->pc = 0x2FF5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF5F8u;
    // 0x2ff5fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF6B8u, 0x2FF5F8u, 0x2FF600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF600u;
label_2ff600:
    // 0x2ff600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff604: 0xc0bf994  jal         func_2FE650
    ctx->pc = 0x2FF604u;
    SET_GPR_U32(ctx, 31, 0x2FF60Cu);
    ctx->pc = 0x2FF608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FF604u;
    // 0x2ff608: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE650u, 0x2FF604u, 0x2FF60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FF60Cu;
label_2ff60c:
    // 0x2ff60c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ff60cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ff610: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ff610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ff614: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF614u;
        // 0x2ff618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF61Cu;
    // 0x2ff61c: 0x0  nop
    ctx->pc = 0x2ff61cu;
    // NOP
    ctx->pc = 0x2ff620u;
}
