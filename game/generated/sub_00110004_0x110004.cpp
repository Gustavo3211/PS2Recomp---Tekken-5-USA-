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

// Function: sub_00110004
// Address: 0x110004 - 0x1100a0
void sub_00110004_0x110004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110004_0x110004");
#endif

    switch (ctx->pc) {
        case 0x11000cu: goto label_11000c;
        case 0x110030u: goto label_110030;
        case 0x110050u: goto label_110050;
        case 0x110070u: goto label_110070;
        case 0x110090u: goto label_110090;
        default: break;
    }

    ctx->pc = 0x110004u;

    // 0x110004: 0x0  nop
    ctx->pc = 0x110004u;
    // NOP
    // 0x110008: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x110008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11000c:
    // 0x11000c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11000cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110010: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x110010u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110018: 0x3e00008  jr          $ra
    ctx->pc = 0x110018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110018u;
        // 0x11001c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110020u;
    // 0x110020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110028: 0xc043c50  jal         func_10F140
    ctx->pc = 0x110028u;
    SET_GPR_U32(ctx, 31, 0x110030u);
    ctx->pc = 0x10F140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F140u, 0x110028u, 0x110030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110030u;
label_110030:
    // 0x110030: 0xf  sync
    ctx->pc = 0x110030u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x110034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110038: 0x3e00008  jr          $ra
    ctx->pc = 0x110038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110038u;
        // 0x11003c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110040u;
    // 0x110040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110048: 0xc043c54  jal         func_10F150
    ctx->pc = 0x110048u;
    SET_GPR_U32(ctx, 31, 0x110050u);
    ctx->pc = 0x10F150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F150u, 0x110048u, 0x110050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110050u;
label_110050:
    // 0x110050: 0xf  sync
    ctx->pc = 0x110050u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x110054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110058: 0x3e00008  jr          $ra
    ctx->pc = 0x110058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110058u;
        // 0x11005c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110060u;
    // 0x110060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110064: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110068: 0xc043c58  jal         func_10F160
    ctx->pc = 0x110068u;
    SET_GPR_U32(ctx, 31, 0x110070u);
    ctx->pc = 0x10F160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F160u, 0x110068u, 0x110070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110070u;
label_110070:
    // 0x110070: 0xf  sync
    ctx->pc = 0x110070u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x110074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110078: 0x3e00008  jr          $ra
    ctx->pc = 0x110078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110078u;
        // 0x11007c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110080u;
    // 0x110080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110084: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110088: 0xc043c5c  jal         func_10F170
    ctx->pc = 0x110088u;
    SET_GPR_U32(ctx, 31, 0x110090u);
    ctx->pc = 0x10F170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F170u, 0x110088u, 0x110090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110090u;
label_110090:
    // 0x110090: 0xf  sync
    ctx->pc = 0x110090u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x110094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110098: 0x3e00008  jr          $ra
    ctx->pc = 0x110098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110098u;
        // 0x11009c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1100A0u;
}
