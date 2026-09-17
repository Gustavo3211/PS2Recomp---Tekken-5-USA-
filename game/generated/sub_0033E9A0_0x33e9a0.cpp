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

// Function: sub_0033E9A0
// Address: 0x33e9a0 - 0x33ea30
void sub_0033E9A0_0x33e9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E9A0_0x33e9a0");
#endif

    switch (ctx->pc) {
        case 0x33e9a0u: goto label_33e9a0;
        case 0x33e9a4u: goto label_33e9a4;
        case 0x33e9a8u: goto label_33e9a8;
        case 0x33e9acu: goto label_33e9ac;
        case 0x33e9b0u: goto label_33e9b0;
        case 0x33e9b4u: goto label_33e9b4;
        case 0x33e9b8u: goto label_33e9b8;
        case 0x33e9bcu: goto label_33e9bc;
        case 0x33e9c0u: goto label_33e9c0;
        case 0x33e9c4u: goto label_33e9c4;
        case 0x33e9c8u: goto label_33e9c8;
        case 0x33e9ccu: goto label_33e9cc;
        case 0x33e9d0u: goto label_33e9d0;
        case 0x33e9d4u: goto label_33e9d4;
        case 0x33e9d8u: goto label_33e9d8;
        case 0x33e9dcu: goto label_33e9dc;
        case 0x33e9e0u: goto label_33e9e0;
        case 0x33e9e4u: goto label_33e9e4;
        case 0x33e9e8u: goto label_33e9e8;
        case 0x33e9ecu: goto label_33e9ec;
        case 0x33e9f0u: goto label_33e9f0;
        case 0x33e9f4u: goto label_33e9f4;
        case 0x33e9f8u: goto label_33e9f8;
        case 0x33e9fcu: goto label_33e9fc;
        case 0x33ea00u: goto label_33ea00;
        case 0x33ea04u: goto label_33ea04;
        case 0x33ea08u: goto label_33ea08;
        case 0x33ea0cu: goto label_33ea0c;
        case 0x33ea10u: goto label_33ea10;
        case 0x33ea14u: goto label_33ea14;
        case 0x33ea18u: goto label_33ea18;
        case 0x33ea1cu: goto label_33ea1c;
        case 0x33ea20u: goto label_33ea20;
        case 0x33ea24u: goto label_33ea24;
        case 0x33ea28u: goto label_33ea28;
        case 0x33ea2cu: goto label_33ea2c;
        default: break;
    }

    ctx->pc = 0x33e9a0u;

label_33e9a0:
    // 0x33e9a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x33e9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33e9a4:
    // 0x33e9a4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x33e9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_33e9a8:
    // 0x33e9a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x33e9a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33e9ac:
    // 0x33e9ac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x33e9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_33e9b0:
    // 0x33e9b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33e9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33e9b4:
    // 0x33e9b4: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x33e9b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33e9b8:
    // 0x33e9b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33e9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_33e9bc:
    // 0x33e9bc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x33e9bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33e9c0:
    // 0x33e9c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33e9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_33e9c4:
    // 0x33e9c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x33e9c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33e9c8:
    // 0x33e9c8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x33e9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_33e9cc:
    // 0x33e9cc: 0x0  nop
    ctx->pc = 0x33e9ccu;
    // NOP
label_33e9d0:
    // 0x33e9d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33e9d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33e9d4:
    // 0x33e9d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33e9d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_33e9d8:
    // 0x33e9d8: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x33e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_33e9dc:
    // 0x33e9dc: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x33e9dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_33e9e0:
    // 0x33e9e0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x33e9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33e9e4:
    // 0x33e9e4: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x33e9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_33e9e8:
    // 0x33e9e8: 0x60f809  jalr        $v1
label_33e9ec:
    if (ctx->pc == 0x33E9ECu) {
        ctx->pc = 0x33E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E9E8u;
        // 0x33e9ec: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E9F0u;
        goto label_33e9f0;
    }
    ctx->pc = 0x33E9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33E9F0u);
        ctx->pc = 0x33E9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E9E8u;
        // 0x33e9ec: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E9E8u, 0x33E9F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33E9F0u;
label_33e9f0:
    // 0x33e9f0: 0x2e220007  sltiu       $v0, $s1, 0x7
    ctx->pc = 0x33e9f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_33e9f4:
    // 0x33e9f4: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_33e9f8:
    if (ctx->pc == 0x33E9F8u) {
        ctx->pc = 0x33E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E9F4u;
        // 0x33e9f8: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33E9FCu;
        goto label_33e9fc;
    }
    ctx->pc = 0x33E9F4u;
    {
        const bool branch_taken_0x33e9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e9f4) {
            ctx->pc = 0x33E9F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33E9F4u;
            // 0x33e9f8: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33E9D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33e9d0;
        }
    }
    ctx->pc = 0x33E9FCu;
label_33e9fc:
    // 0x33e9fc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x33e9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_33ea00:
    // 0x33ea00: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33ea00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33ea04:
    // 0x33ea04: 0x24841140  addiu       $a0, $a0, 0x1140
    ctx->pc = 0x33ea04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4416));
label_33ea08:
    // 0x33ea08: 0xc0cb174  jal         func_32C5D0
label_33ea0c:
    if (ctx->pc == 0x33EA0Cu) {
        ctx->pc = 0x33EA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EA08u;
        // 0x33ea0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EA10u;
        goto label_33ea10;
    }
    ctx->pc = 0x33EA08u;
    SET_GPR_U32(ctx, 31, 0x33EA10u);
    ctx->pc = 0x33EA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33EA08u;
    // 0x33ea0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C5D0u, 0x33EA08u, 0x33EA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EA10u;
label_33ea10:
    // 0x33ea10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33ea10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33ea14:
    // 0x33ea14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33ea14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33ea18:
    // 0x33ea18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33ea18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_33ea1c:
    // 0x33ea1c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33ea1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_33ea20:
    // 0x33ea20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33ea20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_33ea24:
    // 0x33ea24: 0x3e00008  jr          $ra
label_33ea28:
    if (ctx->pc == 0x33EA28u) {
        ctx->pc = 0x33EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EA24u;
        // 0x33ea28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33EA2Cu;
        goto label_33ea2c;
    }
    ctx->pc = 0x33EA24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33EA24u;
        // 0x33ea28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33EA24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33EA2Cu;
label_33ea2c:
    // 0x33ea2c: 0x0  nop
    ctx->pc = 0x33ea2cu;
    // NOP
    ctx->pc = 0x33ea30u;
}
