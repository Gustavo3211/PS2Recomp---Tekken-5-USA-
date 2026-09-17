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

// Function: sub_0023F310
// Address: 0x23f310 - 0x23f378
void sub_0023F310_0x23f310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023F310_0x23f310");
#endif

    switch (ctx->pc) {
        case 0x23f338u: goto label_23f338;
        case 0x23f34cu: goto label_23f34c;
        default: break;
    }

    ctx->pc = 0x23f310u;

    // 0x23f310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23f314: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x23f314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x23f318: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23f318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23f31c: 0x24502c80  addiu       $s0, $v0, 0x2C80
    ctx->pc = 0x23f31cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11392));
    // 0x23f320: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x23f320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x23f324: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23f324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f328: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x23f328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x23f32c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x23f32cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f330: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x23f330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x23f334: 0x0  nop
    ctx->pc = 0x23f334u;
    // NOP
label_23f338:
    // 0x23f338: 0x2a220040  slti        $v0, $s1, 0x40
    ctx->pc = 0x23f338u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x23f33c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23F33Cu;
    {
        const bool branch_taken_0x23f33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F33Cu;
        // 0x23f340: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f33c) {
            ctx->pc = 0x23F358u;
            goto label_23f358;
        }
    }
    ctx->pc = 0x23F344u;
    // 0x23f344: 0xc08fc92  jal         func_23F248
    ctx->pc = 0x23F344u;
    SET_GPR_U32(ctx, 31, 0x23F34Cu);
    ctx->pc = 0x23F348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F344u;
    // 0x23f348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F248u, 0x23F344u, 0x23F34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F34Cu;
label_23f34c:
    // 0x23f34c: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23F34Cu;
    {
        const bool branch_taken_0x23f34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f34c) {
            ctx->pc = 0x23F350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23F34Cu;
            // 0x23f350: 0x26100024  addiu       $s0, $s0, 0x24 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23F338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f338;
        }
    }
    ctx->pc = 0x23F354u;
    // 0x23f354: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x23f354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23f358:
    // 0x23f358: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x23f358u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f35c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23f35cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f360: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x23f360u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23f364: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x23f364u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f368: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x23f368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x23f36c: 0x3e00008  jr          $ra
    ctx->pc = 0x23F36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F36Cu;
        // 0x23f370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F374u;
    // 0x23f374: 0x0  nop
    ctx->pc = 0x23f374u;
    // NOP
    ctx->pc = 0x23f378u;
}
