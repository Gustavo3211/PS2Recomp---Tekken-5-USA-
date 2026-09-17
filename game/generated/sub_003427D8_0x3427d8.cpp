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

// Function: sub_003427D8
// Address: 0x3427d8 - 0x342820
void sub_003427D8_0x3427d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003427D8_0x3427d8");
#endif

    switch (ctx->pc) {
        case 0x3427ecu: goto label_3427ec;
        case 0x3427f4u: goto label_3427f4;
        case 0x3427fcu: goto label_3427fc;
        case 0x342804u: goto label_342804;
        case 0x34280cu: goto label_34280c;
        default: break;
    }

    ctx->pc = 0x3427d8u;

    // 0x3427d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3427d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3427dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3427dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3427e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3427e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3427e4: 0xc0d093e  jal         func_3424F8
    ctx->pc = 0x3427E4u;
    SET_GPR_U32(ctx, 31, 0x3427ECu);
    ctx->pc = 0x3427E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3427E4u;
    // 0x3427e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3424F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3424F8u, 0x3427E4u, 0x3427ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3427ECu;
label_3427ec:
    // 0x3427ec: 0xc0d076a  jal         func_341DA8
    ctx->pc = 0x3427ECu;
    SET_GPR_U32(ctx, 31, 0x3427F4u);
    ctx->pc = 0x3427F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3427ECu;
    // 0x3427f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DA8u, 0x3427ECu, 0x3427F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3427F4u;
label_3427f4:
    // 0x3427f4: 0xc0d0778  jal         func_341DE0
    ctx->pc = 0x3427F4u;
    SET_GPR_U32(ctx, 31, 0x3427FCu);
    ctx->pc = 0x3427F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3427F4u;
    // 0x3427f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DE0u, 0x3427F4u, 0x3427FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3427FCu;
label_3427fc:
    // 0x3427fc: 0xc0d0958  jal         func_342560
    ctx->pc = 0x3427FCu;
    SET_GPR_U32(ctx, 31, 0x342804u);
    ctx->pc = 0x342800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3427FCu;
    // 0x342800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342560u, 0x3427FCu, 0x342804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x342804u;
label_342804:
    // 0x342804: 0xc0d09ca  jal         func_342728
    ctx->pc = 0x342804u;
    SET_GPR_U32(ctx, 31, 0x34280Cu);
    ctx->pc = 0x342808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342804u;
    // 0x342808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342728u, 0x342804u, 0x34280Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34280Cu;
label_34280c:
    // 0x34280c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34280cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342810: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x342810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x342814: 0x3e00008  jr          $ra
    ctx->pc = 0x342814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342814u;
        // 0x342818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34281Cu;
    // 0x34281c: 0x0  nop
    ctx->pc = 0x34281cu;
    // NOP
    ctx->pc = 0x342820u;
}
