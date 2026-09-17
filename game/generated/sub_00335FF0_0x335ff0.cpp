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

// Function: sub_00335FF0
// Address: 0x335ff0 - 0x336088
void sub_00335FF0_0x335ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335FF0_0x335ff0");
#endif

    switch (ctx->pc) {
        case 0x336018u: goto label_336018;
        case 0x336020u: goto label_336020;
        case 0x336030u: goto label_336030;
        case 0x336040u: goto label_336040;
        case 0x336048u: goto label_336048;
        case 0x336050u: goto label_336050;
        default: break;
    }

    ctx->pc = 0x335ff0u;

    // 0x335ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x335ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x335ff4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x335ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x335ff8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x335ff8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335ffc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x335ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x336000: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x336000u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336004: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x336004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x336008: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x336008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33600c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33600cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x336010: 0xc0cd822  jal         func_336088
    ctx->pc = 0x336010u;
    SET_GPR_U32(ctx, 31, 0x336018u);
    ctx->pc = 0x336014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336010u;
    // 0x336014: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336088u, 0x336010u, 0x336018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336018u;
label_336018:
    // 0x336018: 0xc0cd15c  jal         func_334570
    ctx->pc = 0x336018u;
    SET_GPR_U32(ctx, 31, 0x336020u);
    ctx->pc = 0x334570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334570u, 0x336018u, 0x336020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336020u;
label_336020:
    // 0x336020: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x336020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336024: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x336024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x336028: 0xc0cd846  jal         func_336118
    ctx->pc = 0x336028u;
    SET_GPR_U32(ctx, 31, 0x336030u);
    ctx->pc = 0x33602Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336028u;
    // 0x33602c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336118u, 0x336028u, 0x336030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336030u;
label_336030:
    // 0x336030: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x336030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x336034: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x336034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336038: 0xc0cd0f8  jal         func_3343E0
    ctx->pc = 0x336038u;
    SET_GPR_U32(ctx, 31, 0x336040u);
    ctx->pc = 0x33603Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336038u;
    // 0x33603c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3343E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3343E0u, 0x336038u, 0x336040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336040u;
label_336040:
    // 0x336040: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x336040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336044: 0x0  nop
    ctx->pc = 0x336044u;
    // NOP
label_336048:
    // 0x336048: 0xc0cd138  jal         func_3344E0
    ctx->pc = 0x336048u;
    SET_GPR_U32(ctx, 31, 0x336050u);
    ctx->pc = 0x33604Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336048u;
    // 0x33604c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3344E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3344E0u, 0x336048u, 0x336050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336050u;
label_336050:
    // 0x336050: 0x441fffd  bgez        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x336050u;
    {
        const bool branch_taken_0x336050 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x336050) {
            ctx->pc = 0x336048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336048;
        }
    }
    ctx->pc = 0x336058u;
    // 0x336058: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x336058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33605c: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x33605cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x336060: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x336060u;
    {
        const bool branch_taken_0x336060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x336064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336060u;
        // 0x336064: 0x26520400  addiu       $s2, $s2, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336060) {
            ctx->pc = 0x336020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336020;
        }
    }
    ctx->pc = 0x336068u;
    // 0x336068: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x336068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33606c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33606cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x336070: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x336070u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336074: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x336074u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x336078: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x336078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33607c: 0x3e00008  jr          $ra
    ctx->pc = 0x33607Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33607Cu;
        // 0x336080: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33607Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336084u;
    // 0x336084: 0x0  nop
    ctx->pc = 0x336084u;
    // NOP
    ctx->pc = 0x336088u;
}
