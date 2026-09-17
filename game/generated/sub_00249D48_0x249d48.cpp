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

// Function: sub_00249D48
// Address: 0x249d48 - 0x249e28
void sub_00249D48_0x249d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249D48_0x249d48");
#endif

    switch (ctx->pc) {
        case 0x249d98u: goto label_249d98;
        case 0x249da4u: goto label_249da4;
        case 0x249dd0u: goto label_249dd0;
        case 0x249de8u: goto label_249de8;
        default: break;
    }

    ctx->pc = 0x249d48u;

    // 0x249d48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x249d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x249d4c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x249d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x249d50: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x249d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x249d54: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x249d54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249d58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x249d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x249d5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x249d5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249d60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x249d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x249d64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x249d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x249d68: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x249d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x249d6c: 0x16820025  bne         $s4, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x249D6Cu;
    {
        const bool branch_taken_0x249d6c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x249D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D6Cu;
        // 0x249d70: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d6c) {
            ctx->pc = 0x249E04u;
            goto label_249e04;
        }
    }
    ctx->pc = 0x249D74u;
    // 0x249d74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x249d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249d78: 0x1642000d  bne         $s2, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x249D78u;
    {
        const bool branch_taken_0x249d78 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x249D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249D78u;
        // 0x249d7c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x249d78) {
            ctx->pc = 0x249DB0u;
            goto label_249db0;
        }
    }
    ctx->pc = 0x249D80u;
    // 0x249d80: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x249d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x249d84: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x249d84u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x249d88: 0x24507180  addiu       $s0, $v0, 0x7180
    ctx->pc = 0x249d88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29056));
    // 0x249d8c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x249d8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x249d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x249d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249d94: 0x0  nop
    ctx->pc = 0x249d94u;
    // NOP
label_249d98:
    // 0x249d98: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x249d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x249d9c: 0xc0924b2  jal         func_2492C8
    ctx->pc = 0x249D9Cu;
    SET_GPR_U32(ctx, 31, 0x249DA4u);
    ctx->pc = 0x249DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249D9Cu;
    // 0x249da0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492C8u, 0x249D9Cu, 0x249DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249DA4u;
label_249da4:
    // 0x249da4: 0x1633fffc  bne         $s1, $s3, . + 4 + (-0x4 << 2)
    ctx->pc = 0x249DA4u;
    {
        const bool branch_taken_0x249da4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x249DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DA4u;
        // 0x249da8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249da4) {
            ctx->pc = 0x249D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249d98;
        }
    }
    ctx->pc = 0x249DACu;
    // 0x249dac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x249dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_249db0:
    // 0x249db0: 0x16820015  bne         $s4, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x249DB0u;
    {
        const bool branch_taken_0x249db0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x249DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DB0u;
        // 0x249db4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249db0) {
            ctx->pc = 0x249E08u;
            goto label_249e08;
        }
    }
    ctx->pc = 0x249DB8u;
    // 0x249db8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x249db8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x249dbc: 0x56500012  bnel        $s2, $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x249DBCu;
    {
        const bool branch_taken_0x249dbc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        if (branch_taken_0x249dbc) {
            ctx->pc = 0x249DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249DBCu;
            // 0x249dc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x249E08u;
            goto label_249e08;
        }
    }
    ctx->pc = 0x249DC4u;
    // 0x249dc4: 0x3c040016  lui         $a0, 0x16
    ctx->pc = 0x249dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22 << 16));
    // 0x249dc8: 0xc0924b8  jal         func_2492E0
    ctx->pc = 0x249DC8u;
    SET_GPR_U32(ctx, 31, 0x249DD0u);
    ctx->pc = 0x249DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249DC8u;
    // 0x249dcc: 0x24847270  addiu       $a0, $a0, 0x7270 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492E0u, 0x249DC8u, 0x249DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249DD0u;
label_249dd0:
    // 0x249dd0: 0x1650000d  bne         $s2, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x249DD0u;
    {
        const bool branch_taken_0x249dd0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x249DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DD0u;
        // 0x249dd4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249dd0) {
            ctx->pc = 0x249E08u;
            goto label_249e08;
        }
    }
    ctx->pc = 0x249DD8u;
    // 0x249dd8: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x249dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x249ddc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x249ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x249de0: 0x244272b0  addiu       $v0, $v0, 0x72B0
    ctx->pc = 0x249de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29360));
    // 0x249de4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x249de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_249de8:
    // 0x249de8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x249de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x249dec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x249decu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x249df0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x249df0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x249df4: 0x0  nop
    ctx->pc = 0x249df4u;
    // NOP
    // 0x249df8: 0x0  nop
    ctx->pc = 0x249df8u;
    // NOP
    // 0x249dfc: 0x1483fffa  bne         $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x249DFCu;
    {
        const bool branch_taken_0x249dfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x249E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249DFCu;
        // 0x249e00: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249dfc) {
            ctx->pc = 0x249DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249de8;
        }
    }
    ctx->pc = 0x249E04u;
label_249e04:
    // 0x249e04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x249e04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_249e08:
    // 0x249e08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x249e08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x249e0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x249e0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x249e10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x249e10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x249e14: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x249e14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x249e18: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x249e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x249e1c: 0x3e00008  jr          $ra
    ctx->pc = 0x249E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249E1Cu;
        // 0x249e20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249E24u;
    // 0x249e24: 0x0  nop
    ctx->pc = 0x249e24u;
    // NOP
    ctx->pc = 0x249e28u;
}
