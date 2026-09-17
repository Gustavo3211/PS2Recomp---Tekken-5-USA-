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

// Function: sub_00298330
// Address: 0x298330 - 0x298380
void sub_00298330_0x298330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298330_0x298330");
#endif

    switch (ctx->pc) {
        case 0x29835cu: goto label_29835c;
        case 0x298368u: goto label_298368;
        default: break;
    }

    ctx->pc = 0x298330u;

    // 0x298330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x298330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x298334: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x298334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x298338: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x298338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29833c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29833cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298340: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x298340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x298344: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x298344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x298348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x298348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29834c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29834cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298350: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x298350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x298354: 0xc0a9e30  jal         func_2A78C0
    ctx->pc = 0x298354u;
    SET_GPR_U32(ctx, 31, 0x29835Cu);
    ctx->pc = 0x298358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298354u;
    // 0x298358: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A78C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A78C0u, 0x298354u, 0x29835Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29835Cu;
label_29835c:
    // 0x29835c: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x29835cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x298360: 0xc0db026  jal         func_36C098
    ctx->pc = 0x298360u;
    SET_GPR_U32(ctx, 31, 0x298368u);
    ctx->pc = 0x298364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298360u;
    // 0x298364: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C098u, 0x298360u, 0x298368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298368u;
label_298368:
    // 0x298368: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29836c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29836cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x298370: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x298370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298374: 0x3e00008  jr          $ra
    ctx->pc = 0x298374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298374u;
        // 0x298378: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29837Cu;
    // 0x29837c: 0x0  nop
    ctx->pc = 0x29837cu;
    // NOP
    ctx->pc = 0x298380u;
}
