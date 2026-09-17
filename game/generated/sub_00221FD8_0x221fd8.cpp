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

// Function: sub_00221FD8
// Address: 0x221fd8 - 0x222088
void sub_00221FD8_0x221fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221FD8_0x221fd8");
#endif

    switch (ctx->pc) {
        case 0x222010u: goto label_222010;
        case 0x22202cu: goto label_22202c;
        case 0x222064u: goto label_222064;
        default: break;
    }

    ctx->pc = 0x221fd8u;

    // 0x221fd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x221fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x221fdc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x221fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x221fe0: 0x24d2ffff  addiu       $s2, $a2, -0x1
    ctx->pc = 0x221fe0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x221fe4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x221fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x221fe8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x221fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221fec: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x221fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x221ff0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x221ff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ff4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x221ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x221ff8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x221ff8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221ffc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x221ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x222000: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x222000u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222004: 0x1a400010  blez        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x222004u;
    {
        const bool branch_taken_0x222004 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x222008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222004u;
        // 0x222008: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222004) {
            ctx->pc = 0x222048u;
            goto label_222048;
        }
    }
    ctx->pc = 0x22200Cu;
    // 0x22200c: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x22200cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_222010:
    // 0x222010: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x222010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x222014: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x222014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x222018: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x222018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22201c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22201cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222020: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x222020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222024: 0xc0885d4  jal         func_221750
    ctx->pc = 0x222024u;
    SET_GPR_U32(ctx, 31, 0x22202Cu);
    ctx->pc = 0x222028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222024u;
    // 0x222028: 0x24e80010  addiu       $t0, $a3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221750u, 0x222024u, 0x22202Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22202Cu;
label_22202c:
    // 0x22202c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22202Cu;
    {
        const bool branch_taken_0x22202c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x222030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22202Cu;
        // 0x222030: 0x212182a  slt         $v1, $s0, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22202c) {
            ctx->pc = 0x222040u;
            goto label_222040;
        }
    }
    ctx->pc = 0x222034u;
    // 0x222034: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x222034u;
    {
        const bool branch_taken_0x222034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x222038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222034u;
        // 0x222038: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222034) {
            ctx->pc = 0x222068u;
            goto label_222068;
        }
    }
    ctx->pc = 0x22203Cu;
    // 0x22203c: 0x0  nop
    ctx->pc = 0x22203cu;
    // NOP
label_222040:
    // 0x222040: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x222040u;
    {
        const bool branch_taken_0x222040 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x222044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222040u;
        // 0x222044: 0x103900  sll         $a3, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222040) {
            ctx->pc = 0x222010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_222010;
        }
    }
    ctx->pc = 0x222048u;
label_222048:
    // 0x222048: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x222048u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x22204c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22204cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222050: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x222050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222054: 0x2273821  addu        $a3, $s1, $a3
    ctx->pc = 0x222054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x222058: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x222058u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22205c: 0xc0885d4  jal         func_221750
    ctx->pc = 0x22205Cu;
    SET_GPR_U32(ctx, 31, 0x222064u);
    ctx->pc = 0x222060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22205Cu;
    // 0x222060: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x221750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221750u, 0x22205Cu, 0x222064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222064u;
label_222064:
    // 0x222064: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x222064u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_222068:
    // 0x222068: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x222068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22206c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x22206cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x222070: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x222070u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x222074: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x222074u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x222078: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x222078u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22207c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x22207cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x222080: 0x3e00008  jr          $ra
    ctx->pc = 0x222080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222080u;
        // 0x222084: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222080u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222088u;
}
