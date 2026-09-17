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

// Function: sub_003420C0
// Address: 0x3420c0 - 0x342110
void sub_003420C0_0x3420c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003420C0_0x3420c0");
#endif

    switch (ctx->pc) {
        case 0x3420d4u: goto label_3420d4;
        case 0x3420dcu: goto label_3420dc;
        case 0x3420e4u: goto label_3420e4;
        case 0x3420ecu: goto label_3420ec;
        case 0x3420f4u: goto label_3420f4;
        case 0x3420fcu: goto label_3420fc;
        default: break;
    }

    ctx->pc = 0x3420c0u;

    // 0x3420c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3420c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3420c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3420c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3420c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3420c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3420cc: 0xc0d080a  jal         func_342028
    ctx->pc = 0x3420CCu;
    SET_GPR_U32(ctx, 31, 0x3420D4u);
    ctx->pc = 0x3420D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3420CCu;
    // 0x3420d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342028u, 0x3420CCu, 0x3420D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3420D4u;
label_3420d4:
    // 0x3420d4: 0xc0d076a  jal         func_341DA8
    ctx->pc = 0x3420D4u;
    SET_GPR_U32(ctx, 31, 0x3420DCu);
    ctx->pc = 0x3420D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3420D4u;
    // 0x3420d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341DA8u, 0x3420D4u, 0x3420DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3420DCu;
label_3420dc:
    // 0x3420dc: 0xc0d0792  jal         func_341E48
    ctx->pc = 0x3420DCu;
    SET_GPR_U32(ctx, 31, 0x3420E4u);
    ctx->pc = 0x3420E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3420DCu;
    // 0x3420e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341E48u, 0x3420DCu, 0x3420E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3420E4u;
label_3420e4:
    // 0x3420e4: 0xc0d0818  jal         func_342060
    ctx->pc = 0x3420E4u;
    SET_GPR_U32(ctx, 31, 0x3420ECu);
    ctx->pc = 0x3420E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3420E4u;
    // 0x3420e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342060u, 0x3420E4u, 0x3420ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3420ECu;
label_3420ec:
    // 0x3420ec: 0xc0d0824  jal         func_342090
    ctx->pc = 0x3420ECu;
    SET_GPR_U32(ctx, 31, 0x3420F4u);
    ctx->pc = 0x3420F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3420ECu;
    // 0x3420f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342090u, 0x3420ECu, 0x3420F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3420F4u;
label_3420f4:
    // 0x3420f4: 0xc0d07b6  jal         func_341ED8
    ctx->pc = 0x3420F4u;
    SET_GPR_U32(ctx, 31, 0x3420FCu);
    ctx->pc = 0x3420F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3420F4u;
    // 0x3420f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x341ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341ED8u, 0x3420F4u, 0x3420FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3420FCu;
label_3420fc:
    // 0x3420fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3420fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342100: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x342100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x342104: 0x3e00008  jr          $ra
    ctx->pc = 0x342104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342104u;
        // 0x342108: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34210Cu;
    // 0x34210c: 0x0  nop
    ctx->pc = 0x34210cu;
    // NOP
    ctx->pc = 0x342110u;
}
