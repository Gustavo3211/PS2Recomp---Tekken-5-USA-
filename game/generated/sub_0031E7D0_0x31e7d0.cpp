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

// Function: sub_0031E7D0
// Address: 0x31e7d0 - 0x31e820
void sub_0031E7D0_0x31e7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E7D0_0x31e7d0");
#endif

    switch (ctx->pc) {
        case 0x31e7ecu: goto label_31e7ec;
        case 0x31e7fcu: goto label_31e7fc;
        case 0x31e80cu: goto label_31e80c;
        default: break;
    }

    ctx->pc = 0x31e7d0u;

    // 0x31e7d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31e7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31e7d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x31e7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x31e7d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31e7d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e7dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31e7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31e7e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31e7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31e7e4: 0xc0ce768  jal         func_339DA0
    ctx->pc = 0x31E7E4u;
    SET_GPR_U32(ctx, 31, 0x31E7ECu);
    ctx->pc = 0x31E7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E7E4u;
    // 0x31e7e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339DA0u, 0x31E7E4u, 0x31E7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E7ECu;
label_31e7ec:
    // 0x31e7ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31e7ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e7f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x31e7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e7f4: 0xc0ce730  jal         func_339CC0
    ctx->pc = 0x31E7F4u;
    SET_GPR_U32(ctx, 31, 0x31E7FCu);
    ctx->pc = 0x31E7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E7F4u;
    // 0x31e7f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339CC0u, 0x31E7F4u, 0x31E7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E7FCu;
label_31e7fc:
    // 0x31e7fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31e7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e800: 0x103140  sll         $a2, $s0, 5
    ctx->pc = 0x31e800u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x31e804: 0xc0c7a2e  jal         func_31E8B8
    ctx->pc = 0x31E804u;
    SET_GPR_U32(ctx, 31, 0x31E80Cu);
    ctx->pc = 0x31E808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E804u;
    // 0x31e808: 0x22940  sll         $a1, $v0, 5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8B8u, 0x31E804u, 0x31E80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E80Cu;
label_31e80c:
    // 0x31e80c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31e80cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e810: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x31e810u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31e814: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31e814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e818: 0x3e00008  jr          $ra
    ctx->pc = 0x31E818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E818u;
        // 0x31e81c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E820u;
}
