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

// Function: sub_00344D98
// Address: 0x344d98 - 0x344e20
void sub_00344D98_0x344d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344D98_0x344d98");
#endif

    switch (ctx->pc) {
        case 0x344d98u: goto label_344d98;
        case 0x344d9cu: goto label_344d9c;
        case 0x344da0u: goto label_344da0;
        case 0x344da4u: goto label_344da4;
        case 0x344da8u: goto label_344da8;
        case 0x344dacu: goto label_344dac;
        case 0x344db0u: goto label_344db0;
        case 0x344db4u: goto label_344db4;
        case 0x344db8u: goto label_344db8;
        case 0x344dbcu: goto label_344dbc;
        case 0x344dc0u: goto label_344dc0;
        case 0x344dc4u: goto label_344dc4;
        case 0x344dc8u: goto label_344dc8;
        case 0x344dccu: goto label_344dcc;
        case 0x344dd0u: goto label_344dd0;
        case 0x344dd4u: goto label_344dd4;
        case 0x344dd8u: goto label_344dd8;
        case 0x344ddcu: goto label_344ddc;
        case 0x344de0u: goto label_344de0;
        case 0x344de4u: goto label_344de4;
        case 0x344de8u: goto label_344de8;
        case 0x344decu: goto label_344dec;
        case 0x344df0u: goto label_344df0;
        case 0x344df4u: goto label_344df4;
        case 0x344df8u: goto label_344df8;
        case 0x344dfcu: goto label_344dfc;
        case 0x344e00u: goto label_344e00;
        case 0x344e04u: goto label_344e04;
        case 0x344e08u: goto label_344e08;
        case 0x344e0cu: goto label_344e0c;
        case 0x344e10u: goto label_344e10;
        case 0x344e14u: goto label_344e14;
        case 0x344e18u: goto label_344e18;
        case 0x344e1cu: goto label_344e1c;
        default: break;
    }

    ctx->pc = 0x344d98u;

label_344d98:
    // 0x344d98: 0xc0d1424  jal         func_345090
label_344d9c:
    if (ctx->pc == 0x344D9Cu) {
        ctx->pc = 0x344D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344D98u;
        // 0x344d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344DA0u;
        goto label_344da0;
    }
    ctx->pc = 0x344D98u;
    SET_GPR_U32(ctx, 31, 0x344DA0u);
    ctx->pc = 0x344D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344D98u;
    // 0x344d9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345090u, 0x344D98u, 0x344DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344DA0u;
label_344da0:
    // 0x344da0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344da0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_344da4:
    // 0x344da4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x344da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_344da8:
    // 0x344da8: 0x3e00008  jr          $ra
label_344dac:
    if (ctx->pc == 0x344DACu) {
        ctx->pc = 0x344DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344DA8u;
        // 0x344dac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344DB0u;
        goto label_344db0;
    }
    ctx->pc = 0x344DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344DA8u;
        // 0x344dac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344DB0u;
label_344db0:
    // 0x344db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x344db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_344db4:
    // 0x344db4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x344db4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_344db8:
    // 0x344db8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x344db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_344dbc:
    // 0x344dbc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x344dbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_344dc0:
    // 0x344dc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x344dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_344dc4:
    // 0x344dc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x344dc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_344dc8:
    // 0x344dc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x344dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_344dcc:
    // 0x344dcc: 0x92240045  lbu         $a0, 0x45($s1)
    ctx->pc = 0x344dccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 69)));
label_344dd0:
    // 0x344dd0: 0xc043192  jal         func_10C648
label_344dd4:
    if (ctx->pc == 0x344DD4u) {
        ctx->pc = 0x344DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344DD0u;
        // 0x344dd4: 0x92250044  lbu         $a1, 0x44($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344DD8u;
        goto label_344dd8;
    }
    ctx->pc = 0x344DD0u;
    SET_GPR_U32(ctx, 31, 0x344DD8u);
    ctx->pc = 0x344DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344DD0u;
    // 0x344dd4: 0x92250044  lbu         $a1, 0x44($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C648u, 0x344DD0u, 0x344DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344DD8u;
label_344dd8:
    // 0x344dd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x344dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_344ddc:
    // 0x344ddc: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_344de0:
    if (ctx->pc == 0x344DE0u) {
        ctx->pc = 0x344DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344DDCu;
        // 0x344de0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344DE4u;
        goto label_344de4;
    }
    ctx->pc = 0x344DDCu;
    {
        const bool branch_taken_0x344ddc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x344DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344DDCu;
        // 0x344de0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344ddc) {
            ctx->pc = 0x344E48u;
            return;
        }
    }
    ctx->pc = 0x344DE4u;
label_344de4:
    // 0x344de4: 0x92240045  lbu         $a0, 0x45($s1)
    ctx->pc = 0x344de4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 69)));
label_344de8:
    // 0x344de8: 0x92250044  lbu         $a1, 0x44($s1)
    ctx->pc = 0x344de8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 68)));
label_344dec:
    // 0x344dec: 0xc043192  jal         func_10C648
label_344df0:
    if (ctx->pc == 0x344DF0u) {
        ctx->pc = 0x344DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344DECu;
        // 0x344df0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344DF4u;
        goto label_344df4;
    }
    ctx->pc = 0x344DECu;
    SET_GPR_U32(ctx, 31, 0x344DF4u);
    ctx->pc = 0x344DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344DECu;
    // 0x344df0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C648u, 0x344DECu, 0x344DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344DF4u;
label_344df4:
    // 0x344df4: 0x42800b  movn        $s0, $v0, $v0
    ctx->pc = 0x344df4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_344df8:
    // 0x344df8: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x344df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_344dfc:
    // 0x344dfc: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x344dfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_344e00:
    // 0x344e00: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_344e04:
    if (ctx->pc == 0x344E04u) {
        ctx->pc = 0x344E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E00u;
        // 0x344e04: 0xae30004c  sw          $s0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344E08u;
        goto label_344e08;
    }
    ctx->pc = 0x344E00u;
    {
        const bool branch_taken_0x344e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x344E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E00u;
        // 0x344e04: 0xae30004c  sw          $s0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344e00) {
            ctx->pc = 0x344E48u;
            return;
        }
    }
    ctx->pc = 0x344E08u;
label_344e08:
    // 0x344e08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x344e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_344e0c:
    // 0x344e0c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x344e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_344e10:
    // 0x344e10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x344e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_344e14:
    // 0x344e14: 0x8c634a80  lw          $v1, 0x4A80($v1)
    ctx->pc = 0x344e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 19072)));
label_344e18:
    // 0x344e18: 0x600008  jr          $v1
label_344e1c:
    if (ctx->pc == 0x344E1Cu) {
        ctx->pc = 0x344E20u;
        goto label_fallthrough_0x344e18;
    }
    ctx->pc = 0x344E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344E18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x344e18:
    ctx->pc = 0x344E20u;
}
