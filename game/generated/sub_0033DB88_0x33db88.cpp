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

// Function: sub_0033DB88
// Address: 0x33db88 - 0x33dbb8
void sub_0033DB88_0x33db88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033DB88_0x33db88");
#endif

    switch (ctx->pc) {
        case 0x33db9cu: goto label_33db9c;
        default: break;
    }

    ctx->pc = 0x33db88u;

    // 0x33db88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33db88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33db8c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x33db8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33db90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33db90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x33db94: 0xc0cf6ee  jal         func_33DBB8
    ctx->pc = 0x33DB94u;
    SET_GPR_U32(ctx, 31, 0x33DB9Cu);
    ctx->pc = 0x33DB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33DB94u;
    // 0x33db98: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33DBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33DBB8u, 0x33DB94u, 0x33DB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33DB9Cu;
label_33db9c:
    // 0x33db9c: 0x9fa20004  lwu         $v0, 0x4($sp)
    ctx->pc = 0x33db9cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x33dba0: 0x9fa30000  lwu         $v1, 0x0($sp)
    ctx->pc = 0x33dba0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33dba4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33dba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33dba8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33dba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33dbac: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x33dbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33dbb0: 0x3e00008  jr          $ra
    ctx->pc = 0x33DBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33DBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33DBB0u;
        // 0x33dbb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33DBB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33DBB8u;
}
