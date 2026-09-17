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

// Function: sub_00327998
// Address: 0x327998 - 0x327a48
void sub_00327998_0x327998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327998_0x327998");
#endif

    switch (ctx->pc) {
        case 0x3279d0u: goto label_3279d0;
        case 0x3279e8u: goto label_3279e8;
        case 0x3279fcu: goto label_3279fc;
        case 0x327a14u: goto label_327a14;
        default: break;
    }

    ctx->pc = 0x327998u;

    // 0x327998: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x327998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32799c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32799cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3279a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3279a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3279a4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3279a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3279a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3279a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3279ac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3279acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3279b0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3279b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3279b4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3279b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3279b8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3279b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3279bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3279bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3279c0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3279c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3279c4: 0xae53002c  sw          $s3, 0x2C($s2)
    ctx->pc = 0x3279c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 19));
    // 0x3279c8: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x3279C8u;
    {
        const bool branch_taken_0x3279c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3279CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3279C8u;
        // 0x3279cc: 0x8e510030  lw          $s1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3279c8) {
            ctx->pc = 0x327A20u;
            goto label_327a20;
        }
    }
    ctx->pc = 0x3279D0u;
label_3279d0:
    // 0x3279d0: 0xce000080  pref        0x00, 0x80($s0)
    ctx->pc = 0x3279d0u;
    // PREF instruction (ignored)
    // 0x3279d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3279d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3279d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3279d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3279dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3279dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3279e0: 0xc0c9e92  jal         func_327A48
    ctx->pc = 0x3279E0u;
    SET_GPR_U32(ctx, 31, 0x3279E8u);
    ctx->pc = 0x3279E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3279E0u;
    // 0x3279e4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327A48u, 0x3279E0u, 0x3279E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3279E8u;
label_3279e8:
    // 0x3279e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3279e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3279ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3279ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3279f0: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x3279f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3279f4: 0xc0c9e98  jal         func_327A60
    ctx->pc = 0x3279F4u;
    SET_GPR_U32(ctx, 31, 0x3279FCu);
    ctx->pc = 0x3279F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3279F4u;
    // 0x3279f8: 0x26070020  addiu       $a3, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327A60u, 0x3279F4u, 0x3279FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3279FCu;
label_3279fc:
    // 0x3279fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3279fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327a00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x327a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327a04: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x327a04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x327a08: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x327a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x327a0c: 0xc0c9ee8  jal         func_327BA0
    ctx->pc = 0x327A0Cu;
    SET_GPR_U32(ctx, 31, 0x327A14u);
    ctx->pc = 0x327A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327A0Cu;
    // 0x327a10: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327BA0u, 0x327A0Cu, 0x327A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327A14u;
label_327a14:
    // 0x327a14: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x327a14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x327a18: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x327A18u;
    {
        const bool branch_taken_0x327a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x327a18) {
            ctx->pc = 0x3279D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3279d0;
        }
    }
    ctx->pc = 0x327A20u;
label_327a20:
    // 0x327a20: 0xae510030  sw          $s1, 0x30($s2)
    ctx->pc = 0x327a20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 17));
    // 0x327a24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327a24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327a28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x327a28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x327a2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x327a2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327a30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x327a30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x327a34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x327a34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x327a38: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x327a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x327a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x327A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327A3Cu;
        // 0x327a40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327A44u;
    // 0x327a44: 0x0  nop
    ctx->pc = 0x327a44u;
    // NOP
    ctx->pc = 0x327a48u;
}
