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

// Function: sub_002A9898
// Address: 0x2a9898 - 0x2a98d8
void sub_002A9898_0x2a9898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9898_0x2a9898");
#endif

    switch (ctx->pc) {
        case 0x2a98bcu: goto label_2a98bc;
        default: break;
    }

    ctx->pc = 0x2a9898u;

    // 0x2a9898: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a9898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a989c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2a989cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a98a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a98a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a98a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a98a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a98a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a98a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a98ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a98acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a98b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2a98b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2a98b4: 0xc0a9e50  jal         func_2A7940
    ctx->pc = 0x2A98B4u;
    SET_GPR_U32(ctx, 31, 0x2A98BCu);
    ctx->pc = 0x2A98B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A98B4u;
    // 0x2a98b8: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7940u, 0x2A98B4u, 0x2A98BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A98BCu;
label_2a98bc:
    // 0x2a98bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2a98bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a98c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2a98c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2a98c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a98c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a98c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a98c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a98cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A98CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A98D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A98CCu;
        // 0x2a98d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A98CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A98D4u;
    // 0x2a98d4: 0x0  nop
    ctx->pc = 0x2a98d4u;
    // NOP
    ctx->pc = 0x2a98d8u;
}
