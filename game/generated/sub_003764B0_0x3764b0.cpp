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

// Function: sub_003764B0
// Address: 0x3764b0 - 0x376500
void sub_003764B0_0x3764b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003764B0_0x3764b0");
#endif

    switch (ctx->pc) {
        case 0x3764d4u: goto label_3764d4;
        case 0x3764e8u: goto label_3764e8;
        default: break;
    }

    ctx->pc = 0x3764b0u;

    // 0x3764b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3764b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3764b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3764b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3764b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3764b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3764bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3764bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3764c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3764c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3764c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3764c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3764c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3764c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3764cc: 0xc0dd94e  jal         func_376538
    ctx->pc = 0x3764CCu;
    SET_GPR_U32(ctx, 31, 0x3764D4u);
    ctx->pc = 0x3764D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3764CCu;
    // 0x3764d0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376538u, 0x3764CCu, 0x3764D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3764D4u;
label_3764d4:
    // 0x3764d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3764d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3764d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3764d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3764dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3764dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3764e0: 0xc0cb152  jal         func_32C548
    ctx->pc = 0x3764E0u;
    SET_GPR_U32(ctx, 31, 0x3764E8u);
    ctx->pc = 0x3764E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3764E0u;
    // 0x3764e4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C548u, 0x3764E0u, 0x3764E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3764E8u;
label_3764e8:
    // 0x3764e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3764e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3764ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3764ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3764f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3764f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3764f4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3764f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3764f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3764F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3764FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3764F8u;
        // 0x3764fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3764F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376500u;
}
