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

// Function: sub_0032D858
// Address: 0x32d858 - 0x32d8a0
void sub_0032D858_0x32d858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032D858_0x32d858");
#endif

    switch (ctx->pc) {
        case 0x32d878u: goto label_32d878;
        case 0x32d884u: goto label_32d884;
        default: break;
    }

    ctx->pc = 0x32d858u;

    // 0x32d858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x32d858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32d85c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x32d85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32d860: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32d860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32d864: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x32d864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d868: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32d868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32d86c: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x32d86cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x32d870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32d870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32d874: 0x0  nop
    ctx->pc = 0x32d874u;
    // NOP
label_32d878:
    // 0x32d878: 0x26100100  addiu       $s0, $s0, 0x100
    ctx->pc = 0x32d878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x32d87c: 0xc0cb632  jal         func_32D8C8
    ctx->pc = 0x32D87Cu;
    SET_GPR_U32(ctx, 31, 0x32D884u);
    ctx->pc = 0x32D880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32D87Cu;
    // 0x32d880: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D8C8u, 0x32D87Cu, 0x32D884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32D884u;
label_32d884:
    // 0x32d884: 0x621fffc  bgez        $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x32D884u;
    {
        const bool branch_taken_0x32d884 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x32D888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D884u;
        // 0x32d888: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32d884) {
            ctx->pc = 0x32D878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32d878;
        }
    }
    ctx->pc = 0x32D88Cu;
    // 0x32d88c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32d88cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32d890: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32d890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32d894: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32d894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32d898: 0x3e00008  jr          $ra
    ctx->pc = 0x32D898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32D89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32D898u;
        // 0x32d89c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32D898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32D8A0u;
}
