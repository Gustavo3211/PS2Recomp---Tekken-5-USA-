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

// Function: sub_00342278
// Address: 0x342278 - 0x3422d8
void sub_00342278_0x342278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00342278_0x342278");
#endif

    switch (ctx->pc) {
        case 0x34228cu: goto label_34228c;
        case 0x342294u: goto label_342294;
        case 0x34229cu: goto label_34229c;
        case 0x3422a4u: goto label_3422a4;
        case 0x3422acu: goto label_3422ac;
        case 0x3422b4u: goto label_3422b4;
        case 0x3422bcu: goto label_3422bc;
        case 0x3422c4u: goto label_3422c4;
        default: break;
    }

    ctx->pc = 0x342278u;

    // 0x342278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x342278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34227c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34227cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x342280: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x342280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x342284: 0xc0d080a  jal         func_342028
    ctx->pc = 0x342284u;
    SET_GPR_U32(ctx, 31, 0x34228Cu);
    ctx->pc = 0x342288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342284u;
    // 0x342288: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342028u, 0x342284u, 0x34228Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34228Cu;
label_34228c:
    // 0x34228c: 0xc0d076a  jal         func_341DA8
    ctx->pc = 0x34228Cu;
    SET_GPR_U32(ctx, 31, 0x342294u);
    ctx->pc = 0x342290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34228Cu;
    // 0x342290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DA8u, 0x34228Cu, 0x342294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342294u;
label_342294:
    // 0x342294: 0xc0d0778  jal         func_341DE0
    ctx->pc = 0x342294u;
    SET_GPR_U32(ctx, 31, 0x34229Cu);
    ctx->pc = 0x342298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342294u;
    // 0x342298: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DE0u, 0x342294u, 0x34229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34229Cu;
label_34229c:
    // 0x34229c: 0xc0d0792  jal         func_341E48
    ctx->pc = 0x34229Cu;
    SET_GPR_U32(ctx, 31, 0x3422A4u);
    ctx->pc = 0x3422A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34229Cu;
    // 0x3422a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341E48u, 0x34229Cu, 0x3422A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3422A4u;
label_3422a4:
    // 0x3422a4: 0xc0d0792  jal         func_341E48
    ctx->pc = 0x3422A4u;
    SET_GPR_U32(ctx, 31, 0x3422ACu);
    ctx->pc = 0x3422A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3422A4u;
    // 0x3422a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341E48u, 0x3422A4u, 0x3422ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3422ACu;
label_3422ac:
    // 0x3422ac: 0xc0d0818  jal         func_342060
    ctx->pc = 0x3422ACu;
    SET_GPR_U32(ctx, 31, 0x3422B4u);
    ctx->pc = 0x3422B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3422ACu;
    // 0x3422b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342060u, 0x3422ACu, 0x3422B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3422B4u;
label_3422b4:
    // 0x3422b4: 0xc0d0824  jal         func_342090
    ctx->pc = 0x3422B4u;
    SET_GPR_U32(ctx, 31, 0x3422BCu);
    ctx->pc = 0x3422B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3422B4u;
    // 0x3422b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342090u, 0x3422B4u, 0x3422BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3422BCu;
label_3422bc:
    // 0x3422bc: 0xc0d07b6  jal         func_341ED8
    ctx->pc = 0x3422BCu;
    SET_GPR_U32(ctx, 31, 0x3422C4u);
    ctx->pc = 0x3422C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3422BCu;
    // 0x3422c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341ED8u, 0x3422BCu, 0x3422C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3422C4u;
label_3422c4:
    // 0x3422c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3422c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3422c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3422c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3422cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3422CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3422D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3422CCu;
        // 0x3422d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3422CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3422D4u;
    // 0x3422d4: 0x0  nop
    ctx->pc = 0x3422d4u;
    // NOP
    ctx->pc = 0x3422d8u;
}
