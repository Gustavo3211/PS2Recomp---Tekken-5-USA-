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

// Function: sub_002997A8
// Address: 0x2997a8 - 0x2997e0
void sub_002997A8_0x2997a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002997A8_0x2997a8");
#endif

    switch (ctx->pc) {
        case 0x2997bcu: goto label_2997bc;
        case 0x2997c4u: goto label_2997c4;
        case 0x2997ccu: goto label_2997cc;
        default: break;
    }

    ctx->pc = 0x2997a8u;

    // 0x2997a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2997a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2997ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2997acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2997b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2997b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2997b4: 0xc0b7a98  jal         func_2DEA60
    ctx->pc = 0x2997B4u;
    SET_GPR_U32(ctx, 31, 0x2997BCu);
    ctx->pc = 0x2997B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2997B4u;
    // 0x2997b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEA60u, 0x2997B4u, 0x2997BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2997BCu;
label_2997bc:
    // 0x2997bc: 0xc08b882  jal         func_22E208
    ctx->pc = 0x2997BCu;
    SET_GPR_U32(ctx, 31, 0x2997C4u);
    ctx->pc = 0x2997C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2997BCu;
    // 0x2997c0: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22E208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E208u, 0x2997BCu, 0x2997C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2997C4u;
label_2997c4:
    // 0x2997c4: 0xc0a5b52  jal         func_296D48
    ctx->pc = 0x2997C4u;
    SET_GPR_U32(ctx, 31, 0x2997CCu);
    ctx->pc = 0x2997C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2997C4u;
    // 0x2997c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D48u, 0x2997C4u, 0x2997CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2997CCu;
label_2997cc:
    // 0x2997cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2997ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2997d0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2997d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2997d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2997D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2997D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2997D4u;
        // 0x2997d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2997D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2997DCu;
    // 0x2997dc: 0x0  nop
    ctx->pc = 0x2997dcu;
    // NOP
    ctx->pc = 0x2997e0u;
}
