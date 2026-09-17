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

// Function: sub_0022FAF0
// Address: 0x22faf0 - 0x22fba8
void sub_0022FAF0_0x22faf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FAF0_0x22faf0");
#endif

    switch (ctx->pc) {
        case 0x22fb4cu: goto label_22fb4c;
        case 0x22fb58u: goto label_22fb58;
        case 0x22fb80u: goto label_22fb80;
        case 0x22fb8cu: goto label_22fb8c;
        default: break;
    }

    ctx->pc = 0x22faf0u;

    // 0x22faf0: 0x8f82a538  lw          $v0, -0x5AC8($gp)
    ctx->pc = 0x22faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944056)));
    // 0x22faf4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22faf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22faf8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22faf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x22fafc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x22fafcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fb00: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x22fb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x22fb04: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x22fb04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fb08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22fb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22fb0c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x22fb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fb10: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x22fb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x22fb14: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x22FB14u;
    {
        const bool branch_taken_0x22fb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB14u;
        // 0x22fb18: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb14) {
            ctx->pc = 0x22FB8Cu;
            goto label_22fb8c;
        }
    }
    ctx->pc = 0x22FB1Cu;
    // 0x22fb1c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x22FB1Cu;
    {
        const bool branch_taken_0x22fb1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB1Cu;
        // 0x22fb20: 0x2c62001e  sltiu       $v0, $v1, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb1c) {
            ctx->pc = 0x22FB38u;
            goto label_22fb38;
        }
    }
    ctx->pc = 0x22FB24u;
    // 0x22fb24: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x22FB24u;
    {
        const bool branch_taken_0x22fb24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fb24) {
            ctx->pc = 0x22FB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FB24u;
            // 0x22fb28: 0xae400114  sw          $zero, 0x114($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FB8Cu;
            goto label_22fb8c;
        }
    }
    ctx->pc = 0x22FB2Cu;
    // 0x22fb2c: 0x2ca2001d  sltiu       $v0, $a1, 0x1D
    ctx->pc = 0x22fb2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x22fb30: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x22FB30u;
    {
        const bool branch_taken_0x22fb30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22fb30) {
            ctx->pc = 0x22FB34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22FB30u;
            // 0x22fb34: 0x2e230009  sltiu       $v1, $s1, 0x9 (Delay Slot)
            SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22FB40u;
            goto label_22fb40;
        }
    }
    ctx->pc = 0x22FB38u;
label_22fb38:
    // 0x22fb38: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x22FB38u;
    {
        const bool branch_taken_0x22fb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB38u;
        // 0x22fb3c: 0xae400114  sw          $zero, 0x114($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb38) {
            ctx->pc = 0x22FB8Cu;
            goto label_22fb8c;
        }
    }
    ctx->pc = 0x22FB40u;
label_22fb40:
    // 0x22fb40: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x22fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x22fb44: 0xc08be14  jal         func_22F850
    ctx->pc = 0x22FB44u;
    SET_GPR_U32(ctx, 31, 0x22FB4Cu);
    ctx->pc = 0x22FB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FB44u;
    // 0x22fb48: 0x43880a  movz        $s1, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F850u, 0x22FB44u, 0x22FB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FB4Cu;
label_22fb4c:
    // 0x22fb4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22fb4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22fb50: 0xc08be1a  jal         func_22F868
    ctx->pc = 0x22FB50u;
    SET_GPR_U32(ctx, 31, 0x22FB58u);
    ctx->pc = 0x22FB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FB50u;
    // 0x22fb54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F868u, 0x22FB50u, 0x22FB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FB58u;
label_22fb58:
    // 0x22fb58: 0x3c040023  lui         $a0, 0x23
    ctx->pc = 0x22fb58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)35 << 16));
    // 0x22fb5c: 0x2484f988  addiu       $a0, $a0, -0x678
    ctx->pc = 0x22fb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965640));
    // 0x22fb60: 0xae500120  sw          $s0, 0x120($s2)
    ctx->pc = 0x22fb60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 16));
    // 0x22fb64: 0xae440114  sw          $a0, 0x114($s2)
    ctx->pc = 0x22fb64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 4));
    // 0x22fb68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22fb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22fb6c: 0x71182b  sltu        $v1, $v1, $s1
    ctx->pc = 0x22fb6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x22fb70: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22FB70u;
    {
        const bool branch_taken_0x22fb70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB70u;
        // 0x22fb74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fb70) {
            ctx->pc = 0x22FB84u;
            goto label_22fb84;
        }
    }
    ctx->pc = 0x22FB78u;
    // 0x22fb78: 0xc08be8c  jal         func_22FA30
    ctx->pc = 0x22FB78u;
    SET_GPR_U32(ctx, 31, 0x22FB80u);
    ctx->pc = 0x22FB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FB78u;
    // 0x22fb7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FA30u, 0x22FB78u, 0x22FB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FB80u;
label_22fb80:
    // 0x22fb80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22fb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22fb84:
    // 0x22fb84: 0xc08beac  jal         func_22FAB0
    ctx->pc = 0x22FB84u;
    SET_GPR_U32(ctx, 31, 0x22FB8Cu);
    ctx->pc = 0x22FB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22FB84u;
    // 0x22fb88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22FAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22FAB0u, 0x22FB84u, 0x22FB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22FB8Cu;
label_22fb8c:
    // 0x22fb8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22fb8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22fb90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22fb90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22fb94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x22fb94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22fb98: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x22fb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x22fb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x22FB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22FBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22FB9Cu;
        // 0x22fba0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22FB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22FBA4u;
    // 0x22fba4: 0x0  nop
    ctx->pc = 0x22fba4u;
    // NOP
    ctx->pc = 0x22fba8u;
}
