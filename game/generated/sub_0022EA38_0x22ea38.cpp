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

// Function: sub_0022EA38
// Address: 0x22ea38 - 0x22ea58
void sub_0022EA38_0x22ea38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022EA38_0x22ea38");
#endif

    switch (ctx->pc) {
        case 0x22ea4cu: goto label_22ea4c;
        default: break;
    }

    ctx->pc = 0x22ea38u;

    // 0x22ea38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22ea38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22ea3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22ea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22ea40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22ea40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22ea44: 0xc08ba78  jal         func_22E9E0
    ctx->pc = 0x22EA44u;
    SET_GPR_U32(ctx, 31, 0x22EA4Cu);
    ctx->pc = 0x22EA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22EA44u;
    // 0x22ea48: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E9E0u, 0x22EA44u, 0x22EA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EA4Cu;
label_22ea4c:
    // 0x22ea4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22ea4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22ea50: 0x3e00008  jr          $ra
    ctx->pc = 0x22EA50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EA50u;
        // 0x22ea54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22EA50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22EA58u;
}
