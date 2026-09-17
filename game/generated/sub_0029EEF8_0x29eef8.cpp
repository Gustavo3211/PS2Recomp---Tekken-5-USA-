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

// Function: sub_0029EEF8
// Address: 0x29eef8 - 0x29ef58
void sub_0029EEF8_0x29eef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EEF8_0x29eef8");
#endif

    switch (ctx->pc) {
        case 0x29ef0cu: goto label_29ef0c;
        case 0x29ef14u: goto label_29ef14;
        case 0x29ef1cu: goto label_29ef1c;
        case 0x29ef24u: goto label_29ef24;
        case 0x29ef2cu: goto label_29ef2c;
        case 0x29ef34u: goto label_29ef34;
        case 0x29ef3cu: goto label_29ef3c;
        case 0x29ef44u: goto label_29ef44;
        default: break;
    }

    ctx->pc = 0x29eef8u;

    // 0x29eef8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29eef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29eefc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29eefcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29ef00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29ef00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29ef04: 0xc0a7d00  jal         func_29F400
    ctx->pc = 0x29EF04u;
    SET_GPR_U32(ctx, 31, 0x29EF0Cu);
    ctx->pc = 0x29EF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EF04u;
    // 0x29ef08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F400u, 0x29EF04u, 0x29EF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF0Cu;
label_29ef0c:
    // 0x29ef0c: 0xc0a7ff0  jal         func_29FFC0
    ctx->pc = 0x29EF0Cu;
    SET_GPR_U32(ctx, 31, 0x29EF14u);
    ctx->pc = 0x29EF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EF0Cu;
    // 0x29ef10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FFC0u, 0x29EF0Cu, 0x29EF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF14u;
label_29ef14:
    // 0x29ef14: 0xc0a802c  jal         func_2A00B0
    ctx->pc = 0x29EF14u;
    SET_GPR_U32(ctx, 31, 0x29EF1Cu);
    ctx->pc = 0x29EF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EF14u;
    // 0x29ef18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A00B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A00B0u, 0x29EF14u, 0x29EF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF1Cu;
label_29ef1c:
    // 0x29ef1c: 0xc0a83b8  jal         func_2A0EE0
    ctx->pc = 0x29EF1Cu;
    SET_GPR_U32(ctx, 31, 0x29EF24u);
    ctx->pc = 0x29EF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EF1Cu;
    // 0x29ef20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0EE0u, 0x29EF1Cu, 0x29EF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF24u;
label_29ef24:
    // 0x29ef24: 0xc0a8246  jal         func_2A0918
    ctx->pc = 0x29EF24u;
    SET_GPR_U32(ctx, 31, 0x29EF2Cu);
    ctx->pc = 0x29EF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EF24u;
    // 0x29ef28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0918u, 0x29EF24u, 0x29EF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF2Cu;
label_29ef2c:
    // 0x29ef2c: 0xc0a818c  jal         func_2A0630
    ctx->pc = 0x29EF2Cu;
    SET_GPR_U32(ctx, 31, 0x29EF34u);
    ctx->pc = 0x29EF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EF2Cu;
    // 0x29ef30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A0630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A0630u, 0x29EF2Cu, 0x29EF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF34u;
label_29ef34:
    // 0x29ef34: 0xc0a7ea8  jal         func_29FAA0
    ctx->pc = 0x29EF34u;
    SET_GPR_U32(ctx, 31, 0x29EF3Cu);
    ctx->pc = 0x29EF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EF34u;
    // 0x29ef38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29FAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29FAA0u, 0x29EF34u, 0x29EF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF3Cu;
label_29ef3c:
    // 0x29ef3c: 0xc0a889c  jal         func_2A2270
    ctx->pc = 0x29EF3Cu;
    SET_GPR_U32(ctx, 31, 0x29EF44u);
    ctx->pc = 0x29EF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29EF3Cu;
    // 0x29ef40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2270u, 0x29EF3Cu, 0x29EF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29EF44u;
label_29ef44:
    // 0x29ef44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29ef44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ef48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29ef48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29ef4c: 0x3e00008  jr          $ra
    ctx->pc = 0x29EF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF4Cu;
        // 0x29ef50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EF54u;
    // 0x29ef54: 0x0  nop
    ctx->pc = 0x29ef54u;
    // NOP
    ctx->pc = 0x29ef58u;
}
