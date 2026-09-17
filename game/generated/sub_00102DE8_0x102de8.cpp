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

// Function: sub_00102DE8
// Address: 0x102de8 - 0x102e88
void sub_00102DE8_0x102de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102DE8_0x102de8");
#endif

    switch (ctx->pc) {
        case 0x102e0cu: goto label_102e0c;
        case 0x102e28u: goto label_102e28;
        case 0x102e44u: goto label_102e44;
        case 0x102e58u: goto label_102e58;
        case 0x102e64u: goto label_102e64;
        default: break;
    }

    ctx->pc = 0x102de8u;

    // 0x102de8: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x102de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x102dec: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x102decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x102df0: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x102df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x102df4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x102df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102df8: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x102df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x102dfc: 0x2484d6c8  addiu       $a0, $a0, -0x2938
    ctx->pc = 0x102dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956744));
    // 0x102e00: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x102e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x102e04: 0xc04513c  jal         func_1144F0
    ctx->pc = 0x102E04u;
    SET_GPR_U32(ctx, 31, 0x102E0Cu);
    ctx->pc = 0x102E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102E04u;
    // 0x102e08: 0xffb00100  sd          $s0, 0x100($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1144F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1144F0u, 0x102E04u, 0x102E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102E0Cu;
label_102e0c:
    // 0x102e0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x102e0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102e10: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x102E10u;
    {
        const bool branch_taken_0x102e10 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x102E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E10u;
        // 0x102e14: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e10) {
            ctx->pc = 0x102E20u;
            goto label_102e20;
        }
    }
    ctx->pc = 0x102E18u;
    // 0x102e18: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x102E18u;
    {
        const bool branch_taken_0x102e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E18u;
        // 0x102e1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e18) {
            ctx->pc = 0x102E70u;
            goto label_102e70;
        }
    }
    ctx->pc = 0x102E20u;
label_102e20:
    // 0x102e20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x102E20u;
    {
        const bool branch_taken_0x102e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E20u;
        // 0x102e24: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e20) {
            ctx->pc = 0x102E2Cu;
            goto label_102e2c;
        }
    }
    ctx->pc = 0x102E28u;
label_102e28:
    // 0x102e28: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x102e28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_102e2c:
    // 0x102e2c: 0x2e220100  sltiu       $v0, $s1, 0x100
    ctx->pc = 0x102e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x102e30: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x102E30u;
    {
        const bool branch_taken_0x102e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E30u;
        // 0x102e34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e30) {
            ctx->pc = 0x102E50u;
            goto label_102e50;
        }
    }
    ctx->pc = 0x102E38u;
    // 0x102e38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x102e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102e3c: 0xc0452ce  jal         func_114B38
    ctx->pc = 0x102E3Cu;
    SET_GPR_U32(ctx, 31, 0x102E44u);
    ctx->pc = 0x102E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102E3Cu;
    // 0x102e40: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B38u, 0x102E3Cu, 0x102E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102E44u;
label_102e44:
    // 0x102e44: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x102e44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102e48: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x102E48u;
    {
        const bool branch_taken_0x102e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x102E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E48u;
        // 0x102e4c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e48) {
            ctx->pc = 0x102E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102e28;
        }
    }
    ctx->pc = 0x102E50u;
label_102e50:
    // 0x102e50: 0xc0451e0  jal         func_114780
    ctx->pc = 0x102E50u;
    SET_GPR_U32(ctx, 31, 0x102E58u);
    ctx->pc = 0x102E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102E50u;
    // 0x102e54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114780u, 0x102E50u, 0x102E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102E58u;
label_102e58:
    // 0x102e58: 0x2624fff7  addiu       $a0, $s1, -0x9
    ctx->pc = 0x102e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967287));
    // 0x102e5c: 0xc049d7e  jal         func_1275F8
    ctx->pc = 0x102E5Cu;
    SET_GPR_U32(ctx, 31, 0x102E64u);
    ctx->pc = 0x102E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102E5Cu;
    // 0x102e60: 0x3a42021  addu        $a0, $sp, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1275F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1275F8u, 0x102E5Cu, 0x102E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102E64u;
label_102e64:
    // 0x102e64: 0x3c030131  lui         $v1, 0x131
    ctx->pc = 0x102e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)305 << 16));
    // 0x102e68: 0x34635670  ori         $v1, $v1, 0x5670
    ctx->pc = 0x102e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22128);
    // 0x102e6c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x102e6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_102e70:
    // 0x102e70: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x102e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x102e74: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x102e74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x102e78: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x102e78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x102e7c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x102e7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x102e80: 0x3e00008  jr          $ra
    ctx->pc = 0x102E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E80u;
        // 0x102e84: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102E88u;
}
