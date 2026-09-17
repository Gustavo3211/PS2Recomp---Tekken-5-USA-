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

// Function: sub_001F0430
// Address: 0x1f0430 - 0x1f04b8
void sub_001F0430_0x1f0430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0430_0x1f0430");
#endif

    switch (ctx->pc) {
        case 0x1f0468u: goto label_1f0468;
        case 0x1f0470u: goto label_1f0470;
        case 0x1f0478u: goto label_1f0478;
        case 0x1f0480u: goto label_1f0480;
        case 0x1f0488u: goto label_1f0488;
        case 0x1f0490u: goto label_1f0490;
        case 0x1f0498u: goto label_1f0498;
        case 0x1f04a0u: goto label_1f04a0;
        case 0x1f04a8u: goto label_1f04a8;
        default: break;
    }

    ctx->pc = 0x1f0430u;

    // 0x1f0430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f0430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f0434: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1f0434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x1f0438: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f0438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f043c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f043cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0440: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f0440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f0444: 0x24458858  addiu       $a1, $v0, -0x77A8
    ctx->pc = 0x1f0444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936664));
    // 0x1f0448: 0x8f83a530  lw          $v1, -0x5AD0($gp)
    ctx->pc = 0x1f0448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944048)));
    // 0x1f044c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f044cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3A8858u));
    // 0x1f0450: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1f0450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1f0454: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f0454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f0458: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0458u;
    {
        const bool branch_taken_0x1f0458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0458u;
        // 0x1f045c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0458) {
            ctx->pc = 0x1F0470u;
            goto label_1f0470;
        }
    }
    ctx->pc = 0x1F0460u;
    // 0x1f0460: 0xc08efa0  jal         func_23BE80
    ctx->pc = 0x1F0460u;
    SET_GPR_U32(ctx, 31, 0x1F0468u);
    ctx->pc = 0x1F0464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0460u;
    // 0x1f0464: 0x8ca40028  lw          $a0, 0x28($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BE80u, 0x1F0460u, 0x1F0468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0468u;
label_1f0468:
    // 0x1f0468: 0xc090484  jal         func_241210
    ctx->pc = 0x1F0468u;
    SET_GPR_U32(ctx, 31, 0x1F0470u);
    ctx->pc = 0x241210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241210u, 0x1F0468u, 0x1F0470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0470u;
label_1f0470:
    // 0x1f0470: 0xc0875d8  jal         func_21D760
    ctx->pc = 0x1F0470u;
    SET_GPR_U32(ctx, 31, 0x1F0478u);
    ctx->pc = 0x21D760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D760u, 0x1F0470u, 0x1F0478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0478u;
label_1f0478:
    // 0x1f0478: 0xc089a2e  jal         func_2268B8
    ctx->pc = 0x1F0478u;
    SET_GPR_U32(ctx, 31, 0x1F0480u);
    ctx->pc = 0x2268B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2268B8u, 0x1F0478u, 0x1F0480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0480u;
label_1f0480:
    // 0x1f0480: 0xc08991e  jal         func_226478
    ctx->pc = 0x1F0480u;
    SET_GPR_U32(ctx, 31, 0x1F0488u);
    ctx->pc = 0x226478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226478u, 0x1F0480u, 0x1F0488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0488u;
label_1f0488:
    // 0x1f0488: 0xc089b72  jal         func_226DC8
    ctx->pc = 0x1F0488u;
    SET_GPR_U32(ctx, 31, 0x1F0490u);
    ctx->pc = 0x226DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226DC8u, 0x1F0488u, 0x1F0490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0490u;
label_1f0490:
    // 0x1f0490: 0xc0a60ec  jal         func_2983B0
    ctx->pc = 0x1F0490u;
    SET_GPR_U32(ctx, 31, 0x1F0498u);
    ctx->pc = 0x2983B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2983B0u, 0x1F0490u, 0x1F0498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0498u;
label_1f0498:
    // 0x1f0498: 0xc0a614e  jal         func_298538
    ctx->pc = 0x1F0498u;
    SET_GPR_U32(ctx, 31, 0x1F04A0u);
    ctx->pc = 0x1F049Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0498u;
    // 0x1f049c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x298538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298538u, 0x1F0498u, 0x1F04A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F04A0u;
label_1f04a0:
    // 0x1f04a0: 0xc0b7a78  jal         func_2DE9E0
    ctx->pc = 0x1F04A0u;
    SET_GPR_U32(ctx, 31, 0x1F04A8u);
    ctx->pc = 0x1F04A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F04A0u;
    // 0x1f04a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE9E0u, 0x1F04A0u, 0x1F04A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F04A8u;
label_1f04a8:
    // 0x1f04a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f04a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f04ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f04acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f04b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F04B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F04B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04B0u;
        // 0x1f04b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F04B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F04B8u;
}
