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

// Function: sub_0036B840
// Address: 0x36b840 - 0x36b890
void sub_0036B840_0x36b840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B840_0x36b840");
#endif

    switch (ctx->pc) {
        case 0x36b864u: goto label_36b864;
        case 0x36b87cu: goto label_36b87c;
        default: break;
    }

    ctx->pc = 0x36b840u;

    // 0x36b840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36b840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36b844: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x36b844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36b848: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36b848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36b84c: 0x24506e98  addiu       $s0, $v0, 0x6E98
    ctx->pc = 0x36b84cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 28312));
    // 0x36b850: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x36b850u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x1D6E98u));
    // 0x36b854: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x36B854u;
    {
        const bool branch_taken_0x36b854 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36B858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B854u;
        // 0x36b858: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b854) {
            ctx->pc = 0x36B87Cu;
            goto label_36b87c;
        }
    }
    ctx->pc = 0x36B85Cu;
    // 0x36b85c: 0xc0dae78  jal         func_36B9E0
    ctx->pc = 0x36B85Cu;
    SET_GPR_U32(ctx, 31, 0x36B864u);
    ctx->pc = 0x36B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36B9E0u, 0x36B85Cu, 0x36B864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B864u;
label_36b864:
    // 0x36b864: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x36b864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x36b868: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x36b868u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x36b86c: 0x24a5bb40  addiu       $a1, $a1, -0x44C0
    ctx->pc = 0x36b86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949696));
    // 0x36b870: 0x24c66ec8  addiu       $a2, $a2, 0x6EC8
    ctx->pc = 0x36b870u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28360));
    // 0x36b874: 0xc0493ca  jal         func_124F28
    ctx->pc = 0x36B874u;
    SET_GPR_U32(ctx, 31, 0x36B87Cu);
    ctx->pc = 0x36B878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B874u;
    // 0x36b878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F28u, 0x36B874u, 0x36B87Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B87Cu;
label_36b87c:
    // 0x36b87c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36b87cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b880: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36b880u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b884: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36b884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36b888: 0x3e00008  jr          $ra
    ctx->pc = 0x36B888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B888u;
        // 0x36b88c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B890u;
}
