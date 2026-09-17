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

// Function: sub_00340788
// Address: 0x340788 - 0x3407f0
void sub_00340788_0x340788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00340788_0x340788");
#endif

    switch (ctx->pc) {
        case 0x3407b4u: goto label_3407b4;
        case 0x3407c8u: goto label_3407c8;
        case 0x3407d0u: goto label_3407d0;
        default: break;
    }

    ctx->pc = 0x340788u;

    // 0x340788: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x340788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34078c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x34078cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x340790: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x340790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x340794: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x340794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340798: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x340798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34079c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x34079cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3407a0: 0x24440880  addiu       $a0, $v0, 0x880
    ctx->pc = 0x3407a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x3407a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3407a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3407a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3407a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3407ac: 0xc0dd940  jal         func_376500
    ctx->pc = 0x3407ACu;
    SET_GPR_U32(ctx, 31, 0x3407B4u);
    ctx->pc = 0x3407B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3407ACu;
    // 0x3407b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376500u, 0x3407ACu, 0x3407B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3407B4u;
label_3407b4:
    // 0x3407b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3407b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3407b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3407b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3407bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3407bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3407c0: 0xc0d0218  jal         func_340860
    ctx->pc = 0x3407C0u;
    SET_GPR_U32(ctx, 31, 0x3407C8u);
    ctx->pc = 0x3407C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3407C0u;
    // 0x3407c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340860u, 0x3407C0u, 0x3407C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3407C8u;
label_3407c8:
    // 0x3407c8: 0xc0d01fc  jal         func_3407F0
    ctx->pc = 0x3407C8u;
    SET_GPR_U32(ctx, 31, 0x3407D0u);
    ctx->pc = 0x3407CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3407C8u;
    // 0x3407cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3407F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3407F0u, 0x3407C8u, 0x3407D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3407D0u;
label_3407d0:
    // 0x3407d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3407d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3407d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3407d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3407d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3407d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3407dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3407dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3407e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3407e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3407e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3407E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3407E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3407E4u;
        // 0x3407e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3407E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3407ECu;
    // 0x3407ec: 0x0  nop
    ctx->pc = 0x3407ecu;
    // NOP
    ctx->pc = 0x3407f0u;
}
