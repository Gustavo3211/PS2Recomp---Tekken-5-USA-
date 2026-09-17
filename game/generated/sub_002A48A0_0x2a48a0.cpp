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

// Function: sub_002A48A0
// Address: 0x2a48a0 - 0x2a49d0
void sub_002A48A0_0x2a48a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A48A0_0x2a48a0");
#endif

    switch (ctx->pc) {
        case 0x2a48e8u: goto label_2a48e8;
        case 0x2a4918u: goto label_2a4918;
        case 0x2a4988u: goto label_2a4988;
        case 0x2a49a8u: goto label_2a49a8;
        default: break;
    }

    ctx->pc = 0x2a48a0u;

    // 0x2a48a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a48a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a48a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a48a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a48a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a48a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a48ac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a48acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a48b0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x2a48b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2a48b4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2a48b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a48b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A48B8u;
    {
        const bool branch_taken_0x2a48b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A48BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A48B8u;
        // 0x2a48bc: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a48b8) {
            ctx->pc = 0x2A48D0u;
            goto label_2a48d0;
        }
    }
    ctx->pc = 0x2A48C0u;
    // 0x2a48c0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2a48c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2a48c4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a48c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a48c8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A48C8u;
    {
        const bool branch_taken_0x2a48c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A48CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A48C8u;
        // 0x2a48cc: 0x25280008  addiu       $t0, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a48c8) {
            ctx->pc = 0x2A48E0u;
            goto label_2a48e0;
        }
    }
    ctx->pc = 0x2A48D0u;
label_2a48d0:
    // 0x2a48d0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a48d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2a48d4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a48d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a48d8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2a48d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2a48dc: 0x25280008  addiu       $t0, $t1, 0x8
    ctx->pc = 0x2a48dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_2a48e0:
    // 0x2a48e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a48e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a48e4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x2a48e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2a48e8:
    // 0x2a48e8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2a48e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2a48ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2a48ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2a48f0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2a48f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2a48f4: 0x28c50006  slti        $a1, $a2, 0x6
    ctx->pc = 0x2a48f4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2a48f8: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x2a48f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x2a48fc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a48fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a4900: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a4900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a4904: 0x14a0fff8  bnez        $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2A4904u;
    {
        const bool branch_taken_0x2a4904 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4904u;
        // 0x2a4908: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4904) {
            ctx->pc = 0x2A48E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a48e8;
        }
    }
    ctx->pc = 0x2A490Cu;
    // 0x2a490c: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x2a490cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4910: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a4910u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4914: 0x0  nop
    ctx->pc = 0x2a4914u;
    // NOP
label_2a4918:
    // 0x2a4918: 0x83080  sll         $a2, $t0, 2
    ctx->pc = 0x2a4918u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2a491c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2a491cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2a4920: 0x24c40050  addiu       $a0, $a2, 0x50
    ctx->pc = 0x2a4920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x2a4924: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x2a4924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x2a4928: 0x1241021  addu        $v0, $t1, $a0
    ctx->pc = 0x2a4928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x2a492c: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x2a492cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x2a4930: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2a4930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a4934: 0x29070002  slti        $a3, $t0, 0x2
    ctx->pc = 0x2a4934u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2a4938: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x2a4938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x2a493c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a493cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a4940: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x2a4940u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
    // 0x2a4944: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2a4944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a4948: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a4948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a494c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a494cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a4950: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a4950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    // 0x2a4954: 0x8cc40060  lw          $a0, 0x60($a2)
    ctx->pc = 0x2a4954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x2a4958: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x2a4958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x2a495c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a495cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a4960: 0x14e0ffed  bnez        $a3, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2A4960u;
    {
        const bool branch_taken_0x2a4960 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4960u;
        // 0x2a4964: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4960) {
            ctx->pc = 0x2A4918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a4918;
        }
    }
    ctx->pc = 0x2A4968u;
    // 0x2a4968: 0x8d230080  lw          $v1, 0x80($t1)
    ctx->pc = 0x2a4968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 128)));
    // 0x2a496c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x2a496cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x2a4970: 0x24a5d4f8  addiu       $a1, $a1, -0x2B08
    ctx->pc = 0x2a4970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956280));
    // 0x2a4974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a4974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4978: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a4978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a497c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a497cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a4980: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x2A4980u;
    SET_GPR_U32(ctx, 31, 0x2A4988u);
    ctx->pc = 0x2A4984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4980u;
    // 0x2a4984: 0xac620080  sw          $v0, 0x80($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x2A4980u, 0x2A4988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4988u;
label_2a4988:
    // 0x2a4988: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a4988u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a498c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A498Cu;
    {
        const bool branch_taken_0x2a498c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a498c) {
            ctx->pc = 0x2A49A0u;
            goto label_2a49a0;
        }
    }
    ctx->pc = 0x2A4994u;
    // 0x2a4994: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x2a4994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x2a4998: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2a4998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2a499c: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x2a499cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_2a49a0:
    // 0x2a49a0: 0xc0a90e8  jal         func_2A43A0
    ctx->pc = 0x2A49A0u;
    SET_GPR_U32(ctx, 31, 0x2A49A8u);
    ctx->pc = 0x2A49A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A49A0u;
    // 0x2a49a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A43A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A43A0u, 0x2A49A0u, 0x2A49A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A49A8u;
label_2a49a8:
    // 0x2a49a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a49a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a49ac: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x2a49acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2a49b0: 0x2404fffd  addiu       $a0, $zero, -0x3
    ctx->pc = 0x2a49b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x2a49b4: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2a49b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2a49b8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a49b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2a49bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a49bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a49c0: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x2a49c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x2a49c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a49c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a49c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A49C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A49CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A49C8u;
        // 0x2a49cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A49C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A49D0u;
}
