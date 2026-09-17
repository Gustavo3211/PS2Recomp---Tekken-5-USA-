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

// Function: sub_00345DA0
// Address: 0x345da0 - 0x345e40
void sub_00345DA0_0x345da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345DA0_0x345da0");
#endif

    switch (ctx->pc) {
        case 0x345dc0u: goto label_345dc0;
        case 0x345dd4u: goto label_345dd4;
        case 0x345df0u: goto label_345df0;
        case 0x345e00u: goto label_345e00;
        case 0x345e10u: goto label_345e10;
        default: break;
    }

    ctx->pc = 0x345da0u;

    // 0x345da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x345da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x345da4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x345da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x345da8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x345da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x345dac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x345dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x345db0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x345db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x345db4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x345db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x345db8: 0xc0d2436  jal         func_3490D8
    ctx->pc = 0x345DB8u;
    SET_GPR_U32(ctx, 31, 0x345DC0u);
    ctx->pc = 0x345DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345DB8u;
    // 0x345dbc: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3490D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3490D8u, 0x345DB8u, 0x345DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345DC0u;
label_345dc0:
    // 0x345dc0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x345DC0u;
    {
        const bool branch_taken_0x345dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x345dc0) {
            ctx->pc = 0x345DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x345DC0u;
            // 0x345dc4: 0x96320002  lhu         $s2, 0x2($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x345DE0u;
            goto label_345de0;
        }
    }
    ctx->pc = 0x345DC8u;
    // 0x345dc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x345dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345dcc: 0xc0d2404  jal         func_349010
    ctx->pc = 0x345DCCu;
    SET_GPR_U32(ctx, 31, 0x345DD4u);
    ctx->pc = 0x345DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345DCCu;
    // 0x345dd0: 0x94850002  lhu         $a1, 0x2($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349010u, 0x345DCCu, 0x345DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345DD4u;
label_345dd4:
    // 0x345dd4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x345DD4u;
    {
        const bool branch_taken_0x345dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345DD4u;
        // 0x345dd8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345dd4) {
            ctx->pc = 0x345E24u;
            goto label_345e24;
        }
    }
    ctx->pc = 0x345DDCu;
    // 0x345ddc: 0x0  nop
    ctx->pc = 0x345ddcu;
    // NOP
label_345de0:
    // 0x345de0: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x345de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x345de4: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x345DE4u;
    {
        const bool branch_taken_0x345de4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x345DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345DE4u;
        // 0x345de8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345de4) {
            ctx->pc = 0x345E1Cu;
            goto label_345e1c;
        }
    }
    ctx->pc = 0x345DECu;
    // 0x345dec: 0x0  nop
    ctx->pc = 0x345decu;
    // NOP
label_345df0:
    // 0x345df0: 0xce000028  pref        0x00, 0x28($s0)
    ctx->pc = 0x345df0u;
    // PREF instruction (ignored)
    // 0x345df4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x345df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345df8: 0xc0d2476  jal         func_3491D8
    ctx->pc = 0x345DF8u;
    SET_GPR_U32(ctx, 31, 0x345E00u);
    ctx->pc = 0x345DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345DF8u;
    // 0x345dfc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3491D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3491D8u, 0x345DF8u, 0x345E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345E00u;
label_345e00:
    // 0x345e00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x345e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345e04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x345e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345e08: 0xc0d1718  jal         func_345C60
    ctx->pc = 0x345E08u;
    SET_GPR_U32(ctx, 31, 0x345E10u);
    ctx->pc = 0x345E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345E08u;
    // 0x345e0c: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345C60u, 0x345E08u, 0x345E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345E10u;
label_345e10:
    // 0x345e10: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x345e10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x345e14: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x345E14u;
    {
        const bool branch_taken_0x345e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x345e14) {
            ctx->pc = 0x345DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_345df0;
        }
    }
    ctx->pc = 0x345E1Cu;
label_345e1c:
    // 0x345e1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x345e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345e20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x345e20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_345e24:
    // 0x345e24: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x345e24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x345e28: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x345e28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x345e2c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x345e2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x345e30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x345e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x345e34: 0x3e00008  jr          $ra
    ctx->pc = 0x345E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345E34u;
        // 0x345e38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345E3Cu;
    // 0x345e3c: 0x0  nop
    ctx->pc = 0x345e3cu;
    // NOP
    ctx->pc = 0x345e40u;
}
