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

// Function: sub_00296A28
// Address: 0x296a28 - 0x296aa8
void sub_00296A28_0x296a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296A28_0x296a28");
#endif

    switch (ctx->pc) {
        case 0x296a70u: goto label_296a70;
        case 0x296a7cu: goto label_296a7c;
        default: break;
    }

    ctx->pc = 0x296a28u;

    // 0x296a28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x296a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x296a2c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x296a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x296a30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296a34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x296a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x296a38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x296a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x296a3c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x296a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x296a40: 0x14a20011  bne         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x296A40u;
    {
        const bool branch_taken_0x296a40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x296A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A40u;
        // 0x296a44: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a40) {
            ctx->pc = 0x296A88u;
            goto label_296a88;
        }
    }
    ctx->pc = 0x296A48u;
    // 0x296a48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x296a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296a4c: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x296A4Cu;
    {
        const bool branch_taken_0x296a4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x296A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A4Cu;
        // 0x296a50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a4c) {
            ctx->pc = 0x296A8Cu;
            goto label_296a8c;
        }
    }
    ctx->pc = 0x296A54u;
    // 0x296a54: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x296a54u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x296a58: 0x24110041  addiu       $s1, $zero, 0x41
    ctx->pc = 0x296a58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x296a5c: 0x2662bf20  addiu       $v0, $s3, -0x40E0
    ctx->pc = 0x296a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294950688));
    // 0x296a60: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x296a60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x296a64: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x296a64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x296a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x296a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a6c: 0x0  nop
    ctx->pc = 0x296a6cu;
    // NOP
label_296a70:
    // 0x296a70: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x296a70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x296a74: 0xc0ac950  jal         func_2B2540
    ctx->pc = 0x296A74u;
    SET_GPR_U32(ctx, 31, 0x296A7Cu);
    ctx->pc = 0x296A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296A74u;
    // 0x296a78: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2540u, 0x296A74u, 0x296A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296A7Cu;
label_296a7c:
    // 0x296a7c: 0x1632fffc  bne         $s1, $s2, . + 4 + (-0x4 << 2)
    ctx->pc = 0x296A7Cu;
    {
        const bool branch_taken_0x296a7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x296A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A7Cu;
        // 0x296a80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296a7c) {
            ctx->pc = 0x296A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296a70;
        }
    }
    ctx->pc = 0x296A84u;
    // 0x296a84: 0xae60bf20  sw          $zero, -0x40E0($s3)
    ctx->pc = 0x296a84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294950688), GPR_U32(ctx, 0));
label_296a88:
    // 0x296a88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296a88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_296a8c:
    // 0x296a8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x296a8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x296a90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x296a90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296a94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x296a94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x296a98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x296a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x296a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x296A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296A9Cu;
        // 0x296aa0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296AA4u;
    // 0x296aa4: 0x0  nop
    ctx->pc = 0x296aa4u;
    // NOP
    ctx->pc = 0x296aa8u;
}
