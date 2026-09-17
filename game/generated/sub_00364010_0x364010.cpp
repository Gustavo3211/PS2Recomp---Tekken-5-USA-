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

// Function: sub_00364010
// Address: 0x364010 - 0x3640c8
void sub_00364010_0x364010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364010_0x364010");
#endif

    switch (ctx->pc) {
        case 0x36403cu: goto label_36403c;
        case 0x364048u: goto label_364048;
        case 0x364050u: goto label_364050;
        case 0x364068u: goto label_364068;
        case 0x364090u: goto label_364090;
        case 0x3640a0u: goto label_3640a0;
        default: break;
    }

    ctx->pc = 0x364010u;

    // 0x364010: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x364010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x364014: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x364014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x364018: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x364018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36401c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36401cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x364020: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x364020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364024: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x364024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x364028: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x364028u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36402c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x36402cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x364030: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x364030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x364034: 0xc0d9052  jal         func_364148
    ctx->pc = 0x364034u;
    SET_GPR_U32(ctx, 31, 0x36403Cu);
    ctx->pc = 0x364038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364034u;
    // 0x364038: 0x2413000a  addiu       $s3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364148u, 0x364034u, 0x36403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36403Cu;
label_36403c:
    // 0x36403c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x36403Cu;
    {
        const bool branch_taken_0x36403c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36403c) {
            ctx->pc = 0x364088u;
            goto label_364088;
        }
    }
    ctx->pc = 0x364044u;
    // 0x364044: 0x0  nop
    ctx->pc = 0x364044u;
    // NOP
label_364048:
    // 0x364048: 0xc0d9054  jal         func_364150
    ctx->pc = 0x364048u;
    SET_GPR_U32(ctx, 31, 0x364050u);
    ctx->pc = 0x36404Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364048u;
    // 0x36404c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364150u, 0x364048u, 0x364050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364050u;
label_364050:
    // 0x364050: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x364050u;
    {
        const bool branch_taken_0x364050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x364050) {
            ctx->pc = 0x364054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x364050u;
            // 0x364054: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3640ACu;
            goto label_3640ac;
        }
    }
    ctx->pc = 0x364058u;
    // 0x364058: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x364058u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36405c: 0x10530009  beq         $v0, $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x36405Cu;
    {
        const bool branch_taken_0x36405c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x364060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36405Cu;
        // 0x364060: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36405c) {
            ctx->pc = 0x364084u;
            goto label_364084;
        }
    }
    ctx->pc = 0x364064u;
    // 0x364064: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x364064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_364068:
    // 0x364068: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x364068u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36406c: 0x0  nop
    ctx->pc = 0x36406cu;
    // NOP
    // 0x364070: 0x0  nop
    ctx->pc = 0x364070u;
    // NOP
    // 0x364074: 0x0  nop
    ctx->pc = 0x364074u;
    // NOP
    // 0x364078: 0x0  nop
    ctx->pc = 0x364078u;
    // NOP
    // 0x36407c: 0x5443fffa  bnel        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36407Cu;
    {
        const bool branch_taken_0x36407c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x36407c) {
            ctx->pc = 0x364080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36407Cu;
            // 0x364080: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x364068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364068;
        }
    }
    ctx->pc = 0x364084u;
label_364084:
    // 0x364084: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x364084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_364088:
    // 0x364088: 0xc04a4d1  jal         func_129344
    ctx->pc = 0x364088u;
    SET_GPR_U32(ctx, 31, 0x364090u);
    ctx->pc = 0x36408Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364088u;
    // 0x36408c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129344u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129344u, 0x364088u, 0x364090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364090u;
label_364090:
    // 0x364090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364094: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x364094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364098: 0xc04a520  jal         func_129480
    ctx->pc = 0x364098u;
    SET_GPR_U32(ctx, 31, 0x3640A0u);
    ctx->pc = 0x36409Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364098u;
    // 0x36409c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129480u, 0x364098u, 0x3640A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3640A0u;
label_3640a0:
    // 0x3640a0: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x3640A0u;
    {
        const bool branch_taken_0x3640a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3640A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3640A0u;
        // 0x3640a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3640a0) {
            ctx->pc = 0x364048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364048;
        }
    }
    ctx->pc = 0x3640A8u;
    // 0x3640a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3640a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3640ac:
    // 0x3640ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3640acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3640b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3640b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3640b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3640b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3640b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3640b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3640bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3640BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3640C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3640BCu;
        // 0x3640c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3640BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3640C4u;
    // 0x3640c4: 0x0  nop
    ctx->pc = 0x3640c4u;
    // NOP
    ctx->pc = 0x3640c8u;
}
