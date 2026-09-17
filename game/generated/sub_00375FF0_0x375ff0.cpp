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

// Function: sub_00375FF0
// Address: 0x375ff0 - 0x376050
void sub_00375FF0_0x375ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375FF0_0x375ff0");
#endif

    switch (ctx->pc) {
        case 0x376028u: goto label_376028;
        case 0x37603cu: goto label_37603c;
        default: break;
    }

    ctx->pc = 0x375ff0u;

    // 0x375ff0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x375ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x375ff4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x375ff4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x375ff8: 0x244222a0  addiu       $v0, $v0, 0x22A0
    ctx->pc = 0x375ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8864));
    // 0x375ffc: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x375ffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x376000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x376000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x376004: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x376004u;
    {
        const bool branch_taken_0x376004 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x376008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376004u;
        // 0x376008: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376004) {
            ctx->pc = 0x376018u;
            goto label_376018;
        }
    }
    ctx->pc = 0x37600Cu;
    // 0x37600c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37600cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376010: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x376010u;
    ctx->pc = 0x376014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376010u;
    // 0x376014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x376018u;
label_376018:
    // 0x376018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x376018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37601c: 0x3e00008  jr          $ra
    ctx->pc = 0x37601Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37601Cu;
        // 0x376020: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37601Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376024u;
    // 0x376024: 0x0  nop
    ctx->pc = 0x376024u;
    // NOP
label_376028:
    // 0x376028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x376028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37602c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37602cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x376030: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x376030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x376034: 0xc0dd83e  jal         func_3760F8
    ctx->pc = 0x376034u;
    SET_GPR_U32(ctx, 31, 0x37603Cu);
    ctx->pc = 0x376038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376034u;
    // 0x376038: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F8u, 0x376034u, 0x37603Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37603Cu;
label_37603c:
    // 0x37603c: 0x501018  mult        $v0, $v0, $s0
    ctx->pc = 0x37603cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x376040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x376040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376044: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x376044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x376048: 0x3e00008  jr          $ra
    ctx->pc = 0x376048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376048u;
        // 0x37604c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376050u;
}
