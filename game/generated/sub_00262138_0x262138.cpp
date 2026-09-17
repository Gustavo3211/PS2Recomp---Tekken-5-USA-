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

// Function: sub_00262138
// Address: 0x262138 - 0x262180
void sub_00262138_0x262138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262138_0x262138");
#endif

    switch (ctx->pc) {
        case 0x262160u: goto label_262160;
        case 0x26216cu: goto label_26216c;
        default: break;
    }

    ctx->pc = 0x262138u;

    // 0x262138: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x262138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26213c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26213cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x262140: 0x3c100017  lui         $s0, 0x17
    ctx->pc = 0x262140u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)23 << 16));
    // 0x262144: 0x2610ec30  addiu       $s0, $s0, -0x13D0
    ctx->pc = 0x262144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962224));
    // 0x262148: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x262148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26214c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26214cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262150: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x262150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262154: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x262154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x262158: 0xc098af8  jal         func_262BE0
    ctx->pc = 0x262158u;
    SET_GPR_U32(ctx, 31, 0x262160u);
    ctx->pc = 0x26215Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262158u;
    // 0x26215c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262BE0u, 0x262158u, 0x262160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262160u;
label_262160:
    // 0x262160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x262160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262164: 0xc098af8  jal         func_262BE0
    ctx->pc = 0x262164u;
    SET_GPR_U32(ctx, 31, 0x26216Cu);
    ctx->pc = 0x262168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262164u;
    // 0x262168: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262BE0u, 0x262164u, 0x26216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26216Cu;
label_26216c:
    // 0x26216c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26216cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262170: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x262170u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x262174: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x262174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262178: 0x3e00008  jr          $ra
    ctx->pc = 0x262178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262178u;
        // 0x26217c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262180u;
}
